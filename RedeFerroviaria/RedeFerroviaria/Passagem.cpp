#include "Passagem.h"

Passagem::Passagem(int i) {
	id = i;
}

Passagem::Passagem(int i, bool para, int lin, Estacao* e, Comboio* c) {
	id = i;
	comParagem = para;
	linha = lin;

	TDataHora dt;
	datahora = dt.hoje_agora();

	if (e->addPassagem(this) && c->addPassagem(this)) {
		if(para) cout << "//  O comboio -" << c->getSigla() << "- parou na estacao -" << e->getSigla() << "-.";
		else cout << "//  O comboio -" << c->getSigla() << "- passou na estacao -" << e->getSigla() << "-.";
		cout << endl << "//----------//----------//----------//----------//" << endl << endl;
	}
	else {
		cout << "//**********!!!ERRO!!!**********//" << endl
			<< "//  Falha ao adicionar passagem!" << endl
			<< "//  Tente outra vez!" << endl;
	}
}

int Passagem::getId() const {
	return id;
}
bool Passagem::getParagem() const {
	return comParagem;
}

void Passagem::print(bool pPara) const {
	cout << "//  ID: " << id << endl
		<< "//  Linha: " << linha << endl
		<< "//  Data: " << datahora.getData() << endl
		<< "//  Hora: " << datahora.getHora() << ":" << datahora.getMinuto() << endl;
	if (pPara) {
		cout << "//  Paragem: ";
		if (comParagem) cout << "Sim" << endl;
		else cout << "Nao" << endl;
	}
	cout << "//----------//----------//" << endl;
}

bool Passagem::operator<(const Passagem& p) const {
	return id < p.id;
}
