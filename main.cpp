#include "student.h"
#include <string>
#include <queue>
#include <fstream>
#include <sstream>
using namespace std;

int menu_select(){
    int choice;
    cout<<"**********************Menu**********************"<<endl;
    cout<<"                                                "<<endl;
    cout<<"    (1) Show Table            (2) Add Record    "<<endl;
    cout<<"    (3) Display All                             "<<endl;
    cout<<"    (4) Remove Record         (5) Find Record   "<<endl;
    cout<<"    (6) Modify Record         (7) Query Info    "<<endl;
    cout<<"    (8) Copy Record                             "<<endl;
    cout<<"                                                "<<endl;
    cout<<"    (9) Save Record           (10) Load Record  "<<endl;
    cout<<"                                                "<<endl;
    cout<<"                    (11) Quit                   "<<endl;
    cout<<"************************************************"<<endl;
    cout<<"     You want to(input number 1-11) :           ";
    cin>>choice;
    return choice;
}

void handle_menu(){
    student work;
    while(1){
        int ch = menu_select();
        switch(ch){
            case (1): 
                work.showTable();
                break;
            case (2):
                work.addRecord();
                break;
            case (3):
                work.display();
                break;
            case (4):
                work.removeRecord();
                break;
            case (5):
                work.findRecord();
                break;
            case (6):
                work.modifyRecord();    
                break;
            case (7):
                work.queryInfo();
                break;
            case (8):
                work.copyRecord();
                break;
            case (9):
                work.saveRecord();
                break;
            case (10):
                work.loadRecord();
                break;
            case (11):
                cout<<"Do you sour you want to exit?(Y/n)";
                char c; cin>>c;
                if(c=='Y')
                    return;
                else 
                    break;
        }
    }
}

int main(){
    handle_menu();
    return 0;
}