// Check whether a given number is perfect or not.
#include<stdio.h>
void main()
{ int num,i,n;
  printf("Enter the number to see if its perfect or not");
  scanf("%d",&num);
  n=num;
  int sum =0;
  for(i=1;i<num;i++)
  { if((num%i)==0)
     { sum+=i;
     }
  }
  if(sum==n)
  { printf("%d is a perfect number",n);
  }
  else
  { printf("%d is not a perfect number",n);
  }
}
