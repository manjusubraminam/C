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
    int i,n,s=0,j=1,s1=0;
    printf("Enter the range-->");
    scanf("%d",&n);
    for(i=2;i<=n;i++)
    {
            s=s+i;
            s1=s1+j;
            printf("%d/%d+ ",j,i);
            j++;
    }
     printf("=%d/%d",s1,s);
getch();
}
