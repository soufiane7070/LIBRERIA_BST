#include "Nodo.h"
using namespace std;

void nodo::postOrder(nodo *radice) {
  if (radice == nullptr) {
    return;
  }
  postOrder(radice->fs);
  postOrder(radice->fd);
  cout << radice->val << " ";
}
