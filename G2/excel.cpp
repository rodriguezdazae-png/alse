#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    int titleToNumber(string columnTitle) {
        int result = 0;
        for (char c : columnTitle) {
            result = result * 26 + (c - 'A' + 1);
        }
        return result;
    }
};

int main() {
    Solution sol;
    string columnTitle;
    cout << "Ingrese el titulo de la columna (solo mayusculas): ";
    cin >> columnTitle;
    int numero = sol.titleToNumber(columnTitle);
    cout << "El numero de columna correspondiente es: " << numero << endl;
    return 0;
}
