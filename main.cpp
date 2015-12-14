//
//  Lab VII Part V
//
//  Created by Edgar Esparza on 6/29/15.
//

#include <iostream>
using namespace std;

bool figureGrade(int, char &);

int main() {
    int tGrade;
    char lGrade;
    bool test;
    test=(figureGrade(int tGrade, char lGrade));
    if (test)
        cout<<"You got "<<lGrade<<endl;
    else
        cout<<"Invalid Entry"<<endl;

    return 0;
}


bool figureGrade(int tG, char lG){
    if(tG>=90 && tG<=100){
        lG='A';
        return true;
    }else if(tG>=80 && tG<=90){
        lG='B';
        return true;
    }else if(tG>=70 && tG<=80){
        lG='C';
        return true;
    }else if(tG>=60 && tG<=70){
        lG='D';
        return true;
    }else if(tG>=0 && tG<=60){
        lG='D';
        return true;
    }else
        return false;
}