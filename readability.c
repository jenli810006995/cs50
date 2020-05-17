#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <math.h> // for 'round()' function

int count_letters(string str);
int count_words(string str);
int number_sentence(string str);
int Coleman_Liau_index(int cnt, int count_words, int number_sentence);

int main()

{
    string str = get_string("Text : ");
    if (Coleman_Liau_index(count_letters(str), count_words(str), number_sentence(str)) >= 16)
    {
        printf("Grade 16+\n");
    }
    else if (Coleman_Liau_index(count_letters(str), count_words(str), number_sentence(str)) < 1)
    {
        printf("Before Grade 1\n");
    }
    else
    {
        printf("Grade %i\n", Coleman_Liau_index(count_letters(str), count_words(str), number_sentence(str)));
    }
    return 0;

}


int count_letters(string str)

{

    int i;
    int len = strlen(str);
    int cnt;
    cnt = 0; //initialize to 0
    for (i = 0 ; i < len ; i++)
    
    {
        char c = str[i];
        //chek if greater than 'a' and less than 'z' or greater than 'A' and less than 'Z'
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        
        {
            cnt ++;
        }
        
    }
    return cnt;

}


int count_words(string str)

{

    int i;
    int len = strlen(str);
    int count_words;
    count_words = 0; //initialize to 0
    for (i = 0 ; i < len ; i++)
    {
        char c = str[i];
        if (c == ' ')
        { // if encountering a space, marking the end of a word
            count_words ++;
        }
    }
    return count_words + 1; // two words have one space in between, so add 1

}


int number_sentence(string str)

{

    int i;
    int len = strlen(str);
    int num_sentence;
    num_sentence = 0; //initialize to 0
    for (i = 0 ; i <len ; i++)
    
    {
        char c = str[i];
        if (( c=='.' ) || ( c=='!' ) || ( c=='?' ))
        {
            // if encountering a period, exclamatation point or question mark, it marks the end of a sentence
            num_sentence ++;
        }
    }
    return num_sentence;

}


int Coleman_Liau_index(int x, int y, int z)

{

    float L;
    float S;
    
    // declare the index
    int Coleman_Liau_index; 
    
    //dividing two intergers in C, use "(double)"
    
    L = ((double)x /(double)y) * 100;
    S = ((double)z/(double)y) * 100;
    
    // use round() function to round to the nearest whole number
    
    Coleman_Liau_index = round((0.0588 * L - 0.296 * S) - 15.8);
    
    return  Coleman_Liau_index;

}

