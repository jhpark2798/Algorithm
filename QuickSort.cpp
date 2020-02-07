// Quick sort algorithm

#include <vector>
#include <iostream>

using std::cout;
using std::endl;

typedef std::vector<int>::iterator iterator;
void quickSort(std::vector<int>&, iterator, iterator);

int main() {
	std::vector<int> vec = { 4, 3, 6, 8, 1, 2, 10, 9, 5, 7 };
	quickSort(vec, vec.begin(), vec.end());
	for (iterator iter = vec.begin(); iter != vec.end(); ++iter) {
		cout << *iter << " ";
	}
	cout << endl;
	return 0;
}

// int Ÿ���� vector�� �������� ����
void quickSort(std::vector<int>& vec, iterator start, iterator end) {
	if (start + 1 == end || start == end) return;	// ���Ұ� 1���� ���
	iterator pivot = start;
	int temp = 0;
	iterator i;
	iterator j;
	while (true) {
		i = pivot + 1;
		j = end - 1;
 		while (*i <= *pivot && i < end) {
			++i;	// ���ʿ������� pivot���� ū ���Ҹ� Ž��
			if (i == end) break;
		}
		while (*j >= *pivot && j > start) --j;	// �����ʿ������� pivot���� ���� ���Ҹ� Ž��
		if (j < i) {	// ������ ���
			temp = *pivot;
			*pivot = *j;
			*j = temp;
			break;
		}
		temp = *i;
		*i = *j;
		*j = temp;
	}
	quickSort(vec, start, j);
	quickSort(vec, j + 1, end);
}