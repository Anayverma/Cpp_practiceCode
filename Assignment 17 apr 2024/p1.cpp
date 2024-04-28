#include <iostream>
using namespace std;
class GroceryItem {
private:
    int StockNo;
    double price;
    int qStock;
    double tValue;

    void setStockNo() {
        cout << "Enter stock number (between 1000 and 9999): ";
        cin >> StockNo;
        while (StockNo < 1000 || StockNo > 9999) {
            cout << "Invalid stock number. Please enter a number between 1000 and 9999: ";
            cin >> StockNo;
        }
    }

    void setPrice() {
        cout << "Enter price (non-negative): ";
        cin >> price;
\
        while (price < 0) {
            cout << "Invalid price. Please enter a non-negative price: ";
            cin >> price;
        }
    }

    void setqStock() {
        cout << "Enter quantity in stock (non-negative): ";
        cin >> qStock;
        while (qStock < 0) {
            cout << "Invalid quantity. Please enter a non-negative quantity: ";
            cin >> qStock;
        }
    }

    void calculatetValue() {
        tValue = price * qStock;
    }

public:
    void dataEntry() {
        setStockNo();
        setPrice();
        setqStock();
        calculatetValue();
    }

    void display() const {
        cout << "\nStock Number: " << StockNo;
        cout << "\nPrice: " << price;
        cout << "\nQuantity : " << qStock;
        cout << "\nTotal Value: " << tValue << endl;
    }
};

int main() {
    GroceryItem items[10];

    cout << "\nEnter details for 10 items:\n";
    for (int i = 0; i < 10; ++i) {
        cout << "\nItem " << (i + 1) << ":\n";
        items[i].dataEntry();
    }

    cout << "\nDisplaying all 10 items:\n";
    for (int i = 0; i < 10; ++i) {
        cout << "\nItem " << (i + 1) << ":\n";
        items[i].display();
    }

    return 0;
}
