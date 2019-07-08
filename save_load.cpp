#include "student.h"
#include <string>
#include <queue>
#include <fstream>
#include <sstream>
using namespace std;

int student::saveRecord(void){
    //savedTag("saveRecord");
    cout<<"Do you sour you want to save?(Y/n)";
    char is; cin>>is; cout<<endl;
    if(is=='n'){
        return 0;
    }
    if(student::students.empty()){
        cout<<"Error"<<endl;
        return -1;
    }
    ofstream fout("date.txt");
    fout<<"-name-"<<"---ID---"<<"-class1-"<<"-class2-"<<"ranking";
    for(size_t i=0;i<student::students.size();i++){
        stu t = student::students.front();
        fout<<t.name<<' '<<t.ID<<' '<<t.class1<<' '<<t.class2<<' '<<t.ranking;
    }
    cout<<"Save is complete(in date.txt)";
    cout<<"Any key to continue";
    system("pause");
    fout.close();
    return 0;
}

int student::loadRecord(void){
    //savedTag("loadRecord");
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
    file.close();
    cout<<"-----------------End-----------------"<<endl;
    cout<<"Any key to continue";
    system("pause");
    return 0;
}