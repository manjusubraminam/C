//Autopolymorphic no.check
#include<Stdio.h>
#include<conio.h>
void main()
{
     int a;
     printf("Enter the no.-->");
     scanf("%d",&a);
     if ((a*a)%10==a)
     printf("a is an autopolymorphic no.");
     else
     printf("a is not an autopolymorphic no.");
     getch();
}