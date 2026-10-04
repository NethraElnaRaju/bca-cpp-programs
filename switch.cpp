// switch opertion
#include <iostream>
using namespace std;

int main(){
    char val;
    double num1,num2,result;
    cout << " " << endl;
    cout << string(40,'-') << endl;
    
    cout << "ENTER THE NUM_1  : ";
    cin >> num1;

    cout << "ENTER THE NUM_2  : ";
    cin >> num2;

    cout << "ENTER THE OPERATION (+,-,/,*) : ";
    cin >> val;
    cout << string(40,'-') << endl;
    cout << " " << endl;

    switch (val){
        case '+':
           cout << "| SUM IS " << num1+num2 << " |" << endl;
           cout << " " << endl;
           
           break;

        case '-':
           cout << "| SUB OF NBR IS " << num1-num2 << " |" << endl;
           cout << " " << endl;
           break;

        case '*':
           cout << "| MULTI OF NBR IS " << num1*num2 << " |" << endl;
           cout << " " << endl;
           break;

        case '/':
           cout << "| DIV OF NBR IS " << num1/num2 << " |" << endl;
           cout << " " << endl;
           break;
        default:
           cout << "| INVAILD |" << endl;
           cout << " " << endl;


    }

    return 0;
}