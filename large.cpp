// largest of 3 nbr
#include <iostream>
using namespace std;

int main(){
    int a,b,c;
    cout << "ENTER NUM 1 : ";
    cin >> a;

    cout << "ENTER NUM 2 : ";
    cin >> b;

    cout << "ENTER NUM 3 : ";
    cin >> c;

    cout << " " << endl;
    if (a>c && a>b){
        cout << "| " <<  a << " IS THE LARGEST NBR |" <<endl;
    }
    else if (b>c && b>a){
        cout << "| " <<  b << " IS THE LARGEST NBR | " <<endl;
    }
    else if (c>a && c>b){
        cout << "| " <<  c << " IS THE LARGEST NBR |" <<endl;
    }
    else{
        cout << "INVAILD";
    }
    cout << " " << endl;
    return 0;

}