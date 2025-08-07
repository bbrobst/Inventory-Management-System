#pragma once

#include <string>

class Product
{
private:
	std::string name, productID;
	double price;
	int quantity;

public:
	Product(const std::string& name, const std::string& productID, double price, int quantity);

	void displayInfo() const;
	void addStock(int amount);
	void removeStock(int amount);
};