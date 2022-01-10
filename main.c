#include <stdio.h>
#include <conio.h>

int main()
{
    int a, b;
    char CodingHero;

    printf("+  +    ++++    ++    ++\n");
    printf("+  +    +       + +  + +\n");
    printf("++++    ++++    +  ++  +\n");
    printf("+  +       +    +      +\n");
    printf("+  +    ++++    +      +\n");

    printf("Enter your choice\n");
    printf("a. Addition\nb. Subtraction\nc. Multiplication\nd. Division\n");
    scanf("%c", &CodingHero);


   printf("Enter 2 integer numbers\n");
   scanf("%d %d", &a, &b);


    switch(CodingHero)
    {
        case 'a': printf("%d + %d = %d\n", a, b, (a+b));
                break;

        case 'b': printf("%d - %d = %d\n", a, b, (a-b));
                break;

        case 'c': printf("%d x %d = %d\n", a, b, (a*b));
                break;

        case 'd': if( b != 0)
                    printf("%d / %d = %d\n", a, b, (a/b));
                else
                    printf("Number can't be divided by 0\n");
                break;

        default: printf("You entered wrong choice\n");
                 break;
    }

    getch();
}
