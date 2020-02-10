#include "Comboio.h"

Comboio::Comboio(string sgl) {
	sigla = sgl;
}

string Comboio::getSigla() {
	return sigla;
}
int Comboio::getUltimaPassagem() {
	int id = 0;
	for (itP = Passagens.begin(); itP != Passagens.end(); itP++) {
		if (itP->getId() > id) {
			id = itP->getId();
		}
	}
	return id;
}

bool Comboio::addPassagem(Passagem* p) {
	if (findPassagem(p->getId())) {
		return false;	//Passagem ja existe
	}
	else {
		return Passagens.insert(*p);
	}
}

void Comboio::print() const{
	cout << "-" << sigla << "- ";
}
void Comboio::printParagens() {
	for (itP = Passagens.begin(); itP != Passagens.end(); itP++) {
		if (itP->getParagem()) {
			itP->print(false);
		}
	}
}

bool Comboio::operator<(const Comboio& c) const {
	return sigla < c.sigla;
}

Passagem* Comboio::findPassagem(int id) {
	Passagem p(id);
	return Passagens.find(p);
}
