#include <iostream>
using namespace std;
int main() {
    float yarn;
    float hour;
    float rate;
    float price;
    cout << "How much yarn did I spent? ";
    cin >> yarn;
    cout << "How many hours did I work? ";
    cin >> hour;
    cout << "What is my hourly rate? ";
    cin >> rate;
    price = yarn + (hour * rate);
    cout << "The final price is: " << price << endl;
    return 0;
}

