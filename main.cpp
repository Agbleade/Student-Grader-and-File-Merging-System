
#include <iostream>
#include <fstream>
#include "Person.h"
#include <algorithm>
#include <iomanip>
using namespace std;

int binary_searching(Person* studentdata, string lastname); // binary search function to be used to sort



int main() {
    cout << fixed << setprecision(4) << endl;

    //creating input file stream object
    Person* studentdata;
    int count=0;
    studentdata = new Person[146];
    int studentsize=0;
    ifstream fin;
    //read from 001
    fin.open("CHEM111-001.txt");
    if (!fin.is_open()) {
        cout << "failed to open text file" << endl;
        return 1;
    }
    string fname;
    string lname;
    int score;
    double totalscore=0;
    double scorepercent;
    
    //create a person object and reading first name, lastname, homeworks, experiments, tests, final exams and calculating their percentages
    while (!fin.eof()) {
        Person student1;
        //adding to lecture section
        student1.addlectureSection("CHEM111-001");
        count++;
        fin >> fname;
        student1.addfirstname(fname);
        fin >> lname;
        student1.addlastname(lname);
         //adding homeworks
        for (int i=0; i < 10; i++) {
            fin >> score;
            student1.addScore(score);
            totalscore += score;
            
        }

        scorepercent = (totalscore/(10*10))*10;

        student1.sethomeworkpercent(scorepercent);

        totalscore=0;
        for (int i=0; i <6; i++) {
            fin >> score;

            student1.addScore(score);
            totalscore += score;
        }

        scorepercent = (totalscore/(6*100))*30;

        student1.setexperimentpercent(scorepercent);
        //adding two test scores
        totalscore = 0;
        for (int i=0; i <2; i++) {
            fin >> score;
            student1.addScore(score);
            totalscore += score;
        }
        scorepercent = (totalscore/(2*100))*30;
        student1.settestpercent(scorepercent);

        //adding final exams
        totalscore = 0;
        fin >> score;
        totalscore = score;
        student1.addScore(score);
        scorepercent = (totalscore/150)*20;
 
        student1.setfexampercent(scorepercent);
        studentdata[studentsize]= student1;

        
        studentsize++;

        totalscore=0;

    }
    
    studentsize--;
    fin.close();


    //read from 002
    fin.open("CHEM111-002.txt");
    if (!fin.is_open()) {
        cout << "failed to open text file" << endl;
        return 1;
    }

    
    while (!fin.eof()) {
        Person student1;
        //adding to lecture section;
        student1.addlectureSection("CHEM111-002");
        count++;
        fin >> fname;
        //adding to firstname and lastname
        student1.addfirstname(fname);
        fin >> lname;
        student1.addlastname(lname);
        
        //adding homework scores and calculating percentages
        for (int i=0; i < 10; i++) {
            fin >> score;
            student1.addScore(score);
            totalscore += score;
            
        }

        scorepercent = (totalscore/(10*10))*10;
  
        student1.sethomeworkpercent(scorepercent);
    
        //adding experiments and calculating percentage
        totalscore=0;
        for (int i=0; i <6; i++) {
            fin >> score;
   
            student1.addScore(score);
            totalscore += score;
        }

        scorepercent = (totalscore/(6*100))*30;

        student1.setexperimentpercent(scorepercent);
        //adding two test scores
        totalscore = 0;
        for (int i=0; i <2; i++) {
            fin >> score;
            student1.addScore(score);
            totalscore += score;
        }
        scorepercent = (totalscore/(2*100))*30;
        student1.settestpercent(scorepercent);

        //adding final exams
        totalscore = 0;
        fin >> score;
        totalscore = score;
        student1.addScore(score);
        scorepercent = (totalscore/150)*20;

        student1.setfexampercent(scorepercent);
        studentdata[studentsize]= student1;

        studentsize++;
        totalscore=0;
    }
    
    studentsize--;
    fin.close();

    //read from 003
    fin.open("CHEM111-003.txt");
    if (!fin.is_open()) {
        cout << "failed to open text file" << endl;
        return 1;
    }

    
    while (!fin.eof()) {
        Person student1;
        //adding to lecture section
        student1.addlectureSection("CHEM111-003");
        count++;
        fin >> fname;
        //adding firstname and lastname
        student1.addfirstname(fname);
        fin >> lname;
        student1.addlastname(lname);
        //adding homeworks and calculating the percentage

        for (int i=0; i < 10; i++) {
            fin >> score;
            student1.addScore(score);
            totalscore += score;
            
        }
        
        scorepercent = (totalscore/(10*10))*10;
        
        student1.sethomeworkpercent(scorepercent);
       
       //adding experiments and calculating percentage
        totalscore=0;
        for (int i=0; i <6; i++) {
            fin >> score;
            //cout << score << " " ;
            student1.addScore(score);
            totalscore += score;
        }
        //cout << totalscore << " is the total score";
        //cout << endl;
        scorepercent = (totalscore/(6*100))*30;
        //cout << scorepercent << " is the scorpercent" << endl;
        student1.setexperimentpercent(scorepercent);
        //adding two test scores
        totalscore = 0;
        for (int i=0; i <2; i++) {
            fin >> score;
            student1.addScore(score);
            totalscore += score;
        }
        scorepercent = (totalscore/(2*100))*30;
        student1.settestpercent(scorepercent);

        //adding final exams
        totalscore = 0;
        fin >> score;
        totalscore = score;
        student1.addScore(score);
        scorepercent = (totalscore/150)*20;
       // cout << scorepercent << " is the score" << endl;
        student1.setfexampercent(scorepercent);
        studentdata[studentsize]= student1;
        
    // cout << studentsize << " " ;
    // cout << studentdata[studentsize].getlastname() << endl;
        studentsize++;
      
        totalscore=0;

    }
    
    studentsize--;
    fin.close();

    //read from 004
    fin.open("CHEM111-004.txt");
    if (!fin.is_open()) {
        cout << "failed to open text file" << endl;
        return 1;
    }

    
    while (!fin.eof()) {
        Person student1;
        student1.addlectureSection("CHEM111-004");
        count++;
        fin >> fname;
        student1.addfirstname(fname);
        fin >> lname;
        student1.addlastname(lname);
        
        //adding homeworks to the list and finding the percent
        for (int i=0; i < 10; i++) {
            fin >> score;
            student1.addScore(score);
            totalscore += score;
            
        }
        //cout << scorepercent << " and percent wise is " ;
        scorepercent = (totalscore/(10*10))*10;
        //cout << scorepercent << endl;
        student1.sethomeworkpercent(scorepercent);
        //adding programs to the list and find the percent;
        //reset totalscore;
        totalscore=0;
        for (int i=0; i <6; i++) {
            fin >> score;
            //cout << score << " " ;
            student1.addScore(score);
            totalscore += score;
        }
        //cout << totalscore << " is the total score";
        //cout << endl;
        scorepercent = (totalscore/(6*100))*30;
        //cout << scorepercent << " is the scorpercent" << endl;
        student1.setexperimentpercent(scorepercent);
        //adding two test scores
        totalscore = 0;
        for (int i=0; i <2; i++) {
            fin >> score;
            student1.addScore(score);
            totalscore += score;
        }
        scorepercent = (totalscore/(2*100))*30;
        student1.settestpercent(scorepercent);

        //adding final exams
        totalscore = 0;
        fin >> score;
        totalscore = score;
        student1.addScore(score);
        scorepercent = (totalscore/150)*20;
       // cout << scorepercent << " is the score" << endl;
        student1.setfexampercent(scorepercent);
        studentdata[studentsize]= student1;

    // cout << studentsize << " " ;
    // cout << studentdata[studentsize].getlastname() << endl;        
        studentsize++;
        if (studentsize > 145) {
            break;
        }
       // student1.printdetails();
        //cout << "001" << endl;
        totalscore=0;

    }
    // cout << studentsize << " is the last studentsize" << endl;
    // cout << studentdata[studentsize].getlastname() << endl;
    studentsize--;
    fin.close();
// at this point, I should have read all the lecture sections with the student data in studentdata
//now what I am going to do is to loop through student data

//cout << studentsize << " is the size" <<  endl;


//  for (int i=0; i < 146; i++) {
//   studentdata[i].printdetails();
//     cout << endl; }




//LAB sections
/* now for this section, the plan is use binary search to find the person, after reading
first name and last name, once found, read into that person

need to sort based on last name*/

//sort(studentdata,studentdata+150,compareNames);
sort(studentdata, studentdata+146, compareNames);

// for (int i=0; i < 146; i++) {
//     cout << i+1 << " " << studentdata[i].getlastname() << endl;
// }


fin.open("CHEM111-021.txt");


while (!fin.eof()) {
    int studentindex;
    totalscore=0;
    
    fin >> fname;
    fin >> lname;
    //finding the student;
    studentindex = binary_searching(studentdata,lname);
    //adding homeworks to the list and finding the percent
    
    for (int i=0; i < 10; i++) {
        fin >> score;
        studentdata[studentindex].addScore(score);
        totalscore += score;
        
    }
    //cout << studentdata[studentindex].getlastname() <<" ";
    scorepercent = (totalscore/(100*10))*10;
    studentdata[studentindex].setlabpercent(scorepercent);
    
    studentdata[studentindex].setfinalpercent();
    studentdata[studentindex].setfinalgrade();
    studentdata[studentindex].addlabSection("CHEM111-021");
    
}

fin.close();

fin.open("CHEM111-022.txt");


while (!fin.eof()) {
    int studentindex;
    totalscore=0;
    
    fin >> fname;
    fin >> lname;
    //finding the student;
    studentindex = binary_searching(studentdata,lname);
    //adding homeworks to the list and finding the percent
    for (int i=0; i < 10; i++) {
        fin >> score;
        studentdata[studentindex].addScore(score);
        totalscore += score;
        
    }
    scorepercent = (totalscore/(100*10))*10;
    studentdata[studentindex].setlabpercent(scorepercent);
    
    studentdata[studentindex].setfinalpercent();
    studentdata[studentindex].setfinalgrade();
    studentdata[studentindex].addlabSection("CHEM111-022");
}

fin.close();
//int mycount=0;

fin.open("CHEM111-023.txt");



while (!fin.eof()) {
    
    int studentindex;
    totalscore=0;
    
    fin >> fname;
    fin >> lname;
    //finding the student;
    studentindex = binary_searching(studentdata,lname);
    //adding homeworks to the list and finding the percent
    for (int i=0; i < 10; i++) {
        fin >> score;
        studentdata[studentindex].addScore(score);
        totalscore += score;
        
    }
    scorepercent = (totalscore/(100*10))*10;
    studentdata[studentindex].setlabpercent(scorepercent);
    
    studentdata[studentindex].setfinalpercent();
    studentdata[studentindex].setfinalgrade();
    studentdata[studentindex].addlabSection("CHEM111-023");
}

fin.close();



fin.open("CHEM111-024.txt");


while (!fin.eof()) {
    int studentindex;
    totalscore=0;
    
    fin >> fname;
    fin >> lname;
    //finding the student;
    studentindex = binary_searching(studentdata,lname);
    //adding homeworks to the list and finding the percent
    for (int i=0; i < 10; i++) {
        fin >> score;
        studentdata[studentindex].addScore(score);
        totalscore += score;
        
    }
    scorepercent = (totalscore/(100*10))*10;
    studentdata[studentindex].setlabpercent(scorepercent);
    
    studentdata[studentindex].setfinalpercent();
    studentdata[studentindex].setfinalgrade();
    studentdata[studentindex].addlabSection("CHEM111-024");
}

fin.close();


fin.open("CHEM111-025.txt");


while (!fin.eof()) {
    int studentindex;
    totalscore=0;
    
    fin >> fname;
    fin >> lname;
    //finding the student;
    studentindex = binary_searching(studentdata,lname);
    //adding homeworks to the list and finding the percent
    for (int i=0; i < 10; i++) {
        fin >> score;
        studentdata[studentindex].addScore(score);
        totalscore += score;
        
    }
    scorepercent = (totalscore/(100*10))*10;
    studentdata[studentindex].setlabpercent(scorepercent);
    studentdata[studentindex].setfinalpercent();
    studentdata[studentindex].setfinalgrade();
    studentdata[studentindex].addlabSection("CHEM111-025");
}

fin.close();

// cout << mycount << " is my count" << endl;

// cout << "At the ending of the file, trying to see what everyone is getting" << endl;

sort (studentdata, studentdata+146, compareSections);

//create an outputfile object
ofstream fout;
fout.open("CHEM111FinalGradeReport.csv");

fout << "FirstName" << ",";
fout << "LastName" << ",";
fout << "LectureSection" << ",";
fout << "LabSection" << ",";
for (int i=0; i < 10; i++) {
    fout << "Lab" <<i+1 << ",";
}
fout << "LabPoints" << ",";

for (int i=0; i < 10; i++) {
    fout << "Homework" <<i+1 << ",";
}
fout << "HomeworkPoints" << ",";

for (int i=0; i < 6; i++) {
    fout << "Program" <<i+1 << ",";
}

fout << "ProgramPoints" << ",";

for (int i=0; i < 2; i++) {
    fout << "Test" <<i+1 << ",";
}

fout << "TestPoints" << ",";

fout << "FinalExam" << ",";
fout << "FinalExamPoints" << ",";
fout << "OverallPercetage" << ",";
fout << "FinalGrade" << endl;








for (int i=0; i < 146; i++) {
    
    //studentdata[i].printscores();
    fout << studentdata[i].getfirstname() <<",";
    fout << studentdata[i].getlastname() << ",";
    fout<< studentdata[i].getlectureSection() << ",";
    fout << studentdata[i].getlabSection() << ",";
    for (int j=19; j < 29; j++) {
        fout << studentdata[i].myScore[j] << ",";
    }
    fout << studentdata[i].getlabpercent() << ",";

    for (int j=0; j < 10; j++) {
        fout << studentdata[i].myScore[j] << ",";
    }
    fout << studentdata[i].gethomeworkpercent() << ",";

    for (int j=10; j < 16; j++) {
        fout << studentdata[i].myScore[j] << ",";
    }
    fout << studentdata[i].getexperimentpercent() << ",";

    for (int j=16; j < 18; j++) {
        fout << studentdata[i].myScore[j] << ",";
    }
    fout << studentdata[i].gettestpercent() << ",";

    fout << studentdata[i].myScore[18] << ",";
    fout << studentdata[i].getfexampercent() << ",";
    fout << studentdata[i].getfinalpercent() << ",";
    fout << studentdata[i].getfinalGrade() << ",";
    fout << endl;
    
}


//deleting the dynamic array
delete[] studentdata;
}


int binary_searching(Person* studentdata, string lastname) {
    
int mid;
int low=0;
int high=145;
while (high >= low) {
    mid = (high+low)/2;
    if (studentdata[mid].getlastname() > lastname) {
        high = mid-1;
    }
    else if (studentdata[mid].getlastname() < lastname) {
        low=mid+1;
    }
    else {
        break;
    }
    
}
return mid;
}
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
