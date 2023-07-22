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

// vector의 선언
// vector <typedef> 변수명
// vector를 사용할 땐 <vector>와 std를 사용해야함.

vector<int> solution(int start, int end) {
	vector<int> answer;
	for (int i = start; i <= end; i++)
	{
		// push_badk 함수
		// vector의 멤버함수이다.
		// vector는 배열 형태의 구조체로 queue의 형태를 띄고있다.
		// 그 중 push_back 함수는 마지막 원소 다음에 (값)을 넣어주는 기능이다.
		answer.push_back(i);
	}
	return answer;
}