#include <stdio.h>
#include<conio.h> 
void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
 
int main()
{
    int x, y;
     scanf("%d", &x);
    scanf("%d", &y);
    swap(&x, &y);
    printf("%d,%d", x, y);
    getch();
    return 0;
}
