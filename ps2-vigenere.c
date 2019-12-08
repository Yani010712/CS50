#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int shift(char c);
bool isAlphaKey(string key);

int main(int argc, string argv[])
{
    //check command line arguments
    if (argc != 2 || !isAlphaKey(argv[1]))
    {
        printf("Usage: ./vigenere keyword\n");
        return 1;
    }
    
    int keyLength = strlen(argv[1]);
  
    //getting the plain text
    string plaintext  = get_string("plaintext: ");
    int textLength = strlen(plaintext);
    
    // Encipher
    printf("ciphertext: ");
     
    for (int i = 0, j = 0; i < textLength ; i ++)
    {
        int key = shift(argv[1][j]);
        
        if (islower(plaintext[i]))
        {
            printf("%c", (plaintext[i] - 'a' + key) % 26 + 'a'); 
            j = (j + 1) % keyLength;
            
        }
        else if (isupper(plaintext[i]))
        {
            printf("%c", (plaintext[i] - 'A' + key) % 26 + 'A');
            j = (j + 1) % keyLength;
           
        }
        else
        {
            printf("%c", plaintext[i]);
        }
         
    }
    printf("\n");
    return 0;
          
}

//checking key is alphabetical.
bool isAlphaKey(string key)
{
    for (int i = 0; i < strlen(key); i++)
    {
        if (!isalpha(key[i]))
        {
            return false;
        }
    }

    return true;
}

//Converting a single character to its positional integer value
int shift(char c)
{
    if (isupper(c))
    {
        return (c - 65);
    }
    else
    {
        return (c - 97);
    }
}