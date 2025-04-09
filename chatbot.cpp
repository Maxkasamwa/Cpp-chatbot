// chatbot.cpp

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string toLower(string input) {
    transform(input.begin(), input.end(), input.begin(), ::tolower);
    return input;
}

int main() {
    string userInput;

    cout << "ChatBot: Hello! Type 'bye' to exit." << endl;

    while (true) {
        cout << "You: ";
        getline(cin, userInput);
        string lowered = toLower(userInput);

        if (lowered == "bye") {
            cout << "ChatBot: Goodbye!" << endl;
            break;
        } else if (lowered.find("hello") != string::npos) {
            cout << "ChatBot: Hi there!" << endl;
        } else if (lowered.find("how are you") != string::npos) {
            cout << "ChatBot: I'm just code, but I'm doing great!" << endl;
        } else if (lowered.find("your name") != string::npos) {
            cout << "ChatBot: I'm ChatBot written in C++." << endl;
        } else {
            cout << "ChatBot: I don't understand that yet." << endl;
        }
    }

    return 0;
}
