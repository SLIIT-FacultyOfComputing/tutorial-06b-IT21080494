#include "Student.h"
#include <iostream>
#include<string.h>
using namespace std;
// Assign studentId and name
void Student::assignDetails(int student_Id, char name_[20]) {
  studentId=student_Id;
  strcpy(name,name_);
  
}

// Display StudentId and Name
void Student::display() {
  cout<<"StudentId "<<studentId<<endl;
  cout<<"Name "<<name<<endl; 
}
