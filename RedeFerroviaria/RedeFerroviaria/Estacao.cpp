#include "Estacao.h"

Estacao::Estacao(string sgl) {
	sigla = sgl;
}
Estacao::Estacao(string sgl, string loc) {
	sigla = sgl;
	local = loc;
}

string Estacao::getSigla()  {
	return sigla;
}
string Estacao::getLocal() {
	return local;
}
int Estacao::getNumPassagens() const {
	return Passagens.size();
}
string Estacao::getUltimaPassagem(int id) const {
	Passagem p(id);
	if (Passagens.find(p)){
		return sigla;
	}
	else {
		return "";
	}
}
bool Estacao::getLigacao(string sgl) {
	if (findLigacao(sgl)) {
		return true;
	}
	else {
		return false;
	}
}

bool Estacao::addLigacao(Estacao* e) {
	if (findLigacao(e->getSigla())) {
		return false;
	}
	else {
		return Ligacoes.insert(*e);
	}
}
bool Estacao::addPassagem(Passagem* p) {
	if (findPassagem(p->getId())) {
		return false;	//Passagem ja existe
	}
	else {
		return Passagens.insert(*p);
	}
}

void Estacao::print() const{
	cout << "-" << sigla << "- ";
}
void Estacao::printLigacoes() {
	for (itL = Ligacoes.begin(); itL != Ligacoes.end(); itL++) {
		itL->print();
	}
}
void Estacao::printPassagens() {
	for (itP = Passagens.begin(); itP != Passagens.end(); itP++) {
		itP->print(true);
	}
}

bool Estacao::operator<(const Estacao& e) const {
	return sigla < e.sigla;
}

Estacao* Estacao::findLigacao(string sgl) {
	Estacao l(sgl);
	return Ligacoes.find(l);
}
Passagem* Estacao::findPassagem(int id) {
	Passagem p(id);
	return Passagens.find(p);
}