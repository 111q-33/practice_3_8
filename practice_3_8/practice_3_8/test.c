#define _CRT_SECURE_NO_WARNINGS
//memset
//void *memset( void *dest, int c, size_t count );
 
//dest
//目标地址
//c
//Character to set
//要设置的字符
//count
//Number of charater
//字符个数
//例：
#include <memory.h>
#include <stdio.h>
//
//int main(void)
//{
//	char buffer[] = "This is a test of the memset function";
//
//	printf("Before: %s\n", buffer);
//	memset(buffer, '*', 4);
//	printf("After:  %s\n", buffer);
//	return 0;
//}

int main()
{
	unsigned char puc[4];
	struct tagPIM
	{
		unsigned char ucPim1;
		unsigned char ucData0 : 1;
		unsigned char ucData1 : 2;
		unsigned char ucData2 : 3;
	}*pstPimData;
	pstPimData = (struct tagPIM*)puc;
	memset(puc, 0, 4);
	pstPimData->ucPim1 = 2;
	pstPimData->ucData0 = 3;//11
	pstPimData->ucData1 = 4;//100
	pstPimData->ucData2 = 5;//101
	printf("%02x %02x %02x %02x\n", puc[0], puc[1], puc[2], puc[3]);//puc[1] 10110011
	return 0;
}

