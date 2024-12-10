
#include "Nodo.h"
using namespace std;

  void nodo::inOrder(nodo *radice) {
  if (radice == nullptr) {
    return;
  }

  inOrder(radice->fs);
  cout << radice->val << " ";
  inOrder(radice->fd);
}
