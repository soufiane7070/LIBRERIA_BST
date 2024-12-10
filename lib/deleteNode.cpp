#include "Nodo.h"
using namespace std;

nodo *nodo::deleteNode(nodo *radice, int k) {
  if (radice == nullptr) {
    return radice;
  }

  if (k < radice->val) {
    radice->fs = deleteNode(radice->fs, k);
  } else if (k > radice->val) {
    radice->fd = deleteNode(radice->fd, k);
  } else {
    // Nodo trovato
    if (radice->fs == nullptr) {
      nodo *temp = radice->fd;
      delete radice;
      return temp;
    } else if (radice->fd == nullptr) {
      nodo *temp = radice->fs;
      delete radice;
      return temp;
    }

    // Nodo con due figli
    nodo *succ = radice->fd;
    while (succ->fs != nullptr) {
      succ = succ->fs;
    }

    radice->val = succ->val;
    radice->fd = deleteNode(radice->fd, succ->val);
  }

  return radice;
}