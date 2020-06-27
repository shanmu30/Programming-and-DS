#include<stdio.h>
int main()
{

int A[2][3];
int (*p)[3]=A;
printf("%d\n",p);
printf("%d\n",A);
printf("%d\n",&A[0]);
printf("%d\n",*A);
printf("%d\n",&A[0][0]);
printf("%d\n",A);
printf("%d\n",A[0]);
printf("%d\n",A+1);
printf("%d\n",A[1]);
printf("%d\n",&A[1][0]);
printf("%d\n",*(A+1));
}
