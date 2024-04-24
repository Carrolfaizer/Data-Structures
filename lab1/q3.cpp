#include <iostream>
#include <cstring>
using namespace std;

class Course {
  private:
    char courseCode[10];
    char courseName[50];

  public:
    void setCourseCode(char* code) {
      strcpy(courseCode, code);
    }
    
    void setCourseName(char* name) {
      strcpy(courseName, name); 
    }
    
    char* getCourseCode() {
      return courseCode; 
    }
    
    char* getCourseName() {
      return courseName;
    }
};

class Grade {
  private:
    int mark;
    char grade;
    
  public:
    Grade() {
      mark = 0;
      grade = 'F'; 
    }
    
    void setMark(int m) {
      mark = m;
      calculateGrade();
    }
    
  private:  
    void calculateGrade() {
      if(mark > 69) {
        grade = 'A';
      } else if(mark > 59) {  
        grade = 'B';
      } else if(mark > 49) {
        grade = 'C';  
      } else if(mark > 39) {
        grade = 'D';
      } else {
        grade = 'E';
      }
    }
    
    char getGrade() {
      return grade;
    }
};

class Student {
  private:
    char regNo[20];
    char name[50];
    int age;
    Course course;
    Grade grade;
    
  public:
    void setStudentDetails(char* reg, char* nam, int ag) {
      strcpy(regNo, reg);
      strcpy(name, nam);
      age = ag;
    }
    
    void setStudentCourse(char* code, char* name) {
      course.setCourseCode(code);
      course.setCourseName(name);
    }
    
    void setStudentMark(int mark) {
      grade.setMark(mark);
    }
    
    char* getStudentRegNo() {
      return regNo; 
    }
};

int main() {

  Student s1;
  s1.setStudentDetails("CS101", "John", 20);
  s1.setStudentCourse("CS101", "Algorithms"); 
  s1.setStudentMark(80);
  
  return 0;
}
