// multiplication table
#include <iostream>
using namespace std;

int main(){
    int a;
    cout << "ENTER THE NBR : ";
    cin >> a;
    for (int i=1; i<=10; i++){        // for (start;,stop;,step)
        cout << i << "x" << a << "=" << i*a << endl;
    }

    return 0;
}