/*ALL THESE WORKS ARE DONE BY 

ANKITA SIKDER

STUDENT OF BTECH, IN UEMK

CONTACT NO.: 8583939774

EMAIL ID: ankita.sikder14@gmail.com
*/
#include<Stdio.h>
#include<conio.h>
void main()
{
     int x,y;
     printf("The co-ordinate is(x,y)->");
     scanf("%d %d",&x,&y);
     if(x==0 && y==0)
     printf("It is on Origin");
     else if(x==0)
     printf("It is on Y axis");
     else if(y==0)
     printf("It is on X axis");
     else
     printf("On any quadrent");
getch();
}
