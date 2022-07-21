#include<stdio.h>
int main()
{
        int i,j,n;
        printf("which number pattern want to be check\n");
        scanf("%d",&n);
        for(i=n;i>0;i--)
        {
                for(j=i;j<=n;j++)
                {
                    if(j%2==0)
                        printf("0");
                        else printf("1");
                }
        printf("\n");
        }
}
