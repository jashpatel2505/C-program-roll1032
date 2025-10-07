#include <stdio.h>
int main()
{
 int i, n
,reverse=1,b;
 printf("ENTER VALUE OF N :- ");
 scanf("%d", &n);
 for(i=n; i!=0; i=i/10)
 {
 b=i%10;
 reverse=reverse*10+b; 
 }
if( reverse == n)
printf("Number %d is Armstrong number ",n);
else
printf("Number %d is not Armstrong number ",n);
}

