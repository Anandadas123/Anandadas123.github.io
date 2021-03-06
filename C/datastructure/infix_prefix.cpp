#include<stdio.h>
#include<conio.h>
#include<string.h>
#define SIZE 50
void postfix_notation(int);
int i,top=1;
char stack[SIZE]={'#','('};
void push(char);
int pop();
int priority(char);
char infix[SIZE],postfix[SIZE];
int main()
{
	int length,p;
	printf("\n enter the infix notation::");
	gets(infix);
	strrev(infix);
	length=strlen(infix);
	for(p=0;p<length;p++)
	{
		if(infix[p]=='(')
			infix[p]=')';
		else if(infix[p]==')')
			infix[p]='(';
	}
	infix[length++]=')';
	infix[length]='\0';
	printf("%s",infix);
	postfix_notation(length);
	strrev(postfix);
	printf("\n  the pre_fix notation is::\n");
	printf("%s",postfix);
}
void postfix_notation(int p)
{
	int r=0;
	char ch;
	for(i=0;i<p;i++)
	{
		switch(infix[i])
		{
			case '(':
				push(infix[i]);
				break;
			case ')':
				while((ch=pop())!='(')
					postfix[r++]=ch;
				break;
			case '+':
			case '-':
			case '*':
			case '/':
			case '%':
			case '^':
			while(priority(stack[top])>=priority(infix[i]))
				postfix[r++]=pop();
			push(infix[i]);
			break;
			default:
				postfix[r++]=infix[i];
		}
	}
	postfix[r++]='\0';
}
void push(char q)
{
	if(top<SIZE)
	{
		top++;
		stack[top]=q;

	}
	else
		printf("\nthe stack is full");
}
int pop()
{
	if(stack[top]>0)
	{
		return (stack[top--]);
	}
}
int priority(char s)
{
	switch(s)
	{
		case '(':
			return 0;
		case '+':
		case '-':
			return 1;
		case '*':
		case '/':
		case '%':
			return 2;
		case '^':
			return 3;
	}
}
