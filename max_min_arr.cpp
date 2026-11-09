// maximum of array

#include <iostream>
using namespace std;

int main(){
    int max = 0;
    int min = 0;

    int a[] = {10,20,40,50,30};
    for(int i = 0; i<6; i++){
        if (a[i] > max){
            max = a[i];
        }
        else if (a[i] < min){
            min = a[i];
        }
    }
    
    cout << "MAXIMUM IS : " << max << endl;
    cout << "MINIMUM IS : " << min << endl;
    return 0;
}