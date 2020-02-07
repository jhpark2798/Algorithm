// Quick sort algorithm

#include <vector>
#include <iostream>

using std::cout;
using std::endl;

void quickSort(std::vector<int>&, int start, int end);

int main() {
	std::vector<int> vec = { 3, 6, 7, 1, 2, 3, 6, 5, 2, 10, 9, };
	quickSort(vec, 0, vec.size()-1);
	for (int i = 0; i < vec.size(); ++i) {
		cout << vec[i] << " ";
	}
	cout << endl;
	return 0;
}

// int Ÿ���� vector�� �������� ����
void quickSort(std::vector<int>& vec, int start, int end) {
	if (start >= end) return;	// ���Ұ� 1���� ���
	int pivot = start;
	int i, j;
	int temp;
	while (true) {
		i = pivot + 1;
		j = end;
 		while (vec[i] <= vec[pivot] && i < end) ++i;	// ���ʿ������� pivot���� ū ���Ҹ� Ž��
		while (vec[j] >= vec[pivot] && j > start) --j;	// �����ʿ������� pivot���� ���� ���Ҹ� Ž��
		if (j <= i) {	// ������ ���
			temp = vec[pivot];
			vec[pivot] = vec[j];
			vec[j] = temp;
			break;
		}
		temp = vec[i];
		vec[i] = vec[j];
		vec[j] = temp;
	}
	quickSort(vec, start, j-1);
	quickSort(vec, j + 1, end);
}