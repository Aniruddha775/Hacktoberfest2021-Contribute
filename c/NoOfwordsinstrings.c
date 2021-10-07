/* C Program to Count Total Number of Words in a String */

#include <stdio.h>
#include <string.h>

int main()
{
  	char str[100];
  	int totalwords =1;

  	printf("\n Please Enter any String :  ");
  	scanf("%[^\n]s", str);

  	for(int i = 0,n=strlen(str);i<n; i++)
	{

        if(str[i]==32 && str[i+1]!=32)
    {
        totalwords++;
    }

	}
	printf("\n The Total Number of Words in this String %s  = %d", str, totalwords);
	printf("\n");

  	return 0;
}