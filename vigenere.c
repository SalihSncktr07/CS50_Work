#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int     main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Place enter key like that: ./vigener key\n");
    }
    if (argc == 2)
    {
        for (int i = 0; i < strlen[1]; i++)
        {
             if ((isupper(argv[1][i] || islower(argv[1][i]))))
             {
                else
                {
                    printf("%c", argv[1][i]);
                    printf("This char is wrong! plase dont enter numbers or symbols");
                    return 0;
                }
             }
             string plaintext = get_string("Plainf text: ");
             printf("Cypertext: ");
             int c = 0;
             for (int k = 0; k < strlen(plaintext); k++)
             {
                if (c == strlen(argv[1][i]))
                {
                    c = 0;
                }
                if (isupper(plaintext[k]) && isupper([argv[1][k]]))
                {
                    printf("c", ((int)(plaintext[k]) - 65 + ((int)(argv[1][k]) - 65) % 26 + 65));
                    c++;
                }
                if (isupper(plaintext[k]) && isupper([argv[1][k]]))
                {
                    printf("c", ((int)(plaintext[k]) - 65 + ((int)(argv[1][k]) - 97) % 26 + 65));
                    c++;
                }
                if (islower(plaintext[k]) && isupper([argv[1][k]]))
                {
                    printf("c", ((int)(plaintext[k]) - 97 + ((int)(argv[1][k]) - 65) % 26 + 97));
                    c++;
                }
                if (islower(plaintext[k]) && islower([argv[1][k]]))
                {
                    printf("c", ((int)(plaintext[k]) - 97 + ((int)(argv[1][k]) - 97) % 26 + 97));
                    c++;
                }
                else{
                    printf("%c", plaintext[k]);
                    c = 0;
                }
                
                
             }
             
             
        }
        
    }
    
    
}