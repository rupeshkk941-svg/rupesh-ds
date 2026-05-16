#include<stdio.h>
struct student
{
int rollNumber;
char name[50];
float marks;
};
int main()
{
 int i,n;
 printf("Enter the number of students :");
 scanf("%d", &n);
 struct student students[50];
 for(i=0;i<n;i++)
 {
 printf("\nEnter details for student %d\n", i+1);
 printf("Roll number :");
 scanf("%d", &students[i].rollNumber);
 printf("Name: ");
 scanf(" %[^\n]" , students[i].name);
 printf("marks:");
 scanf("%f",&students[i] .marks);
}
printf("\n student details\n");
for(i=0;i<n; i++)
{
printf("\n student %d\n", i+1);
printf("Roll niumber :%d\n", students[i].rollNumber);
printf("Name   :%s\n", students[i].name);
printf("Marks   :%.2f\n"  , students[i].marks);
}
 return 0;
}
