#include<Stdio.h>
#include<conio.h>
void age(int);//declaration
void main()
{
     int a;
    printf("Enter the age-->");
    scanf("%d",&a);
    age(a);//calling
    getch(); 
}
void age(int a)//definition
{

    
    if (a>=0 &&a<=5)
    printf("Infant");
    else if (a>=6 && a<=12)
    printf("Child");
    else if (a>=13 && a<=17)
    printf("Teenager");
    else if (a>=18 &&a<=35)
    printf("Young age");
     else 
    printf("Middle/old age");
}
