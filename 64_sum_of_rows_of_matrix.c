#include <stdio.h>
int main()
{
    int a[3][3] = {2,4,6,3,5,8,2,4,7};
    int sum[3]={};
    for(int i = 0 ; i< 3 ; i++)
    {
        for(int j = 0 ; j<3 ; j++) sum[i]+=a[i][j];
    }
    for (int i =0 ; i<3 ; i++) printf("sum of %d row = %d\n",i+1,sum[i]);
}