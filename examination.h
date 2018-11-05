/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   examination.h
 * Author: kyle
 *
 * Created on November 5, 2018, 10:59 AM
 */

#ifndef EXAMINATION_H
#define EXAMINATION_H

#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

class Examination
{
private:
    Student **seating;
    int rows = 0;
    int cols = 0;
public:
    Examination(int, int);
    Student* getStudentAt(int, int);
    bool assignStudentAt(int, int, Student *);
    bool checkBoundaries(int, int);
    char* toString();
};


#endif /* EXAMINATION_H */

