// Rearranging a word
#include <stdio.h>
#include <string.h>

char * rearrangeWord(char * word);

int main()
{
    char first_string[100];

    printf("Please enter the first string: ");
    scanf("%[^\n]s", first_string);
    printf("%s", rearrangeWord(first_string));
}
char * rearrangeWord(char *word)
{
    char temp;

    for (int i = 0, n = strlen(word); i < n; i++)
    {
        if (word[i] < word[i+1])
        {
            //swap
            temp = word[i];
            word[i] = word[i+1];
            word[i+1] = temp;

            return word;
        }
    }
    return "no answer";
}