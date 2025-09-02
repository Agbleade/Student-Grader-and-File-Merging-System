# Student Grading and File Merging System

## 📌 Overview
This project merges student grade data from multiple **lecture sections** and **lab sections**, calculates their overall performance based on defined weight percentages, and generates a consolidated **CSV grade report**.

It was developed as part of a programming assignment for **CHEM111 Student File Merging**.

---

## ⚡ Features
- Reads student data from multiple lecture input files (`CHEM111-001.txt`, `CHEM111-002.txt`, etc.)
- Reads lab scores from multiple lab input files (`CHEM111-021.txt`, `CHEM111-022.txt`, etc.)
- Uses **binary search** to match students between lecture and lab files
- Calculates weighted scores:
  - Labs → 10%
  - Homework → 10%
  - Experiments → 30%
  - Tests → 30%
  - Final Exam → 20%
- Assigns **letter grades (A–F)** based on percentage
- Outputs a consolidated grade report in **CSV format**

---

## 📂 Input File Format
Each input file contains student data in the following structure:

- **Lecture Files (`CHEM111-00X.txt`)**
  - First Name
  - Last Name
  - Homework scores (10)
  - Experiment scores (6)
  - Test scores (2)
  - Final exam score (1)

- **Lab Files (`CHEM111-02X.txt`)**
  - First Name
  - Last Name
  - Lab scores (10)

---

## 🖥️ Output
A single CSV file named **`CHEM111FinalGradeReport.csv`** is generated.  
It contains:

- Student first/last name  
- Lecture section & lab section  
- All raw scores (labs, homework, experiments, tests, final exam)  
- Weighted percentages for each category  
- Overall percentage  
- Final letter grade  

---

## 🚀 How to Run
1. Clone the repository:
   ```bash
   git clone https://github.com/your-username/Chem111-GradeMerger.git
   cd Chem111-GradeMerger
2. Compile the program
    g++ main.cpp Person.cpp -o grade_merger
3. Run the program
    ./grade_merger
4. You can then open the generated CHEM111FinalGradeReport.csv file in Excel or any spreadsheet software.
