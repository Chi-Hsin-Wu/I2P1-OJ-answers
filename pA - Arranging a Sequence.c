#include<stdio.h>
#include<string.h>
//�N�w�g�ƹL���ƦC�M�쥻���ƦC���}�L//
int sequence[(int)2e5+1]={0};//�}�C��Ȭ�0//
int arrange[(int)1e5+1]={0};
int main(void)
{
    int n,m;
    scanf("%d%d",&n,&m);
    int i;
    for(i=0;i<m;i++)
    {
        scanf("%d",&arrange[m-i]);
    }
    for(i=1;i<=m;i++)
    {
        if(sequence[arrange[i]]==0)
        {
             printf("%d\n",arrange[i]);//���L�X�Ʀn���ƦC//
             sequence[arrange[i]]=1;//�L�L���]��1//
        }

    }
    for(i=1;i<=n;i++)//�L�ѤU����//
    {
        if(sequence[i]==0)
        {
            printf("%d\n",i);
        }
    }
    return 0;
}
