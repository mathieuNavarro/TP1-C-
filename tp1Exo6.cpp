#include <iostream>
using namespace std;
void compteur(){
	int b;
	b++;
	cout<<"Appel de fonction numero "<<b<<endl;
}


//Test de la fonction//
int main(){
	for (int i=0; i<=10; i++)
		compteur();
}