#include <stdio.h>
#include <string.h>

char stack[100];
int top = -1;

int main()
{
    char str[100];
    int i;

    printf("Enter the string: ");
    scanf("%s", str);

    // Push into stack
    for(i = 0; i < strlen(str); i++){
        top++;
        stack[top] = str[i];
    }

    // Pop and print reversed string
    printf("Reversed string: ");
    for(i = top; i >= 0; i--){
        printf("%c", stack[i]);
    }

    return 0;
}