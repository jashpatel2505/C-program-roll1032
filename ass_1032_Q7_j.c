#include<stdio.h>
int main()
{
 int n,rev=0,n1,s,prime=0,i;
 printf("Enter number:- ");
 scanf("%d",&n);
 for(i=2;i<n;i++)
 {
 if(n%i==0)
 {
 prime=1;
 break;
 }
 }
 if(prime==0)
 {
 printf("\n Your number is prime");
 }
 else
 {
 printf("\n Your number is not prime");
 }
 n1=n;
 while(n!=0)
 {
 s=n%10;
rev=rev*10+s;
 n=n/10;
 }
 printf("\n rev number is %d",rev);
 if(n1==rev)
 {
 printf("\n Number is pelindrom");
 }
 else
 {
 printf("\n Number is not");
 }
 return 0;
 }
