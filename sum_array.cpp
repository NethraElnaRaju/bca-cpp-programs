// sum of array 
#include <iostream>
using namespace std;

int main(){
    int x;
    int even = 0; 
    int odd = 0;
    cout << "ENTER THE LIMIT : ";
    cin >> x;
    for(int i = 0; i<x; i++){
       if (i%2 == 0){
       even+=i;
    }
       else{
        odd += i;
       }
    }
    
    cout << "-------SUM----------\n";
    cout << "EVEN : " << even << endl;
    cout << "ODD  : " << odd << endl;
    return 0;
}