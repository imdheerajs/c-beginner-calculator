#include <stdio.h>
int main()
{
    printf("hello word\n");
    int a;
    int b;
    int f;
    printf("WELCOME TO THIS CLACULATOR \n    ");
    do
    {
        printf(" please entre a first number\n");
        scanf("%d",&a);
        printf("Your number is : ");
        printf("%d\n",a);
        printf("now entre a second number :");
        scanf("%d",&b);
        int c;
        printf("your second number is this :%d\n",b);
        printf("now entre your operator \n");
        printf("entre 1 for additon\n");
        printf("entre 2 for minus \n");
        printf("entre 3 for multiply\n");
        printf("entre 4 for divide \n");
        scanf("%d",&c);
        printf("Your Answer is :");
        if (c==1) {
            printf("%d",a+b);
        }
        else if (c==2)
        {
            printf("%d",a-b);
        }
        else if (c==3) {
            printf("%d",a*b);
        }
        else if (c==4) {
            float d=(float)a/b;
            printf("%f",d);
        }
        else {
            printf("YOU MAKE A MISTAKE ");
        }
        printf("\nIF YOU WNAT TO USE AGAIN CALCUALTOR SHOW ENTRE '1' IF YOU NOT USE CALCULATOR SHOW ENTRE ANY NUMBER\n");
        scanf("%d",&f);
    } while (f == 1);
        printf("THANK YOU FOR USING A CALCULATOR ");
    return 0;

}