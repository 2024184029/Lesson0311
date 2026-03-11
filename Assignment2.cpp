#include <iostream>

using namespace std;

// 숫자 입력 받아서 그걸 크기로 숫자 배열을 만들어서
// 1부터 크기까지 초기화 하고 출력하는 프로그램 만들어 보세요.

int main()
{
	int SIZE = 0;

	cout << "숫자 배열의 크기를 입력하세요: ";
	cin >> SIZE;

	//int* P = new int[SIZE];
	int* P = nullptr;
	P = new int[SIZE];

	// 예외처리 (유효값X면 종료)
	if (!P) // if (P == nullpter)
	{
		return -1;
	}

	for (int i = 0; i < SIZE; i++)
	{
		P[i] = i + 1;
	}

	for (int i = 0; i < SIZE; i++)
	{
		cout << *(P + i) << ' ';
	}
	cout << endl;

	delete[] P;
	P = nullptr;

	return 0;
}