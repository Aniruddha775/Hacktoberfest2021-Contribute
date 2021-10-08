#include<stdio.h>  
int main(){    
int num,i,m=0,count=0;    
printf("Enter the number to check prime:");    
scanf("%d",&num);    
m=num/2;    
for(i=2;i<=m;i++)    
{    
if(num%i==0)    
{    
printf("Number is not prime");    
count=1;    
break;    
}    
}    
if(count==0)    
printf("Number is prime");     
return 0;  
 }    