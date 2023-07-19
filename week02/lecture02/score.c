#include <stdio.h>
#include <cs50.h>

const int N = 3;

float average(int array[]);

int main(void)
{
    int scores[N];
    

    for (int i = 0; i < N; i++)
    {
        scores[i] = get_int("Score: ");
    }

    printf("Average: %f\n", average(scores));

    // printf("Average: %f\n", (score1 + score2 + score3) / 3.0);
    // printf("Average: %f\n", (score1 + score2 + score3) / (float)3);
}

float average(int array[])
{
    int sum = 0;
    for (int i = 0; i < N; i++)
    {
        sum = sum + array[i];
    }
    return sum / (float) N; 
}