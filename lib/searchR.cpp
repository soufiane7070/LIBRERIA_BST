#include "Nodo.h"
using namespace std;

bool nodo::searchR(nodo *radice, int k) {
  if (radice == nullptr) {
    return false; 
  }

  if (radice->val == k) {
    cout << "Trovato: " << k << endl; 
    return true;
  }

  if (k < radice->val) {
    return searchR(radice->fs, k); 
  } else {
    return searchR(radice->fd, k); 
  }
}
