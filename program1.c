#include<stdio.h>
void c(void);			// Function Prototype
int x = 1;				// Global Variable
int main()
{
		// int i = 5;		// Local to main
		while(x < 100)
		break;
		c();
		return 0;		
}
void c()
{
	x *=1;
	printf("%d",x);
}
