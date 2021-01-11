// Test.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <conio.h>
#include "windows.h"
using namespace std;
int GetDefaultExceptEcu(ExceptEcuSt *EcuInfoSt);

template<class T> char __SETS__(T x)
{
	if (sizeof(T) == 1)
		return char(x) < 0;
	if (sizeof(T) == 2)
		return short(x) < 0;
	if (sizeof(T) == 4)
		return int(x) < 0;
	return long long(x) < 0;
}

// overflow flag of subtraction (x-y)
template<class T, class U> char __OFSUB__(T x, U y)
{
	if (sizeof(T) < sizeof(U))
	{
		U x2 = x;
		char sx = __SETS__(x2);
		return (sx ^ __SETS__(y)) & (sx ^ __SETS__(x2 - y));
	}
	else
	{
		T y2 = y;
		char sx = __SETS__(x);
		return (sx ^ __SETS__(y2)) & (sx ^ __SETS__(x - y2));
	}
}

int tt_cat_ascii_sub_805217C(unsigned char* addr, const char* formatstr, ...)
{
	va_list arg_ptr;
	va_start(arg_ptr, formatstr);
	return _vsnprintf((char*)addr, 50, formatstr, arg_ptr);
}

int SeparateString(char *src, char *delim, char *Save)
{
	char *pSave; // r8@1
	char *pdelim; // r9@1
	char *pSrc; // r5@1
	signed int Count; // r6@1
	bool v7; // zf@2
	size_t Len; // r10@5
	char *PosStrDelim; // r4@5

	pSave = Save;
	pdelim = delim;
	pSrc = src;
	Count = 0;
	if (Save)
	{
		v7 = delim == 0;
		if (delim)
			v7 = *src == 0;
		if (!v7)
		{
			Len = strlen(delim);
			memset(pSave, 0, sizeof(pSave));
			PosStrDelim = strstr(pSrc, pdelim);//返回,后面的字符串
			Count = 1;
			while (PosStrDelim)
			{
				memcpy(&pSave[(Count-1)*0x30], pSrc, PosStrDelim - pSrc);//0x30个字节为一个间隔 进行拆分 存储
				pSrc = &PosStrDelim[Len];
				++Count;
				PosStrDelim = strstr(&PosStrDelim[Len], pdelim);
			}
			memcpy(&pSave[(Count - 1) * 0x30], pSrc, strlen(pSrc));
			if (Count > 0x2000)
				Count = 0x2000;
		}
	}
	return Count;
}






int main()
{
	//int Index = -2;
	//int b = 3;
	//unsigned char AA = __OFSUB__(Index, 0x7FFFFFFF);
	//bool BB = Index++ - 4 < 0;
	//if (AA^BB)
	//{
	//	printf("AA^BB 值为1");
	//}
	//else
	//	printf("AA^BB 值为0");


	//int val = 5;
	//int* p = (int *)&val;
	//int tmp = *(int *)&val | 0xFFFFFF00;
	//double v13 = (double)(signed int)(*(int *)&val | 0xFFFFFF00);


	//int *v31 = (int *)"31883,13013";

	//int v32 = v31[1];
	//int v33 = v31[2];

	//unsigned char save[64] = { 0 };
	//tt_cat_ascii_sub_805217C(save, "%.2f", 0x45);

	//char X5A60RecvBuf[] = { 0,0,0,0,0,1,2,3,4 };
	//int v2 = 3;
	//int num = (X5A60RecvBuf[v2 + 2] << 0x18) + (X5A60RecvBuf[v2 + 2 + 1] << 0x10) + (X5A60RecvBuf[v2 + 2 + 2] << 8) + X5A60RecvBuf[v2 + 2 + 3];
	//unsigned int v3 = 0xF73A5C9B * num ^ 0x1318B9BE;

	//char save[128] = { 0 };
	//char old[] = "111,222,33,44,5,7,8 ,9,100";
	//int len = SeparateString(old, ",", save);

	/*int CalVal = 0x3E8;
	int CalValv11 = CalValv11 = ((CalVal - 0x8000 + (((CalVal - 0x8000) >> 0x1F) >> 0x1E)) >> 2) & 0xFF;

	char t = -CalValv11;

	int save4F64 = 0x56780000;

	*((char *)&save4F64 + 3) = 1;*/

	/*float d2 = -1.008;
	float d1 = 0.0;
	int a = 0;

	if (((int&)(d2) & 0x7FFFFFFF) < ((int&)(d1) & 0x7FFFFFFF))
		a = 1;
	else
		a = -1;

	printf("%d", a);*/

	tt_Token *token;




	token = (tt_Token*)malloc(sizeof(tt_Token));
	printf("%p", &token->ExceptEcuBuf);
	printf("%p", token->ExceptEcuBuf);

	memset(&token->ExceptEcuBuf, 0, 0x400u);
	GetDefaultExceptEcu((ExceptEcuSt *)&token->ExceptEcuBuf);


    return 0;

}



int GetDefaultExceptEcu(ExceptEcuSt *EcuInfoSt)
{
	
	printf("%p", EcuInfoSt);

	return 1;
}