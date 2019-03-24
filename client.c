#include <stdio.h>
#include <stdlib.h>
#include "inter.h"

int main()
{
    printf("Welcome to Menu Driven Quiz\nRULES:\n->Each correct answer fetches 4 points\n->An incorrect answer gives (-2)\n->You can make a choice from 4 categories\n\n||Hit Enter to Begin!||\n(Press [q followed by enter] to exit)\n");
    char x;int ch=1;
    while((x=getchar())!='\n')
    {
        if (x=='q')
            exit(0);
    }
	while (ch==1)
    {quiz();
	printf("Do you want to take the quiz again?(1 for yes and 0 for no) :");
	
	scanf("%d",&ch);
	if (ch==1)
		system("clear");
	else if (ch==0)
	{
		printf("\n\nThanks for taking the quiz! See you soon.....\n\n");
	}
	}
    return 0;
}
