// pass or fail

#include <iostream>
using namespace std;

int main(){
    int mark;
    cout << "ENTER THE MARK " << endl;
    cin >> mark;

    if (mark>40){
        cout << "PASSED" << endl;
    }
    else{
        cout << "FAILED" << endl;
    }
    return 0;
}