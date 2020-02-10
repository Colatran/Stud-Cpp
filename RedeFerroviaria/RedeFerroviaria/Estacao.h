#pragma once
#include <iostream>
#include "Colecao.h"
#include "Passagem.h"

using namespace std;

class Passagem;

class Estacao {
private:
	string sigla;
	string local;
	Colecao <Estacao> Ligacoes;
	Colecao <Passagem> Passagens;
	Colecao <Estacao>::iterator itL;
	Colecao <Passagem>::iterator itP;

public:
	Estacao(string sgl);
	Estacao(string sgl, string loc);

	string getSigla();
	string getLocal();
	int getNumPassagens() const;
	string getUltimaPassagem(int id) const;
	bool getLigacao(string sgl);

	bool addLigacao(Estacao* e);
	bool addPassagem(Passagem* p);

	void print() const;
	void printLigacoes();
	void printPassagens();

	bool operator<(const Estacao& e) const;

private:
	Estacao* findLigacao(string sgl);
	Passagem* findPassagem(int id);
};

