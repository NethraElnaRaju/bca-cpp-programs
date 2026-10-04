// palindrome and reverse of a nbr 

#include <iostream>
using namespace std;

int main(){
    int num;
    int rem = 0;
    cout << " " << endl;
    cout << "ENTER THE NBR :";
    cin >> num;

    int original = num;  //To store actaul value of nbr
    cout << " " << endl;
    while (num!=0)
    {
        rem = rem *10 +(num % 10);     //121 --> 0*10 + 1 --> 1
        num = num/10;   // 12.1 --> 12
    }
    
    if (original == rem)
    {
        cout << original << " IS A PALINDROME NBR" << endl;
        cout << " " << endl;
    }
    else
    {
        cout << original  << " IS NOT A PALINDROME NBR" << endl;
        cout << " " << endl;
    }
   return 0;
}