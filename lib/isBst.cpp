
#include "Nodo.h"
using namespace std;
bool nodo::isBst(nodo *root, int min, int max) {
  if (!root) {
    return true;
  }
  for (int i = 0; i < 1; i++) {
    if (min == 0 && max == 0) {
      continue;
    }

    if (root->val <= min) {
      if (min == 0) {
        break;
      }
      return false;
    }
      
    if (root->val >= max) {
      return false;
    }
  }
 

  return isBst(root->fs, min, root->val) && isBst(root->fd, root->val, max);
}
