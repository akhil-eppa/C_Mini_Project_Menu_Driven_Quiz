struct ques
{
    char q[200];//To store question
    int ans;//To store the right answer
    char o[4][50];
	/*char o2[50];
	char o3[50];
	char o4[50];*/ //To store 4 options to be displayed for a question each of max length 50
};

void display(struct ques* x);
void Tech_Quiz();
void Sports_Quiz();
void History_Quiz();
void Movies_Quiz();
void accept_ans(int *n);
int check_ans(int x,struct ques* a);
void add_score(int *q);
void save_score(int a);
void quiz();

