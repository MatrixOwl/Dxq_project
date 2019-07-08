#include "student.h"
#include <string>
#include <queue>
#include <fstream>
#include <sstream>
using namespace std;

int student::showTable(void){
    //savedTag("showTable");
    if(student::students.empty()){
        cout<<"Sorry but there are empty"<<endl;
        return -1;
    }
    cout<<"-----------------Title----------------"<<endl;
    cout<<"name is :"<<student::students.front().name<<endl;
    cout<<"ID is :"<<student::students.front().ID<<endl;
    cout<<"ranking is :"<<student::students.front().ranking<<endl;
    cout<<"------------------End-----------------"<<endl;
    cout<<"Any key to continue";
    system("pause");
    return 0;
}

int student::addRecord(void){
    //savedTag("addRecord");
    cout<<"---------------Pleas Input-------------"<<endl;
    cout<<"your input date is:(if it is in file pleas input 1 if not pleas input 2): ";
    int flag; cin>>flag; cout<<endl;
    stu in;
    switch(flag){
    case 2:
        cout<<"name: "; cin>>in.name; cout<<endl;
        cout<<"ID: "; cin>>in.ID; cout<<endl;
        cout<<"class1: "; cin>>in.class1; cout<<endl;
        cout<<"class2: "; cin>>in.class2; cout<<endl;
        student::students.push(in);
        cout<<"Any key to continue";
        system("pause");
        return 0;
    case 1:
        cout<<"Pleas input your file path:  ";
        string path_f; cin>>path_f;
        ifstream file;
        file.open(path_f);
        string str;
        if(file.eof()){
            cout<<"Sorry but this file is empty"<<endl;
            cout<<"Any key to continue";
            system("pause");
            return -1;
        }
        string dat;
        while(!file.eof()){
            getline(file, str);
            string dt[5];
            stringstream input(str);
            string temp; 
            int i=0;
            while(getline(input, temp, ' ')){
                dt[i] = temp; i++;
            }
            stu temp_s;
            temp_s.name = dt[0];
            temp_s.ID = dt[1];
            int t;
            stringstream ss;
            ss << dt[2];
            ss >> t;
            temp_s.class1 = t;
            ss << dt[3];
            ss >> t;
            temp_s.class2 = t;
            ss << dt[4];
            ss >> t;
            temp_s.ranking = t;
            student::students.push(temp_s);
        }
        cout<<"-----------------End-----------------"<<endl;
        cout<<"Any key to continue";
        system("pause");
        return 0;
    }
    return 0;
}

void student::display(void){
    //savedTag("display");
    if(student::students.empty()){
        cout<<"sorry but there are empty"<<endl;
        cout<<"Any key to continue";
        system("pause");
        return;
    }
    int len = student::students.size();
    int i = 0;
    cout<<"--------------------List----------------------"<<endl;
    while(i != len){
        stu temp = student::students.front();
        cout<<"---------------------"<<endl;
        cout<<"name: "<<temp.name<<"    ID: "<<temp.ID<<endl;
        cout<<"class1: "<<temp.class1<<"    class2: "<<temp.class2<<endl;
        cout<<"ranking: "<<temp.ranking<<endl;
        cout<<"---------------------"<<endl;
        student::students.pop();
        student::students.push(temp);
        i++;
    }
    cout<<"--------------------End------------------------"<<endl;
    cout<<"Any key to continue";
    system("pause");
}