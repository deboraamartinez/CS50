#include <cs50.h>
#include <stdio.h>


int main(void)
{
    string answer = get_string("Whats your name? ");
    string last = get_string("Whats your last name? ");
    printf("Hello, %s %s\n", answer, last);
}