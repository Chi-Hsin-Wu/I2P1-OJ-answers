#include<stdio.h>
int x[(int)1e6+1]= {0};
int count(int d)
{
    int digit=0;
    while(d>0)
    {
        if(d%10==1)//���ƬO1//
        {
            digit++;
        }
         d=d/10;//�L�ק��ƬO�_�O1�A�h���̫�@��//
    }
    return digit;
}
int main(void)
{
    int i;
    int t;
    scanf("%d",&t);
    for(i=1; i<=(int)1e6; i++)
    {
        x[i]=x[i-1]+count(i);//�Ф@�Ӱ}�C����1���e��M//
    }
    while(t--)
    {
        int a,b;
        scanf("%d%d",&a,&b);
        printf("%d\n",x[b]-x[a-1]);//�p��a~b//
    }
    return 0;
}
