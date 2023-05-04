#include <stdio.h>

//매크로 함수
//생각지도 못한 side effect가 일어날 수도 있어 매크로 함수는 최대한 안쓰느게 좋음
#define SQUARE(a) ((a)*(a))		

int square(int i)
{
	return i*i;
}

int main(void)
{
	int i = 10;
	//int result = square(i);		//10*10
	int result = SQUARE(i);			//int result = ((i) * (i));
	
	//int result = square(++i);		//11*11
	//int result = SQUARE(++i);		//((++i)*(++i)) 11*12 or 12*11
	printf("result : %d\n",result);
	return 0;
}
