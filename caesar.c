#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

bool check_valid_key(string s);

int main(int argc , string argv[])
{

    if (argc !=2 || !check_valid_key(argv[1]))

    {
        printf("Usage: ./caesar key\n");

        return 1;
    }

    // atoi transfer char to int

    int key = atoi(argv[1]);

    string plaintext;

    plaintext = get_string("plaintext: ");

    printf("ciphertext: ");

    int i;

    for (i=0 ; i< strlen(plaintext) ; i++)

    {

        char c = plaintext[i];

        if (isalpha(c))
            {

            char m = 'A';

            // if c is lower case, m is lower case a
            if (islower(c))

                m = 'a';

            printf("%c", (c - m + key) % 26 + m);

            }

        else

            printf("%c" , c);

    }

    printf("\n");

    return 0;

}

bool check_valid_key(string s)

{
    int i;

    for (i=0 ; i < strlen(s); i++)

    {
     if (! isdigit(s[i]))

         return false;
    }
    return true;

}
