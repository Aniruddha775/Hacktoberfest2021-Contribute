#include <stdio.h>
#include <string.h>

void main(){
	char word[1000];
	int word_count;
	int i;
	
	printf("Enter the word");
	scanf("%[^\n]s",word);
	
	for (i = 0;word[i] != '\0';i++)
    {
        if (word[i] == ' ' && word[i+1] != ' ')
            word_count++;    
    }
	
	printf("Number of words in given string are: %d\n", word_count + 1);
}