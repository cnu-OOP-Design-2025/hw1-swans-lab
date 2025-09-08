//StudentStruct.h
#pragma once

#include <string>

struct StudentRecord {
    float midterm;
    float final;    
    StudentRecord(float midterm, float final): midterm(midterm), final(final) {}
};

// Struct version of Student
struct StudentStruct {
    std::string name;
    int id;
    struct StudentRecord record;
    StudentStruct() : name(""), id(0), record(0.0f, 0.0f) {}
    StudentStruct (const char *name, int id, float midterm, float final): name(name), id(id), record(midterm, final) {}
};


extern StudentStruct students[100];

void fillStudentRecord();
int findBestStudentInMidterm();
int findBestStudentInFinal();
int findBestStudent();
int findStudentByStudentID(int id);
void modifyRecord(StudentStruct &student);
void addStudent(const char *name, int id, float midterm, float final);
void deleteStudent(int id);
void printStudentInfo(int id);

int countNumberOfStudent();
float getMidtermAverage();
float getFinalAverage();
float getTotalAverage();