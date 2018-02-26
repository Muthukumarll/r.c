#include <stdio.h>
#include<conio.h>
int main(void) 
{
int a,b,temp;
clrscr();
scanf("%d %d",&a,&b);
a=a^b;
b=a^b;
a=a^b;
printf("%d %d",a,b);
getch();
	return 0;
}
