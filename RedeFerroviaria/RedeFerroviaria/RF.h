#pragma once
#include <iostream>
#include "Colecao.h"
#include "Estacao.h"
#include "Comboio.h"

using namespace std;

class RF {

private:
	Colecao <Estacao> Estacoes;
	Colecao <Comboio> Comboios;
	Colecao <Estacao>::iterator itE;
	Colecao <Comboio>::iterator itC;

public:
	bool addComboio(string sgl);
	bool addEstacao(string sgl, string loc);
	bool addLigacaoAEstacao(string est, string estDeLigaco);
	bool passarComboioPorEstacao(string comb, string est, int lin, bool para);
	bool mostrarPassagensEstacao(string sgl);
	bool mostrarParagensComboio(string sgl);

private:
	Estacao* findEstacao(string sgl);
	Comboio* findComboio(string sgl);
};

