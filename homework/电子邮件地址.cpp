#include <iostream>
#include <regex>

using namespace std;

int main() {
    string email;
    cout << "Please enter an email address: ";
    cin >> email;

    regex pattern("[a-zA-Z0-9._%+-]+@[a-zA-Z0-9.-]+\\.[a-zA-Z]{2,}");

    if (regex_match(email, pattern)) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
