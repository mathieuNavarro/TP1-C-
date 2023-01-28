#include <iostream>
using namespace std;
float calculatrice(float a, float b, char c){
	if (c!='+' && c!='-' && c!='*' && c!='/'){
		cout<<"Erreur, ce n'est pas une opération";
		return 0;
	}
	if (c=='+'){
		return a+b;
	}
	if (c=='-'){
		return a-b;
	}
	if (c=='*'){
		return a*b;
	}
	else{
		if (b==0.0){
			cout<<"Erreur, division par 0 impossible";
			return 0;
		}
		else{
			return a/b;
		}
	}

}
int main(){
	float x;
	cout<<"Choisissez valeur x : ";
	cin>>x;
	float y;
	cout<<"Choisissez valeur y : ";
	cin>>y;
	cout<<"La valeur de la somme est : "<<calculatrice(x,y,'+')<<endl;
	cout<<"La valeur de la différence est : "<<calculatrice(x,y,'-')<<endl;
	cout<<"La valeur du produit : "<<calculatrice(x,y,'*')<<endl;
	cout<<"La valeur du quotient est : "<<calculatrice(x,y,'/')<<endl;
}

