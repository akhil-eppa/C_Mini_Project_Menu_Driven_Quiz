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

	struct ques x[5]={{"What does AM mean ?",2,{"Anglo Marconi","Amplitude Modulation","Ampere","Anno median"}},

					{"Which is the latest satellite to be launched by ISRO ?",1,{"GSAT-31","GSAT-11","Jugnu","Chandrayan-1"}},

					{"Which among the following is the virtual assistant created by Microsoft for windows 10 platforms",3,{"Alexa","Siri","Cortana","Bixby"}},

					{"Which of the following is not a 21st century invention ?",3,{"IPhone","Skype","Google","YouTube"}},

					{"Who is the inventor of television sets ?",1,{"John L Baird","Charles Babbage","John Vincent","Stanley Mazor"}}};

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
		score=score-2;
		}



	}

	printf("\n----------||Your Score: %d||-----------\n",score);

}



void Sports_Quiz()

{

    struct ques x[5]={{"Which type of court is Wimbledon played ?",1,{"Grass","Clay","Hard","Carpet"}},

					{"Who is the ICC top ranked player in test cricket ?",4,{"Steve Smith","Kane Williamson","Joe Root","Virat Kohli"}},

					{"Which among the following is the kit sponsor of football club FC Barcelona ?",4,{"Adidas","Puma","Reebok","Nike"}},

					{"What is the length of cricket pitch in international cricket ?",2,{"23 yards","22 yards","24 yards","21 yards"}},

					{"Who is the highest paid cricketer in the world ?",1,{"Virat Kohli","AB de Villiers","MS Dhoni","Chris Gayle"}}};

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
		score=score-2;

		}



	}

	printf("\n----------||Your Score: %d||-----------\n",score);


}



void History_Quiz()

{

struct ques x[5]={{"Which battle was fought between Maharana Pratap and Akbar",1,{"Battle of Haldighati","Battle of Buxar","Battle of Panipat","Battle of Plassey"}},

					{"Which was not an Axis nation in World War II ?",3,{"Italy","Belgium","Germany","France"}},

					{"When was RamKrishna Mission formed ?",3,{"1900","1866","1897","1921"}},

					{"When was the constitution of India adopted ?",3,{"26 Jan 1950","15 Aug 1947","26 Nov 1949","15 Aug 1950"}},

					{"When was the UN formed ?",1,{"1945","1950","1961","1948"}}};

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
		score=score-2;
		}



	}

	printf("\n----------||Your Score: %d||-----------\n",score);


}



void Movies_Quiz()

{

struct ques x[5]={{"For which movie did Leonardo DiCaprio win an Oscar for ?",3,{"Shutter Island","Inception","The Revenant","Blood Diamond"}},

					{"In Harry Potter who plays Ron Weasley in the movie?",4,{"Macaulay Culkin","Robin Pinter","Robert Grant","Rupert Grint"}},

					{"The famous movie series, Kill Bill is directed by ?",1,{"Quentin Tarantino","David Fincher","Stanley Kubrick","Steven Spielberg"}},

					{"What is Will Smith's name in Men in Black series ?",1,{"Agent J","Agent R","Agent M","Agent K"}},

					{"Which film won Best Animated Feature Film in Oscars 2019",3,{"Mirai","Ralph breaks the Internet","Incredibles 2","Spider-Man: Into The Spider-Verse"}}};

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
		score=score-2;
		}



	}

	printf("\n----------||Your Score: %d||-----------\n",score);


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
