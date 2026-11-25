#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <math.h>
#include <string.h>


int main (void)
{
    string text = get_string("Text: ");
    int length = strlen(text);
    int letters;
    int word_count = 1;
    int sentence;


    // For loop that goes through every character in the word
    for (int i = 0; i < length; i++)
    {   
        if (isupper(text[i]) || islower(text[i]))
        {
            letters++;
        }
        else if (text[i] == 32)
        {
            word_count++;
        }
        else if (text[i] == 33 || text[i] == 46 || text[i] == 63)
        {
            sentence++;
        }
        else
        {
            continue;
        }
    }

    float L = (float)letters / word_count * 100;
    float S = (float)sentence / word_count * 100;
    int index = round(0.0588 * L - 0.296 * S - 15.8);
    
    if (index < 1)
    {
       printf("Before Grade 1");
    }
    else if (index >= 16)
    {
        printf("Grade 16+");
    }
    else
    {
        printf("Grade %i", (int)(round(index)));
    }
    

}