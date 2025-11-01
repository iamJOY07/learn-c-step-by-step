#include <stdio.h>
int main()
{
    int d,m,y;
    printf("Enter any date in formate(DD-MM-YY):");
    scanf("%d-%d-%d",&d,&m,&y);
    printf("Day=%d\nMonth=%d\nYear=%d",d,m,y);
    return 0;
}
