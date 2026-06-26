//To Create quiz application
#include <stdio.h>

int main()
{
    int ans;
    int score = 0;

    printf("Q1. Capital of India?\n");
    printf("1. Mumbai\n2. Delhi\n3. Kolkata\n");
    scanf("%d", &ans);

    if (ans == 2)
    {
        score++;
    }

    printf("Q2. 5 + 5 = ?\n");
    printf("1. 10\n2. 15\n3. 20\n");
    scanf("%d", &ans);

    if (ans == 1)
    {
        score++;
    }

    printf("Q3. C is a ?\n");
    printf("1. Game\n2. Programming Language\n3. Browser\n");
    scanf("%d", &ans);

    if (ans == 2)
    {
        score++;
    }

    printf("Your Score = %d", score);

    return 0;
}