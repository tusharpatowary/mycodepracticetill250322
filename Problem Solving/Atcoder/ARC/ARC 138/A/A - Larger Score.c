#include<stdio.h>
int main()
{
    int i=0,n,k;
    scanf("%d%d",&n,&k);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        printf("%d\n",a[i]);
    }
    //output logic starts here
    int j=0,count=0;
    long long int sum=0,score,temp;
    for(i=0;i<k;i++)
    {
        sum=sum+a[i];

    }
    score=sum+1;
    printf("%lld\n",score);
    //Till now ok


    //output logic starts here

    for(i=n-1;i>=1;i--)
    {
        sum=0;
         for(j=0;j<k;j++)
        {
            sum=sum+a[j];

        }
        printf("%lld\n",sum);

        if(score<=sum)
        {
            printf("%d\n",count);
            break;
        }

        temp=a[i];
        a[i]=a[i-1];
        a[i-1]=temp;
        count++;

    }



    if(i==0)
    {
        printf("-1");
    }
    return 0;

}
