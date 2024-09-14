#include<iostream>

using namespace std;

int main(){
	
	int digite,opcao;
	
	// MENU
	bool menu = true;
	while(menu){
		
		cout<< "\n\n\t--------------";
		cout<< "\n\t*TABUADA*";
		cout<< "\n\t--------------";
		cout<<"\n\t1:FAZER CONTA \n\t2: Sair ";
		cout<<"\n\tDigite Uma Opção: ";
		cin>>opcao;
		
		switch(opcao){
			
			case 1:
			cout<<"\n\tDigite um Número de 1 À 10: ";
			cin>>digite;
		if(digite>10){
			cout<<"\n\tFAVOR DIGITAR DE 1 À 10!!!";
	}
	else{
			cout<<"\n\t\t***********"<<endl;
			cout<<"\n\t\tVocê Selecionou A Tabuada De "<<digite<<endl;
		for(int i = 0; i<=10; i++){
				cout<<"\t\t"<<digite<<" X "<<i<<" = "<<digite*i<<endl;
				}
			}
			cout<<"\n\t\t************"<<endl;
		break;
		
		case 2:
			cout<<"\n\tOBRIGADO POR USAR A TABUADA!";
			menu = false;
			break;
			
			default:
			cout<<"\n\tOPÇÃO INVÁLIDA!";
		}
	}
	return 0;
}
