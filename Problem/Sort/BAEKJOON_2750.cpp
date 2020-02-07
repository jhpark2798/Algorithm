/*
문제 : N개의 수가 주어졌을 때, 이를 오름차순으로 정렬하는 프로그램을 작성하시오.
입력 : 첫째 줄에 수의 개수 N(1 ≤ N ≤ 1,000)이 주어진다. 둘째 줄부터 N개의 줄에는 숫자가 주어진다. 이 수는 절댓값이 1,000보다 작거나 같은 정수이다. 수는 중복되지 않는다.
출력 : 첫째 줄부터 N개의 줄에 오름차순으로 정렬한 결과를 한 줄에 하나씩 출력한다.
*/

#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::endl;


void selectionSort(std::vector<int>&); // O(n*n)을 만족하면 해결이 되는 문제이므로 선택정렬 사용

int main() {
	int N;
	cin >> N;
	std::vector<int> vec(N);
	for (int i = 0; i < N; ++i) {
		cin >> vec[i];	// read input data
	}

	selectionSort(vec);

	for (int i = 0; i < vec.size(); ++i) { 	// print sorted vector
		cout << vec[i] << " ";
	}
	cout << endl;
	return 0;
}

void selectionSort(std::vector<int>& vec) {
	int temp;
	for (int i = 0; i < vec.size(); ++i) {
		int minIdx = i;
		for (int j = i; j < vec.size(); ++j) {
			if (vec[j] < vec[minIdx]) minIdx = j;
		}
		temp = vec[i];
		vec[i] = vec[minIdx];
		vec[minIdx] = temp;
	}
}