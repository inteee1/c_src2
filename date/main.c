
#include "date.h"
int main(void)
{
	struct date today = {2023, 8, 2};
	struct date birthday;
	birthday.year = 2005;
	birthday.month = 8;
	birthday.day = 2; 
	
	//printDate(today);
	//printDate(birthday);
	printDate(&today);
	printDate(&birthday);
	
	return 0;
}
