#include<stdio.h>

int main()
{
    int n=5;
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<i;j++)
        printf(" ");
        int k=i+1;

        {
            for(j=0;j<n-i;j++)
             printf("%d",n-j-i);
        }
        printf("\n");
        
    }
}
