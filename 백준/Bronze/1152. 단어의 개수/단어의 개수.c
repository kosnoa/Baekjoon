#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS

int main()
{
    int count = 1;
    char *string = (char *)malloc(sizeof(char) * 10000001);
    fgets(string, 10000001, stdin);

    if (string[0] == '\n')
    {
        printf("0");
        return 0;
    }

    if (string[strlen(string) - 2] == ' ')
    {
        count--;
    }

    for (int i = 0; i < strlen(string) - 1; i++)
    {
        if (string[i] == ' ')
        {
            if (i != 0)
            {
                count++;
            }
        }
    }
    printf("%d", count);

    free(string);
    return 0;
}