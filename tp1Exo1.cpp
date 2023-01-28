#include <iostream>
#include <cmath>
using namespace std;
int main(){
	float i;
	while (i!=0)
	{
		cout << "Entrer une valeur positive (0 pour terminer) : ";
		cin >> i;
		if (i>0) cout <<"La racine de "<< i<<" est : "<<sqrt(i)<<endl;
		if (i<0) cout <<"Erreur, la valeur ne peut pas etre negative\n";
	}
	cout <<"Fin du programme.";


}