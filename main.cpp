#include <iostream>
#include <string>
using namespace std;

int main() {
    string namn;
    cout << "Vad heter du? ";
    getline(cin, namn);
    cout << "Hej då " << namn << "!" << endl;
    return 0;
}
