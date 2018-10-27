#include <iostream>

#define MAX_LEC 100
#define MAX_STU 100

using namespace std;

typedef struct
{
    string id, academic_degree, research_field;
    int age;
} Lecturers;

typedef struct
{
    string id, name, major;
    int age;
} Students;

typedef struct
{
    string name, description, location, ranking;
    Lecturers lecturers[MAX_LEC];
    Students students[MAX_STU];
} College;

int main()
{
    College a, b;
    a.name = "Dai hoc Bach Khoa";
    a.description = "thuoc DHQG TpHCM";
    a.location = "Quan 10, TpHCM";
    a.ranking = "Tot";
    a.lecturers[0].id = "123456";
    a.lecturers[0].academic_degree = "Tien si";
    a.lecturers[0].age = 28;
    a.lecturers[0].research_field = "Khoa hoc May tinh";
    a.students[0].age = 19;
    a.students[0].id = "1710000";
    a.students[0].major = "Khoa hoc May tinh";
    a.students[0].name = "Nguyen Van A";
    cout << a.name << "\t" << a.description << "\t" << a.location << "\t" << a.ranking << endl;
    cout << a.lecturers[0].id << "\t" << a.lecturers[0].age << "\t" << a.lecturers[0].academic_degree<< "\t" << a.lecturers[0].research_field << endl;
    cout << a.students[0].id << "\t" << a.students[0].name << "\t" << a.students[0].age << "\t" << a.students[0].major << endl;
    return 0;
}
