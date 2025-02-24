#include <iostream>
#include <string>

using namespace std;

class Invoice {
    private:
        string partNumber;
        string partDescription;
        int quantity;
        int pricePerItem;
    public:
        Invoice(string partNumber, string partDescription, int quantity, int pricePerItem) {
            this->partNumber = partNumber;
            this->partDescription = partDescription;
            this->quantity = quantity;
            this->pricePerItem = pricePerItem;
        }

        // Setters
        void setPartNumber(string partNumber) {
            this->partNumber = partNumber;
        }
        void setPartDescription(string partDescription) {
            this->partDescription = partDescription;
        }
        void setQuantity(int quantity) {
            this->quantity = quantity;
        }
        void setPricePerItem(int pricePerItem) {
            this->pricePerItem = pricePerItem;
        }

        // Getters
        string getPartNumber() const {
            return partNumber;
        }
        string getPartDescription() const {
            return partDescription;
        }
        int getQuantity() const {
            return quantity;
        }
        int getPricePerItem() const {
            return pricePerItem;
        }

        int getInvoiceAmount() const {
            return quantity * pricePerItem;
        }
};