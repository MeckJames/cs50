#include <stdio.h>
#include <cs50.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
    if(argc == 2)
    {
    int k = atoi(argv[1]);
    printf("plaintext: ");
    string plain = get_string();
    printf("ciphertext: ");
    for (int i = 0, s = strlen(plain); i < s; i++)
    {
        char cipher = (((int) plain[i] + k));
        printf("%c", cipher);
    } printf("\n");
    } else {
        printf("Usage: './caesar k'\n");
        return 1;
    }
}