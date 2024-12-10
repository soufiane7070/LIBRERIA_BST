#include <ctime>   
#include <iostream>
#include "Nodo.h"
using namespace std;

int main() {



  nodo *radice = nullptr;

  radice->inser(radice, 10);
  radice->inser(radice, 5);
  radice->inser(radice, 15);
  radice->inser(radice, 3);
  radice->inser(radice, 7);
  radice->inser(radice, 20);

  // Test delle funzioni
  cout << "testIn-order" << endl;
  radice->inOrder(radice);
  cout << " " << endl;
  cout << "testPre-order" << endl;
  radice->preOrder(radice);
  cout << " " << endl;
  cout << "testPost-order" << endl;
  radice->postOrder(radice);
  cout << " " << endl;
  cout << "testSearchI" << endl;
  radice->searchI(radice,7);
  cout << " " << endl;
  cout << "testSearchR" << endl;
  radice->searchR(radice,999);
  cout << " " << endl;
  cout << "testAltezza" << endl;
  int c = 1;
 cout<< radice->alt(radice,c)<<endl;
  cout << " " << endl;
  cout << "testIsBst" << endl;
  int min;
  int max;
  min = 0;
  max = 0;
 cout<< radice->isBst(radice,min,max);
  cout << " " << endl;


  return 0;
}