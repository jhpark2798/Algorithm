//����
//2��n ���簢���� 2��1�� 2��2 Ÿ�Ϸ� ä��� ����� ���� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
//�Ʒ� �׸��� 2��17 ���簢���� ä�� �Ѱ��� ���̴�.
//�Է�
//ù° �ٿ� n�� �־�����. (1 �� n �� 1, 000)
//���
//ù° �ٿ� 2��n ũ���� ���簢���� ä��� ����� ���� 10, 007�� ���� �������� ����Ѵ�.

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
	num[2] = 3;
	cout << tile(n);
	return 0;
}

int tile(int n) {
	if (num[n] != 0) return num[n];
	else {
		num[n] = (tile(n - 1) + 2*tile(n - 2)) % 10007;
		return num[n];
	}
}