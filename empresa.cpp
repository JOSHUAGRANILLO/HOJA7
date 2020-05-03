#include <iostream>
#include <fstream>
using namespace std;

int main () {
  ofstream empresa;
  empresa.open ("example.txt",ios::out| ios::app);
  empresa << "Datos de empresa";
  empresa.close();
  return 0;
}
