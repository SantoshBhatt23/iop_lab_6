#include <stdio.h>
int main()
{
    int a[5] = {5,4,9,2,8};
    for (int n = 1; n<= 4;n++)
    {
        for(int j = 0 ; j<=4-n; j++)
        {
            if (a[j]>a[j+1])
            {
                a[j] = a[j] + a[j+1];
                a[j+1] = a[j]-a[j+1];
                a[j] = a[j] - a[j+1];
            }
        }
    }
    for (int i =0 ; i< 5 ; i++) printf("%d\t",a[i]);
    printf("\n");
}