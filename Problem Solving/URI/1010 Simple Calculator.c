#include<stdio.h>
main()
{
    int c1,c2,n1,n2;
    float p1,p2,t;
    scanf("%d%d%f",&c1,&n1,&p1);
    scanf("%d%d%f",&c2,&n2,&p2);
    t=(n1*p1)+(n2*p2);
    printf("VALOR A PAGAR: R$ %.2f\n",t);
    return 0;
}
