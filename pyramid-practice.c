#include <cs50.h>
#include <stdio.h>

void print_spaces(int num);
void print_hashes(int num);

int main(void)
{
    int height;
    int spaces;
    int hashes;
   
    do
    {
        height = get_int("Type a number between 1 and 8: ");
    }
    while (height < 1 || height > 8);
    
    spaces = height - 1;
    hashes = 1;
     
    for ( int i = 0; i < height; i ++)
    {
        print_spaces(spaces);
        print_hashes(hashes);
        printf("\n");
        spaces--;
        hashes++;
    }
  
}

void print_spaces(int num)
{
    for (int i = 0; i < num; i ++)
    {
        printf(" ");
    }
    
}

void print_hashes(int num )
{
    for (int i = 0; i < num ; i ++)
    {
        printf("#");
    }
}

    
