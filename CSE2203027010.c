#include<stdio.h>
#include <stdbool.h>

void studentInformation(); // Display student information
void menus(); // Display menus
void calculator(); // Calculate arithmetic operations
void getMaximumNumber(); // Find the maximum number in the array
void getMinimumNumber(); // // Find the maximum number in the array
void checkCharacter(); // // Check if the character is VOWEL or CONSONANT

int main()
{
    int menu;
    studentInformation();
    menus();
    printf("=> Choose your menu & hit enter\n");
    scanf("%d", &menu);
    switch(menu)
    {
    case 0:
        exit(0);
        break;
    case 1:
        calculator();
        break;
    case 2:
        getMaximumNumber();
        break;
    case 3:
        getMinimumNumber();
        break;
    case 4:
        checkCharacter();
        break;
    default:
        printf("Menu not found.\n");
    }
    return 0;
}

void studentInformation()
{
    printf("\n**********************************\n");
    printf("** Name: Md Foysal \t\t**\n");
    printf("** ID: CSE2203027010 \t\t**\n");
    printf("** Section: Kingfisher (27B) \t**\n");
    printf("** Mobile: 01688784568 \t\t**\n");
    printf("** Session: 2022 \t\t**\n");
    printf("**********************************\n");
}

void menus()
{
    printf("=================================================================|\n");
    printf("* 1) Perform Arithmetic Operations \t\t 11) Eleven\n");
    printf("* 2) Show maximum value between two number \t\t 12) Twelve\n");
    printf("* 3) Show minimum value between two number \t 13) Thirteen\n");
    printf("* 4) Check if the character is VOWEL or CONSONANT \t 14) Fourteen\n");
    printf("* 5)  \t 15) Fifteen\n");
    printf("* 6) Six \t\t 16) Sixteen\n");
    printf("* 7) Seven \t 17) Seventeen\n");
    printf("* 8) Eight \t 18) Eighteen\n");
    printf("* 9) Nine \t 19) Nineteen\n");
    printf("* 10) Ten \t 20) Twenty\n");
    printf("* 0) EXIT\n");
    printf("=================================================================|\n");

}

void calculator()
{
    printf("I'm a calculator\n");
}

void getMaximumNumber()
{
    int numbers[5], result = numbers[0];

    printf("=> You can compare maximum %d numbers\n", 5);

    for(int i=0; i < (sizeof(numbers) / sizeof(numbers[0])); i++)
    {
        printf("=> %d Enter number ", i + 1);
        scanf("%d", &numbers[i]);
    }

    for(int j=1; j <= (sizeof(numbers) / sizeof(numbers[0])); j++)
    {
        if(result < numbers[j]) result = numbers[j];
    }

    printf("=> Maximum number is: %d\n", result);
}
void getMinimumNumber()
{
    int numbers[5], result = numbers[0];

    printf("=> You can compare maximum %d numbers\n", 5);

    for(int i=0; i < (sizeof(numbers) / sizeof(numbers[0])); i++)
    {
        printf("=> %d Enter number ", i + 1);
        scanf("%d", &numbers[i]);
    }

    for(int j=1; j <= (sizeof(numbers) / sizeof(numbers[0])); j++)
    {
        if(result > numbers[j]) result = numbers[j];
    }

    printf("=> Minimum number is: %d\n", result);
}
void checkCharacter()
{
    printf("I'm a checkCharacter\n");
}
