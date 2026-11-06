#include <cs50.h>
#include <stdio.h>

int main(void){
    int height;
    while (true)
    {
        height = get_int("Height: ");
        if (height <= 0 || height > 8)
        {
            continue;
        }
        else
        {
            break;
        }
        
    }
    
    for (int i = 0; i < height; i++)
    {   
        for (int spaces = height - i - 1; spaces > 0; spaces--)
        {   
            printf(" ");            
        }
            for (int hashes = 0; hashes <= i; hashes++)
            {
                printf("#");
            }
        printf("\n");
    }   

}
