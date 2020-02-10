#pragma once
#include <iostream>
#include "Colecao.h"
#include "Passagem.h"

using namespace std;

class Passagem;

class Comboio {
private:
	string sigla;
	Colecao <Passagem> Passagens;
	Colecao <Passagem>::iterator itP;

public:
	Comboio(string sgl);

	string getSigla();
	int getUltimaPassagem();

	bool addPassagem(Passagem* p);

	void print() const;
	void printParagens();

	bool operator<(const Comboio& c) const;

private:
	Passagem* findPassagem(int id);
};

