#include <iostream>

using namespace std;

int main()
{
	/*
	int A = 10; // A만 선언했을 때는 메모리 공간만 생기고 주솟값 할당은 안 되는 건가? &A해야 할당?
	int* P = &A;	// OS가 A라는 변수에 주솟값을 할당시키고, 
					// 그 주솟값을 정수형 주솟값 담는 이름이 P인 변수에 담아라

	// *P; // P는 주솟값을 담고있는 변수 -> 가 가리키는 값을 의미

	*P = 20; // 간접적으로 A를 접근한다.

	cout << A << endl;

	// ----------------------

	int Number[5] = { 1,2,3,4,5 };
	int* Q = Number;

	cout << *Q+3 << endl; // 괄호로 꼭 묶어야되나 똑같이 출력되는데

	*/

	// ----------------------

	// 문자열 갯수 세기
	// 문자열 중에서 특정 문자를 특정문 바꾸기
	// 문자열 중에서 특정 문자 위치 찾기

	char String[11] = { 'H', 'e', 'l', 'l', 'o', 'W', 'o', 'r', 'l', 'd', '\0' };

	String[6] = 'Q';
	cout << String << endl;

	for (int i = 0; i < 11; i++)
	{
		if (String[i] == 'r')
		{
			cout << "r은 " << i << "번째 위치에 있습니다" << endl;
			break;
		}
	}

	return 0;
}