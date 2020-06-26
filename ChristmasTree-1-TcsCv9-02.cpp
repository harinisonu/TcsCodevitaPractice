#include <stdio.h>
#include <iostream>
using namespace std;

int full_triangle(int n)
{
    for(int i=1;i<=n;i++)
    {
        printf("%*s",n-i,"");
        for(int j=1;j<=(2*i-1);j++)
        {
            printf("*");
        }
        cout<<"\n";
    }
}

int partial_triangle(int k, int offset)
{
    for(int i=1;i<=k;i++)
    {
        printf("%*s",offset,"");
        printf("%*s",k-i,"");
        for(int j=1;j<=(2*i+1);j++)
        {
           printf("*");
        }
        cout<<"\n";
    }
}
int print_stand(int n)
{
    for(int i=1;i<=2;i++)
    {
        printf("%*s",n,"");
        printf("*\n");
    }
}

int main()
{
    int n;
    scanf("%d",&n);
    int offset = 1;
    full_triangle(n+1);
    for(int i=n-1;i>1;i--)
    {
        partial_triangle(i,offset);
        offset += 1;
    }
    print_stand(n);
}
