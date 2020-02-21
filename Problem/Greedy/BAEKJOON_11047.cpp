//���� 0
//����
//�ر԰� ������ �ִ� ������ �� N�����̰�, ������ ������ �ſ� ���� ������ �ִ�.
//������ ������ ����ؼ� �� ��ġ�� ���� K�� ������� �Ѵ�.�̶� �ʿ��� ���� ������ �ּڰ��� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
//�Է�
//ù° �ٿ� N�� K�� �־�����. (1 �� N �� 10, 1 �� K �� 100, 000, 000)
//��° �ٺ��� N���� �ٿ� ������ ��ġ Ai�� ������������ �־�����. (1 �� Ai �� 1, 000, 000, A1 = 1, i �� 2�� ��쿡 Ai�� Ai - 1�� ���)
//���
//ù° �ٿ� K���� ����µ� �ʿ��� ���� ������ �ּڰ��� ����Ѵ�.

#include <vector>
#include <iostream>
#include <numeric>

using std::cout;
using std::endl;
using std::cin;

int count_coin(int money);

std::vector<int> coin;
std::vector<int> coinNum;

int main() {
	int N, K;
	cin >> N >> K;
	coin.resize(N);
	for (int i = 0; i < coin.size(); ++i) {
		cin >> coin[i];
	}
	coinNum.resize(coin.size(), 0);
	cout << count_coin(K);
	return 0;
}

int count_coin(int money) {	
	for (int i = coin.size()-1; i >= 0; --i) {
		if (money >= coin[i]) {
			coinNum[i] = money / coin[i];
			money -= coinNum[i] * coin[i];
		}
	}
	return std::accumulate(coinNum.begin(), coinNum.end(), 0);
}

