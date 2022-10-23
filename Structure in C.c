#include <stdio.h>
#include <string.h>
// user ddefined
struct student {
    int roll;
	float cgpa;
	char name[100];	
  };
  
int main() 
{
  struct student s1;
  s1.roll = 2000;
  s1.cgpa = 9.2;
  // s1.name ="student";
  strcpy(s1.name,"mrinmoy");		 
  printf("student name = %s\n",s1.name);
  printf("student roll no = %d\n",s1.roll);
  printf("student cgpa = %f\n",s1.cgpa);
  
  struct student s2;
  s2.roll = 123;
  s2.cgpa = 9.2;
  strcpy(s2.name, "Sudip");
  printf("2nd student name = %s\n",s2.name);
  printf("2nd student roll = %d\n", s2.roll);
  printf("2nd student cgpa = %f\n", s2.cgpa);
  
  struct student s3;
  s3.roll = 124;
  s3.cgpa = 7.5;
  strcpy(s3.name, "Subho");
  printf("3rd student name = %s\n",s3.name);
  printf("3rd student roll = %d\n", s3.roll);
  printf("3rd student cgpa = %f\n",s3.cgpa);
   
   return 0;
   }  