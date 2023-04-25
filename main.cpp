#include <iostream>
#include <string>
#include <cmath>
using namespace std;


int toInt(string s){
	int n=0;
	int size=s.size();
	for(int i=0, j=size; i<size; i++){
		n+=(s[--j]-'0')*pow(10,i);
	}
	return n;
}



int main(int argc, char** argv){
	while(1){
		string snum="";
		int num=0;
		int formas=0;
		cout<<endl<<endl<<endl<<endl<<endl<<"Ingrese un numero para verificar si es un primo, o ingrese '0' para salir:"<<endl;
		fflush(stdin);
		cin>>snum;
		num=toInt(snum);
		if(snum=="0") return 0;
		else if(num<=2147483646 && num>0){
			for(int denom=1; denom<=num; denom++){
				if((num%denom)==0){
					//cout<<endl<<denom<<" * "<<num/denom;
					formas++;
				}
			}
			if(formas<3) cout<<endl<<endl<<"El numero "<<num<<" es primo";
			else cout<<endl<<endl<<"El numero "<<num<<" no es primo";
		}
		else{
			cout<<snum;
			/*for(int denom=1; denom<=num; denom++){
				if((num%denom)==0){
					cout<<endl<<denom<<" * "<<num/denom;
					formas++;
				}
			}
			if(formas<3) cout<<endl<<endl<<"El numero "<<num<<" es primo";
			else cout<<endl<<endl<<"El numero "<<num<<" no es primo";
			*/
		}
	}
	return 0;
}

