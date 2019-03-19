#include <stdio.h>
#include <stdlib.h>
#include "inter.h"

int main()
{
    printf("Welcome to Menu Driven Quiz\nRULES:\n->Each correct answer fetches 4 points\n->No negative marking\nHit Enter to Begin!\nPress q followed by Enter to exit\n");
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
	}
    return 0;
}
