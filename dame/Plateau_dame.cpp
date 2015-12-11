#include <vector>
#include <sstream>
#include <iostream>
#include "Plateau_dame.hpp"
#include "Joueur_dame.hpp"

using namespace std;


Plateau_dame::Plateau_dame(Joueur *j1, Joueur *j2){
     nbLignes = 10;
     nbCols = 10;

    grille = new int*[nbLignes];
        for(int i = 0; i < nbLignes; i++) { 
 	grille[i] = new int[nbCols];
      }

        int i=0;
	int j=0;
	for(int k=0; k<nbLignes*nbCols; k++){
		i=k/10;
		j=k%10;

		// on cree les cases
		if((k>=0 && k<nbCols)|| (k>=nbLignes*nbCols - nbCols && k<nbLignes*nbCols)){
			grille[i][j] = -1 ;
                       
		}else{
		grille[i][j] = -1 ;
	           
		}

		// on place les pieces noires et blanches sur le plateau
		if(((i%2==0 && j%2 !=0) || (i%2!=0 && j%2 ==0)) && i>=0 && i<4){
		grille[i][j] = 1; 
                
		}else if (((i%2==0 && j%2 !=0) || (i%2!=0 && j%2 ==0)) && i>=6 && i<10){
                 grille[i][j] = 2;
		

		}
	}

}



Plateau_dame::~Plateau_dame(){
   for(int i = 0; i < nbCols; i++) {
	delete [] grille[i];
    }
    delete [] grille;
}



void Plateau_dame::affiche(){
	int i=0;
	int j=0;
	ostringstream os;
	os << endl << "      ";
	for(int k=0; k<nbCols; k++)
		os << k << "   ";
	cout << os.str();
	for(int k=0; k<nbLignes*nbCols; k++){
		i=k/10;
		j=k%10;
		if(j==0)
		cout<< endl << "     ________________________________________\n "<< i<<"   ";
		

		if(grille[i][j]==-1){
			cout <<"   |";
		}else if(grille[i][j]==1){
			cout <<" ● |";
		}else if(grille[i][j]==2){
			cout <<" ○ |";
		}

	}
        cout << endl;
}





void Plateau_dame::modifPiece(int x,int y, int dx, int dy){
    
}
