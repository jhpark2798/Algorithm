//문제
//2×n 크기의 직사각형을 1×2, 2×1 타일로 채우는 방법의 수를 구하는 프로그램을 작성하시오.
//아래 그림은 2×5 크기의 직사각형을 채운 한 가지 방법의 예이다.
//입력
//첫째 줄에 n이 주어진다. (1 ≤ n ≤ 1, 000)
//출력
//첫째 줄에 2×n 크기의 직사각형을 채우는 방법의 수를 10, 007로 나눈 나머지를 출력한다.

#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::endl;

std::vector<int> num(1001, 0);

int tile(int n);

int main() {
	int n;
	cin >> n;
	num[1] = 1;
	num[2] = 2;
	cout << tile(n);
	return 0;
}

int tile(int n) {
	if (num[n] != 0) return num[n];
	else {
		num[n] = (tile(n - 1) + tile(n - 2))%10007;
		return num[n];
	}
}