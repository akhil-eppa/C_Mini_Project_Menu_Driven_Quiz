#include <stdio.h>
#include <stdlib.h>
struct ques
{
    char q[150];//To store question
    int ans;//To store the right answer
    char opt[4][50];//To store 4 options to be displayed for a question each of max length 50
};

void Tech_Quiz()
{
    //Need to be filled using all other functions defined 
}

void Sports_Quiz()
{
    //Need to be filled using all other functions defined
}

void History_Quiz()
{
    //Need to be filled using all other functions defined
}

void Movies_Quiz()
{
    //Need to be filled using all other functions defined
}

void accept_ans(int *n)//accepts option and stores in the variable that pointer points to
{
    printf("Enter your option: ");
    do
    {
        scanf("%d",n);
    }while(*n<1 || *n>4);
}

int check_ans(int x,struct ques a)//x is the input given by the user, a is the correct answer
{
    if (x<1 || x>4)//If input is invalid function returns -1, So that valid input can be taken again.
        return -1;
    else if (x==a.ans)
        return 1;
    else 
        return 0;

}

void add_score(int *q)//Pointer variable is passed that holds location to variable that keeps score
{
    (*q)+=4;
}

void quiz()
{   int x;
    printf("1: Tech Quiz\n2: Sports Quiz\n3: History Quiz\n4: Movies and Music Quiz\n");
    do
    {
        printf("Enter your choice:");
        scanf("%d",&x);
    }while(x<1 || x>4);
    if (x==1)
        Tech_Quiz();
    else if(x==2)
        Sports_Quiz();
    else if(x==3)
        History_Quiz();
    else
        Movies_Quiz();    
}

int main()
{
    printf("Welcome to Menu Driven Quiz\n\nHit Enter to Begin!\nPress q followed by Enter to exit\n");
    char x;
    while((x=getchar())!='\n')
    {
        if (x=='q')
            exit(0);
    }
    quiz();
    return 0;
}
