
#include "Nodo.h"
using namespace std;



 void nodo::preOrder(nodo *radice) {
  if (radice == nullptr) {
    return;
  }
  cout << radice->val << " ";
  preOrder(radice->fs);
  preOrder(radice->fd);
}