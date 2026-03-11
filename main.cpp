#include <iostream>
#include "StringUtil.h"

using namespace std;

void Allocate()
{
	for (;;)
	{
		new int;
	}
}

/*
int main()
{
	// new = Heap영역에 자료형 사이즈만큼 메모리 요청 (Stack아니고 Heap메모리 주소 가져오기 위함)
	new int; // : int형 사이즈만큼 Heap에 메모리 요청합니다
	int* P = new int; // heap동적으로 int사이즈 만들고 주소 반환까지

	// 포인터 변수의 주소의 heap영역 반환
	delete P; // 삭제 명령하기 전까지는 삭제하지 않음 -> 지우는 역할은 OS아니고 내 역할
	// 그 공간 삭제X 그 공간 사용 안 한다고 알려줌O (= 다른 객체가 사용가능 알려줌)
	// = 영역 삭제X 영역 반환O

	P = nullptr; // delete한다고 그 공간(주소)가 삭제되는 건 아니니까
	// 아예 사용 안 하는 그 공간 포인터를 nullptr로 넣어줘야 함 = 가리키는 게 없다
	// delete P 해도 P 출력하면 주솟값 나올 수 있음

	delete[] P; // 배열 삭제는 delete[]로 -> 이렇게 안 하면 시작 주소 부분만 지워짐 (배열임을 알려준다)

	return 0;
}
*/

int main()
{
	// computer memory unmanaged language <-> human managed language
	int Size = 100;
	// heap 동적으로 int 100개짜리 배열 사이즈 만들고 주소 반환
	int* MyStaticMeshs = new int[Size]; // 배열의 크기는 변수로 따로 지정할 수 있음

	MyStaticMeshs[3] = 10;
	
	// []안 붙이면 가장 첫 번째 배열 한 칸만 반환하고 나머지는 잊어버림
	// 포인터 변수의 주소부터 할당받는 배열 크기 만큼의 heap영역을 반환시켜줌
	// 삭제라고 표현X 반환O
	delete[] MyStaticMeshs;
	MyStaticMeshs = nullptr;
}