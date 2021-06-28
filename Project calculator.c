#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
int list();
void add_code();
void Stander_Calculator();
void Scientific_Calculator();
void logic();
int choice,i,a,b;
float x,y,result;
void main()
{
    system("color 9");
    printf("\n\n\t\t***************\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2  CALCULATOR  \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2****************");
    add_code();

}
void add_code()
{
    while(1)
    {
    switch(list())
        {
            case 1:
                Stander_Calculator();
                break;
            case 2:
                Scientific_Calculator();
                break;
            case 3:
                exit(0);
            default:
                printf("\nInvalid: ID choice  Press any Key to restart Calculator");
                getch();
                system("cls");
                main();
        }
    }
}
int list()
{
    int ch;
    printf("\n\n\t\t\t1. Stander Calculator ");
    printf("\n\t\t\t2. Scientific Calculator ");
    printf("\n\t\t\t3. Exit ");
    printf("\n\n\t\t\t Enter your Choice: ");
    scanf("%d",&ch);
    return (ch);
}
void Stander_Calculator()
{
        system("cls");
        system("color 2");
    do
    {
        printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n");
        printf("5. Square root\n6. X^Y\n7. X^2\n8. X^3\n");
        printf("9. 1/X\n10. X^(1/Y)\n11. X^(1/3)\n");
         printf("Choice: ");
        scanf("%d",&choice);
        if(choice == 0) exit(0);
        switch(choice)
        {
        case 1:
            printf("Enter X: ");
            scanf("%f",&x);
            printf("\nEnter Y: ");
            scanf("%f",&y);
            result = x+y;
            printf("Result : %f",result);
            logic();
            break;

        case 2:
            printf("Enter X: ");
            scanf("%f",&x);
            printf("\nEnter Y: ");
            scanf("%f",&y);
            result = x-y;
            printf("Result : %f",result);
            logic();
            break;
        case 3:
            printf("Enter X: ");
            scanf("%f",&x);
            printf("\nEnter Y: ");
            scanf("%f",&y);
            result = x*y;
            printf("Result : %f",result);
            logic();
            break;
        case 4:
            printf("Enter X: ");
            scanf("%f", &x);
            printf("\nEnter Y: ");
            scanf("%f", &y);
            result= x/y;
            printf("\nResult: %f", result);
            logic();
            break;
        case 5:
            printf("Enter X: ");
            scanf("%f", &x);
            result = sqrt (x);
            printf("\nResult: %f", result);
            logic();
            break;
        case 6:
            printf("Enter X: ");
            scanf("%f", &x);
            printf("\nEnter Y: ");
            scanf("%f", &y);
            result = pow(x ,y);
            printf("\nResult: %f", result);
            logic();
            break;
        case 7:
            printf("Enter X: ");
            scanf("%f", &x);
            result = pow (x ,2);
            printf("\nResult: %f", result);
            logic();
            break;
        case 8:
            printf("Enter X:");
            scanf("%f",&x);
            result = pow(x, 3);
            printf("\nResult: %f", result);
            logic();
            break;
        case 9:
            printf("Enter X: ");
            scanf("%f", &x);
            result = pow(x, -1);
            printf("\nResult: %f", result);
            logic();
            break;
        case 10:
            printf("Enter X: ");
            scanf("%f",&x);
            printf("\nEnter Y: ");
            scanf("%f", &y);
            result = pow(x, (1/y));
            printf("\nResult: %f", result);
            logic();
            break;
        case 11:
            printf("Enter X: ");
            scanf("%f", &x);
            y = 3;
            result = pow(x, (1/y));
            printf("\nResult:", result);
            break;
            default:
            printf("\nInvalid Choice");
            system("cls");
        }
    }
            while(choice);
            getch();
}
void Scientific_Calculator()
{
    system("cls");
    system("color 2");
    do
    {
        printf("1. 10^X\n2. X!\n3. Percentage\n4.log10(x)\n5. Modulus\n");
        printf("6. Sin(X)\n7. Cos(X)\n8. Tan(X)\n9. Cosec(X)\n");
        printf("10. (X)\n11. Sec(X)\n");
        printf("Choice: ");
        scanf("%d",&choice);
        if(choice == 0) exit(0);
        switch(choice)
        {
        case 1:
            printf("Enter X: ");
            scanf("%f", &x);
            result = pow(10, x);
            printf("\nResult: %f", result);
            logic();
            break;
        case 2:
            printf( "Enter X: ");
            scanf("%f",&x);
            result = 1;
            for(i = 1;i<=x; i++)
                {
            result = result *i;
            }
            printf("\nResult: %f",result);
            logic();
            break;
        case 3:
            printf("Enter X: ");
            scanf("%f",&x);
            printf("\nEnter Y:");
            scanf("%f",&y);
            result = (x*y)/100;
            printf("\nResult:%2f",result);
            logic();
            break;
        case 4:
            printf("Enter X:");
            scanf("%f",&x);
            result = log10(x);
            printf("\nResult:%2f",result);
            logic();
            break;
        case 5:
            printf("Enter X:");
            scanf("%d",&a);
            printf("\nEnter Y:");
            scanf("%d",&b);
            result = a % b;
            printf("\nResult: %d",result);
            logic();
            break;
        case 6:
            printf("enter X: ");
            scanf("%f", &x);
            result= sin(x*314159/180);
            printf("\nResult : %2f", result);
            logic();
            break;
        case 7:
            printf("enter X: ");
            scanf("%f", &x);
            result= cos(x*314159/180);
            printf("\nResult : %2f", result);
            logic();
            break;
        case 8:
            printf("enter X: ");
            scanf("%f", &x);
            result= tan(x*314159/180);
            printf("\nResult : %2f", result);
            logic();
            break;
        case 9:
            printf("enter X: ");
            scanf("%f", &x);
            result= 1/(sin(x*314159/180));
            printf("\nResult : %2f", result);
            logic();
            break;
        case 10:
            printf("enter X: ");
            scanf("%f", &x);
            result= 1/(tan(x*314159/180));
            printf("\nResult : %2f", result);
            logic();
            break;
        case 11:
            printf("enter X: ");
            scanf("%f", &x);
            result= 1/(cos(x*314159/180));
            printf("\nResult : %2f", result);
            logic();
            break;
            default:
            printf("\nInvalid Choice");
            system("cls");
        }
    }
            while(choice);
            getch();
}
void logic()
{
    int z;
    system("color 2");
    printf("\n\t\t Press 1 for Back to Calculator: ");
    scanf("%d",&z);
    if(z==1){
          system("cls");
          main();
    }
    else{
           printf("\n\t\t Invalid!......................................\n");
           exit(0);
        }
}
