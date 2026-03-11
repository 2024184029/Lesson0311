//void Replace(char* String, int Size, char FindCharacter, char ReplaceCharacter)
//{
//	for (int i = 0; i < Size; i++)
//	{
//		if (String[i] == 0)
//		{
//			String[i] = ReplaceCharacter;
//		}
//	}
//	return Size;
//}
//
//// 강사님 버전
//int Length(char* String, int Size)
//{
//	// 배열 처리 함수를 받으면 꼭 크기(Size)를 받아야 함
//	// 문자의 끝을 알 수 없는 경우(NULL문자 없이 모두 문자로 채워진 경우)
//	// 문제가 생길 수 있음
//
//	// Length(Temp -> 100);
//
//	for (int i = 0; i < Size; i++)
//	{
//		if (String[i] == 0)
//		{
//			return i;
//		}
//	}
//	return Size;
//}

#pragma once

int IndexOf(char* String, int Size, char FindCharacter);

void Replace(char* String, int Size, char FindCharacter, char ReplaceCharacter);

/*
문자열 길이 세는 함수
param : String - 문자열
Size - 최대 배열 크기
*/
int Length(char* String, int Size);