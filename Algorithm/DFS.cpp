#include <iostream>
#include <vector>

using std::cout;
using std::endl;

std::vector<int> vec = { 2, 4, 5, 1, 0, 10, 5 };
std::vector<std::vector<int>> adjacent;
std::vector<bool> checked(vec.size(), false);

void dfs(std::vector<int>& vec, int startIdx);

int main() {
	adjacent.push_back(std::vector<int>{1, 2});
	adjacent.push_back(std::vector<int>{0, 3, 4});
	adjacent.push_back(std::vector<int>{0, 5, 6});
	adjacent.push_back(std::vector<int>{1});
	adjacent.push_back(std::vector<int>{1});
	adjacent.push_back(std::vector<int>{2});
	adjacent.push_back(std::vector<int>{2});
	dfs(vec, 0);
	return 0;
}

void dfs(std::vector<int>& vec, int startIdx) {
	if (checked[startIdx]) return;
	checked[startIdx] = true;
	cout << vec[startIdx] << " ";
	for (int i = 0; i < adjacent[startIdx].size(); ++i) {
		if (!checked[adjacent[startIdx][i]]) 
			dfs(vec, adjacent[startIdx][i]);
	}
}