// print even nbr upto 20
#include <iostream>
using namespace std;

int main(){
    int ch;
    cout << " " << endl;
    cout << string(25,'-') << endl;
    cout << "| 1.Print even nbr 1-20 |" << endl;
    cout << "| 2.Print odd nbr 1-20  |" << endl;
    cout << "| 3.Print 10 down to 1  |" << endl;
    cout << string(25,'-') << endl;

    cout << "WHAT UR CHOICE : ";
    cout << " ";
    cin >> ch;
    cout << " " << endl;

    if (ch==1){
        cout << "THE NBR'S ARE : ";
        for (int i=1; i<=20; i++){
            if (i%2==0){
                cout << i << " ";
            }
        }
    }

    else if (ch==2){
        cout << "THE NBR'S ARE : ";
        for (int i=1; i<=20; i++){
            if (i%2!=0){
                cout << i << " ";
            }
        }
    }

    else if (ch==3){
        cout << "THE NBR'S ARE : ";
        for (int i=10; i>=1; i--){
             cout << i << " ";
        }
    }
    else{
        cout << "INVAILD CHOICE " << endl;
    }
    return 0;
}