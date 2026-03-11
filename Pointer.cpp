#include <iostream>

using namespace std;

/*
int main()
{
	// int와 int*은 아예 다른 변수!

	int A = 10;

	// P는 별명, 정수형 변수의 주소를 기억하는 숫자 공간을 요청
	int* P = &A; // A변수에 주소를 주세요, 정수형 변수A의 주소를 주세요.

	// P2는 별명, 정수형 변수의 주소를 기억하는 숫자 공간을 요청
	int* P2 = P;

	*P = A + 10; // 원래 A안의 값은 무시, (A+10)값을 A안에 다시 대입?

	cout << *P2 << endl; // P라는 변수는 뭔지 모르지만, 다른 변수의 위치를 기억하는 변수

	// A = D;라고 하면 일단 값복사임 
	// -> 단순 정수형 말고 용량이 큰 데이터를 복사한다고 하면 속도 매우 더딤
	// -> 복사 말고 포인터형 변수로 가리키면서 관리하도록 함

	return 0;
}
*/

// ----------------------

int main()
{
	int Number[5] = { 1,2,3,4,5 };
	char Hello[6] = { 'H', 'e','\0', 'l', 'l', 'o' };

	int* P = Number;
	char* C = Hello;

	cout << Number << endl; // 가장 첫 번째 배열의 주솟값

	cout << Number + 1 << endl; // 2번째 배열 자리 주솟값

	// 2번째 배열 자리 값
	cout << *(Number + 1) << endl;
	cout << *(P + 1) << endl;
	cout << Number[1] << endl;

	cout << *(C + 1) << endl;
	cout << C << endl; // char형은 NULL문자(= '\0') 만날 때까지 다 찍어봄

	C[2] = 'A';
	//cout << C << endl;	// 이러면 NULL문자 못 만나서 문자(열)의 끝을 알 수X 
						// C언어에서는 문자열 개념이 없음 = String 존재X

	for (int i = 0; i < 6; i++)
	{
		if (C[i] == 0) // 0 = '\0'
		{
			break;
		}
		cout << C[i];
	}


}

// ----------------------


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