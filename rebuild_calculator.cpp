//rebuild calculater program
#include <iostream>
using namespace std;

double add(double a , double b){
    return a+b;
}

double sub(double a , double b){
    return a-b;
}

double mul(double a , double b){
    return a*b;
}

double div(double a ,double b){
    return a/b;
}

int main(){
    double x,y;
    char ch;
    cout << "--------SIMPLE CALCULATOR-------- \n";
    cout << "ENTER THE 1ST NBR : \n";
    cin >> x;
    cout << "ENTER THE 2ND NBR : \n";
    cin >> y;
    cout << "EITHER (+,-,/,*) : \n" ;
    cin >> ch;

    if (ch=='+'){
        cout << add(x,y) << endl;
    }

    else if (ch=='-'){
        cout << sub(x,y) << endl;
    }

    else if (ch=='-'){
        cout << mul(x,y) << endl;
    }

    else if (ch=='-'){
        cout << div(x,y) << endl;
    }

    else{
        cout << "INVAILD CHOICE" << endl;
    }

    return 0;
}