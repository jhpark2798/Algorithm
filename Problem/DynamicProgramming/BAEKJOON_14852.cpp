//타일 채우기 3
//문제
//2×N 크기의 벽을 2×1, 1×2, 1×1 크기의 타일로 채우는 경우의 수를 구해보자.
//입력
//첫째 줄에 N(1 ≤ N ≤ 1, 000, 000)이 주어진다.
//출력
//첫째 줄에 경우의 수를 1, 000, 000, 007로 나눈 나머지를 출력한다.

#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::endl;

std::vector<std::vector<long long int>> num;
const int divisor = 1000000007;

int tile(int n);

int main() {
	int n;
	cin >> n;
	num.resize(n+1);
	for (int i = 0; i < num.size(); ++i) {
		num[i].resize(2,-1);
	}
	num[0][0] = 1;
	num[1][0] = 2;
	num[2][0] = 7;
	num[2][1] = 0;

	cout << tile(n);
	return 0;
}

int tile(int n) {
	if (num[n][0] != -1) return num[n][0];
	for (int i = 3; i <= n; ++i) {
		num[i][1] = (num[i - 1][1] + 2 * num[i - 3][0]) % divisor;
		num[i][0] = ((2 * num[i - 1][0] + 3 * num[i - 2][0]) % divisor + num[i][1]) % divisor;
	}
	return num[n][0];
}

