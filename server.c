#include "inter.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void display(struct ques* x)
{printf("\n---------------------------------------------------------------\nQuestion :\n%s\n1.%-30s2.%-30s\n3.%-30s4.%-30s\n",(*x).q,(*x).o[0],(*x).o[1],(*x).o[2],(*x).o[3]);}

void accept_ans(int *n)//accepts option and stores in the variable that pointer points to
{	int count=0;
    printf("Enter your option (1-4):");
    do
    {	
        scanf("%d",n);
    }while(*n<1 || *n>4);
}

int check_ans(int x,struct ques* a)//x is the input given by the user, a is the correct answer
{
    if (x<1 || x>4)//If input is invalid function returns -1, So that valid input can be taken again.
        return -1;
    else if (x==(*a).ans)
        return 1;
    else 
        return 0;

}

void add_score(int *q)//Pointer variable is passed that holds location to variable that keeps score
{
    (*q)+=4;
}

void Tech_Quiz()
{
	//struct ques* x=(struct ques*)(calloc(2,sizeof(struct ques)));
	struct ques x[5]={{"question",1,{"a","b","c","d"}},
					{"question2",3,{"a","b","c","d"}},
					{"question3",3,{"a","b","c","d"}},
					{"question4",3,{"a","b","c","d"}},
					{"question5",3,{"a","b","c","d"}}};
	int i;int ch;int t;int score=0;
	for (i=0;i<5;++i)
	{
		display(&(x[i]));
		accept_ans(&ch);
		if (check_ans(ch,&x[i])==1)
		{printf("\nGreat Answer!\n");
		add_score(&score);}
		else
		{printf("\nWrong Answer!\n");
		printf("The correct answer is option '%d'\n",x[i].ans);
		}
		
	}
	printf("\n----------||Your Score: %d||-----------\n",score);
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

