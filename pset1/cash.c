#include <cs50.h>
#include <stdio.h>

int main(void){
    int counter = 0;
    int change;
    while(true)
    {
       change = get_int("Change owed: ");
       if (change < 0)
       {
        continue;
       }
       else
       {
        break;
       }
    }

        
    for (int i = 25; i <= change; change = change - i)
     {
        counter++;
     }
        
    for (int j = 10; j <= change; change = change - j)
    {
        counter++;
    }

    for (int k = 5; k <= change; change = change - k)
    {
        counter++;
    }
        
    for (int l = 1; l <= change; change = change - l)
    {
        counter++;
    }


    printf("%i", counter);


}