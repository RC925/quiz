/* FIXME: Implement! */
#include <stdio.h>
#include <string.h>

char smallest_character(char[], char);

int main()
{

    char sortedArray[] = {'c','f','j','p','v'};
    char ref = 'a';

    printf("Output : %c\n", smallest_character(sortedArray, ref));

    return 0;
}

char smallest_character(char str[], char c)
{

    int i;

    for (i=0 ; i<strlen(str) ; i++) {
        if (str[i] > c)
            return str[i];
    }
    return str[0];
}

