#include <iostream>
#include <cstring>
using namespace std;

const int MAX_STUDENTS = 40;

struct Course {
  char course_code[10];
  char course_name[50];  
};

struct Grade {
  int mark;
  char the_grade;
};

struct Student {
  char reg_no[20];
  char name[50];
  int age;
  Course course;
  Grade grades;
};

Student students[MAX_STUDENTS]; 
int numStudents = 0;

// Function to register a student
void registerStudent() {
  if(numStudents == MAX_STUDENTS) {
    cout << "Can't register more students" << endl;
    return;
  }
  
  Student s;
  cout << "Enter registration number: ";
  cin >> s.reg_no;
  cout << "Enter name: "; 
  cin >> s.name;
  cout << "Enter age: ";
  cin >> s.age;
  cout << "Enter course code: ";
  cin >> s.course.course_code;
  cout << "Enter course name: ";
  cin >> s.course.course_name;
  
  students[numStudents] = s;
  numStudents++;
}

// Function to update student details
void updateStudent() {
  char reg[20];
  cout << "Enter registration number of student to update: ";
  cin >> reg;
  
  for(int i=0; i<numStudents; i++) {
    if(strcmp(students[i].reg_no, reg) == 0) {
      // Update details
      cout << "Enter new name: ";
      cin >> students[i].name;
      cout << "Enter new age: ";  
      cin >> students[i].age;
      
      return;
    }
  }
  
  cout << "Student with reg no " << reg << " not found" << endl;
}

// Function to record marks and calculate grade
void recordMarks() {
  char reg[20];
  
  cout << "Enter registration number of student: "; 
  cin >> reg;
  
  for(int i=0; i<numStudents; i++) {
    if(strcmp(students[i].reg_no, reg) == 0) {
      cout << "Enter marks: ";
      cin >> students[i].grades.mark;
      
      if(students[i].grades.mark > 69) {
        students[i].grades.the_grade = 'A';  
      }
      else if(students[i].grades.mark > 59) {
        students[i].grades.the_grade = 'B';
      }
      else if(students[i].grades.mark > 49) {
        students[i].grades.the_grade = 'C';
      }
      else if(students[i].grades.mark > 39) {
        students[i].grades.the_grade = 'D';
      }
      else {
        students[i].grades.the_grade = 'E';
      }
      
      return;
    }
  }
  
  cout << "Student with reg no " << reg << " not found" << endl;
}

int main() {
  
  registerStudent();
  registerStudent();
  
  updateStudent();
  
  recordMarks();
  
  return 0;
}
