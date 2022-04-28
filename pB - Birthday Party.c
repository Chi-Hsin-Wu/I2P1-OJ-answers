#include<stdio.h>
long long int color[10];
long long int balloons[10];
long long int gcd(long long int a,long long int b)
{
    if(a==b||b==0)
    {
        return a;
    }
    else if(b>a)
    {
        return gcd(b,a);
    }
    else
    {
        return gcd(b,a%b);
    }
}
int main(void)
{
    int t;
    long long int n;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%lld%lld%lld%lld",&n,&color[1],&color[2],&color[3]);
        int i;
    for(i=1;i<=3;i++)
    {
        balloons[i]=gcd(n,color[i]);//找出人數和選擇數字的gcd,gcd的倍數即可拿到氣球//
    }
    //找三組公因數的最小公倍數//
    //最小公倍数=两数的乘积/最大公约（因）数//
    long long int LCM1=balloons[1]/gcd(balloons[1],balloons[2]);//先求前兩個//
    LCM1=LCM1*balloons[2];
    long long int LCM2=balloons[3]/gcd(LCM1,balloons[3]);//在求balloons[3]和LCM1//
    LCM2=LCM2*LCM1;
    //n/最小公倍數//
    printf("%lld\n",n/LCM2);
    }

    return 0;
}
