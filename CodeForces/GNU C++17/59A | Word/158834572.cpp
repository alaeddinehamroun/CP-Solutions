#include <iostream>
#include <cctype>
using namespace std;
 
int main() {
 
    string a, result;
    cin >> a;
    int nb_uppercase = 0, nb_lowercase = 0;
    for (int i = 0; i < a.length(); i++) {
        if (islower(a[i])) {
            nb_lowercase ++;
        }
        result += tolower(a[i]);
 
    }
    nb_uppercase = a.length() - nb_lowercase;
 
    if ( nb_lowercase >= nb_uppercase)
        cout << result;
    else {
        string res;
        for (int i = 0; i < a.length(); i++) {
            res += toupper(a[i]);
        }
        cout << res;
 
    }
    return 0;
 
}