// student details 

#include <iostream>
using namespace std;

int main(){
    string name;
    int age;
    double mark;

    cout << "ENTER YOUR NAME : " << endl;
    cin >> name;    //getline(cin,variable)

    cout << "ENTER YOUR AGE : " << endl;
    cin >> age;

    cout << "ENTER YOUR MARK : " << endl;
    cin >> mark;      

    cout << " " << endl;

    cout << string(30,'-') << endl;
    cout << "     STUDENT PROFILE !!" << endl;
    cout << string(30,'-') << endl;       //string(value,symbol)
    cout << "NAME : " << name << endl;
    cout << "AGE : " << age << endl;
    cout << "MARK : " << mark << "/500" << endl;
    cout << "PERCENTAGE : " << (mark/500)*100 << "%" <<  endl;
    cout << string(30,'-') << endl;
    cout << " " << endl;
    
    return 0;
}