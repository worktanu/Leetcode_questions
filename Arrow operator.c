#include <stdio.h>
#include <string.h>
  struct student{
  	int roll;
  	float cgpa;
  	char name[100];
  	
  };  
int main()
  {
     struct student s1 = {83,9.2,"sonu"};
     struct student *ptr = &s1;
	 printf("student -> roll = %d\n", ptr -> roll);
	  printf("student -> name = %s\n", ptr -> name);
	printf("student -> cgpa = %f\n", ptr -> cgpa);  
	 
  }