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
     int a[5][5],i,j,nrow,ncol;
     printf("Enter the range->");
     scanf("%d %d",&nrow,&ncol);
     for(i=0;i<nrow;i++)
     {
            for(j=0;j<ncol;j++)
            {
                  printf("Enter the number->");
                  scanf("%d",&a[i][j]);
            }
     }
      for(i=0;i<nrow;i++)
     {
            for(j=0;j<ncol;j++)
            {
                  printf("The value at position a[%d][%d] is ->%d",i,j,a[i][j]);
            }
            printf("\n");
     }
getch();
}
