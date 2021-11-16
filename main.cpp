#include <iostream>

using namespace std;

//Function to get user input

string userTextInput() {
    
    cout << "Please enter something you wish to spam: " << flush;

    string userTxtInput;

    cin >> userTxtInput;

    return userTxtInput;

}

int userTimesInput() {

    cout << "Please enter the number of times you wish to spam the phrase: " << flush;

    int userIntInput;

    cin >> userIntInput;

    return userIntInput;
}

int main() {

    string Txtinput = userTextInput();

    int intinput = userTimesInput();

    for (int i = 0; i < intinput; i++) {

        cout << Txtinput << endl;

    }

    return 0;
}