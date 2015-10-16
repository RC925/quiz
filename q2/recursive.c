/* FIXME: Implement! */

#include <stdio.h>
#include <string.h>

char smallest_character(char[], char, int);

int main()
{

    char sortedArray[] = {'c','f','j','p','v'};
    char ref = 'a';
    int index = 0;

    printf("Output : %c\n", smallest_character(sortedArray, ref, index));

    return 0;
}

char smallest_character(char str[], char c, int i)
{

    if (i == strlen(str))
        return str[0];
    else if (str[i] > c)
        return str[i];
    else
        return smallest_character(str, c, ++i);

}
