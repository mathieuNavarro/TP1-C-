#include <iostream>
using namespace std;
int euclide(int x, int y){
	while (x!=y){
		if (x>y){
			x=x-y;
		}
		else{
			y=y-x;
		}
	}
	return x;
}
int main(){
	cout<<"Choisissez la valeur de x entier : ";
	int x;
	cin>>x;
	cout<<"Choisissez la valeur de y entier : ";
	int y;
	cin>>y;
	cout<<"Le PGCD de "<<x<<" et "<<y<<" est : "<<euclide(x,y)<<endl;
}