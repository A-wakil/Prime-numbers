#include <iostream>
using namespace std;
int main() {
  int low;
  int high;
  cout<<"Enter a lower limit: ";
  cin>>low;
  cout<<"Enter a higher limit: ";
  cin>>high;
  cout<<"The prime numbers between "<<low<<" and "<<high<<":\n";
  for (int i=low+1;i<high;i++){
    if (i==2)
      cout<<2<< " ";
    else
      for (int j=2;j<i;j++){
        if (i%j==0)
          break;
        else
          if (j+1==i)
            cout<<i<<" ";
      }
  }
}