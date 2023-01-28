#include <iostream>
using namespace std;
int main(){
	int n;
	cout <<"Choisissez un entier n superieur a 3 : ";
	cin>>n;
	int termemoins1;
	int termemoins3;
	int termemoins2;
	termemoins3=0;
	termemoins2=0;
	termemoins1=1;
	int terme;
	for ( int i=3; i<=n; i++){
		terme=termemoins1+termemoins2+termemoins3;
		termemoins3=termemoins2;
		termemoins2=termemoins1;
		termemoins1=terme;
	}
	cout<<"La valeur du terme est : "<<terme<<endl;
}