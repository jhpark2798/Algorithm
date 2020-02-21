//�Ž�����
//����
//Ÿ�δ� ���� JOI��ȭ������ ������ ���.JOI��ȭ������ �ܵ����� 500��, 100��, 50��, 10��, 5��, 1���� ����� �ְ�, 
//������ �Ž����� ������ ���� ���� �ܵ��� �ش�.Ÿ�ΰ� JOI��ȭ������ ������ ��� ī���Ϳ��� 1000�� ���� ���� ���� ��, 
//���� �ܵ��� ���Ե� �ܵ��� ������ ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
//�Է�
//�Է��� ���ٷ� �̷�����ְ�, Ÿ�ΰ� ������ ��(1 �̻� 1000�̸��� ����) 1���� �������ִ�.
//���
//������ ��� ������ 1�����θ� �Ǿ� �ִ�.�ܵ��� ���Ե� �ż��� ����Ͻÿ�.

#include <vector>
#include <iostream>
#include <numeric>

using std::cout;
using std::endl;
using std::cin;

int count_coin(int money);

int main() {
	int money;
	cin >> money;
	cout << count_coin(1000-money);
	return 0;
}

int count_coin(int money) {
	std::vector<int> coin = { 500, 100, 50, 10, 5, 1 };
	std::vector<int> coinNum(coin.size(),0);
	for (int i = 0; i < coin.size(); ++i) {
		if (money >= coin[i]) {
			coinNum[i] = money / coin[i];
			money -= coinNum[i] * coin[i];
		}
	}
	return std::accumulate(coinNum.begin(), coinNum.end(), 0);
}

