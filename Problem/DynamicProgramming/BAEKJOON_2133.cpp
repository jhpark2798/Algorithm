//Ÿ�� ä���
//����
//3��N ũ���� ���� 2��1, 1��2 ũ���� Ÿ�Ϸ� ä��� ����� ���� ���غ���.
//�Է�
//ù° �ٿ� N(1 �� N �� 30)�� �־�����.
//���
//ù° �ٿ� ����� ���� ����Ѵ�.

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

