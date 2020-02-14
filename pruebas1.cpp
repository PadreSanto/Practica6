#include <iostream>
#include <time.h>
using namespace std;
int main() {
  int i;
  srand((unsigned) time(NULL));
  cout<<"10  numeros decimales entre 0 y 1: \n\n";
  for (i = 0; i < 100; i++)
  	cout<<(float)(rand() %200002-100001)/1000<<endl;
  return 0;
}