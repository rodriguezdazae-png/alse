#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>  // Necesario para INT_MAX
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice = INT_MAX;
        int maxProfit = 0;
        for (int price : prices) {
            if (price < minPrice)
                minPrice = price;
            else if (price - minPrice > maxProfit)
                maxProfit = price - minPrice;
        }
        return maxProfit;
    }
};

int main() {
    Solution sol;
    int n;
    cout << "Ingrese la cantidad de dias: ";
    cin >> n;
    vector<int> prices(n);
    cout << "Ingrese los precios separados por espacio: ";
    for (int i = 0; i < n; i++) cin >> prices[i];
    int resultado = sol.maxProfit(prices);
    cout << "\nEl beneficio maximo posible es: " << resultado << endl;
    return 0;
}
