#include<stdio.h>
#include<string.h>
char s[2001];
int main(void)
{

    int length;
    int l,r;//s[l,r];
    while((scanf("%s",s))!=EOF)//�J�� �Y���U������//
    {
        int count=0;//�C�@��count���O0�}�l//
        length=strlen(s);
        int i;
        for(i=0;i<length;i++)
        {
            l=i;
            r=i+1;
            //�v���W�[s[l,r]����//
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
