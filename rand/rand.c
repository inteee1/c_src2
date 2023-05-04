
static int seed; //.c 파일 안의 함수들만 접근 가능 static ex) 랜덤함수의 시드값

void my_srand(int s)
{
	seed = s;
}

int my_rand(void)
{
	seed = seed * 1103515245 + 12345;
	return((unsigned int)(seed / 65536) % 32768);

}           
           
           
          

