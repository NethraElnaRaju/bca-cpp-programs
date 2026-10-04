#include <iostream>
using namespace std;

int main(){
    int num;
    int a=0;
    int b=1;
    cout << "ENTER THE NBR : ";
    cin >> num;

    for (int i=1; i<=num; i++){
        cout << a << " ";
        int c = a+b;
        a=b;
        b=c;
    }
    return 0;
}