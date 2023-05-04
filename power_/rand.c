
long long power(int base, int exporent) //function definition 함수 정의
{
	long long result = 1LL;
	for ( int i = 1; i <= exporent; ++i) {
		result = result * base; //result *= base;
	}
	return result;
}
