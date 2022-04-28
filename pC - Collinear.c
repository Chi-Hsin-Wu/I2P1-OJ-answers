// calculate the number of lines which pass through at least three points in the set.//
#include<stdio.h>
int x[105];
int y[105];
long long int a[10000],b[10000],c[10000];
long long int gcd(long long int w,long long int z)
{
    if(w==z||z==0)
    {
        return w;
    }

    else
    {
        return gcd(z,w%z);
    }
}
int main(void)
{
    int t;
    scanf("%d",&t);
    int n;
    int i,j;
    int count;
    while(t--)
    {
        scanf("%d",&n);
        count=0;
        for(i=0;i<n;i++)
        {
            scanf("%lld%lld",&x[i],&y[i]);//��J�I//
        }
        //ax+by+c=0//
       //a[0] b[0] c[0]//
        for(i=0;i<n;i++)
        {
            for(j=i+1;j<n;j++)
            {
                a[count]=x[j]-x[i];
                b[count]=y[j]-y[i];
                c[count]=(y[j]*x[i])-(y[i]*x[j]);
                //�D�Xa,b,c���̤j���]��//
                long long int A=a[count];
                long long int B=b[count];
                long long int C=c[count];
                long long int factor0=gcd(A,B);
                long long int factor1=gcd(factor0,C);
                //��{����²//
                a[count]=a[count]/factor1;
                b[count]=b[count]/factor1;
                c[count]=c[count]/factor1;
                count++;
            }
        }
        int sum;
        int ans;
        for(i=0;i<count;i++)
        {
            if(sum>0)//������@�˪����u//
            {
                ans++;
                sum=0;//�k�s//
            }
            for(j=i+1;j<count;j++)
            {
                if(a[j]==a[i]&&b[j]==b[i]&&c[j]==c[i]&&a[j]!=200001)
                {
                    sum++;
                    a[j]=200001;
                }
            }
        }
        printf("%d\n",ans);
        ans=0;//�����k�s//
    }
    return 0;
}


