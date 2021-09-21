#include<stdio.h>
char stn[50];
char* ptn;
void gotolastnum();
void reverse();
int main()
{
	int i = 1;
	ptn = stn;
	scanf_s("%s",stn );
	printf("reverse : ");
	if (i = 1)
	{
		gotolastnum();
		reverse();
	}
	return 0;
}
void gotolastnum()
{
	while (*ptn != NULL)ptn++;
	ptn--;
}
void reverse()
{
	while (ptn >= stn)
	{
		printf("%c", *ptn);
		ptn--;
	}
}