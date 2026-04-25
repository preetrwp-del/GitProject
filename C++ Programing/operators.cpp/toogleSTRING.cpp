#include <iostream>
using namespace std;

int main() {
    string str = "HeLLo WoRLd";

    for (char &ch : str) {
        if (isupper(ch))
            ch = tolower(ch);
        else if (islower(ch))
            ch = toupper(ch);
    }

    cout << "Toggled case: " << str << endl;
    return 0;
}
 