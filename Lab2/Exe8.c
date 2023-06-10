#include <stdio.h>
#include <ctype.h>

int main()
{
    char a;
    printf("Enter a character: ");
    scanf(" %c", &a);
    a = toupper(a);
    switch(a)
    {
        case 'A' ... 'Z': 
            if(a == 65 || a == 69 || a == 73 || a == 79 || a == 85)
            {
                printf("Vowel");
            
            }
            else
            {
                printf("Consonant");
            
            }
            break;
        case 48 ... 57:
            printf("It's a digit");
            break;
        default:
            printf("Not Alphabet\n");
    }
    
}