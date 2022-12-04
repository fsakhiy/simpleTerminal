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

int main()
{
    while(true) {
        string input = getUserInput("normal");
        if(input == "exit"){
            return 0;
        }
    }
}
