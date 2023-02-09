#include<stdio.h>
#include<conio.h>
#define MAX 40
typedef struct Stack
{
	char data[MAX];
	int top;
}stack;
void Infix_To_Postfix(char infix[], char postfix[]);
int precedence(char x);
char top(stack* s);
void init(stack* s);
void push(stack* s, char x);
char pop(stack* s);
void main()
{
	char infix[40], postfix[40];
	printf("Enter infix expression\n");
	gets(infix);
	Infix_To_Postfix(infix, postfix);
	printf("Postix expression is\n");
	puts(postfix);
	_getch();
}
void Infix_To_Postfix(char infix[], char postfix[])
{
	int i, j = 0;
	char token, x;
	stack s;
	init(&s);
	for (i = 0; infix[i] !='\0'; i++)
	{
		token = infix[i];
		if (isalnum(token))
		{
			postfix[j++] = token;
		}
		else if (token == '(')
		{
			push(&s, token);
		}
		else if (token == ')')
		{
			while ((x = pop(&s)) != '(')
			{
				postfix[j++] = x;
			}
		}
		else
		{
			while (precedence(token) <= precedence(top(&s)) && !empty(&s))
			{
				x = pop(&s);
				postfix[j++] = x;
			}
			push(&s, token);
		}
	}
	while (!empty(&s))
	{
		x = pop(&s);
		postfix[j++] = x;
	}
	postfix[j] = '\0';
}
int empty(stack* s)
{
	if (s->top == -1)
	{
		return(1);
	}
	else
	{
		return(0);
	}
}
int precedence(char x)
{
	if (x == '(')
		return 0;
	else if (x == '+' || x == '-')
		return 1;
	else if (x == '*' || x == '/')
		return 2;
	else
		return 3;
}
char top(stack* s)
{
	char x = s->data[s->top];
	return x;
}

void init(stack* s)
{
	s->top = -1;
}
void push(stack* s, char x)
{
	s->top = s->top + 1;
	s->data[s->top] = x;
}
char pop(stack* s)
{
	char x;
	x = s->data[s->top];
	s->top = s->top - 1;
	return x;
}