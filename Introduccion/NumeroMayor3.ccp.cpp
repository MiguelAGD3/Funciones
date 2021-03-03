#include<iostream>
using namespace std;
int VMax(int,int);
int main(){
	int a,b,c,max;
	cout<<"ingresa el primer numero:";
	cin>>a;
	cout<<"\n ingresa el segundo numero:";
	cin>>b;
	cout<<"\n ingresa el tercer numero:";
	cin>>c;
	max=VMax(VMax(a,b),c);
	cout<<"\n El numero mas grande es:"<<max;
	return 0;
}
int VMax(int a,int b){
	if(a>b){return a;}
	else{return b;}
}
