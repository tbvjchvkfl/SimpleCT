#include <iostream>
#include <vector>
#include <string>

using namespace std;

int Loop(int Start, int End);
int main()
{
	int array[10]{};

	Loop(3, 9);
}

int Loop(int Start, int End)
{
	int array[10]{};
	for (int i = Start; i <= End; i++)
	{
		std::cout << i << std::endl;
	}
	return 0;
}

// vector�� ����
// vector <typedef> ������
// vector�� ����� �� <vector>�� std�� ����ؾ���.

vector<int> solution(int start, int end) {
	vector<int> answer;
	for (int i = start; i <= end; i++)
	{
		// push_badk �Լ�
		// vector�� ����Լ��̴�.
		// vector�� �迭 ������ ����ü�� queue�� ���¸� ����ִ�.
		// �� �� push_back �Լ��� ������ ���� ������ (��)�� �־��ִ� ����̴�.
		answer.push_back(i);
	}
	return answer;
}