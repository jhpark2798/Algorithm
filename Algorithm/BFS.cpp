#include <iostream>
#include <vector>
#include <queue>

using std::cout;
using std::endl;

void BFS(std::vector<int>& vec, std::vector<std::vector<int>> adjacent, int start);

int main() {
	std::vector<int> vec = { 2, 4, 5, 1, 0, 10, 5 };
	std::vector<std::vector<int>> adjacent;
	adjacent.push_back(std::vector<int>{1, 2});
	adjacent.push_back(std::vector<int>{0, 3, 4});
	adjacent.push_back(std::vector<int>{0, 5, 6});
	adjacent.push_back(std::vector<int>{1});
	adjacent.push_back(std::vector<int>{1});
	adjacent.push_back(std::vector<int>{2});
	adjacent.push_back(std::vector<int>{2});
	BFS(vec, adjacent, 0);
	return 0;
}

void BFS(std::vector<int>& vec, std::vector<std::vector<int>> adjacent, int start) {
	std::queue<int> q;	
	q.push(start);
	std::vector<bool> checked(vec.size(), false);
	while (!q.empty()) {
		int curr = q.front();
		checked[curr] = true;
		cout << vec[curr] << " ";
		q.pop();
		for (int i = 0; i < adjacent[curr].size(); ++i) {
			if(checked[adjacent[curr][i]] == false)
				q.push(adjacent[curr][i]);
		}
	}
	cout << endl;
}