#include <stdio.h>
int main(void)
{
    int t;
    int number[5001];//for n//
    scanf("%d",&t);
    int i,j;
    int x,y;//y:�h�ֵL�k����H��head�Ax:�R�Ox�ӤH��head//
    int n,m,k;
    int control;
    int least;
    int min;
    int ans;
    for(i=0;i<t;i++)//t��data//
    {
        scanf("%d%d%d",&n,&m,&k);
        for(j=0;j<n;j++)
        {
            scanf("%d",&number[j]);//build seqence//
        }
        if(k>m-1)//�P�_k�O�_�j��m,�Yk>=m,�h�̦h���u�౱��m-1�H//
        {
            control=m-1;
        }
        else
        {
            control=k;
        }
       for(x=0;x<control+1;x++)//�a�|x,y x�H��head,�̦h�u�౱��decide�ӤH,y�ӵL�k����H��head,y�̦hm-decide-1�H//
       {
           for(y=0;y<m-control;y++)//��Xnumber[x+y]��number[n-m+x+y]�����j��//
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
           //ans=Max(least,y=0�ɪ�least)//
           if(y==0)//�L�k����������//
           {
               min=least;//least�̤j��//
           }
           if(least<min)
           {
               min=least;//��smin��//
           }
           }
           //ans=Max(least,x=0�ɪ�least)//
           if(x==0)//����Ҧ��H�����//
           {
               ans=min;
           }
           if(ans<min)
           {
               ans=min;//��smin��//
           }
       }
       printf("%d\n",ans);
    }
    return 0;
}
