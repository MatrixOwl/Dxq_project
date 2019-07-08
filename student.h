#ifndef STUDENT_H
#define STUDENT_H

#include <string>
#include <iostream>
#include <fstream>
#include <queue>
#include <time.h>
using namespace std;

typedef struct stu{
    string name;
    string ID;
    int class1, class2;
    int ranking;
}stu;
class student{
    private:
        queue<stu> students;
    public:
        student(){
            students.back();
        };
        ~student(){
        };
        //functions
        int showTable();
        int addRecord();
        void display();
        int removeRecord();
        void findRecord();
        void queryInfo();
        int copyRecord();
        int modifyRecord();
        int saveRecord();
        int loadRecord();
};
/*
void savedTag(string did){
    ofstream fout("savedTag.txt");
    fout<<time(0)<<"   ";
    fout<<did<<endl;
}
*/
#endif