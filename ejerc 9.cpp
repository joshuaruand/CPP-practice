#include<iostream>
#include<math.h>

using namespace std;


int main(){
	float x,y, resultado =0;
	
	cout<<"digite x :";cin>>x;
	cout<<"digite y:";cin>>y;
	
	resultado = (sqrt(x))/(pow(y,2)-1);
	
	
	cout<<"\n El resultado es: "<<resultado<<endl;
	return 0;
}
