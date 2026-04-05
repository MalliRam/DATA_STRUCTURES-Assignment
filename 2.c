#include<stdio.h>
#include<string.h>

char stack[100];
int top=-1;

int main()
{
    char exp[100];
    int i,flag=1;

    printf("Enter expression: ");
    scanf("%s",exp);

    for(i=0;i<strlen(exp);i++)
    {
        if(exp[i]=='(')
        {
            stack[++top]='(';
        }
        else if(exp[i]==')')
        {
            if(top==-1)
            {
                flag=0;
                break;
            }
            top--;
        }
    }

    if(top!=-1)
        flag=0;

    if(flag==1)
        printf("Balanced expression");
    else
        printf("Not balanced");

    return 0;
}