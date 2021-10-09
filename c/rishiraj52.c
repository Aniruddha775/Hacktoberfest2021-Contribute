#include<stdio.h>
 
int main() {
	int i,j;
	int n,r,c;
  printf("Enter number of rows: ");
  scanf("%d",&n);
	for (i=1;i<=n;i++) {
		for (j=1;j<=i;j++) {
			if(j<i) 
			        printf("%d*",i); 
			else 
			        printf("%d",i);
		}
		printf(" \n");
	}

  char ch = 'A';


  
  for(r=1; r<=n; r++)
  {
    
    for(c=1; c<=n; c++)
    {
      if(c==1||r==1||c==n||r==n) printf("* ");
      else printf("%c ",ch++);
      if(ch > 'Z') ch='A';
    } 

    printf("\n");
  } 
	
	for (i=n;i>=1;i--) {
		for (j=1;j<=i;j++) {
			if(j<i) 
			        printf("%d*",i); 
			else 
			        printf("%d",i);
		}
		printf(" \n");
	}
	return 0;
}