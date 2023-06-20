#include<iostream>
#include"Overcoat.h"

int main() {
	setlocale(LC_ALL, "Russian");
	Overcoat overc1("Costume", "lino", 24000);
	Overcoat overc2("Camicia", "cotone", 6800);
	Overcoat overc3("Cappotto", "lana", 32000);
	Overcoat overc4("Maglione", "lana", 7250);
	Overcoat overc5("Camicia", "seta", 9000);

	overc1.Mostra(); overc2.Mostra(); overc3.Mostra(); overc4.Mostra(); overc5.Mostra();

	overc1 == overc2;
	overc2 == overc5;

	std::cout << '\n';

	(overc1 = overc4).Mostra();

	overc3.operator>(overc2);

	return 0;
}