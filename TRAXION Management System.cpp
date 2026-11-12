#include <iostream>
#include <string>
using namespace std;

const int MAX = 10; // Limit for records

int main() {
    // 1. Supplier Arrays
    int supID[MAX];
    string supName[MAX];
    int supTotal = 0;

    // 2. Inventory Arrays
    int prodID[MAX];
    string prodName[MAX];
    int prodQty[MAX];
    int prodPrice[MAX];
    int prodTotal = 0;

    // 3. Warehouse Arrays
    int whID[MAX];
    string whName[MAX];
    int whTotal = 0;

    // 4. Shipment Arrays
    int shipID[MAX];
    string shipDest[MAX];
    string shipStatus[MAX];
    int shipTotal = 0;

    int choice = 0;

    while (choice != 5) {
        cout << "\n========================================";
        cout << "\n       TRAXION MANAGEMENT SYSTEM        ";
        cout << "\n========================================";
        cout << "\n1. Supplier Management";
        cout << "\n2. Inventory & Low Stock Management";
        cout << "\n3. Warehouse Management";
        cout << "\n4. Shipment Tracking & Risk Analysis";
        cout << "\n5. Exit System";
        cout << "\nEnter your choice: ";
        cin >> choice;

        if (choice == 1) {
            // --- Supplier Menu ---
            int subChoice;
            cout << "\n--- Supplier Menu ---";
            cout << "\n1. Add Supplier";
            cout << "\n2. Show Suppliers";
            cout << "\nEnter choice: ";
            cin >> subChoice;

            if (subChoice == 1) {
                if (supTotal < MAX) {
                    cout << "Enter Supplier ID: ";
                    cin >> supID[supTotal];
                    cin.ignore();
                    cout << "Enter Supplier Name: ";
                    getline(cin, supName[supTotal]);
                    supTotal++;
                    cout << "Supplier added successfully!\n";
                } else {
                    cout << "Supplier list is full!\n";
                }
            } else if (subChoice == 2) {
                cout << "\n--- Supplier List ---\n";
                if (supTotal == 0) cout << "No suppliers found.\n";
                for (int i = 0; i < supTotal; i++) {
                    cout << "ID: " << supID[i] << " | Name: " << supName[i] << endl;
                }
            }
        } 
        else if (choice == 2) {
            // --- Inventory Menu ---
            int subChoice;
            cout << "\n--- Inventory Menu ---";
            cout << "\n1. Add Product";
            cout << "\n2. Show Products & Low Stock Alerts";
            cout << "\nEnter choice: ";
            cin >> subChoice;

            if (subChoice == 1) {
                if (prodTotal < MAX) {
                    cout << "Enter Product ID: ";
                    cin >> prodID[prodTotal];
                    cin.ignore();
                    cout << "Enter Product Name: ";
                    getline(cin, prodName[prodTotal]);
                    cout << "Enter Quantity: ";
                    cin >> prodQty[prodTotal];
                    cout << "Enter Price: ";
                    cin >> prodPrice[prodTotal];
                    prodTotal++;
                    cout << "Product added successfully!\n";
                } else {
                    cout << "Inventory is full!\n";
                }
            } else if (subChoice == 2) {
                cout << "\n--- Inventory List & Status ---\n";
                if (prodTotal == 0) cout << "No products found.\n";
                for (int i = 0; i < prodTotal; i++) {
                    cout << "ID: " << prodID[i] << " | Name: " << prodName[i] 
                         << " | Qty: " << prodQty[i] << " | Price: " << prodPrice[i];
                    if (prodQty[i] <= 5) {
                        cout << " -> [LOW STOCK ALERT]";
                    }
                    cout << endl;
                }
            }
        } 
        else if (choice == 3) {
            // --- Warehouse Menu ---
            int subChoice;
            cout << "\n--- Warehouse Menu ---";
            cout << "\n1. Add Warehouse";
            cout << "\n2. Show Warehouses";
            cout << "\nEnter choice: ";
            cin >> subChoice;

            if (subChoice == 1) {
                if (whTotal < MAX) {
                    cout << "Enter Warehouse ID: ";
                    cin >> whID[whTotal];
                    cin.ignore();
                    cout << "Enter Warehouse Name: ";
                    getline(cin, whName[whTotal]);
                    whTotal++;
                    cout << "Warehouse added successfully!\n";
                } else {
                    cout << "Warehouse list is full!\n";
                }
            } else if (subChoice == 2) {
                cout << "\n--- Warehouse List ---\n";
                if (whTotal == 0) cout << "No warehouses found.\n";
                for (int i = 0; i < whTotal; i++) {
                    cout << "ID: " << whID[i] << " | Name: " << whName[i] << endl;
                }
            }
        } 
        else if (choice == 4) {
            // --- Shipment Menu ---
            int subChoice;
            cout << "\n--- Shipment Menu ---";
            cout << "\n1. Create Shipment";
            cout << "\n2. Track Shipments & Status";
            cout << "\nEnter choice: ";
            cin >> subChoice;

            if (subChoice == 1) {
                if (shipTotal < MAX) {
                    cout << "Enter Shipment ID: ";
                    cin >> shipID[shipTotal];
                    cin.ignore();
                    cout << "Enter Destination: ";
                    getline(cin, shipDest[shipTotal]);
                    shipStatus[shipTotal] = "Pending"; // Initial status as per requirement
                    shipTotal++;
                    cout << "Shipment created successfully with status: Pending!\n";
                } else {
                    cout << "Shipment list is full!\n";
                }
            } else if (subChoice == 2) {
                cout << "\n--- Shipment Tracking List ---\n";
                if (shipTotal == 0) cout << "No shipments found.\n";
                for (int i = 0; i < shipTotal; i++) {
                    cout << "ID: " << shipID[i] << " | Destination: " << shipDest[i] 
                         << " | Status: " << shipStatus[i] << endl;
                }
            }
        } 
        else if (choice == 5) {
            cout << "\nExiting TRAXION System. Thank you!\n";
        } 
        else {
            cout << "\nInvalid choice. Please try again.\n";
        }
    }

    return 0;
}