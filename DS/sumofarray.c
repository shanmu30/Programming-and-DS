#include<stdio.h>
int sumofarray(int A[])
{
int i,sum;
n=sizeof(A)/sizeof(A[0]);
for(i=0;i<n;i++)
{sum+=A[i];
}return sum;
}
int main()
{
int A[]={1,2,3,4,5};
int total=sumofarray(A);
printf("%d",total);
}

