//1.Write a simple program in C to make use of all the arithmatic operators(+,-,*,%)

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
     int a,b,sum,sub,mul,mod;
     printf("Enter the two numbers=");
     scanf("%d %d",&a,&b);
     sum=a+b;
     sub=a-b;
     mul=a*b;
     mod=a%b;
     printf("The sum is=%d \n",sum);
     printf("The substraction is=%d \n",sub);
     printf("The multiplication is=%d \n",mul);
     printf("The modulus is=%d",mod);
     getch();
}
