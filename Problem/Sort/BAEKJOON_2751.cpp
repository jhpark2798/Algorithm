/*
���� : N���� ���� �־����� ��, �̸� ������������ �����ϴ� ���α׷��� �ۼ��Ͻÿ�.
�Է� : ù° �ٿ� ���� ���� N(1 <= N <= 1,000,000)�� �־�����. ��° �ٺ��� N���� �ٿ��� ���ڰ� �־�����. �� ���� ������ 1,000,000���� �۰ų� ���� �����̴�. ���� �ߺ����� �ʴ´�.
��� : ù° �ٺ��� N���� �ٿ� ������������ ������ ����� �� �ٿ� �ϳ��� ����Ѵ�.
*/

#include <vector>
#include <iostream>
#include <algorithm>

using std::cout;
using std::cin;
using std::endl;

// �׻� O(n*logn)�� �����ؾ� �ϴ� �����̹Ƿ� std::sort ���
// quick sort�� �־��� ��� O(n*n)�� �Ǿ �ȵ�
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
