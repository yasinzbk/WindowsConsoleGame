#ifndef karakter_h
#define karakter_h

class Kahraman{
	
	protected:
		int attackPower;
		int attackSayi;
		int kalkanSayi;
		int gucSayi;
	public:
		int kalkan;
	    void setAttackPower(int a);
	    void setKalkan(int a);
	    friend void Saldir(Kahraman &atan,Kahraman &yiyen);
		
		friend void yazdir(Kahraman &obj);
		
	    Kahraman& operator= (const Kahraman &obj);
	
	
};

class Perihan:public Kahraman{
	public:
	 void goster();
	 int kalkanver();
};

class Temel:public Kahraman{
	public:
	 void goster();
	 int kalkanver();
};

class Seyit:public Kahraman{
	public:
	 void goster();
	 int kalkanver();
};
// eger hata olursa protected sýnýflara public kahraman ekle
#endif
