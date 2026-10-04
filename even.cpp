// even or odd

#include <iostream>
using namespace std;

int main(){
    int a;

    cout << "ENTER THE NBR : " << endl;
    cin >> a;
    
    if (a%2==0){
        cout << "NBR IS EVEN " << endl;
    }
    else {
         cout << "NBR IS ODD " << endl;
    }    
       
    return 0;

}