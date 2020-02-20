//타일 채우기
//문제
//3×N 크기의 벽을 2×1, 1×2 크기의 타일로 채우는 경우의 수를 구해보자.
//입력
//첫째 줄에 N(1 ≤ N ≤ 30)이 주어진다.
//출력
//첫째 줄에 경우의 수를 출력한다.

#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::endl;

std::vector<int> num(31, -1);

int tile(int n);

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < num.size(); ++i) {
		if (i % 2 == 1) num[i] = 0;
	}
	num[2] = 3;
	num[4] = 11;
	cout << tile(n);
	return 0;
}

int tile(int n) {
	if (num[n] != -1) 
		return num[n];
	else {
		num[n] = 3 * tile(n - 2);
		for (int i = n-4; i > 0; i -= 2) {
			num[n] += 2 * tile(i);
		}
		num[n] += 2;
		return num[n];
	}
}

