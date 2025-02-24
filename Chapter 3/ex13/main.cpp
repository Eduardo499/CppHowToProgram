#include <iostream>
#include <string>
#include "Invoice.h"

using namespace std;

int main() {
    Invoice invoice("1234", "Hammer", 10, 5);

    cout << "Part number: " << invoice.getPartNumber() << endl;
    cout << "Part description: " << invoice.getPartDescription() << endl;
    cout << "Quantity: " << invoice.getQuantity() << endl;
    cout << "Price per item: " << invoice.getPricePerItem() << endl;
    cout << "Invoice amount: " << invoice.getInvoiceAmount() << endl;

    invoice.setPartNumber("5678");
    invoice.setPartDescription("Screwdriver");
    invoice.setQuantity(20);
    invoice.setPricePerItem(10);

    cout << "Part number: " << invoice.getPartNumber() << endl;
    cout << "Part description: " << invoice.getPartDescription() << endl;
    cout << "Quantity: " << invoice.getQuantity() << endl;
    cout << "Price per item: " << invoice.getPricePerItem() << endl;
    cout << "Invoice amount: " << invoice.getInvoiceAmount() << endl;
    
    return 0;
}