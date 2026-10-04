//vote 
#include <iostream>
using namespace std;

int main(){
    int age;
    cout << "ENTER UR AGE : ";
    cin >> age;
    cout << " " << endl;

    if (age>=18)
    {
        cout << string(22,'-') << endl;
        cout << "| ELIGIABLE FOR VOTE |" << endl;
        cout << string(22,'-') << endl;
        cout << " " << endl;
    }
    else{
        cout << string(22,'-') << endl;
        cout << "|NOT ELIGIABLE FOR VOTE |" << endl;
        cout << string(22,'-') << endl;
        cout << " " << endl;
    }
    return 0;
}