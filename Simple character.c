#include <stdio.h>
int main()
{
    char op;
int a, b;
printf ("Enter a, b values:");
scanf ("%d%d %c",&a,&b,&op);
switch(op)
{
    case'+':
    printf("The addition is%d",a+b);
    break;
    case'-':
    printf ("The subtraction is%d",a-b);
    break;
    case'*':
    printf ("The multiplication is%d",a*b);
    break;
    case'/':
    printf ("The division is%d",a/b);
    break;
    case'%':
    printf("The remainder is%d",a%b);
    break;
    default:
    printf("The invalid operator:");
    break;
}
}
