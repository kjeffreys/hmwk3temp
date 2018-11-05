/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   student.h
 * Author: kyle
 *
 * Created on November 5, 2018, 10:59 AM
 */

#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

class Student
{
private:
    char lastName[30];
    char firstName[30];
public:
    Student();
    Student(char* studentInfo);
    char* getLastName();
    char* getFirstName();
    char* toString();
};


#endif /* STUDENT_H */

