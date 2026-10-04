#include <iostream>
using namespace std;

int main(){
    int num,rem;
    int result = 0;

    cout << "ENTER THE NBR :";
    cin >> num;

    int original = num;   //To save the actual value
    
    while (num!=0)
    {
        rem = num % 10;         //to get last digit 371 --> 1
        result += rem * rem * rem;
        num = num / 10;      // 37.1 --> 37
    }

    if (original==result)      // num will become 0 therefore we stored in 'original' 
    {
        cout << original << " IS A ARMSTRONG NBR !! ";
    }
    else{
        cout << original << " IS NOT A ARMSTRONG NBR !! ";
    }
    return 0;
}