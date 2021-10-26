/*
 * Write a program in C++ to find the number of words present in a given sentence
 */
#include<iostream>
#include<string.h>
using namespace std;
int main ()
{
    char str[50];
    int count = 0, i; 
    cout << "Enter a sentence : ";
    gets(str);
    for (i = 0; str[i] != '\0';i++)
    {
        if (str[i] == ' ')
            count++;    
    }
    cout << "Number of words in the sentence are: " << count + 1;
    return 0;
}