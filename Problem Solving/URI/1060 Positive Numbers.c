#include<stdio.h>
int main()
{
    int i=0,j=0;
    double n[6];
    for(i=0;i<6;i++)
    {
        scanf("%lf",&n[i]);
        if (n[i]>0)
        j++;
    }
    printf("%d valores positivos\n",j);
    return 0;
}
