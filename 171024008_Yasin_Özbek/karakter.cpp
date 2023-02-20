#include "karakter.h"
#include <iostream>

using namespace std;



void Saldir(Kahraman &atan,Kahraman &yiyen){
			yiyen.kalkan-= atan.attackPower;
			if(yiyen.kalkan<0){
				yiyen.kalkan=0;
			}
		}
		
void yazdir(Kahraman &obj){
	cout<<"son durum:"<<obj.attackPower <<" , " << obj.kalkan <<endl;
		}
				
Kahraman& Kahraman::operator= (const Kahraman &obj){
	attackPower=obj.attackPower;
	kalkan=obj.kalkan;
	
	
}
 void Kahraman::setAttackPower(int a){
	    	attackPower = a;
		}
		
void Kahraman::setKalkan(int a){
	kalkan = a;
	}
	
	
	 void Perihan::goster(){
	 	cout<<" Peri : "<<attackPower<< " , " << kalkan << endl;
	 	}
	 	
	int Perihan::kalkanver(){
	 	
	 	return kalkan;
	 }
		 
	void Temel::goster(){
	 	cout<<" Temel : "<<attackPower<< " , " << kalkan << endl;
	 	}
	 	
	int Temel::kalkanver(){
	 	
	 	return kalkan;
	 }
	 
	 void Seyit::goster(){
	 	cout<<" Seyit : "<<attackPower<< " , " << kalkan << endl;
	 	}
	 	
	int Seyit::kalkanver(){
	 	
	 	return kalkan;
	 }
	
	
	
