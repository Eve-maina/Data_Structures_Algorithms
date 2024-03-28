#include <stdio.h>
#include <stdlib.h>

#define MAXIMUM_STUDENTS 40
#define MAXIMUM_NAME_LENGTH 50
#define MAXIMUM_REG_LENGTH 20

struct Course
{
    char courseCode;
    char courseName;
};

struct Grade
{
    int mark;
    char theGrade;
};

struct Student
{
    char regNum [MAXIMUM_REG_LENGTH];
    char name [MAXIMUM_NAME_LENGTH];
    int age;
    struct Course course;
    struct Grade grades;
};
void changeStudentsDetails (struct Student *student);
void getGrade (struct Student *student);


int main()
{
   struct Student students [MAXIMUM_STUDENTS];

   for (int i=0; i< MAXIMUM_STUDENTS; ++i)
   {
       printf("Enter details for Student #%d\n" ,i+1);
       changeStudentsDetails(&students[i]);
       getGrade (&students[i]);
       printf ("_________________________________________\n");

   }

   return 0;
}

void changeStudentsDetails (struct Student *student)
{
    printf("Enter The Student's registration Number (Up to 20 characters):");
    fgets(student->regNum, sizeof(student->regNum), stdin);
    strtok(student->regNum, "\n");

    printf("Enter The Student's Name (Up to 50 characters):");
    fgets(student->name, sizeof(student->name),stdin);
    strtok(student->name, "\n");

    printf("Enter The Student's Age:");
    scanf("%d", &student->age);

    printf("Enter course details:\n");
    printf("  Course Code: ");
    scanf("%s", &student->course.courseCode);
    printf("  Course Name: ");
    getchar();
    scanf("%s", &student->course.courseName);

}
void getGrade (struct Student *student)
{
    printf("Enter The Student's Mark (0-100): ");
    scanf("%d" , &student->grades.mark);

    if(student->grades.mark >69)
        student->grades.theGrade = 'A';
    else if (student->grades.mark >59)
        student->grades.theGrade = 'B';
    else if (student->grades.mark >49)
        student->grades.theGrade ='C';
    else if (student->grades.mark >39)
        student->grades.theGrade ='D';
    else
        student->grades.theGrade ='E';

    printf("The Grade is %c\n" , student->grades.theGrade);
}
