/*
���� : N���� ���� �־����� ��, �̸� ������������ �����ϴ� ���α׷��� �ۼ��Ͻÿ�.
�Է� : ù° �ٿ� ���� ���� N(1 �� N �� 1,000)�� �־�����. ��° �ٺ��� N���� �ٿ��� ���ڰ� �־�����. �� ���� ������ 1,000���� �۰ų� ���� �����̴�. ���� �ߺ����� �ʴ´�.
��� : ù° �ٺ��� N���� �ٿ� ������������ ������ ����� �� �ٿ� �ϳ��� ����Ѵ�.
*/

#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::endl;


void selectionSort(std::vector<int>&); // O(n*n)�� �����ϸ� �ذ��� �Ǵ� �����̹Ƿ� �������� ���

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