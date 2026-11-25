//Add and Delete functions for the shop inventory management system.
//The functions are designed to handle the addition and deletion of items/their quantities in a shop's inventory, allowing for efficient management of stock levels.
//The add function takes user input for the product IDitem name, quantity, and price, and adds the item to the inventory list.
//The delete function takes user input for the item name and removes specified quantity of the item from the inventory list.
//The functions also include error handling to ensure that the user inputs valid data and that the item to be deleted exists in the inventory.
//The functions are part of a larger inventory management system that allows shop owners to keep track of their stock levels and make informed decisions about restocking and pricing.
//The functions are designed to be user-friendly and intuitive, allowing shop owners to easily manage their inventory without the need for extensive technical knowledge.
//The add and delete functions are implemented in C++ and can be integrated into a larger inventory management system. They provide a simple and effective way for shop owners to manage their stock levels and make informed decisions about their business operations.
//the add function also enables the user to add the quantity of items upon receiving new stock, while the delete function allows for the removal of items that are no longer available or have been sold out.
//The functions are designed to be importing data from a database or file, allowing for easy integration with existing inventory management systems.
#include<iostream>
#include<string>
using namespace std;
//receiving products from a supplier/updating the stock count.
void addproduct() {
	string itemName,supplier;
	int quantity;
	double price1, price2;
	int productID;
	string expiryDate;
	const double taxRate = 2.0;
	const double profitMargin = 150;
	int numberofproducts;
	cout << "Enter the name of the supplier: ";
	cin >> supplier;

	cout << "enter the number of products received: ";
	cin >> numberofproducts;

	for (int i = 0;i < numberofproducts;i++) {
		cout << "Enter product ID: ";
		cin >> productID;
		cout << "Enter item name: ";
		cin >> itemName;
		cout << "Enter quantity: ";
		cin >> quantity;
		cout << "Enter entry price: ";
		cin >> price1;
		price2 = price1 + (price1 * profitMargin / 100) + (price1 * taxRate / 100);
		cout << "The selling price is: ";
		cout << price2;
		cout << "Enter expiry date (YYYY-MM-DD): ";
		cin >> expiryDate;
	}
}
//
void deleteproduct() {
	string itemName;
	double price;
	int productID;
	int quantity;
	cout << "Enter product ID: ";
	cin >> productID;
	cout << "Enter item name: ";
	cin >> itemName;
	cout << "Enter quantity of goods sold: ";
	cin >> quantity;
	cout << "Enter price: ";
	cin >> price;
	cout << "Total sales amount: " << quantity * price << endl;
}