#pragma once
#include<iostream>

class Overcoat {
private:
	std::string _name;
	std::string _mater;
	int _prezzo;
public:
	Overcoat();
	Overcoat(std::string name, std::string mater, int prezzo);
	Overcoat(Overcoat& ov);
	~Overcoat(){}
	void Mostra();
	void operator==(Overcoat& over);
	Overcoat& operator=(Overcoat& over);
	void operator>(Overcoat& over);
};
