#include <stdio.h>
#include <string.h>

struct Student
{
    char name[12];
    float gpa;
};


int main()
{
    struct Student student1 = {"Spongebob", 3.0};
    struct Student student2 = {"Patrick", 2.0};
    struct Student student3 = {"Sandy", 4.0};
    struct Student student4 = {"Squidward", 4.0};

    struct Student students[] = {student1, student2, student3, student4};

    // you can use a for loop in order to loop through and display each student's name

    for(int i = 0; i < sizeof(students)/sizeof(students[0]); i++)
    {
        printf("%-12s\t", students[i].name); // code to print the students name
        printf("%.1f\n", students[i].gpa); // code to print the students gpa
    }

    return 0;
}