#include <iostream>
using namespace std;

class Course
{

public:
    string CourseCode;
    string CourseName;
    string Instructor;

    void setCourseDetails(string code, string name, string instructor)
    {
        CourseCode = code;
        CourseName = name;
        Instructor = instructor;
    }

    void displayCourses()
    {
        cout << "The University Course Details are:" << endl;
        cout << "CourseCode is " << CourseCode << " with name " << CourseName << " and instructor is " << Instructor << endl;
    }
};

int main()
{
    Course Data[3];

    Data[0].setCourseDetails("BCA102", "C++", "Kanika Kundu");
    Data[1].setCourseDetails("BCA103", "C", "Neetu Narwal");
    Data[2].setCourseDetails("BCA102", "Python", "Harjender Singh");

    for(int i=0;i<3;i++)
    {
        Data[i].displayCourses();
    }
}