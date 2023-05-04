#include "string.h"

int my_strlen(const char *s)
{
	int c = 0;
	while (*s != '\0') {
		++c, ++s;
	}	
	return c;
}

void my_strcpy(char *des, const char *src)
{	
	while ( *src != '\0') {    // (*des++ = *src++)
		*des++ = *src++;
		}
		*des = '\0';
}

int my_strcmp(const char *s1, const char *s2)
{
	while ( *s1 != '\0' || *s2 != '\0' || *s1 != *s2) {
	++s1, ++s2;			
	}	
	return *s1 - *s2;
}
void my_strcat(char *des, const char *src)
{
	my_strcpy(des + my_strlen(des), src);
}


/*
int my_strlen(const char *s)
{
	int i;
	for( i = 0; s[i] != '\0'; ++i) {
	;
	}	
	return i;
}

void my_strcpy(char *des, const char *src)
{	
	int i;
	for (i = 0; src[i] != '\0'; ++i) {
		des[i] = src[i];
		}
		des[i] = '\0';
}

int my_strcmp(const char *s1, const char *s2)
{
	int i;
	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; ++i) {
		if ( s1[i] != s2[i]) {
			break;
			}
		}
	
	return s1[i] - s2[i];
}
void my_strcat(char *des, const char *src)
{
	my_strcpy(des + my_strlen(des), src);
}
*/
