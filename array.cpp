#include <iostream>
using namespace std;

int main(){
    int sum = 0;
    int marks[3] = {10,20,30};
    for(int i=0; i < 4 ; i++){
        sum+= marks[i];
    }
    cout << "SUM : " << sum;
    cout << "AYG OF NBR : " << sum/3;
    return 0;
}