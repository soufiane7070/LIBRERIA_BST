
#include "Nodo.h"
using namespace std;




  int nodo::alt(nodo *radice, int &cont) {
  if (!radice) {
    return -1;
  }

  int alts = alt(radice->fs, cont);
  int altd = alt(radice->fd, cont);

  if (alts > altd) {
    cont++;
    return alts + 1;
  } else {
    cont++;
    return altd + 1;
  }
}
