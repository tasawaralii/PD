#include <iostream>
using namespace std;

void flowerShop(int,int,int);

main() {
    int redRose, whiteRose, tulip;
    
    cout << "Enter the number of Red Roses: ";
    cin >> redRose;
    
    cout << "Enter the number of White Roses: ";
    cin >> whiteRose;
    
    cout << "Enter the number of Tulips: ";
    cin >> tulip;

    flowerShop(redRose, whiteRose, tulip);

}


void flowerShop(int redRose, int whiteRose, int tulip) {

    float totalPrice = (redRose * 2.00) + (whiteRose * 4.10) + (tulip * 2.50);

    if (totalPrice > 200) {
        float discountedPrice = totalPrice * 0.80;
        cout << "Original Price: $" << totalPrice << endl;
        cout << "Total Payable after 20% discount: $" << discountedPrice << endl;
    } else {
        cout << "Total Price: $" << totalPrice << endl;
    }
}
