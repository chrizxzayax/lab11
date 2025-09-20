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
};