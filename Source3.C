#include<stdio.h>
#include<conio.h>
int main()
{
	int i, j;
	for (i = 0; i <= 4; i++)
		j = increment(i);
	return 0;
}
int increment(int i)
{
	static int count = 0;
	count = count + 1;
	return(count);
}