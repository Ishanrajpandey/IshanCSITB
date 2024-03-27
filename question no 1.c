#include<stdio.h>
#include<conio.h>
int main ()
{
	char c, U ;
	printf("enter any lowercase character : ");
	scanf("%c", &c);
	if(c >= 'a' && c <= 'z')
	{
	U = c - 32;
	printf("the character in upper case is : %c", U);
	}
	else
	{ 
	printf("the character is not in lowecase ");
	}
	return 0 ;
}


