#include<stdio.h>
void c(void);
int x = 1;

int main()
{
	int x = 5;
	while(x < 100){
		c();
		if (x == 50) break;
	}	
	return 0;
}
void c(void)
{
	x *= 1.0;
}
