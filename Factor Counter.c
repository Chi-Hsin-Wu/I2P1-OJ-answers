//���϶������̦h���]�ƪ��Ʀr//
#include<stdio.h>
int record[20001]={0};//�������]�Ƽƶq//
int find_max(int a,int b,int n[]);
int factor(int x)//�p�⥿�]�Ƽƶq//
{
    int i;
    int count=0;
    for(i=1;i<=x;i++)
    {

        if(x%i==0)//i�Ox���@�Ӧ]��//
        {
            count++;
        }
    }
    return count;
}
int find_max(int a,int b,int n[])//  ��@�q�}�C�����̤j��//
{
    int ans=0;
    int initial=0;//��l�Ȧܤ֬�0//
    int k;
    for(k=a;k<b+1;k++)//�qa~b��̤j��//
    {
        if(n[k]>initial)
        {
            ans=k;//k���̦h�����]��//
            initial=n[k];//��sinitial,�A����U�@��//
        }
    }
    return ans;
}
int main(void)
{
    int t;
    int i,j;
    int output;
    scanf("%d",&t);
    //��record����1~20000�C�ӼƦr��factor�ƶq//
    for(i=1;i<=20000;i++)
    {
        record[i]=factor(i);
    }
    for(j=0;j<t;j++)
    {
        int l,r;
        scanf("%d%d",&l,&r);
        output=find_max(l,r,record);
        printf("%d\n",output);
    }
    return 0;
}
