#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>

bool isValid(char * s){
    char *stack;
    int top = -1;
    int length = strlen(s);
    stack = (char *) calloc (sizeof(char), length);

    for (int i = 0; i < length; ++i) {
        //printf("%d ", top);
        if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
            stack[++top] = s[i];
        } else if (s[i] == ')' && (top == -1 || stack[top] != '(')) {
            return false;
        } else if (s[i] == '}' && (top == -1 || stack[top] != '{')) {
            return false;
        } else if (s[i] == ']' && (top == -1 || stack[top] != '[')) {
            return false;
        } else if (s[i] == ')' || s[i] == '}' || s[i] == ']') {
            top--;
        }
    }
    return top == -1;
}

int main()
{
    char s[] = "({}[])";
    printf("%d\n",isValid(s));
    return 0;
}

