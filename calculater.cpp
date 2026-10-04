// simple calculater
#include <iostream>
using namespace std;

int main(){
    int a;
    double num1,num2,result;

    cout << " " << endl;
    cout << string(20,'-') << endl;
    cout << "1.ADDITION" << endl;
    cout << "2.SUB" << endl;
    cout << "3.MULTI" << endl;
    cout << "4.DIV" << endl;
    cout << string(20,'-')<< endl;
    cout << "ENTER THE CHOICE  : ";
    cin >> a;
    
    cout << "ENTER THE NUM_1  : ";
    cin >> num1;

    cout << "ENTER THE NUM_2  : ";
    cin >> num2;


    if (a==1){
        result=num1+num2;
        cout << " " << endl;
        cout << string(40,'-') << endl;
        cout << "SUM OF TWO NBR IS " << result << endl;
        cout << string(40,'-') << endl;
        cout << " " << endl;

    }
    else if (a==2){
        result=num1-num2;
        cout << string(40,'-') << endl;
        cout << "SUBTRACTION OF " << num1 << " AND " << num2 << " IS " << result << endl;
        cout << string(40,'-') << endl;
        cout << " " << endl;
    }
    else if (a==3){
        result=num1*num2;
        cout << string(40,'-') << endl;
        cout << "MULTIPILCATION WITH " << num1 << " AND " << num2 << " IS " << result << endl;
        cout << string(40,'-') << endl;
        cout << " " << endl;
    }
    else if (a==4){
        result=num1/num2;
        cout << string(40,'-') << endl;
        cout << "DIVISION OF" << num1 << " AND " << num2 << " IS " << result << endl;
        cout << string(40,'-') << endl;
        cout << " " << endl;
    }
    else{
        cout << "INVAILD CHOICE";
    }
    return 0;
    
}