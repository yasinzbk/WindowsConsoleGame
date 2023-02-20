#include <iostream>
#include "karakter.h"

using namespace std;


int main(){
	
	int islem,islem2,c,d;
	c=1;
	d=1;
	
	Perihan o1p;
	Perihan o2p;
	
	Temel o1t;
	Temel o2t;
	
	Seyit o1s;
	Seyit o2s;
	
	Kahraman* k1=&o1p;
	Kahraman* k2=&o2p;
	Kahraman* k3=&o1t;
	Kahraman* k4=&o2t;
	Kahraman* k5=&o1s;
	Kahraman* k6=&o2s;
		
	k1->setAttackPower(1);
	k2->setAttackPower(1);
	k3->setAttackPower(3);
	k4->setAttackPower(3);
	k5->setAttackPower(2);
	
	
	k1->setKalkan(4);
	k3->setKalkan(2);
	k5->setKalkan(5);
	
	o2p=o1p;
	o2t=o1t;
	o2s=o1s;
	


while(c==1 && d==1){
int a=5,b=5;
while(a!=0){
	try{
	
cout<<"  "<<endl;
cout<<"  "<<endl;
cout<<"oyuncu 1"<<endl;
cout<<"senin karakterlerin :"<<endl;
cout<<" "<<endl;
o1t.goster();
o1p.goster();
o1s.goster();
cout<<"rakip karakterler :"<<endl;
cout<<" "<<endl;
o2t.goster();
o2p.goster();
o2s.goster();
cout<<"hangi kahramani seciceksin: \n\n  1=Temel  2=Peri  3=Seyit" << endl;
cout<<" "<<endl;
cin>>islem;
if(!(islem==1 || islem==2 || islem==3) ){
	
	throw 10;
	
}
switch(islem){
	
	
	case 1:
		if(o1t.kalkan==0){
			cout<<"\n\n sectiginiz kahramanlar olu "<<endl;
			break;
		}
		cout<<"hangi kahramana saldircaksin: \n\n  1=Temek  2=Peri  3=Seyit "<<endl;
		cin>>islem2;
		if(!(islem2==1 || islem2==2 || islem2==3) ){
	        throw 10;
	        break;
            }
		switch(islem2){
			
			case 1:
				if(o2t.kalkan==0 ) {
						cout<<"\n\n sectiginiz kahramanlar olu "<<endl;
					break;
				}
				Saldir(o1t,o2t);
				a=0;
				break;
			case 2:
				if(o2p.kalkan==0){
						cout<<"\n\n sectiginiz kahraman olu "<<endl;
					break;
				}
				Saldir(o1t,o2p);
				a=0;
				break;
			case 3:
				if(o2s.kalkan==0){
						cout<<"\n\n sectiginiz kahraman olu "<<endl;
					break;
				}
				Saldir(o1t,o2s);
				a=0;
				break;
		}
	      break;
		case 2:
			if(o1p.kalkan==0){
			cout<<"\n\n sectiginiz kahramanlar olu "<<endl;
			break;
		}
		cout<<"\n hangi kahramana saldircaksin: \n\n  1=Temel  2=Peri  3=Seyit "<<endl;
		cin>>islem2;
		if(!(islem2==1 || islem2==2 || islem2==3) ){
	        throw 10;
	        break;
            }
		switch(islem2){
			
			case 1:
				if(o2t.kalkan==0){
					cout<<"\n\n sectiginiz kahraman olu "<<endl;
					break;
				}
				Saldir(o1p,o2t);
				a=0;
				break;
			case 2:
				if(o2p.kalkan==0){
						cout<<"\n\n sectiginiz kahraman olu "<<endl;
					break;
				}
				Saldir(o1p,o2p);
				a=0;
				break;
			case 3:
				if(o2s.kalkan==0){
						cout<<"\n\n sectiginiz kahraman olu "<<endl;
					break;
				}
				Saldir(o1p,o2s);
				a=0;
				break;
		}
	
	     break;  
		case 3:
			if(o1s.kalkan==0){
			cout<<"\n\n sectiginiz kahramanlar olu "<<endl;
			break;
		}
		cout<<"hangi kahramana saldircaksin: \n\n  1=Temel  2=Peri  3=Seyit "<<endl;
		cin>>islem2;
		if(!(islem2==1 || islem2==2 || islem2==3)){
	        throw 10;
	        break;
            }
		switch(islem2){
			
			case 1:
				if(o2t.kalkan==0){
						cout<<"\n\n sectiginiz kahraman olu "<<endl;
					break;
				}
				Saldir(o1s,o2t);
				a=0;
				break;
			case 2:
				if(o2p.kalkan==0){
						cout<<"\n\n sectiginiz kahraman olu "<<endl;
					break;
				}
				Saldir(o1s,o2p);
				a=0;
				break;
			case 3:
				if(o2s.kalkan==0){
						cout<<"\n\n sectiginiz kahraman olu "<<endl;
					break;
				}
				Saldir(o1s,o2s);
				a=0;
				break;
		}
	    break;
}

}

catch(int x){
	
	cout<<" HATA "<<endl;
	
}

}

if(o2t.kalkan ==0 && o2p.kalkan ==0 && o2s.kalkan == 0){
	d=0;
	break;
	
}


while(b!=0){
	try{
	
cout<<"  "<<endl;
cout<<"  "<<endl;
cout<<"oyuncu 2"<<endl;
cout<<"senin karakterlerin :"<<endl;
o2t.goster();
o2p.goster();
o2s.goster();
cout<<"rakip karakterler :"<<endl;

o1t.goster();
o1p.goster();
o1s.goster();
cout<<"hangi kahramani seciceksin: \n\n  1=Temel  2=Peri  3=Seyit" << endl;
cin>>islem;
	if(!(islem==1 || islem==2 || islem==3) ){
	        throw 10;
	        
            }
            
switch(islem){
	
	case 1:
		if(o2t.kalkan==0){
			cout<<"\n\n sectiginiz kahramanlar olu "<<endl;
			break;
		}
		cout<<"hangi kahramana saldircaksin: \n\n  1=Temel  2=Peri  3=Seyit "<<endl;
		cin>>islem2;
			if(!(islem2==1 || islem2==2 || islem2==3) ){
	        throw 10;
	        break;
            }
		switch(islem2){
			
			case 1:
				if(o1t.kalkan==0){
						cout<<"\n\n sectiginiz kahraman olu "<<endl;
					break;
				}
				Saldir(o2t,o1t);
				b=0;
				break;
			case 2:
				if(o1p.kalkan==0){
						cout<<"\n\n sectiginiz kahraman olu "<<endl;
					break;
				}
				Saldir(o2t,o1p);
					b=0;
				break;
			case 3:
				if(o1s.kalkan==0){
						cout<<"\n\n sectiginiz kahraman olu "<<endl;
					break;
				}
				Saldir(o2t,o1s);
					b=0;
				break;
		}
	      break;
		case 2:
			if(o2p.kalkan==0){
			cout<<"\n\n sectiginiz kahramanlar olu "<<endl;
			break;
		}
		cout<<"hangi kahramana saldircaksin: \n\n 1=Temel  2=Peri  3=Seyit "<<endl;
		cin>>islem2;
			if(!(islem2==1 || islem2==2 || islem2==3) ){
	        throw 10;
	        break;
            }
		switch(islem2){
			
			case 1:
				if(o1t.kalkan==0){
						cout<<"\n\n sectiginiz kahraman olu "<<endl;
					break;
				}
				Saldir(o2p,o1t);
					b=0;
				break;
			case 2:
				if(o1p.kalkan==0){
						cout<<"\n\n sectiginiz kahraman olu "<<endl;
					break;
				}
				Saldir(o2p,o1p);
					b=0;
				break;
			case 3:
				if(o1s.kalkan==0){
						cout<<"\n\n sectiginiz kahraman olu "<<endl;
					break;
				}
				Saldir(o2p,o1s);
					b=0;
				break;
		}
	
	     break;  
		case 3:
			if(o2s.kalkan==0){
			cout<<"\n\n sectiginiz kahramanlar olu "<<endl;
			break;
		}
		cout<<"hangi kahramana saldircaksin: \n\n 1=Temel  2=Peri 3=Seyit "<<endl;
		cin>>islem2;
			if(!(islem2==1 || islem2==2 || islem2==3) ){
	        throw 10;
	        break;
            }
		switch(islem2){
			
			case 1:
				if(o1t.kalkan==0){
						cout<<"\n\n sectiginiz kahraman olu "<<endl;
					break;
				}
				Saldir(o2s,o1t);
					b=0;
				break;
			case 2:
				if(o1p.kalkan==0){
						cout<<"\n\n sectiginiz kahraman olu "<<endl;
					break;
				}
				Saldir(o2s,o1p);
					b=0;
				break;
			case 3:
				if(o1s.kalkan==0){
						cout<<"\n\n sectiginiz kahraman olu "<<endl;
					break;
				}
				Saldir(o2s,o1s);
					b=0;
				break;
		}
	    break;
}
}

catch(int x){
	cout<<"HATA"<<endl;
}
}

if(o1t.kalkan ==0 && o1p.kalkan ==0 && o1s.kalkan == 0){
	c=0;
}
if(o2t.kalkan ==0 && o2p.kalkan ==0 && o2s.kalkan == 0){
	d=0;
}

}

if(c==0){
	cout<<"oyuncu 2 kazandi "<<endl;
}

if(d==0){
	cout<<"oyuncu 1 kazandi "<<endl;
}

cout<<"oyuncu 1 Temel ";
	yazdir(o1t);
	
cout<<"oyuncu 1 Peri ";
	yazdir(o1p);

cout<<"oyuncu 1 Seyit ";
	yazdir(o1s);
cout<<"  "<<endl;
cout<<"  "<<endl;
cout<<"oyuncu 2 Temel ";
	yazdir(o2t);
cout<<"oyuncu 2 Peri ";	
	yazdir(o2p);
cout<<"oyuncu 2 Seyit ";
	yazdir(o2s);
	

}





