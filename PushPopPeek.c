#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>


typedef struct
{
	char home[35];
	int top;
} My_stack;

void push(My_stack*, char);
void pop(My_stack*);
int is_empty(My_stack*);



int main(void)
{
	
	My_stack st;
	char input[50];
	int i = 0;

	st.top = -1;
	printf("Enter the sequence (length is limited!): ");
	gets(input);
	printf("RESULT (after performing pop operation): ");
	while (input[i] != '\0')
	{
		if (input[i] == '*')
			pop(&st);
		else if (!isalpha(input[i]))
		{
			printf("ERROR: Wrong input symbol – program terminates!\n");
			exit(1);
		}
		if (input[i] == 'A' || input[i] == 'E' || input[i] == 'I' || input[i] == 'O' || input[i] == 'U')
			push(&st, input[i]);
		i++;
	}


	

	return 0;
}


void push(My_stack* s, char c)
{
	s->top++;
	s->home[s->top] = c;
}

void pop(My_stack* s)
{
	if (is_empty(s))
	{
		printf("ERROR: Nothing to pop - program terminates\n");
		exit(1);
	}
	printf("%c", s->home[s->top--]);
}

int is_empty(My_stack* s)
{
	return(s->top < 0 ? 1 : 0);
}

/*FE* NERBA* HCE** AND FE* NE* RBA* HCE* */


