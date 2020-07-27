#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 1000

typedef char* string;

int main(void)
{
    string a = malloc(MAX);
    printf("Enter a name: ");
    scanf("%s",a);
    int length = strlen(a);
    string b = malloc(length + 1);
    for (int i = 0; i <= length; i++)
    {
        b[i] = a[i];
    }
}
