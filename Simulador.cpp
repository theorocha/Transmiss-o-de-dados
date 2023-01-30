#include <iostream>
#include <string>
#include <bitset>
#include <algorithm> 
#include <vector> 
#include <sstream>
#include <cstring>
#include <math.h>
#include <future>
#include "CamadaFisica.hpp"
#include "CamadaFisica.cpp"

using namespace std;

string buffer;

int main (void) {
  int tipoDeCodificacao = 1;

  cout << endl;

  cout << "Escolha a codificacao: " << endl << endl;
  cout << "1 - Codificacao Binaria" << endl;
  cout << "2 - Codificacao Manchester" << endl;
  cout << "3 - Codificacao Bipolar" << endl << endl;
  cin >> tipoDeCodificacao;

  cout << endl;

  main2(tipoDeCodificacao - 1);

  return 0;
}