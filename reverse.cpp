//reverse of a nbr

#include <iostream>
using namespace std;

int main(){
    int num;
    int rev=0;
    cout << "ENTER THE NUMBER: ";
    cin >> num;
    int a = num;

    while (num!=0){
        rev = rev * 10 + (num%10);
        num=num/10;
    }
    cout << "REVERSED NBR IS " << rev << endl;
    
    return 0;
}