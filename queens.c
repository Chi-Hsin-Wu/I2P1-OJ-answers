#include<stdio.h>
/* q[i] �O�����O�b�� i �C (row) �X�{���ӦZ�A�n�\�b�ĴX�� (column) */
/* Ĵ�p�Aq[] �����e�p�G�O {2, 0, 3, 1}�A��ܥ|�ӬӦZ���O��b�ѽL�� (0,2), (1,0), (2,3), (3,1) �|�Ӧ�m */
int queens[14]={0};
void place(int row);
int valid(int row,int column);
int n;
int count=0;
int main(void)
{
    scanf("%d",&n);
    place(0);//�Ѳ�0�C�}�l//
    printf("%d",count);
    return 0;
}
/*
�P�_�ثe�����p�U�A�p�G�b row, col ��m��J�s���ӦZ
�O�_�|�M���e���ӦZ�Ĭ�
�p�G�O�X�k����m�覡 return 1;
�p�G���Ĭ� return 0;
*/
int valid(int row,int column)
{
    int i;
    for(i=0;i<row;i++)//�@��@��check//
    {
        if(queens[i]==column||row-i==column-queens[i]||row-i==queens[i]-column)//same column;�k��;����//
        {
            return 0;//is invalid//
        }
    }
    return 1;
}
void place(int row)
{
    int j;
    if(row==n)
    {
        //��row=��n��ɵ����Acount++//
        count++;
    }
    else{
        for(j=0;j<n;j++)
        {
            if(valid(row,j)==1)//if(row,j)���X�k�覡�\��//
            {
                queens[row]=j;//��row�C=j//
                place(row+1);

            }
        }
    }
}
