#include <iostream>
#include <string>

using namespace std;

int main(){
	
	string seunome = "";
	string senha = "";
	bool comSucesso = false;
	
	cout << "\tBemvindo! por favor seu login. \n\n";
	
	do{
	    cout << "Seunome:  ";
	    cin >> seunome;
	    cout << "senha:  ";
	    cin >> senha;
	    
	    if(seunome == "nh3" && senha == "dark"){
	    	cout << "logado com sucesso\n\n";
	    	comSucesso = true;
		}
		else{
			cout << "usuario ou a senha incorreta \n";
			cout << "Por favor tente novamente.";			
		}
		
	
      }while(comSucesso);


	
	
	system("pause");
	return 0;
}
