#include <stdio.h>
#include <string.h>

// This program asks the user for the name, age, phone_number and email, and then return the values as confirmation

int main(void)
{
    char name[100], phone_number[20], email[100];
    int age;

    printf("What's your name? ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = 0;

    printf("What's your age? ");
    scanf("%d", &age);
    getchar();

    printf("What's your phone number? ");
    fgets(phone_number, sizeof(phone_number), stdin);
    phone_number[strcspn(phone_number, "\n")] = 0;

    printf("What's your email? ");
    fgets(email, sizeof(email), stdin);
    email[strcspn(email, "\n")] = 0;

    printf("New contact: %s, %i, can be reached at %s or %s.\n", name, age, phone_number, email);
}
