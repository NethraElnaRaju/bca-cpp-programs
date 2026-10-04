//TO PRINT AGE AND NAME 

#include <iostream>
using namespace std;

int main(){
    string name;
    string hobby;
    string college;
    int age;      // declaration 

    cout << "ENTER UR NAME: ";             //getline(cin,variable)
    getline(cin,name);

    cout << "ENTER UR AGE : ";  
    cin >> age;
    
    cout << "ENTER UR HOBBY : ";  
    cin >> hobby;

    cout << "ENTER UR COLLEGE : "; 
    cin >> college;

    cout << " "  << endl;
    cout << "|" << "NAME    : " << name <<  endl;
    cout << "|" << "AGE     : " << age << endl;
    cout << "|" << "HOBBY   : " << hobby << endl;
    cout << "|" << "COLLEGE : " << college;
    return 0;
    
}
