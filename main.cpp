#include <iostream>
#include "Product.h"


int main() {
	Product p1("Nintendo Switch", "82938", 500, 50);
	p1.displayInfo();
	std::cout << "\n";
	p1.addStock(20);
	p1.displayInfo();
	std::cout << "\n";
	p1.removeStock(50);
	p1.displayInfo();
}