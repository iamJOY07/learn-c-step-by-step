#include <stdio.h>
int main()
{
    char lower;
    printf("Enter Any Lowercase Letter:");
    scanf("%c",&lower);
    printf("The Uppercase Letter Is=%c",lower-32);
    return 0;
}
