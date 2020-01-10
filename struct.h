#define BACKLOG 5
#define MAX 8192
#define QUES_FILENAME "question.txt"
#define QUES_IN_LEVER 10
#define QUES_NUMBER 30
typedef struct node
{
	char username[MAX];
	char password[MAX];
	int status1;
	int status2;
	int status3;
	int status4;
	struct node *next;
} node_t;
typedef struct question
{
	int id;
	int level; //có 4 nhóm tính cách đối lập
	char content[200];
	char choiceA[50];
	char choiceB[50];
	char answer1[50];
	char answer2[50];
} Question;
typedef struct message
{
	char content[8192];
	char answer[11];
} Message;