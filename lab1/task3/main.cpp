#include <iostream>
#include <string>

using namespace std;

class Course
 {
 public:

     string course_code ;
     string course_name;

     void setDetails(const string& code, const string& name)
     {
         course_code = code;
         course_name = name;

     }

 };
class Grade
 {
 public:

     int mark;
     char grade;
     void Getgrade()
     {
         if (mark>69)
            grade='A';
         else if (mark>59)
            grade='B';
         else if (mark>49)
            grade='C';
         else if (mark>39)
            grade='D';
         else
            grade='E';
     }
 };
 class Student
 {
 public:

     string regNum ;
     string name ;
     int age;
     Course course;
     Grade grades;

     void changeDetails()
     {
       cout << "Enter The Registration Number (Up to 20 characters):" ;
       getline (cin,regNum);
       cout << "Enter The Name (Up to 50 characters):";
       getline (cin, name);
       cout <<"Enter The Age:";
       cin>> age;
       cout <<"Enter Course details:\n";
       cout <<"   The Course Code:";
       cin>> course.course_code;
       cout<< "   The Course Name:";
       cin.ignore();
       getline(cin, course.course_name);

     }
     void CalculateGrade()
     {
         cout <<"Enter The Student's mark (0-100):";
         cin>> grades.mark;

         grades.Getgrade();
         cout<< "Final Grade: "<< grades.grade<< endl;
     }
     void displayInfo()
     const
     {
         cout << "Registration Number: "<< regNum<< endl;
         cout << "Name: " << name<< endl;
         cout << "Age:" << age << endl;
         cout << "Course Code: "<< course.course_code<< endl;
         cout<<  "Course Name: "<< course.course_name<< endl;
         cout<<  "Mark:"<< grades.mark<< endl;
         cout<<  "Grade"<<grades.grade<< endl;
     }
 };

int main()
{

    const int MAXIMUM_STUDENTS =40;
    Student students[MAXIMUM_STUDENTS];

     for (int i=0; i<MAXIMUM_STUDENTS; ++i)
       {
           cout<< "Enter The Details for #" << i+1<< endl;
           students[i].changeDetails();
           students[i].CalculateGrade();
           students[i].displayInfo();
           cout<<"-------------------------------"<<endl;
       }

       return 0;
}
