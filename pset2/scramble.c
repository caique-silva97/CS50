#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main (void){

    string word1 = get_string("Player 1: ");
    string word2 = get_string("Player 2: ");
    int values[26] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};
    int length1 = strlen(word1);
    int length2 = strlen(word2);
    int result1 = 0;
    int result2 = 0;
    int n = 0;

    for (int i = 0; i < length1; i++)
    {
        if (word1[i] >= 'A' && word1[i] <= 'Z')
        {
            n = word1[i] - 65;
            result1 = result1 + values[n]; 
        }
        else if (word1[i] >= 'a' && word1[i] <= 'z')
        {
            n = toupper(word1[i]) - 65;
            result1 = result1 + values[n];
        }
        else
        {
            word1[i] = 0;
        }
         
    }
    //printf("Result1: %i\n", result1);
    
    for (int j = 0; j < length2; j++)
    {
        if (word2[j] >= 'A' && word2[j] <= 'Z')
        {
            n = word2[j] - 65;
            result2 = result2 + values[n];
        }
        else if (word2[j] >= 'a' && word2[j] <= 'z')
        {
            n = toupper(word2[j]) - 65;
            result2 = result2 + values[n];
        }
        else
        {
            word2[j] = 0;
        }
    }
    //printf("Result2: %i\n", result2);
    
    if (result1 > result2)
    {
        printf("Player 1 wins!");
    }
    else if (result1 < result2)
    {
        printf("Player 2 wins!");
    }
    else
    {
        printf("Tie!");
    }
}