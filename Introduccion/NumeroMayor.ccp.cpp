#include<iostream>
using namespace std;
int main(){
	int a,b;
	cout<<"ingresa el primer numero:";
	cin>>a;
	cout<<"\n ingresa el segundo numero:";
	cin>>b;
	if(a>b){
		cout<<"\n"<<a<<" es mayor que "<<b;
	}
	else if(a<b){
		cout<<"\n"<<b<<" es mayor que "<<a;
	}
	else 
	cout<<"\n"<<a<<" y "<<b<<" son iguales";
	return 0;
}

