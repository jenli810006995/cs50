#include <stdio.h>

int square(int x) {
   return x * x;
}


#define square(x) ((x) * (x))


int main(void)
{
    int x = 9;
    printf("%d", square(x));
    return 0;
}






