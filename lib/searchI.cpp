

#include "Nodo.h"
using namespace std;

 bool nodo::searchI(nodo *radice, int valu) {
  if (radice == nullptr) {
    return false;
  }
  if (radice->val == valu) {
    cout << "trovato" << endl;
    return true;
  }

  bool risultato = searchI(radice->fs, valu);
  if (risultato != false) {
    return false;
  }

  return searchI(radice->fd, valu);
}; 