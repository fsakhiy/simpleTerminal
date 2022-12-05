#include <iostream>

using namespace std;

string getUserInput(string types){
    string input;
    if(types == "normal"){
        cout << "Enter Command: ";
        cin >> input;
    }
    return input;
}

void help(){
    cout << "list of command:" << endl;
    cout << "\t help" << endl;
    cout << "\t exit" << endl;
    return;
}

int calc(){
    char op;
    double a,b;
    cout << "enter your problem (+,-,/,*): ";
    cin >> a >> op >> b;
    switch(op) {
    case '+':
        return a+b;
    case '-':
        return a-b;
    case '/':
        return a/b;
    case '*':
        return a*b;
    default:
        cout << "error";
        break;
    }
}


int main()
{
    while(true) {
        string input = getUserInput("normal");
        if(input == "exit"){
            return 0;
        } else if(input == "help") {
            help();
        } else if(input == "calculator"){
            cout << calc() << endl;
        } else if(input == "count"){
            int a;
            int b = 1;
            cout << "enter how many you want to cout: ";
            cin >> a;
            while(b <= a) {
                cout << "*";
                b++;
            }
        } else{
            cout << "command not found." << endl;
        }
    }
}
