/*
	Algoritmo em C++ para mascarar caractere digitado no console 
	Por: Hudisson R Xavier
	
*/
#include <iostream>
#include <stdio.h> // para gets
#include <conio.h>


using namespace std;

char senha[12];
char op;
int i, l;

int main(){

	inicio_loop:
	cout << "Digite a senha: ";
	i = 0;
	while(1){
		
		if(i >= sizeof(senha)){
			cout << "\n\nLIMITE de carateres esgotado, permitido apenas 12 caractere!\n\n";
			cout << "Salvar e continuar? [S/N]:";
			cin >> op;
			if((op == 's') or (op == 'S')){
				senha[i] = '\0';
				break;
			}else{
				while(l <= sizeof(senha)){
					senha[l] = '\0';
					l++;
				}
				system("cls");
				goto inicio_loop;
				
			}	
		}
		
		fflush(stdin);
		senha[i] = getch();
		
		if(isprint(senha[i])){
			cout << "*";
			i++;
		}else if(senha[i] == 13 && i >=0){
			break;
		}else if(senha[i] = 8 && i){
			senha[i] = '\0';
			cout << "\b \b";
			i--;
		}
		
	}
	system("cls");
	cout << "\n\nSenha digitada: " << senha << endl << endl;
	system("pause");

return 0;
}
