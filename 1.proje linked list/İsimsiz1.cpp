#include <stdio.h>
#include <stdlib.h>



typedef struct student{
    int veri;
    struct student *sonraki;
}student;

student* baslangic = NULL;
student* gec= NULL;



student* dugumOlustur()
{
    student* yeniDugum = (student*)malloc(sizeof( student ));
    return yeniDugum;
}

void sonaEkle(int x)
{
    student* parca = dugumOlustur();
    parca->veri = x;
    parca->sonraki = NULL;

    if(baslangic == NULL)
    {
        baslangic = parca;
    }
    else
    {
        gec = baslangic;
        while(gec->sonraki != NULL)
        {
            gec = gec->sonraki;
        }
        gec->sonraki = parca;
    }

}

void basaEkle(int y)
{
    student* parca = dugumOlustur();
    parca->veri = y;
    gec = baslangic;
    parca->sonraki = gec;
    baslangic = parca;
}

void arayaEkle(int z, int index)
{
    int counter = 0;
    student* arayaEklenecek = dugumOlustur();
    arayaEklenecek->veri = z;
    gec = baslangic;
    if(index == 0)
    {
        basaEkle(z);
    }
    else
    {
            while(gec != NULL)
            {
                if(counter+1 == index)
                    break;
                gec = gec->sonraki;
                counter++;
            }
            student* gec1;
            gec1 = gec->sonraki;
            gec->sonraki = arayaEklenecek;
            arayaEklenecek->sonraki = gec1;
    }

}

void sondanSil()
{
    if(baslangic == NULL)
    {
        printf("\n Liste Bos");
    }
    else
    {
        gec = baslangic;
        if(baslangic->sonraki == NULL)
        {
            free(baslangic);
            baslangic = NULL;
        }
        else
        {
            while(gec->sonraki->sonraki != NULL)
            {
                gec = gec->sonraki;
            }
            student* sonrakiDugum = gec->sonraki;
            free(sonrakiDugum);
            gec->sonraki = NULL;
        }


    }


}

void bastanSil()
{
    if(baslangic != NULL)
    {
        if(baslangic->sonraki != NULL)
        {
            student* gec2 = baslangic;
            baslangic = baslangic->sonraki;
            free(gec2);
        }
        else
        {
            free(baslangic);
            baslangic = NULL;
        }
    }
    else
    {
        printf("\nSilinecek dugum yok");
    }



}

void aradanSil(int t)
{
    if(baslangic->veri == t)
    {
        bastanSil();
    }
    else
    {
        gec = baslangic;
        while(gec->sonraki->veri != t)
        {
            gec = gec->sonraki;
        }
        student* gec1 = gec->sonraki->sonraki;
        student* gec2 = gec;
        free(gec->sonraki);
        gec2->sonraki = gec1;
    }

}


void ara(int value)
{
     student* aranan = baslangic;
    int a = 0;
    int i1=0;
    while(aranan!=NULL)
    {
        if(aranan->veri==value)
        {
            printf("%d notu listede bulunmaktadir %dinci siradadir \n",value,i1+1);
            a = 1;
            break;
    }
        else
           aranan = aranan->sonraki;
        i1=i1+1;
        }
    if(a==0)
        printf("Aranan not bulunamadi\n");
    }



void yazdir()
{
    if(baslangic == NULL)
    {
        printf("\n Listede Hic dugum yok, lutfen dugum ekleyin");
    }
    else
    {
        gec = baslangic;
        printf("\n    \n");
        while(gec->sonraki != NULL)
        {
            printf("%d ", gec->veri);
            gec = gec->sonraki;
        }
        printf("%d ", gec->veri);
        printf("\n");
    }

}



   



int main()
{
   int secenek;

    while(1 == 1)
    {
       
        printf("\n Sona not eklemek icin 1 \n Basa not eklemek icin 2 \n Araya not eklemek icin 3\n Sondan eleman silmek icin 4\n Bastan eleman silmek icin 5 \n Aradan eleman silmek icin 6 ");
        
       
        scanf("%d", &secenek);
         int item, i, index;
         
    switch(secenek)
    {
        case 1:

            printf("\n Kac tane dugum ekleyeceksiniz?  ");
            scanf("%d", &item);
            for(i = 0; i < item; i++)
            {
                printf("\n %d. sayiyi ekleyin ", i+1);
                scanf("%d", &secenek);
                sonaEkle(secenek);
                yazdir();
            }
            break;
        case 2:
            printf("basa ekleyeceginiz sayiyi girin  ");
            scanf("%d", &item);
            basaEkle(item);
            yazdir();
            break;
        case 3:
            printf("Hangi sayiyi ekleyeceksiniz? ");
            scanf("%d", &item);
            printf("hangi indise ekleyeceksiniz (indis 0'dan baslar) ");
            scanf("%d", &index);
            arayaEkle(item, index);
            yazdir();
            break;
        case 4:
            sondanSil();
            yazdir();
            break;
        case 5:
            bastanSil();
            yazdir();
            break;
        case 6:
            printf("\n Hangi sayiyi silmek istiyorsunuz? ");
            scanf("%d", &item);
            aradanSil(item);
            yazdir();
            break;
        case 7:
        	printf("\nAradiginiz sayiyi giriniz===>\n");
            scanf("%d", &item);
            ara(item);

    }

        
        
        
        
        
        
    }


}
 

