//grade claculation

#include <iostream>
using namespace std;

int main(){
    double a;
    cout << "ENTER THE PERCENTAGE: ";
    cin >> a;

    if (a>=90){
        cout << "A-GRADE";
    }
    else if (a>=80){
        cout << "B-GRADE";
    }
    else if (a>=65){
        cout << "C-GRADE";
    }
    else if (a>=40){
        cout << "D-GRADE";
    }
    else{
        cout << "FAILED!";
    }

    return 0;
}