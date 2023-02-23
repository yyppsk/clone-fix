/*
An Armstrong number is one whose sum of digits raised to the power three equals the number itself
complete the following code such that it checks whether the number is Armstrong or not.

For example : 3^3 + 7^3 + 1^3 = 371

*/
#include<stdio.h>  
int main()    
{    
int n,r,sum=0,temp;    
printf("enter the number=");    
scanf("%d",&n);    
temp=n;    
while(n>0)    
{    
//line1    
//line2    
n=n/10;   
}    
if(temp == sum)   
printf("armstrong  number ");    
else    
printf("not armstrong number");    
return 0;  
} 