// Can be used as a function to convert a character in a string of text into alphabetical index
// The input can be an uppercase or lowercase letter
// It will ignore non-alphabet input

#include <stdio.h>
#include <stdlib.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    printf("Character to ASCII Code Converter.\n");

    string text = get_string("Enter text (alphabet, number, symbol): ");
    int length = strlen(text);

    for (int i = 0; i < length; i++)
    {
        char ctext = text[i];
        printf("%c ASCII code: %i \n", text[i], text[i]);
    }

    printf("\nConvert ASCII Index to Alphabetical Index.\n");
    printf("Ex: A and a = 0, B and b = 1, C and c = 2, ...\n");
    printf("\n");

    char shift_text[length];

    for (int i = 0; i < length; i++)
    {

        int temp_text = (int) text[i];

        if ((int) text[i] >= 65 && (int) text[i]<= 90)
        {
            temp_text = temp_text - 65;
            shift_text[i] = temp_text;
            printf("%c Alphabetical Index: %d \n", text[i], shift_text[i]);
        }

        else if ((int) text[i] >= 97 && (int) text[i]<= 122)
        {
            temp_text = temp_text - 97;
            shift_text[i] = temp_text;
            printf("%c Alphabetical Index: %d \n", text[i], shift_text[i]);
        }
        
        else
        {
            printf("%c is not an alphabet.\n", text[i]);
        }
    }
}
