#include <iostream>
#include <math.h>
#include <vector>
using namespace std;
int main (){
	vector<int> v = { 1, 2, 3, 4, 5 } ;
	//vector<int>::iterator it ;
	vector<int>::reverse_iterator it;

    for (it = v.rbegin(); it != v.rend(); ++it) 
    {
    	cout << *it << " ";
    }
    cout<<"\n";
    return 0;
}