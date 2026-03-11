#include <iostream>

using namespace std;

void CountingChar(char* Str)
{
	for (int i = 0; i < 11; i++)
	{
		if (Str[i] == '\0')
		{
			cout << "문자열 갯수는 " << i + 1 << "개 입니다" << endl;
		}
	}
}

void ChangeChar(char* P)
{
	*(P + 6) = 'Q';
	cout << P << endl;
}

void FindChar(char* Str)
{
	char Input;
	cout << "찾고싶은 문자열을 입력하세요: ";
	cin >> Input;

	for (int i = 0; i < 11; i++)
	{
		if (Str[i] == Input)
		{
			cout << Input << "은 " << i << "번째 위치에 있습니다" << endl;
			break;
		}
	}
}

int main()
{
	// ----------------------

	// 문자열 갯수 세기
	// 문자열 중에서 특정 문자를 특정문자로 바꾸기
	// 문자열 중에서 특정 문자 위치 찾기

	char Str[11] = { 'H', 'e', 'l', 'l', 'o', 'W', 'o', 'r', 'l', 'd', '\0' };
	char* P = Str;

	CountingChar(Str);

	ChangeChar(P);

	FindChar(Str);

	return 0;
}