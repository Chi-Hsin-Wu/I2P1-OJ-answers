#include <stdio.h>
int main(void)
{
    int t;
    int number[5001];//for n//
    scanf("%d",&t);
    int i,j;
    int x,y;//y:ぶ礚猭北headx:㏑xhead//
    int n,m,k;
    int control;
    int least;
    int min;
    int ans;
    for(i=0;i<t;i++)//t掸data//
    {
        scanf("%d%d%d",&n,&m,&k);
        for(j=0;j<n;j++)
        {
            scanf("%d",&number[j]);//build seqence//
        }
        if(k>m-1)//耞k琌m,璝k>=m,玥程ご北m-1//
        {
            control=m-1;
        }
        else
        {
            control=k;
        }
       for(x=0;x<control+1;x++)//絘羭x,y xhead,程北decide,y礚猭北head,y程m-decide-1//
       {
           for(y=0;y<m-control;y++)//тnumber[x+y]蛤number[n-m+x+y]丁耕//
           {
              //Max(number[x+y],number[n-m+x+y])//
              if(number[x+y]<=number[n-m+x+y])
              {
                  least=number[n-m+x+y];
              }
              else
              {
                  least=number[x+y];
              }
           //ans=Max(least,y=0least)//
           if(y==0)//礚猭北匡Ю狠//
           {
               min=least;//least程//
           }
           if(least<min)
           {
               min=least;//穝min//
           }
           }
           //ans=Max(least,x=0least)//
           if(x==0)//北┮Τ匡Ю狠//
           {
               ans=min;
           }
           if(ans<min)
           {
               ans=min;//穝min//
           }
       }
       printf("%d\n",ans);
    }
    return 0;
}
