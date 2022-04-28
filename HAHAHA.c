#include<stdio.h>
int sugar[1001];//a1~an//
int gcd(int a,int b)
{
    if(a==b) return a;
    else if(a<b) return gcd(b,a);
    else if(b==0) return a;
    else return gcd(b,a%b);//預設a>b//
}
int main(void)
{

    int n,i,j;
    int max=1;//gcd至少為1//
    int ans;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&sugar[i]);
    }
    //任意取出兩個數，求出他們的gcd，再找出最大值//
    for(i=1;i<n;i++)
    {
        for(j=0;j<i;j++)
        {
            //找max//
            ans=gcd(sugar[i],sugar[j]);
            if(max<ans)
            {
                max=ans;//用較大的gcd值取代//
            }
        }


    }
    printf("%d\n",max);
    return 0;
}
