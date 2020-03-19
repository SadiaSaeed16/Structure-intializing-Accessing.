#include<stdio.h>
#include<string.h>
 
 int main()
 {
 
 struct student
 {
 	int roll_no;
 	char name[30];
 	float marks;
 	
 };
 struct student std1={1, "Asima", 220};
 struct student std2, std3;
 std2.roll_no=2;
 strcpy (std2.name, "Ahad");
 std2.marks=230;
 std3.roll_no=3;
 strcpy (std3.name, "Saima");
 std3.marks=240;
 
 printf("First student\n");
 printf("roll_no: %d\n", std1.roll_no);
 printf("marks : %f\n", std1.marks);
 printf("name : %s\n", std1.name);
 
 printf("Second student\n");
 printf("roll_no: %d\n", std2.roll_no);
 printf("marks : %f\n", std2.marks);
 printf("name : %s\n", std2.name);
 
 printf("Third student\n");
 printf("roll_no: %d\n", std3.roll_no);
 printf("marks : %f\n", std3.marks);
 printf("name : %s\n", std3.name);
 
 return 0;
}
 
