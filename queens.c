#include<stdio.h>
/* q[i] 記錄的是在第 i 列 (row) 出現的皇后，要擺在第幾行 (column) */
/* 譬如，q[] 的內容如果是 {2, 0, 3, 1}，表示四個皇后分別放在棋盤的 (0,2), (1,0), (2,3), (3,1) 四個位置 */
int queens[14]={0};
void place(int row);
int valid(int row,int column);
int n;
int count=0;
int main(void)
{
    scanf("%d",&n);
    place(0);//由第0列開始//
    printf("%d",count);
    return 0;
}
/*
判斷目前的狀況下，如果在 row, col 位置放入新的皇后
是否會和之前的皇后衝突
如果是合法的放置方式 return 1;
如果有衝突 return 0;
*/
int valid(int row,int column)
{
    int i;
    for(i=0;i<row;i++)//一行一行check//
    {
        if(queens[i]==column||row-i==column-queens[i]||row-i==queens[i]-column)//same column;右斜;左斜//
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
        //到row=第n行時結束，count++//
        count++;
    }
    else{
        for(j=0;j<n;j++)
        {
            if(valid(row,j)==1)//if(row,j)為合法方式擺放//
            {
                queens[row]=j;//第row列=j//
                place(row+1);

            }
        }
    }
}
