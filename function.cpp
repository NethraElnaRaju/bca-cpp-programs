// function
#include <iostream>
using  namespace std;

int add(int a,int b){
    return a + b ;
}

int square(int a){
    return a*a;
}

int iseven(int a){
    if (a%2==0){
        return a;
    }
    else{
        cout<<"not even";
    }
}

int max(int a, int b){
    if (a>b){
        return a;
    }
    else{
        return b;
    }
}

int factorial(int a){
    int fact = 1;
    for (int i=1; a ; i++){
        fact=fact*i;
        return fact;
    }
}

int main(){
    cout << add(4,8) << endl;
    cout << square(2) << endl;
    cout << iseven(4) << endl;
    cout << max(13,67) << endl;
    cout << factorial(5) <<endl;

    return 0;
}
