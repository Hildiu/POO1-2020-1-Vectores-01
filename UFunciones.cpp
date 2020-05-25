//
// Created by Maria Hilda Bermejo on 10/15/19.
//
#include "UFunciones.h"

void Leer(vector<TReal> &v)
{
  for(auto iter=begin(v); iter!=end(v); iter++)
  { cout << distance(begin(v), iter) << " : ";
    cin >> *iter;
  }
}

void Imprimir(vector<TReal> &v)
{
 for( auto iter = begin(v); iter!=end(v); iter++ )
   cout << *iter << "  ";
}

void ImprimirAlReves(vector<TReal> &v)
{
  for(auto iter = rbegin(v); iter!=rend(v); iter++)
    cout << *iter << "  ";
}