#include <iostream>
#include "RF.h"

using namespace std;

RF RedeFerro;

void separador() {
	cout << endl << endl << "//--------------//----------------//---------------//---------------//" << endl << endl << endl;
}

void cabe() {}

void Menu() {
	string op;
	cout << endl
		<< "//++++++++++++++++++++++++++++++++++++++++++++++++++++++++//" << endl
		<< "//                                                        //" << endl
		<< "//                    REDE FERROVIARIA                    //" << endl
		<< "//                                                        //" << endl
		<< "//++++++++++++++++++++++++++++++++++++++++++++++++++++++++//" << endl
		<< "//  1 - Adicionar um comboio;" << endl
		<< "//  2 - Adicionar uma estacao;" << endl
		<< "//  3 - Criar ligacao entre estacoes;" << endl
		<< "//  4 - Passar comboio por estacao;" << endl
		<< "//  5 - Mostrar as passagens por uma estacao;" << endl
		<< "//  6 - Mostrar as paragens de um comboio;" << endl
		<< "//  X - Sair;" << endl
		<< "//" << endl
		<< "//  Opcao: ";
	cin >> op;

	if (op == "1") {
		string sigla;

		cout
			<< "//------------------------------//" << endl
			<< "//     Adicionar um comboio     //" << endl
			<< "//------------------------------//" << endl
			<< "//  Insira a sigla do comboio (Ex: ""AA00"").     X - Cancelar." << endl;

		while (true) {
			cout << "//  Sigla: ";
			cin >> sigla;
			if (sigla == "X" || sigla == "x") break;
			else if (RedeFerro.addComboio(sigla)) break;
		}

		Menu();
	}

	else if (op == "2") {
		string sigla;
		string local;

		cout
			<< "//-------------------------------//" << endl
			<< "//     Adicionar uma estacao     //" << endl
			<< "//-------------------------------//" << endl
			<< "//  Insira a sigla e localidade da estacao (Ex: ""Sigla: PORTO0"" , ""Localidade: Porto"").     X - Cancelar" << endl;

		while (true) {
			cout << "//  Sigla: ";
			cin >> sigla;
			if (sigla == "X" || sigla == "x") break;
			cout << "//  Localidade: ";
			cin >> local;
			if (local == "X" || local == "x") break;
			else if (RedeFerro.addEstacao(sigla, local)) break;
		}

		Menu();
	}

	else if (op == "3") {
		string est;
		string estLig;

		cout
			<< "//--------------------------------------//" << endl
			<< "//     Criar ligacao entre estacoes     //" << endl
			<< "//--------------------------------------//" << endl
			<< "//  Insira as siglas das estacoes que pretende criar ligacao." << endl
			<< "//  (Ex: ""Sigla1: BRAGCA"" , ""Sigla2: PORTO1"").     X - Cancelar" << endl;

		while (true) {
			cout << "//  Sigla1: ";
			cin >> est;
			if (est == "X" || est == "x") break;
			cout << "//  Sigla2: ";
			cin >> estLig;
			if (estLig == "X" || estLig == "x") break;
			else if (RedeFerro.addLigacaoAEstacao(est, estLig)) break;
		}

		Menu();
	}

	if (op == "4") {
		string est;
		string comb;
		int lin;
		string para;
		bool p;

		cout
			<< "//------------------------------------//" << endl
			<< "//     Passar comboio por estacao     //" << endl
			<< "//------------------------------------//" << endl
			<< "//  Insira a sigla do comboio e da estacao onde a passagem vai ocorrer." << endl
			<< "//  Insira a linha de passagem e ""S"" se for paragem ou ""N"" se nao for." << endl
			<< "//  (Ex: ""Comboio: AA00"" , ""Estacao: PORTO0"", ""Linha: 2"" , ""Paragem: S"").     X - Cancelar" << endl;

		while (true) {
			cout << "//  Comboio: ";
			cin >> comb;
			if (comb == "X" || comb == "x") break;
			cout << "//  Estacao: ";
			cin >> est;
			if (est == "X" || est == "x") break;
			cout << "//  Linha: ";
			cin >> lin;
			cout << "//  Paragem: ";
			cin >> para;
			if (para == "N" || para == "n") if (RedeFerro.passarComboioPorEstacao(comb, est, lin, false)) break;
			if(para == "S" || para == "s") if (RedeFerro.passarComboioPorEstacao(comb, est, lin, true)) break;
			if (para == "X" || para == "x") break;
			else {}
		}

		Menu();
	}

	if (op == "5") {
		string sigla;

		cout
			<< "//----------------------------------------------//" << endl
			<< "//     Mostrar as passagens por uma estacao     //" << endl
			<< "//----------------------------------------------//" << endl
			<< "//  Insira a sigla da estacao (Ex: ""PORTO0"").     X - Cancelar." << endl;

		while (true) {
			cout << "//  Sigla: ";
			cin >> sigla;
			if (sigla == "X" || sigla == "x") break;
			else if (RedeFerro.mostrarPassagensEstacao(sigla)) break;
		}

		Menu();
	}

	if (op == "6") {
		string sigla;

		cout
			<< "//-------------------------------------------//" << endl
			<< "//     Mostrar as paragens de um comboio     //" << endl
			<< "//-------------------------------------------//" << endl
			<< "//  Insira a sigla do comboio (Ex: ""AA00"").     X - Cancelar." << endl;

		while (true) {
			cout << "//  Sigla: ";
			cin >> sigla;
			if (sigla == "X" || sigla == "x") break;
			else if (RedeFerro.mostrarParagensComboio(sigla)) break;
		}

		Menu();
	}
}

int main() {

	RedeFerro.addComboio("AA01");
	RedeFerro.addComboio("AB02");
	RedeFerro.addComboio("AA01");	//erro - nao pode haver siglas iguais
	separador();

	RedeFerro.addEstacao("BRAGCA", "Braganca");
	RedeFerro.addEstacao("VILRAL", "Vila Real");
	RedeFerro.addEstacao("PORTO1", "Porto");
	RedeFerro.addEstacao("PORTO2", "Porto");
	RedeFerro.addEstacao("BRAGCA", "Braganca");	//erro - nao pode haver siglas iguais
	separador();

	RedeFerro.addLigacaoAEstacao("BRAGCA", "VILRAL");
	RedeFerro.addLigacaoAEstacao("VILRAL", "PORTO1");
	RedeFerro.addLigacaoAEstacao("VILRAL", "PORTO2");
	RedeFerro.addLigacaoAEstacao("PORTO1", "PORTO2");
	RedeFerro.addLigacaoAEstacao("PORTO1", "PORTO1");	//erro - nao pode ligar a si proprio
	//RedeFerro.addLigacaoAEstacao("PORTO0", "PORTO2");	//erro - nao pode ligar a estacoes que nao existem
	RedeFerro.addLigacaoAEstacao("BRAGCA", "VILRAL");	//erro - ligacao ja existe
	separador();

	RedeFerro.passarComboioPorEstacao("AA01", "BRAGCA", 1, true);
	RedeFerro.passarComboioPorEstacao("AA01", "VILRAL", 2, false);
	RedeFerro.passarComboioPorEstacao("AA01", "PORTO1", 1, true);
	RedeFerro.passarComboioPorEstacao("AA01", "PORTO2", 2, true);
	RedeFerro.passarComboioPorEstacao("AA01", "PORTO1", 2, false);
	RedeFerro.passarComboioPorEstacao("AA01", "VILRAL", 2, true);
	RedeFerro.passarComboioPorEstacao("AA01", "BRAGCA", 1, true);

	RedeFerro.passarComboioPorEstacao("AB02", "PORTO2", 1, true);
	RedeFerro.passarComboioPorEstacao("AB02", "VILRAL", 1, true);
	RedeFerro.passarComboioPorEstacao("AB02", "PORTO1", 1, false);
	RedeFerro.passarComboioPorEstacao("AB02", "PORTO2", 2, true);

	//RedeFerro.passarComboioPorEstacao("ZZ99", "BRAGCA", 1, true);	//erro - comboio nao existe
	//RedeFerro.passarComboioPorEstacao("AA01", "PORTO0", 1, true);	//erro - estacao nao existe
	RedeFerro.passarComboioPorEstacao("AA01", "PORTO2", 1, true);	//erro - falta de ligacao
	separador();

	RedeFerro.mostrarPassagensEstacao("BRAGCA");
	RedeFerro.mostrarPassagensEstacao("VILRAL");
	RedeFerro.mostrarPassagensEstacao("PORTO1");
	RedeFerro.mostrarPassagensEstacao("PORTO2");
	//RedeFerro.mostrarPassagensEstacao("PORTO0");	//erro - estacao nao existe
	separador();

	RedeFerro.mostrarParagensComboio("AA01");
	RedeFerro.mostrarParagensComboio("AB02");
	//RedeFerro.mostrarParagensComboio("ZZ99");	//erro - comboio nao existe
	separador();

	Menu();
}