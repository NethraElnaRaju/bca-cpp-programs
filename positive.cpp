//check a nbr is positive neg zero

#include <iostream>
using namespace std;

int main(){
    int a;

    cout << "ENTER THE NBR : " << endl;
    cin >> a;
    
    if (a>0){
        cout << "THE NBR IS POSTIVE " << endl;
    }
    else if (a<0){
        cout << "THE NBR IS NEG" << endl;
    }
    else
    {
        cout << "THE NBR IS ZERO" <<endl;
    } 
    
    return 0;
}
    