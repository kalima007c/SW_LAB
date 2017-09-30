#include<stdio.h>
#define DEBUG 0 
void c(void);
int x = 1;
FILE *fp;
int main()
{
	fp = fopen("data.log","w+");
	// int x = 5;
	if (DEBUG)
		fprintf(fp,"x = %d",x);
	while(x < 100)
	{	
		c();
		if (DEBUG) fprintf(fp,"x = %d",x);
		x++;
	}
	fclose(fp);
	return 0;
}
void c(void)
{
	x *= 1.0;
	fprintf(fp,"x = %d\n",x);
}
