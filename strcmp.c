#include<stdio.h>
#include<string.h>
int main()
{
	char a[20] = "abcd";
	char b[20] = "Abcd";
	printf("result of a,b is = %d",strcmp(a,b));
	return 0;
}
