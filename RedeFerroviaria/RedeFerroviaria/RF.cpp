#include "RF.h"

bool RF::addComboio(string sgl) {
	if (findComboio(sgl)) {
		cout << "//**********!!!ERRO!!!**********//" << endl
			<< "//  Sigla de comboio ja utilizada!" << endl
			<< "//  Tente uma sigla diferente!" << endl;
		return false;
	}
	else {
		Comboio c(sgl);
		Comboios.insert(c);

		if (findComboio(sgl)) {
			cout << "//Comboio adicionado com sucesso!" << endl
				<< "//  Comboio: " << findComboio(sgl)->getSigla() << endl 
				<< "//----------//----------//" << endl << endl;
			return true;
		}
		else {
			cout << "//**********!!!ERRO!!!**********//" << endl
				<< "//  Falha ao adicionar comboio!" << endl
				<< "//  Tente outra vez!" << endl;
			return false;
		}
	}
}
bool RF::addEstacao(string sgl, string loc) {
	if (findEstacao(sgl)) {
		cout << "//**********!!!ERRO!!!**********//" << endl
			<< "//  Sigla de estacao ja utilizada!" << endl
			<< "//  Tente uma sigla diferente!" << endl;
		return false;
	}
	else {
		Estacao e(sgl, loc);
		Estacoes.insert(e);

		if (findEstacao(sgl)) {
			cout << "//Estacao adicionada com sucesso!" << endl
				<< "//  Estacao: " << findEstacao(sgl)->getSigla() << endl
				<< "//  Localizacao: " << findEstacao(sgl)->getLocal() << endl 
				<< "//----------//----------//" << endl << endl;
			return true;
		}
		else {
			cout << "//**********!!!ERRO!!!**********//" << endl
				<< "//  Falha ao adicionar estacao!" << endl
				<< "//  Tente outra vez!" << endl;
			return false;
		}
	}
}
bool RF::addLigacaoAEstacao(string est, string estDeLigacao) {
	if (est == estDeLigacao) {
		cout << "//**********!!!ERRO!!!**********//" << endl
			<< "//  Duas siglas iguais! Uma estacao nao pode estar ligada a si propria!" << endl
			<< "//  Introduza duas siglas diferentes!" << endl;
		return false;
	}
	else if (!findEstacao(est)) {
		cout << "//**********!!!ERRO!!!**********//" << endl
			<< "//  A 1a sigla de estacao e invalida!" << endl
			<< "//  Tente duas das seguintes: ";
		for (itE = Estacoes.begin(); itE != Estacoes.end(); itE++) {
			itE->print();
		}
		cout << endl;
		return false;
	}
	else if (!findEstacao(estDeLigacao)) {
		cout << "//**********!!!ERRO!!!**********//" << endl
			<< "//  A 2a sigla de estacao e invalida!" << endl
			<< "//  Tente duas das seguintes: ";
		for (itE = Estacoes.begin(); itE != Estacoes.end(); itE++) {
			itE->print();
		}
		cout << endl;
		return false;
	}
	else {
		if (findEstacao(est)->addLigacao(findEstacao(estDeLigacao))) {
			if (findEstacao(estDeLigacao)->addLigacao(findEstacao(est))) {
				cout << "//Ligacao adicionada com sucesso!" << endl
					<< "//  Ligacao: " << findEstacao(est)->getSigla() << "---" << findEstacao(estDeLigacao)->getSigla() << endl 
					<< "//----------//----------//" << endl << endl;
				return true;
			}
			else {
				cout << "//**********!!!ERRO!!!**********//" << endl
					<< "//  A ligacao ja existe!" << endl
					<< "//  Introduza uma ligacao diferente!" << endl;
				return false;
			}
		}
		else {
			cout << "//**********!!!ERRO!!!**********//" << endl
				<< "//  A ligacao ja existe!" << endl
				<< "//  Introduza uma ligacao diferente!" << endl;
			return false;
		}
	}
}

bool RF::passarComboioPorEstacao(string comb, string est, int lin, bool para) {
	if (!findComboio(comb)) {
		cout << "//**********!!!ERRO!!!**********//" << endl
			<< "//  Sigla de comboio invalida!" << endl
			<< "//  Tente uma das seguintes: ";
		for (itC = Comboios.begin(); itC != Comboios.end(); itC++) {
			itC->print();
		}
		cout << endl;
		return false;
	}
	else if (!findEstacao(est)) {
		cout << "//**********!!!ERRO!!!**********//" << endl
			<< "//  Sigla de estacao invalida!" << endl
			<< "//  Tente uma das seguintes: ";
		for (itE = Estacoes.begin(); itE != Estacoes.end(); itE++) {
			itE->print();
		}
		cout << endl;
		return false;
	}
	else {
		int ultimaP = findComboio(comb)->getUltimaPassagem();
		if (ultimaP == 0) {
			int id = 1;
			for (itE = Estacoes.begin(); itE != Estacoes.end(); itE++) {
				id += itE->getNumPassagens();
			}
			cout << "//----------!ATENCAO!----------//" << endl
				<< "//  O comboio -" << findComboio(comb)->getSigla()
				<< "- nao tem passagens registadas." << endl
				<< "//  A estacao -" << findEstacao(est)->getSigla()
				<< "- foi registada como a primeira passagem deste comboio" << endl;
			Passagem p(id, para, lin, findEstacao(est), findComboio(comb));
			return true;
		}
		else {
			int id = 1;
			string ultimaEst = "";
			for (itE = Estacoes.begin(); itE != Estacoes.end(); itE++) {
				id += itE->getNumPassagens();
				if (itE->getUltimaPassagem(ultimaP) != "") {
					ultimaEst = itE->getUltimaPassagem(ultimaP);
				}
			}
			if (findEstacao(ultimaEst)->getLigacao(est)) {
				Passagem p(id, para, lin, findEstacao(est), findComboio(comb));
				return true;
			}
			else {
				cout << "//**********!!!ERRO!!!**********//" << endl
					<< "//  A estacao -" << findEstacao(ultimaEst)->getSigla()
					<< "- nao tem ligacao a -" << findEstacao(est)->getSigla() << "-." << endl
					<< "//  Tente uma estacao que -" << findEstacao(ultimaEst)->getSigla()
					<< "- tenha ligacao: ";
				findEstacao(ultimaEst)->printLigacoes();
				cout << endl;
				return false;
			}
		}
	}
}

bool RF::mostrarPassagensEstacao(string sgl) {
	if (findEstacao(sgl)) {
		cout << "//----------//----------//----------//" << endl
			<< "//   Passagens da estacao -" << sgl << "-" << endl
			<< "//----------//----------//----------//" << endl;
		findEstacao(sgl)->printPassagens();
		cout << endl << endl;
		return true;
	}
	else {
		cout << "//**********!!!ERRO!!!**********//" << endl
			<< "//  Sigla de estacao invalida!" << endl
			<< "//  Tente uma das seguintes: ";
		for (itE = Estacoes.begin(); itE != Estacoes.end(); itE++) {
			itE->print();
		}
		cout << endl;
		return false;
	}
}
bool RF::mostrarParagensComboio(string sgl) {
	if (findComboio(sgl)) {
		cout << "//----------//----------//----------//" << endl
			<< "//   Paragens do comboio -" << sgl << "-" << endl
			<< "//----------//----------//----------//" << endl;
		findComboio(sgl)->printParagens();
		cout << endl << endl;
		return true;
	}
	else {
		cout << "//**********!!!ERRO!!!**********//" << endl
			<< "//  Sigla de comboio invalida!" << endl
			<< "//  Tente uma das seguintes: ";
		for (itC = Comboios.begin(); itC != Comboios.end(); itC++) {
			itC->print();
		}
		cout << endl;
		return false;
	}
}

Estacao* RF::findEstacao(string sgl) {
	Estacao e(sgl);
	return Estacoes.find(e);
}
Comboio* RF::findComboio(string sgl) {
	Comboio c(sgl);
	return Comboios.find(c);
}