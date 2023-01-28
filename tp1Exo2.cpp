#include <iostream>
using namespace std;
int main(){
	float somme;
	int n;
	cout<<"Entrer un entier n :";
	cin>>n;
	int i;
	for (i=1; i<=n; i++){
		somme = somme + 1.0/i ;
	}
	cout <<"La somme vaut "<<somme<<endl;
}
