#include<stdio.h>
int main(void)
{
    int n;
    scanf("%d",&n);
    if(n<4)
    {
        printf("%d",n);//n=0~3則直接印出n//
    }
    else{
        int k;
        n=n-4;//n回到0//
        k=n%3;
        n=n/3;
        printf("%d\n",3+2*n+k);//第四瓶後為買二送一//
        return 0;
}
}
