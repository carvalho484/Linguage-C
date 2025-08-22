/******************************************************************************
Projeto: Simulação de Carro
Autor: Lucas Carvalho
Data: 23/08/2025
Descrição:
     Programa que cria um carro, recebe marca, modelo, velocidade
     inicial, velocidade máxima e torques de frenagem/aceleração.
     Simula frenagem e aceleração, exibindo a velocidade passo a passo.
*******************************************************************************/
#include <iostream>
#include <string>

using namespace std;

class Carro {
private:
	string marca;
	string modelo;
	int velocidade;

public:

	Carro(string MC, string MD, int VL) {
		marca = MC;
		modelo = MD;
		if(VL >= 0) velocidade = VL;
		else velocidade = 0;
	}

	void frear(int freio) {
		for(int i = velocidade; i >= 0; i -= freio) {
			velocidade = i;

			cout << "Frenagem: " <<  velocidade << endl;
		}
	}

	void aceleracao(int retomada, int velocidade_total) {
		for(int i = velocidade; i <= velocidade_total; i += retomada) {
			velocidade = i;

			cout << "Retomada: " << velocidade << endl;
		}
	}

};

int main()
{
	string MC, MD;
	int FR, RT, VL, VT;

	cout << "Qual a marca do carro ?" << endl;
	getline(cin, MC);

	cout << "Qual o modelo do carro ?" << endl;
	getline(cin, MD);

	cout << endl << "Qual a velocidade inicial do carro (km/h) ? " << endl;
	cin >> VL;

	Carro C(MC, MD, VL);

	cout << endl << "Qual a velocidade mC!xima do carro (km/h) ? " << endl;
	cin >> VT;

	cout << endl << "Qual o torque de frenagem ?" << endl;
	cin >> FR;
	cout << endl;

	C.frear(FR);

	cout << endl << "Qual e a forC'a de aceleraC'C#o (torque) ?" << endl;
	cin >> RT;
	cout << endl;

	C.aceleracao(RT, VT);

	return 0;
}