#include"Overcoat.h"

Overcoat::Overcoat() :_name("niente"),_mater("niente"),_prezzo(0){}
Overcoat::Overcoat(std::string name,std::string mater,int prezzo):_name(name),_mater(mater),_prezzo(prezzo){}
Overcoat::Overcoat(Overcoat& ov) :_name(ov._name), _mater(ov._mater),_prezzo(ov._prezzo){}

void Overcoat::Mostra() {
	std::cout << "Тип одежды : " << _name << '\n';
	std::cout << "Материал   : " << _mater << '\n';
	std::cout << "Стоимость  : " << _prezzo << "\n\n";
}

void Overcoat::operator==(Overcoat& over) {
	if (_name == over._name) {
		std::cout << "Одинаковые типы одежды.\n"; return;
	}
	std::cout << "Разные типы одежды.\n";
}
Overcoat& Overcoat::operator=(Overcoat& over) {
	if (this == &over) {
		return *this;
	}
	_name = over._name;
	_mater = over._mater;
	_prezzo = over._prezzo;
	return *this;
}
void Overcoat::operator>(Overcoat& over) {
	Overcoat max;
	if (_prezzo > over._prezzo) {
		max = *this;
	}
	else
		max = over;
	std::cout << "Стоимость " << max._name << " больше\n";
}