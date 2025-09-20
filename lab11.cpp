// comsc-210 | lab6 | Christian Molina 
#include <iostream>
using namespace std;
#include <string>

// we first need a struct for a student
struct Student1 {
    string nam;
    int id;
    int coursesnum;
    
    string* classes;

    // constructor
    Student1(int n1 = 0){
        if(n1 > 0){
            classes = new string[n1];
        } else {
            classes = nullptr;
        }
    }

    //forgot to add a destructor to free memory
    ~Student1(){
        delete[] classes;
    }
};
int main () {
    int studentsnum;
    cout << "Enter number of students who are enrolling: ";
    cin >> studentsnum;

    cin.ignore(); // to ignore the newline character after the integer input
    Student1* students = new Student1[studentsnum];

    for (int i = 0; i < studentsnum; i++) {
        cout << "Enter name of student " << (i + 1) << ": ";
        getline(cin, students[i].nam);

        cout << "Enter ID of student " << (i + 1) << ": ";
        cin >> students[i].id;

        cout << "Enter number of courses for student " << (i + 1) << ": ";
        cin >> students[i].coursesnum;
        cin.ignore(); // to ignore the newline character after the integer input

        // allocate memory for classes
        students[i] = Student1(students[i].coursesnum);

        for (int j = 0; j < students[i].coursesnum; j++) {
            cout << "Enter name of course " << (j + 1) << " for student " << (i + 1) << ": ";
            getline(cin, students[i].classes[j]);
        }
    }

}