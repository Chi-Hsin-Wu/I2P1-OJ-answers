#include<stdio.h>
int sugar[1001];//a1~an//
int gcd(int a,int b)
{
    if(a==b) return a;
    else if(a<b) return gcd(b,a);
    else if(b==0) return a;
    else return gcd(b,a%b);//�w�]a>b//
}
int main(void)
{

    int n,i,j;
    int max=1;//gcd�ܤ֬�1//
    int ans;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&sugar[i]);
    }
    //���N���X��ӼơA�D�X�L�̪�gcd�A�A��X�̤j��//
    for(i=1;i<n;i++)
    {
        for(j=0;j<i;j++)
        {
            //��max//
            ans=gcd(sugar[i],sugar[j]);
            if(max<ans)
            {
                max=ans;//�θ��j��gcd�Ȩ��N//
            }
        }


    }
    printf("%d\n",max);
    return 0;
}
