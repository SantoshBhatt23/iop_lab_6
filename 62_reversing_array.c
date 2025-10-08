//program to reverse an array.
#include <stdio.h>
int main()
{
    int a[5] , r[5];
    for (int i = 0 ; i<5 ; i++) scanf("%d",&a[i]);
    for (int i = 0 ; i<5 ; i++) printf("%d\t",a[i]);
    printf("\n");
    for (int i = 0 ; i< 5 ; i++)
    {
        r[4-i] = a[i];
    }
    for (int i = 0 ; i < 5 ; i++) 
    {
        a [i] = r[i];
    }
    printf("after reversing array becomes: \n");
    for (int i = 0 ; i<5 ; i++) printf("%d\t",a[i]);
}