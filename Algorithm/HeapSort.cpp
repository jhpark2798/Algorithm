#include <vector>
#include <iostream>

using std::cout;
using std::endl;

void heapify(std::vector<int>& heap, int end);
void heapSort(std::vector<int>& heap);

int main() {
	std::vector<int> heap = { 2, 3, 8, 7, 4, 1, 5, 6, 10, 0, 1, 5, 2, 12, 14 };
	heapSort(heap);
	for (int i = 0; i < heap.size(); ++i) {
		cout << heap[i] << " ";
	}
	cout << endl;
	return 0;
}

void heapSort(std::vector<int>& heap) {
	for (int i = heap.size() - 1; i > 0; --i) {
		heapify(heap, i);
		int temp = heap[0];
		heap[0] = heap[i];
		heap[i] = temp;
	}
}

void heapify(std::vector<int>& heap, int end) {	// max heapify
	for (int i = 1; i <= end; ++i) {
		int current = i;
		do {
			int root = (current - 1) / 2;
			if (heap[root] < heap[current]) {
				int temp = heap[root];
				heap[root] = heap[current];
				heap[current] = temp;
			}
			current = root;
		} while (current != 0);
	}
}