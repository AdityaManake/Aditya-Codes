#include<bits/stdc++.h>
using namespace std;

struct Item {
    int code;
    string name;
    int quantity;
    float cost;
};

void displayItems(const vector<Item>& items) {
    cout << "\nItem Records:\n";
    cout << "Code\tName\t\tQuantity\tCost\n";
    cout << "---------------------------------------------\n";
    for (auto& item : items) {
        cout << item.code << "\t" << item.name << "\t\t"
             << item.quantity << "\t\t" << item.cost << endl;
    }
}

void sortByCode(vector<Item>& items) {
    sort(items.begin(), items.end(), [](const Item& a, const Item& b) {
        return a.code < b.code;
    });
    cout << "\nItems sorted by Item Code successfully!\n";
}

void searchByCode(const vector<Item>& items, int code) {
    bool found = false;
    for (auto& item : items) {
        if (item.code == code) {
            cout << "\nItem Found:\n";
            cout << "Code: " << item.code << endl;
            cout << "Name: " << item.name << endl;
            cout << "Quantity: " << item.quantity << endl;
            cout << "Cost: " << item.cost << endl;
            found = true;
            break;
        }
    }
    if (!found)
        cout << "\nItem with code " << code << " not found.\n";
}

int main() {
    vector<Item> items;
    int n;
    cout << "Enter number of items: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        Item item;
        cout << "\nEnter details of item " << i + 1 << ":\n";
        cout << "Enter Item Code: ";
        cin >> item.code;
        cout << "Enter Item Name: ";
        cin >> item.name;
        cout << "Enter Quantity: ";
        cin >> item.quantity;
        cout << "Enter Cost: ";
        cin >> item.cost;
        items.push_back(item);
    }

    int choice;
    do {
        cout << "\n--- MENU ---\n";
        cout << "1. Display Items\n";
        cout << "2. Sort Items by Code\n";
        cout << "3. Search Item by Code\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                displayItems(items);
                break;
            case 2:
                sortByCode(items);
                break;
            case 3: {
                int code;
                cout << "Enter item code to search: ";
                cin >> code;
                searchByCode(items, code);
                break;
            }
            case 4:
                cout << "Exiting program...\n";
                break;
            default:
                cout << "Invalid choice! Try again.\n";
        }
    } while (choice != 4);

    return 0;
}
