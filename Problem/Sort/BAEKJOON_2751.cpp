/*
문제 : N개의 수가 주어졌을 때, 이를 오름차순으로 정렬하는 프로그램을 작성하시오.
입력 : 첫째 줄에 수의 개수 N(1 <= N <= 1,000,000)이 주어진다. 둘째 줄부터 N개의 줄에는 숫자가 주어진다. 이 수는 절댓값이 1,000,000보다 작거나 같은 정수이다. 수는 중복되지 않는다.
출력 : 첫째 줄부터 N개의 줄에 오름차순으로 정렬한 결과를 한 줄에 하나씩 출력한다.
*/

#include <vector>
#include <iostream>
#include <algorithm>

using std::cout;
using std::cin;
using std::endl;

// 항상 O(n*logn)을 만족해야 하는 문제이므로 std::sort 사용
// quick sort는 최악의 경우 O(n*n)이 되어서 안됨
int main() {
	int N;
	cin >> N;
	std::vector<int> vec(N);
	for (int i = 0; i < N; ++i) cin >> vec[i];	// read input data
	std::sort(vec.begin(), vec.end());
	for (int i = 0; i < vec.size(); ++i) cout << vec[i] << " "; // print sorted vector
	cout << endl;
	return 0;
}
