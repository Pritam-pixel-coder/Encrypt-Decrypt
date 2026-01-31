// String Encryption/Decryption Program

#include <stdio.h>
#include <string.h>
void encrypt(char str[], int key)
{
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] = ((str[i] - 'A' + key) % 26) + 'A';
        else if (str[i] >= 'a' && str[i] <= 'z')
            str[i] = ((str[i] - 'a' + key) % 26) + 'a';
    }
}
void decrypt(char str[], int key)
{
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] = ((str[i] - 'A' - key + 260) % 26) + 'A';
        else if (str[i] >= 'a' && str[i] <= 'z')
            str[i] = ((str[i] - 'a' - key + 260) % 26) + 'a';
    }
}
int main()
{
    char str[100];
    int choice, key = 3;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    printf("Enter key: ");
    scanf("%d", &key);

    printf("\nChoose an option:\n");
    printf("1. Encrypt\n");
    printf("2. Decrypt\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        encrypt(str, key);
        printf("Encrypted: %s\n", str);
        break;
    case 2:
        decrypt(str, key);
        printf("Decrypted: %s\n", str);
        break;
    default:
        printf("Invalid choice!\n");
    }
    return 0;
}