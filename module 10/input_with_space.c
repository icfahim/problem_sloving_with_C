#include <stdio.h>
#include <string.h>
int main()
{
    char a[20];

    //gets(a);

    fgets(a,18,stdin);
    printf("%s",a);
    return 0;
}