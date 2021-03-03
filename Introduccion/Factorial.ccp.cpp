#include<iostream>
using namespace std;
int Fact(int);
int main(){
	int a,f;
	cout<<"ingresa un numero:";
	cin>>a;
	f=Fact(a);
	cout<<"\n El factorial de "<<a<<" es: "<<f;
	return 0;
}
int Fact(int a){
	int i,
	r=1;
	for(i=1;i<=a;i++){
		r *=i;
	}
	return r;
}
