//��X�Ѭ�j���զX�ơA�]����ܼ�index,sum �A�λ��j�a�|�k//
#include<stdio.h>
int n,k;
int a[21];
int count(int index,int sum)//�N�Ҧ��i�ౡ�p�[�_�ӡA�Ysum==k�h�����A���@��//
{
    if(sum==k) return 1;//���@�ӵ���//
    if(sum>k||index>=n) return 0;//���פw�g�j��D�M��index�w�g��n//
    else return count(index+1,sum+a[index])+count(index+1,sum);//����index/����//
}
int main(void)
{
    scanf("%d%d",&n,&k);
    //n integer a1~an//
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("%d\n",count(0,0));//index=0;sum=0;//
    return 0;

}
