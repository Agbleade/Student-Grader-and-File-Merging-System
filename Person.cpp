

#include "Person.h"
#include <iostream>
#include <string>
using namespace std;
/*
Item:		How many	Percent
Labs		10		10% 	
Homework	10		10%
Experiments	6		30%
Tests		2		30%
Final Exam	1		20%
*/

Person::Person() {
    firstname="";
    lastname="";
    chemLecture="";
    chemLab="";
    size=0;
    myScore= new int[29];

     labpercent = 0.0;
     homeworkpercent = 0.0;
     experimentpercent = 0.0;
     testpercent = 0.0;
     fexampercent = 0.0;
     finalpercent = 0.0;
     lectureSection=" ";
     labSection = " ";
}
void Person::addScore(int value) {

if (size < 29) {
    myScore[size] = value;
    size++;
}
else {
    cout << "Array is full" << endl;
}
}

void Person::addfirstname(string fname) {
    this->firstname=fname;

}
string Person::getfirstname() const {
    return this->firstname;
}

string Person::getlastname() const {
    return this->lastname;
}
void Person::addlastname(string  lname) {
    this->lastname =lname;

}
void Person::addchemLecture(string lecture) {
    this->chemLecture = lecture;

}
void Person::addchemLab(string lab) {
    this->chemLab = lab;

}
void Person::setlabpercent(double value) {
    this->labpercent = value;

}
void Person::sethomeworkpercent(double value) {
    this->homeworkpercent=value;

}
void Person::setexperimentpercent(double value) {
    this->experimentpercent=value;

}
void Person::settestpercent(double value) {
    this->testpercent = value;

}
void Person::setfexampercent(double value) {
    this->fexampercent=value;    

}


void Person::setfinalpercent() {
    double finalp;
    finalp = (labpercent+homeworkpercent+experimentpercent+testpercent+fexampercent);
    this->finalpercent = finalp;
}

void Person::setfinalgrade() {
    if (this->finalpercent >= 90.0) {
        finalGrade = 'A';
    }
    else if (finalpercent >= 80.0) {
        finalGrade = 'B';
    }
    else if (finalpercent >= 70.0) {
        finalGrade = 'C';
    }
    else if (finalpercent >= 60.0) {
        finalGrade ='D';
    }
    else {
        finalGrade = 'F';
    }
    
    }
    
char Person::getfinalGrade() const {
    return this->finalGrade;
}

double Person::getfinalpercent() const{
    return this->finalpercent;
    
}

void Person::addlectureSection(string lecturename) {
    this->lectureSection= lecturename;
}

void Person::addlabSection(string labname) {
    this->labSection = labname;
}

string Person::getlabSection() const {
    return this->labSection;
}

string Person::getlectureSection() const {
    return this->lectureSection;
}

double Person::getlabpercent() const{
    return this->labpercent;
}

double Person::gethomeworkpercent() const {
    return this->homeworkpercent;
}

double Person::getexperimentpercent() const{
    return this->experimentpercent;
}

double Person::gettestpercent() const {
    return this->testpercent;
}

double Person::getfexampercent() const {
    return this->fexampercent;
}










bool compareNames(const Person& a, const Person& b)  {
    return a.getlastname() < b.getlastname();
}

bool compareSections(const Person& a, const Person& b){
    if (a.getlectureSection()==b.getlectureSection()) {
        return a.getlastname() < b.getlastname();
    }
    return a.getlectureSection() < b.getlectureSection();
    }

