#include <iostream>
using namespace std;
struct Item {
	int id;
	string name;
	double price;
};

int main() {
	int n;
	// Step 1: Prompt user for the number of Items
	do {
		cout << "Enter the number of Items: ";
		cin >> n; 
	} while (n < 1);
	// Step 2: Dynamically allocate an array of Items
	Item* items = new Item[n];
	// Step 3: Populate the item array with values
	for (int i = 0; i < n; i++) {
		cout << "----------->> Item " << i + 1 << " <<-----------" << endl;
		cout << "Enter ID: ";
		cin >> items[i].id;
		cout << "Enter Name: ";
		cin >> items[i].name;
		cout << "Enter Price : ";
		cin >> items[i].price;
	}
	// Step 4: Calculate and print the total memory usage
	cout << "\nThe Total memory usage: " << sizeof(Item) * n << " bytes.\n" << endl;
    // Step 5: Display the contents of the array
	for (int i = 0; i < n; i++) {
		cout << "----------->> Item " << i + 1 << " <<-----------" << endl;
		cout << "ID: " << items[i].id << endl;
		cout << "Name: " << items[i].name << endl;
		cout << "Price : " << items[i].price << endl;
		cout << "----------------------------------\n" << endl;
	}
    // Step 6: Free the allocated memory
	delete[] items;
	items = nullptr;

	return 0;
}        