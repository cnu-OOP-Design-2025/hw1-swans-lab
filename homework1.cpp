#include <iostream>
#include <string>
#include "homework1.h"

StudentStruct students[100];
int numOfStudent = 0;

void fillStudentRecord(){
    addStudent("Alice", 1001, 90.7, 91.0);
    addStudent("Bob", 1002, 68.5, 74.8);
    addStudent("Charlie", 1003, 84.2, 72.8);
    addStudent("David", 1004, 63.7, 77.6);
    addStudent("Eva", 1005, 97.0, 89.6);
    addStudent("Frank", 1006, 83.0, 62.2);
    addStudent("Grace", 1007, 74.6, 96.0);
    addStudent("Hannah", 1008, 89.5, 82.4);
    addStudent("Ian", 1009, 98.4, 91.3);
    addStudent("Jane", 1010, 65.6, 84.0);
    addStudent("Kevin", 1011, 91.7, 83.1);
    addStudent("Laura", 1012, 78.2, 61.7);
    addStudent("Mike", 1013, 81.8, 69.6);
    addStudent("Nina", 1014, 83.6, 69.6);
    addStudent("Oscar", 1015, 63.9, 98.7);
    addStudent("Paula", 1016, 67.4, 81.2);
    addStudent("Quinn", 1017, 98.3, 79.8);
    addStudent("Rachel", 1018, 89.0, 67.7);
    addStudent("Steve", 1019, 89.4, 96.6);
    addStudent("Tina", 1020, 95.1, 76.8);
    addStudent("Uma", 1021, 91.7, 77.2);
    addStudent("Victor", 1022, 93.8, 77.3);
    addStudent("Wendy", 1023, 86.2, 96.7);
    addStudent("Xander", 1024, 90.2, 73.3);
    addStudent("Yvonne", 1025, 87.3, 98.6);
    addStudent("Zack", 1026, 85.8, 70.8);
    addStudent("Amber", 1027, 74.2, 98.1);
    addStudent("Brian", 1028, 79.2, 69.2);
    addStudent("Cathy", 1029, 86.1, 82.2);
    addStudent("Derek", 1030, 73.1, 100.0);
    addStudent("Elena", 1031, 62.1, 84.8);
    addStudent("Fred", 1032, 65.4, 60.7);
    addStudent("Gina", 1033, 97.7, 91.7);
    addStudent("Harry", 1034, 66.0, 60.3);
    addStudent("Isla", 1035, 89.7, 62.7);
    addStudent("Jack", 1036, 95.9, 95.1);
    addStudent("Kara", 1037, 91.4, 86.9);
    addStudent("Liam", 1038, 74.8, 60.1);
    addStudent("Mona", 1039, 77.8, 76.8);
    addStudent("Noah", 1040, 86.8, 90.3);
    addStudent("Olivia", 1041, 77.3, 69.2);
    addStudent("Peter", 1042, 97.4, 75.3);
    addStudent("Queen", 1043, 78.5, 74.6);
    addStudent("Ron", 1044, 96.0, 78.3);
    addStudent("Sara", 1045, 91.0, 66.1);
    addStudent("Tom", 1046, 90.7, 61.4);
    addStudent("Ursula", 1047, 66.1, 68.0);
    addStudent("Vince", 1048, 65.1, 89.8);
    addStudent("Will", 1049, 66.9, 67.4);
    addStudent("Zoe", 1050, 78.1, 76.0);
}

/* Return student ID */
int findBestStudentInMidterm(){ 
    /* TODO */
    return 1001;
}
/* Return student ID */
int findBestStudentInFinal(){ 
    /* TODO */
    return 1001;
}
/* Return student ID */
int findBestStudent(){ 
    /* TODO */
    return 1001;
}
/* Return Index */
int findStudentByStudentID(int id){
    /* TODO */
    return -1;
}
void modifyRecord(StudentStruct &student)
{
    int idx = findStudentByStudentID(student.id);
    if(idx >= 0){
        /* TODO */
    }
}
void addStudent(const char * name, int id, float midterm, float final)
{
    int idx = findStudentByStudentID(id);
    if(idx < 0){
        ++numOfStudent;
        /* TODO */
    }
}
void deleteStudent(int id)
{
    int idx = findStudentByStudentID(id);
    if(idx >= 0){
        --numOfStudent;
        /* TODO */
    }
}
int countNumberOfStudent()
{
    /* TODO */
    return 0;
}
float getMidtermAverage()
{
    /* TODO */
    return 0.0f;
}
float getFinalAverage()
{
    /* TODO */
    return 0.0f;
}
float getTotalAverage()
{
    /* TODO */
    return 0.0f;
}
void printStudentInfo(int id)
{
    int idx = findStudentByStudentID(id);
    if(idx >= 0){
        std::cout << "Name: " << students[idx].name 
                << ", ID: " << students[idx].id << std::endl;
    }
}
