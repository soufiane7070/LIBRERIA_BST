#include <iostream>
using namespace std;

class nodo {
  int val;
  nodo *fd;
  nodo *fs;
  int weight;

  friend ostream &operator<<(ostream &os, const nodo &n);
   public:
    nodo() { val = 0;
      fd = nullptr;
      fs = nullptr;
      weight = 0;
  }
  nodo(int val1);
  nodo(int val1, int val2);

 friend ostream &operator<<(ostream &os, const nodo &n){
  os << n.val << endl;
    return os;
  }

  void inser(nodo *&, int) ;

  bool searchI(nodo *radice, int valu); 

  bool searchR(nodo *radice, int k); 
  
  void inOrder(nodo *radice);

  void preOrder(nodo *radice);

  void postOrder(nodo *radice);


  nodo *deleteNode(nodo *radice, int k);
 
  int alt(nodo *radice, int &cont);

  bool isBst(nodo *root, int min, int max);
};
