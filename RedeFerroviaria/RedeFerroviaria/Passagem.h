#pragma once
#include "TDataHora.h"
#include "Estacao.h"
#include "Comboio.h"

using namespace std;

class Estacao;
class Comboio;

class Passagem {

private:
	int id;
	TDataHora datahora;
	bool comParagem;
	int linha;

public:
	Passagem(int i);
	Passagem(int i, bool para, int lin, Estacao* e, Comboio* c);

	int getId() const;
	bool getParagem() const;

	void print(bool pPara) const;

	bool operator<(const Passagem& p) const;
};

