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
    int max=0;//�̤p�X�{���Ƭ�0//
    int ans;
    while(n--)
    {
        count=0;
        scanf("%s\n",b);
        int i,j;
        int testlength=strlen(b);//B length//
        for(i=0;i<=(testlength-length);i++)//�bB�̧�A�A�qindex=0~index=�˼ƲĤG��//
        {
        for(j=0;j<length;j++)
        {
           if(a[j]!=b[i+j])//���Ĥ@�Ӥ��ۦP���r���h���X�A���s��//
           {
               break;
           }
           else if(j==length-1)//��@����ۦP�r����index=A����-1//
           {
               count++;
           }
        }
        }
        ans=count;//��s�������ꪺ��//
        if(max<ans)
        {
            max=ans;
        }

    }
    printf("%d",max);
    return 0;
}
