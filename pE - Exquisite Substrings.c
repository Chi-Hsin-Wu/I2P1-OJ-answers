#include<stdio.h>
#include<string.h>
char s[2001];
int main(void)
{

    int length;
    int l,r;//s[l,r];
    while((scanf("%s",s))!=EOF)//遇到 即為下筆側資//
    {
        int count=0;//每一輪count都是0開始//
        length=strlen(s);
        int i;
        for(i=0;i<length;i++)
        {
            l=i;
            r=i+1;
            //逐漸增加s[l,r]長度//
            while(s[l]==s[r]&&l>=0&&r<length)
            {
                l--;
                count++;
                r++;

            }
            l=i-1;
            r=i+1;
            while(s[l]==s[r]&&l>=0&&r<length)
            {
                l--;
                count++;
                r++;

            }
        }
        printf("%d\n",count);
    }

}
