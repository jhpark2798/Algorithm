//�� �ٷ� ����
//����
//N���� ������� ���� ��ħ �� �ٷ� ����.�� ������� �ڸ��� ������� ���� ���ϰ� ���ν��� ���ô�� ����.
//��� �� ������� ���ν��� ������� �� ���� ��ġ�� ����� ���´ٴ� ���� �˾Ҵ�.
//�׸��� ��ħ�� �ڱⰡ ����� ���� �Ͱ� ������� ���� �� ��ġ�� �´��� Ȯ���Ѵ�.
//������� �ڱ⺸�� ū ����� ���ʿ� �� �� �־��������� ����Ѵ�.N���� ����� �ְ�, ������� Ű�� 1���� N���� ��� �ٸ���.
//�� ������� ����ϴ� ������ �־��� ��, ���� ��� ���� �ϴ��� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
//�Է�
//ù° �ٿ� ����� �� N�� �־�����.N�� 10���� �۰ų� ���� �ڿ����̴�.
//��° �ٿ��� Ű�� 1�� ������� ���ʴ�� �ڱ⺸�� Ű�� ū ����� ���ʿ� �� ���� �־����� �־�����.
//i��° ���� 0���� ũ�ų� ����, N - i���� �۰ų� ����.
//���
//ù° �ٿ� ���� �� ������� Ű�� ����Ѵ�.

#include <vector>
#include <iostream>
#include <algorithm>
#include <list>

using std::cout;
using std::cin;
using std::endl;

int main() {
	int N;
	cin >> N;
	std::vector<int> heights(N);
	std::list<int> res;
	for (int i = 0; i < N; ++i) {
		cin >> heights[i];
	}
	res.push_back(N);
	for (int i = 1; i < N; ++i) {
		std::list<int>::iterator iter = res.begin();
		std::advance(iter, heights[N - 1 - i]);
		res.insert(iter, N - i);
	}
	for (std::list<int>::const_iterator iter = res.begin(); iter != res.end(); ++iter) {
		cout << *iter << " ";
	}
	return 0;
}