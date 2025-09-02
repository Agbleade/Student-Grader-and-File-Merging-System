

#include <iostream>
#include <string>
using namespace std;

#ifndef PERSON_H
#define PERSON_H

//creating person class in the header file
class Person {
    private:
    string firstname;
    string lastname;
    string chemLecture;
    string chemLab;
    double labpercent;
    double homeworkpercent;
    double experimentpercent;
    double testpercent;
    double fexampercent;
    int size;
    char finalGrade;
    double finalpercent;
    string labSection;
    string lectureSection;

    /*Item:		How many	Percent
Labs		10		10% 	
Homework	10		10%
Experiments	6		30%
Tests		2		30%
Final Exam	1		20%
 */
    
    public:
    int* myScore;
    
    Person();
    void addfirstname(string fname);
    
    //to be removed
    string getlastname() const;
    string getfirstname() const;
    void addlastname(string  lname);
    void addchemLecture(string lecture); 
    void addchemLab(string lab);
    void setlabpercent(double value);
    void sethomeworkpercent(double value);
    void setexperimentpercent(double value);
    void settestpercent(double value);
    void setfexampercent(double value);
    double getlabpercent()const;
    double gethomeworkpercent()const;
    double getexperimentpercent()const;
    double gettestpercent()const;
    double getfexampercent()const;
    double getfinalpercent() const;
    char getfinalGrade() const;
    void addScore(int value);
    void setfinalpercent();
    void setfinalgrade();
    void addlabSection(string labname);
    void addlectureSection(string lecturename);
    string getlabSection() const;
    string getlectureSection() const;

    
    
}


;


bool compareNames(const Person& a, const Person& b);
bool compareSections(const Person& a, const Person& b) ;


#endif