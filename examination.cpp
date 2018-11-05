/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "examination.h"
#include "student.h"


    Examination::Examination(int rowNum, int columnNum)
    {
        Examination::rows = rowNum;
        Examination::cols = columnNum;
        Examination::seating = new Student*[rowNum];
        
        for(int i = 0; i < rowNum; i++)
        {
            seating[i] = new Student[columnNum];
        }
    }
    
    Student* Examination::getStudentAt(int row, int col)
    {
        return (Student *)&(seating[row][col]);
    }
    
    bool Examination::assignStudentAt(int row, int col, Student *tempStudent)
    {
        Student *p;
        p = (Student *)&(seating[row][col]);
        
        if(strcmp(p->getFirstName(),"###") == 0 &&
                strcmp(p->getLastName(),"###") == 0)
        {
            *p = *tempStudent;
            return true;
        }
        else
        {
            return false;
        }
    }
    
    bool Examination::checkBoundaries(int row, int col)
    {
        if(row < 0 || col < 0 || row > Examination::rows
            || col > Examination::cols)
        {
            return false;
        }
        else
        {
            return true;
        }
    }
    
    char* Examination::toString()
    {
    
        char* string;
        strcpy(string, "The current seating\n");
        strcat(string, "-------------------------\n");
        
        for(int i = 0; i < rows; i++)
        {
            for(int j = 0; j < cols; j++)
            {
                strcat(string, Examination::seating[i][j]->toString());
            }
            strcat(string, "\n");
        }
        return string;
    }
