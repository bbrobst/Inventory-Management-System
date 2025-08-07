#include "Product.h"

#include <iostream>

Product::Product(const std::string& name, const std::string& productID, double price, int quantity) : name(name), productID(productID), price(price), quantity(quantity)
{
}

void Product::displayInfo() const
{
	std::cout << "Name: " << name << "\n";
	std::cout << "Product ID: " << productID << "\n";
	std::cout << "Price: " << price << "\n";
	std::cout << "Quantity " << quantity << "\n\n";
}
void Product::addStock(int amount)
{
	if (amount > 0) {
		quantity += amount;
		std::cout << amount << " was added to stock.\n";
	}
	else {
		std::cout << "The amount added should be greater than 0.\n";
	}
}

void Product::removeStock(int amount)
{
	if (amount <= quantity && amount > 0) {
		quantity -= amount;
		std::cout << amount << " was removed from stock.\n";
	}
	else {
		std::cout << "The amount removed should be greater than 0 and less than or equal to the available in stock.\n";
	}
}