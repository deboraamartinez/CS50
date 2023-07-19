#include <cs50.h>
#include <stdio.h>

int get_start_population(void);
int get_end_population(int start_population);

int main(void)
{
    // Get start population
    int start_population = get_start_population();

    // Get end population
    int end = get_end_population(start_population);

    // Calculate number of years until we reach threshold
    int year = 0;

    while (start_population < end)
    {
        start_population = start_population + (start_population / 3) - (start_population / 4);
        year++;
    };

    // Print number of years
    printf("Years: %i\n", year);
}

int get_start_population(void)
{
    int n;
    do
    {
        n = get_int("Starting Population: ");
    } while (n < 9);
    return n;
}

int get_end_population(int start_population)
{
    int end_population = 0;
    do
    {
        end_population = get_int("Ending Population:  ");
    } while (end_population < start_population);
    return end_population;
}
