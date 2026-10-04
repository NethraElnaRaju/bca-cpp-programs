#include <iostream>
using namespace std;

int main(){
    int num,val;
    int sum=0;
    cout << "ENTER THE NBR: ";
    cin >> num;
    
    while (num!=0){
        val=num%10;
        sum=sum+val;
        num=num/10;    
    }
    cout  << sum;
    return 0;

}