#include<Stdio.h>
#include<conio.h>
void pos();
void main()
{
     pos();//calling
     getch();
}
void pos()
{
     
     
    int a;
    printf("Enter the no.-->");
    scanf("%d",&a);
    if(a>0)
    printf("a is positive no.");
    else if(a==0)
    printf ("a is  0");
    else
    printf("a is negative");
    
}

