#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    printf("Enter several lines of text:\n");

    char string[255];
    int alphabets[26] = {0};
    char letter;
    int i;

    gets(string);
    int n = strlen(string);

    for(i = 0; i < n; i++)
    {
        letter = tolower(string[i]);
        if(letter >= 97 && letter <= 122)   
        {
            alphabets[letter - 97]++;
        }
    }
    for(i = 97;i <= 122; i++)
        printf("\nLetter %c appears %d times\n",i,alphabets[i-97]);   
    return 0;
}