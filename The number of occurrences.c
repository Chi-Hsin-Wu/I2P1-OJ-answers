#include<stdio.h>
#include<string.h>
int main(void)
{
    char a[5]={0};
    char b[10]={0};
    int n;
    int count;
    scanf("%s",a);
    scanf("%d",&n);
    int length=strlen(a);//A length//
    int max=0;//最小出現次數為0//
    int ans;
    while(n--)
    {
        count=0;
        scanf("%s\n",b);
        int i,j;
        int testlength=strlen(b);//B length//
        for(i=0;i<=(testlength-length);i++)//在B裡找A，從index=0~index=倒數第二個//
        {
        for(j=0;j<length;j++)
        {
           if(a[j]!=b[i+j])//找到第一個不相同的字元則跳出，重新找//
           {
               break;
           }
           else if(j==length-1)//能一路找相同字元到index=A長度-1//
           {
               count++;
           }
        }
        }
        ans=count;//更新本次側資的值//
        if(max<ans)
        {
            max=ans;
        }

    }
    printf("%d",max);
    return 0;
}
