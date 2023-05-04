#include <stdio.h>
#include "string.h"
//#include <string.h>

int main(void)
{
	char str[] = "hello";
	int len = my_strlen(str);
	printf("len : %d\n", len);
	
	char str2[6];
	
	my_strcpy(str2, str);
	printf("str2 : %s\n", str2);
	
	if (my_strcmp(str, str2) == 0) {
	printf("str and str2 are equal\n");
	} else {
	 printf("str and str2 are not equal\n");
	 }
	 char str3[] = ", world";
	char str4[15];
	my_strcpy(str4, str);
	my_strcat(str4, str3);
	printf("str4 : %s\n", str4);	
	
	
	return 0;

}
