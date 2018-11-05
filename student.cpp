/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
#include "student.h"
#include <string>

    Student::Student()
    {
        lastName = "###";
        firstName = "###";
    }
    Student::Student(char* studentInfo)
    {
        char* token;
        token = strtok(studentInfo, "/");
        strcpy(firstName,token);
        token = strtok(NULL, "/");
        lastName = token;
    }
    char* Student::getLastName()
    {
        return lastName;
    }
    char* Student::getFirstName()
    {
        return firstName;
    }
    char* Student::toString()
    {
        char* builder = Student::firstName[0];
        strcpy(builder, ".");
        strcpy(builder, Student::lastName[0]);
        strcpy(builder, ". ");
        
        return builder;
    }