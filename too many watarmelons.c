//�]��Ӱ}�Ca[]���ʶ��� b[]��M�䶶�� �b�]�@�Ӱ}�Cappear[]�����O�_�X�{//
#include<stdio.h>
int appear[(int)2e5+1]={0};//>1e5�}�C�ɶq�}����//
int main(void)
{
    int n;
    scanf("%d",&n);
    int a[n+1];//watermelons//
    int b[n+1];//find sequence//
    int i;
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);//scanf a1~an//
    }
     for(i=1;i<=n;i++)
    {
        scanf("%d",&b[i]);//scanf b1~bn//
    }
    //�bb����a�A�Τ@���ܼ�j�����U���q���Ӧ�ʶ}�l��//
    int j=1;
    int count;
    for(i=1;i<=n;i++)
    {
        count=0;
        if(appear[b[i]]==0)//�}�l�bb[i]�j�M�A�Y�Ʀr�|���Q�j�M��A�i�J�j��//
        {
            for(j;j<=n;j++)//���a[j] b[i]//
            {
                appear[a[j]]=1;//�]����L//
                count++;
                if(a[j]==b[i])
                {
                    j++;//j�e�i//
                    break;
                }
            }
        }
        printf("%d ",count);
    }
    printf("\n");
    return 0;
}
