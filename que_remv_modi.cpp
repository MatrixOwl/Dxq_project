#include "student.h"
#include <string>
#include <queue>
#include <fstream>
#include <sstream>
using namespace std;

void student::findRecord(){
    //savedTag("findRecord");
    cout<<"----------------Find Record--------------------"<<endl;
    if(student::students.empty()){
        cout<<"Sorry but there is empty"<<endl;
        cout<<"Any key to continue";
        system("pause");
        return;
    }
    char is;
    cout<<"Your want to search with(name->N, ID->I, ranking->R): ";
    cin >> is; cout<<endl;
    stu dis;            
    string word;
    int num; int flag =1;
    switch(is){
        case 'N':
            cout<<"Your want to search: ";
            cin>>word;
            for(size_t i=0;i < student::students.size();i++){
                stu temp = student::students.front();
                if(temp.name==word){
                    dis = temp;
                    flag = 0;
                }
                student::students.pop();
                student::students.push(temp);
            }
            break;
        case 'I':
            cout<<"Your want to search: ";
            cin>>word;
            for(size_t i=0;i < student::students.size();i++){
                stu temp = student::students.front();
                if(temp.ID==word){
                    dis = temp;
                    flag = 0;
                }
                student::students.pop();
                student::students.push(temp);
            }
            break;
        case 'R':
            cout<<"Your want to search: ";
            cin>>num;
            for(size_t i=0;i<student::students.size();i++){
                stu temp = student::students.front();
                if(temp.ranking==num){
                    dis = temp;
                    flag = 0;
                }
                student::students.pop();
                student::students.push(temp);
            }
            break;
        default:
            cout<<"Error"<<endl;
            return;
    }
    if(flag){
        cout<<"Sorry but the student you search is not exist"<<endl;
        cout<<"Any key to continue";
        system("pause");
        return;
    }
    cout<<"------------------Record-------------------"<<endl;
    cout<<"name: "<<dis.name<<"    ID: "<<dis.ID<<endl;
    cout<<"class1: "<<dis.class1<<"   class2: "<<dis.class2<<endl;
    cout<<"ranking: "<<dis.ranking;
    cout<<"-------------------End---------------------"<<endl;
    cout<<"Any key to continue";
    system("pause");
    return;
}

int student::removeRecord(){
    //savedTag("removeRecord");
    cout<<"----------------Remove Record------------------"<<endl;
    if(student::students.empty()){
        cout<<"Sorry but there is empty"<<endl;
        cout<<"Any key to continue";
        system("pause");
        return -1;
    }
    char is;
    cout<<"Your want to search with(name->N, ID->I, ranking->R): ";
    cin >> is; cout<<endl;
    stu dis;            
    string word;
    int num; int flag =1;
    char su;
    switch(is){
        case 'N':
            cout<<"Your want to search: ";
            cin>>word;
            for(size_t i=0;i<student::students.size();i++){
                stu temp = student::students.front();
                if(temp.name==word){
                    dis = temp;
                    flag = 0;
                    cout<<"------------------Record-------------------"<<endl;
                    cout<<"name: "<<dis.name<<"    ID: "<<dis.ID<<endl;
                    cout<<"class1: "<<dis.class1<<"   class2: "<<dis.class2<<endl;
                    cout<<"ranking: "<<dis.ranking;
                    cout<<"Do you sour you want to delet?(Y/n) ";
                    cin>>su; cout<<endl;
                    if(su=='n'){
                        student::students.pop();
                        student::students.push(temp);
                        continue;
                    }
                    else{
                        student::students.pop();
                        continue;
                    }
                }
                student::students.pop();
                student::students.push(temp);
            }
            break;
        case 'I':
            cout<<"Your want to search: ";
            cin>>word;
            for(size_t i=0;i<student::students.size();i++){
                stu temp = student::students.front();
                if(temp.ID==word){
                    dis = temp;
                    flag = 0;
                    cout<<"------------------Record-------------------"<<endl;
                    cout<<"name: "<<dis.name<<"    ID: "<<dis.ID<<endl;
                    cout<<"class1: "<<dis.class1<<"   class2: "<<dis.class2<<endl;
                    cout<<"ranking: "<<dis.ranking;
                    cout<<"Do you sour you want to delet?(Y/n) ";
                    cin>>su; cout<<endl;
                    if(su=='n'){
                        student::students.pop();
                        student::students.push(temp);
                        continue;
                    }
                    else{
                        student::students.pop();
                        continue;
                    }
                }
                student::students.pop();
                student::students.push(temp);
            }
            break;
        case 'R':
            cout<<"Your want to search: ";
            cin>>num;
            for(size_t i=0;i<student::students.size();i++){
                stu temp = student::students.front();
                if(temp.ranking==num){
                    dis = temp;
                    flag = 0;
                    cout<<"------------------Record-------------------"<<endl;
                    cout<<"name: "<<dis.name<<"    ID: "<<dis.ID<<endl;
                    cout<<"class1: "<<dis.class1<<"   class2: "<<dis.class2<<endl;
                    cout<<"ranking: "<<dis.ranking;
                    cout<<"Do you sour you want to delet?(Y/n) ";
                    cin>>su; cout<<endl;
                    if(su=='n'){
                        student::students.pop();
                        student::students.push(temp);
                        continue;
                    }
                    else{
                        student::students.pop();
                        continue;
                    }
                }
                student::students.pop();
                student::students.push(temp);
            }
            break;
        default:
            cout<<"Error"<<endl;
            return 0;
    }
    if(flag){
        cout<<"Sorry but the student you search is not exist"<<endl;
        cout<<"Any key to continue";
        system("pause");
        return 0;
    }
    return 0;
}

int student::modifyRecord(void){
    //savedTag("modifyRecord");
    cout<<"----------------Modify Record------------------"<<endl;
    if(student::students.empty()){
        cout<<"Sorry but there is empty"<<endl;
        cout<<"Any key to continue";
        system("pause");
        return -1;
    }
    char is;
    cout<<"Your want to search with(name->N, ID->I, ranking->R): ";
    cin >> is; cout<<endl;
    stu dis;            
    string word;
    int num; int flag =1;
    char su;
    switch(is){
        case 'N':
            cout<<"Your want to search: ";
            cin>>word;
            for(size_t i=0;i<student::students.size();i++){
                stu temp = student::students.front();
                if(temp.name==word){
                    dis = temp;
                    flag = 0;
                    cout<<"------------------Record-------------------"<<endl;
                    cout<<"name: "<<dis.name<<"    ID: "<<dis.ID<<endl;
                    cout<<"class1: "<<dis.class1<<"   class2: "<<dis.class2<<endl;
                    cout<<"ranking: "<<dis.ranking;
                    cout<<"You want to change this record to: ";
                    stu ddis;
                    cout<<"name: "; cin>>ddis.name; cout<<"    ID: "; cin>>ddis.ID; cout<<endl;
                    cout<<"class1: "; cin>>ddis.class1; cout<<"    class2: "; cin>>ddis.class2; cout<<endl;
                    cout<<"ranking: "; cin>>ddis.ranking; cout<<endl;
                    cout<<"------------Record after change--------------"<<endl;
                    cout<<"name: "<<ddis.name<<"    ID: "<<ddis.ID<<endl;
                    cout<<"class1: "<<ddis.class1<<"   class2: "<<ddis.class2<<endl;
                    cout<<"ranking: "<<ddis.ranking;
                    cout<<"Do you sour you want to modify?(Y/n) ";
                    cin>>su; cout<<endl;
                    if(su=='n'){
                        student::students.pop();
                        student::students.push(dis);
                        continue;
                    }
                    else{
                        student::students.pop();
                        student::students.push(ddis);
                        continue;
                    }
                }
                student::students.pop();
                student::students.push(temp);
            }
            break;
        case 'I':
            cout<<"Your want to search: ";
            cin>>word;
            for(size_t i=0;i<student::students.size();i++){
                stu temp = student::students.front();
                if(temp.ID==word){
                    dis = temp;
                    flag = 0;
                    cout<<"------------------Record-------------------"<<endl;
                    cout<<"name: "<<dis.name<<"    ID: "<<dis.ID<<endl;
                    cout<<"class1: "<<dis.class1<<"   class2: "<<dis.class2<<endl;
                    cout<<"ranking: "<<dis.ranking;
                    cout<<"You want to change this record to: ";
                    stu ddis;
                    cout<<"name: "; cin>>ddis.name; cout<<"    ID: "; cin>>ddis.ID; cout<<endl;
                    cout<<"class1: "; cin>>ddis.class1; cout<<"    class2: "; cin>>ddis.class2; cout<<endl;
                    cout<<"ranking: "; cin>>ddis.ranking; cout<<endl;
                    cout<<"------------Record after change--------------"<<endl;
                    cout<<"name: "<<ddis.name<<"    ID: "<<ddis.ID<<endl;
                    cout<<"class1: "<<ddis.class1<<"   class2: "<<ddis.class2<<endl;
                    cout<<"ranking: "<<ddis.ranking;
                    cout<<"Do you sour you want to modify?(Y/n) ";
                    cin>>su; cout<<endl;
                    if(su=='n'){
                        student::students.pop();
                        student::students.push(dis);
                        continue;
                    }
                    else{
                        student::students.pop();
                        student::students.push(ddis);
                        continue;
                    }
                }
                student::students.pop();
                student::students.push(temp);
            }
            break;
        case 'R':
            cout<<"Your want to search: ";
            cin>>num;
            for(size_t i=0;i<student::students.size();i++){
                stu temp = student::students.front();
                if(temp.ranking==num){
                    dis = temp;
                    flag = 0;
                    cout<<"------------------Record-------------------"<<endl;
                    cout<<"name: "<<dis.name<<"    ID: "<<dis.ID<<endl;
                    cout<<"class1: "<<dis.class1<<"   class2: "<<dis.class2<<endl;
                    cout<<"ranking: "<<dis.ranking;
                    cout<<"You want to change this record to: ";
                    stu ddis;
                    cout<<"name: "; cin>>ddis.name; cout<<"    ID: "; cin>>ddis.ID; cout<<endl;
                    cout<<"class1: "; cin>>ddis.class1; cout<<"    class2: "; cin>>ddis.class2; cout<<endl;
                    cout<<"ranking: "; cin>>ddis.ranking; cout<<endl;
                    cout<<"------------Record after change--------------"<<endl;
                    cout<<"name: "<<ddis.name<<"    ID: "<<ddis.ID<<endl;
                    cout<<"class1: "<<ddis.class1<<"   class2: "<<ddis.class2<<endl;
                    cout<<"ranking: "<<ddis.ranking;
                    cout<<"Do you sour you want to modify?(Y/n) ";
                    cin>>su; cout<<endl;
                    if(su=='n'){
                        student::students.pop();
                        student::students.push(dis);
                        continue;
                    }
                    else{
                        student::students.pop();
                        student::students.push(ddis);
                        continue;
                    }
                }
                student::students.pop();
                student::students.push(temp);
            }
            break;
        default:
            cout<<"Error"<<endl;
            cout<<"Any key to continue";
            system("pause");
            return 0;
    }
    if(flag){
        cout<<"Sorry but the student you search is not exist"<<endl;
        cout<<"Any key to continue";
        system("pause");
        return 0;
    }
    return 0;
}

int student::copyRecord(void){
    //savedTag("copyRecord");
    if(student::students.empty()){
        cout<<"Sorry but there are empty"<<endl;
        cout<<"Any key to continue";
        system("pause");
        return -1;
    }
    queue<stu> copy_students;
    stu temp;
    for(size_t i=0;i<student::students.size();i++){
        temp = student::students.front();
        student::students.pop();
        student::students.push(temp);
        copy_students.push(temp);
    }
    ofstream fout("copy_dis.txt");
    fout<<"-name-"<<"---ID---"<<"-class1-"<<"-class2-"<<"ranking";
    for(size_t i=0;i<student::students.size();i++){
        stu t = copy_students.front();
        fout<<t.name<<' '<<t.ID<<' '<<t.class1<<' '<<t.class2<<' '<<t.ranking;
    }
    cout<<"Copy is complete(in copy_dis.txt)";
    cout<<"Any key to continue";
    system("pause");
    return 0;
}

void student::queryInfo(void){
    //savedTag("queryInfo");
    cout<<"You want to search in(pleas input the file name): ";
    string fp; cin>>fp;
    ifstream file(fp);
    if(!file){
        cout<<"Error"<<endl;
        cout<<"Any key to continue";
        system("pause");
        file.close();
        return;
    }
    cout<<"The student you want to search in here(input name or ID pleas): ";
    string kw; cin>>kw;
    if(file.eof()){
        cout<<"Sorry but this file is empty"<<endl;
        cout<<"Any key to continue";
        system("pause");
        file.close();
        return;
    } 
    string str;
    while(!file.eof()){
        getline(file, str);
        string dt[5];
        stringstream input(str);
        string temp; 
        int i=0;
        while(getline(input, temp, ' ')){
            dt[i] = temp; i++;
        }
        if(dt[1]==kw||dt[0]==kw){
            cout<<"----------------Info-----------------"<<endl;
            cout<<"name: "<<dt[0]<<"    ID: "<<dt[1]<<endl;
            cout<<"class1: "<<dt[2]<<"   class2: "<<dt[3]<<endl;
            cout<<"ranking: "<<dt[4];   
            cout<<"-----------------End------------------"<<endl;
            file.close();
            cout<<"Any key to continue";
            system("pause");
            return;         
        }
    }
    cout<<"Sorry but the student you search is not here";
    file.close();
    cout<<"Any key to continue";
    system("pause");
    return;
}