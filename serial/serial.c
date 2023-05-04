//int count = 1;

int getSerialNumber(void)
{
	static int count = 1; //static 전역 변수 getserial 함수의 count 값
	return count++;
}



