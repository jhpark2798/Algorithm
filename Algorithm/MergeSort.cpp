#include <vector>
#include <iostream>

using std::cout;
using std::endl;

void mergeSort(std::vector<int>& vec, int start, int end);
void merge(std::vector<int>& vec, int start, int mid, int end);
std::vector<int> sorted;

int main() {
	std::vector<int> vec = { 3, 4, 5, 1, 2, 9, 6, 8 };
	sorted.resize(vec.size());
	mergeSort(vec, 0, vec.size() - 1);
	for (int i = 0; i < vec.size(); ++i) {
		cout << vec[i] << " ";
	}
	cout << endl;
	return 0;
}

void mergeSort(std::vector<int>& vec, int start, int end) {
	if (start < end) {	// 아닌 경우는 원소가 1개인 경우
		int mid = (start + end) / 2;
		mergeSort(vec, start, mid);
		mergeSort(vec, mid + 1, end);
		merge(vec, start, mid, end);
	}
}

void merge(std::vector<int>& vec, int start, int mid, int end) {
	int i = start, j = mid + 1, k = start;
	while (i <= mid && j <= end) {
		if (vec[i] <= vec[j])
			sorted[k++] = vec[i++];
		else
			sorted[k++] = vec[j++];
	}
	if (i > mid)
		while (j <= end) sorted[k++] = vec[j++];
	else if (j > end)
		while (i <= mid) sorted[k++] = vec[i++];

	for (int i = start; i <= end; ++i) {
		vec[i] = sorted[i];
	}
}