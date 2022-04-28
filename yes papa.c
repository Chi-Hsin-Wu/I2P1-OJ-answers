#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char str1[1001];
char str2[1001];
int func(int a,int b,int length)//def func(str1 begins,str2 begins,length)//
{
    int i;
    int n;//計算掃過的字串長度//
    if(length%2==1)//length str1 is odd,直接判斷str1,str2是否相同//
{
    n=0;//切出來的字串是奇數，則將n重新歸零//
    for(i=0;i<length;i++)
    {
      if(str1[i+a]==str2[i+b]) //字串相同//
      {
          n++;
      }
    }
    if(n==length) return 1;
    else return 0;
    }
    else
    {
        //str1前半=str2前半&&str1後半=str2後半||str1前半=str2後半&&str1後半=str2前半//
        if((func(a,b,length/2) && func(a+(length/2),b+(length/2),length/2)) || (func(a,b+(length/2),length/2) && func(b,a+(length/2),length/2)))
        {
            return 1;
        }
        else
            return 0;
    }



}
int main(void)
{
    scanf("%s",str1);
    scanf("%s",str2);
    int x=func(0,0,strlen(str1));//a,b從0開始//
    if(x==1)
    {
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
    return 0;
}
