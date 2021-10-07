#include<stdio.h>
#include<stdlib.h>

#define MAX 20 //max size of the sentence
#define OUT 0
#define IN 1

int isLetterOrDigit(char);
int countWords(char*);
int main()
{
    char s[MAX];
    printf("Enter a sentence: ");
    scanf("%[^\n]",s);
    printf("Number of words in the sentence is: %d",countWords(s));
}
int isLetterOrDigit(char ch)
{
    if(ch>='A' && ch<='Z') return 1;
    if(ch>='a' && ch<='z') return 1;
    if(ch>='0' && ch<='9') return 1;
    else return 0;
}
int countWords(char *arr){
    int state,count;
    count=0;
    state=OUT;
    while(*arr){        
        if(state==OUT && isLetterOrDigit(*arr)){
            count++;
            state=IN;
        }
        if(state==IN && !isLetterOrDigit(*arr)){
            state=OUT;
        }
        arr++;
    }
    return count;
}