#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>


int     main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./caesar ket");
        return 1;
    }

    for (int i = 0; i < strlen(argv[1]); i++)
    {
        if (!isdigit(argv[1][i]))
        {
            printf("Usage: ./caesar ket");
            return 1;
        }        
    }
    
    
    
}