#include <stdio.h>
void quiz()
{
    printf("Hello");
}
int main()
{
    printf("Welcome to Menu Driven Quiz\n\nHit Enter to Begin!");
    char x;
    while((x=getchar())!='\n');
    quiz();
    return 0;
}