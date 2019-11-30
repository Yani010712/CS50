#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
    //check command line arguments
    if (argc != 2  || atoi(argv[1]) <= 0)
    {
        printf("Usage: ./ceaser key\n");
        return 1;
    }
       
    //second command line argumment is the key
    int key = atoi(argv[1]); // number
    
    //getting the plain text
    string plaintext  = get_string("plaintext: ");
    int textLength = strlen(plaintext);
    // Encipher
    printf("ciphertext: ");
    
    for (int i = 0; i < textLength ; i ++)
    {
        if (islower(plaintext[i]))
        {
            printf("%c", (plaintext[i] - 'a' + key) % 26 + 'a');  
        }
        else if (isupper(plaintext[i]))
        {
            printf("%c", (plaintext[i] - 'A' + key) % 26 + 'A');
        }
        else
        {
            printf("%c", plaintext[i]);
        }
         
    }
    printf("\n");
    return 0;
}


    


