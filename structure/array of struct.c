//array of structure
/*ALL THESE WORKS ARE DONE BY 

ANKITA SIKDER

STUDENT OF BTECH, IN UEMK

CONTACT NO.: 8583939774

EMAIL ID: ankita.sikder14@gmail.com
*/
#include <stdio.h>
#include <string.h>
struct student{
   int id;
   char name[30];
   float percentage;
};
int main(){
   int i;
   struct student record[2];
   // 1st student's record
   record[0].id=1;
   strcpy(record[0].name, "Ankita");
   record[0].percentage = 86;
   // 2nd student's record
   record[1].id=2;
   strcpy(record[1].name, "Biswa");
   record[1].percentage = 90;
   // 3rd student's record
   record[2].id=3;
   strcpy(record[2].name, "Mona");
   record[2].percentage = 95;
   for(i=0; i<3; i++){
      printf(" Records of STUDENT : %d \n", i+1);
      printf(" Id is: %d \n", record[i].id);
      printf(" Name is: %s \n", record[i].name);
      printf(" Percentage is: %f\n\n",record[i].percentage);
   }
   return 0;
}
