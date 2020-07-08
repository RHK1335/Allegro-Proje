#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <allegro5/allegro.h>
#include <allegro5/allegro_image.h>
#include <allegro5/allegro_primitives.h>








int main(int argc, char **argv)
{


    if(!al_init())
        return -1;
    al_init_image_addon();
    al_init_primitives_addon();
    al_init();






    int i,j,yol_deger[8],yol_deger2[9],kosul=1,secim;
    char yol_a_oz[2],yol_b_oz[2],yol_c_oz[2],yol_d_oz[2],yol_e_oz[2];
    char giris1,giris2,cikis1,cikis2,yol,yol_isim[8]= {'a','b','c','d','x','y','z','t',},yol_isim2[9]= {'a','b','c','d','e','x','y','t','z'};
    int matris[5][10]= {};



    ALLEGRO_DISPLAY *screen = NULL;
    ALLEGRO_BITMAP *pic = NULL;
    ALLEGRO_BITMAP *pic2 = NULL;
    ALLEGRO_BITMAP *dok= NULL;
    ALLEGRO_BITMAP *uok= NULL;
    ALLEGRO_BITMAP *lok= NULL;
    ALLEGRO_BITMAP *rok= NULL;
    ALLEGRO_BITMAP *bir= NULL;
    ALLEGRO_BITMAP *iki= NULL;



    screen = al_create_display(1920,1080);
    pic=al_load_bitmap("hakan1.bmp");
    pic2=al_load_bitmap("hakan2.bmp");
    dok=al_load_bitmap("dok.png");
    uok=al_load_bitmap("uok.png");
    lok=al_load_bitmap("lok.png");
    rok=al_load_bitmap("rok.png");
    bir=al_load_bitmap("bir1.jpg");
    iki=al_load_bitmap("iki2.jpg");



    al_draw_bitmap(pic,500,350,0);
    al_draw_bitmap(pic2,1100,350,0);
    al_draw_bitmap(iki,590,750,0);
    al_draw_bitmap(bir,1190,750,0);
    al_flip_display();
tekrar:
    fflush(stdin);
    printf("secim yapiniz:");
    scanf("%d",&secim);


    if(secim==1)
    {
        al_clear_to_color(al_map_rgb(0,0,0));
        al_draw_bitmap(pic,760,340,0);
        al_flip_display();
giris :
        fflush(stdin);
        printf("\ngiris yonlerini seciniz:\n1. giris:");
        scanf("%c",&giris1);
        fflush(stdin);
        printf("\n2. giris:");
        scanf("%c",&giris2);
        fflush(stdin);
        printf("\ncikis yonlerini seciniz:\n1. cikis:");
        scanf("%c",&cikis1);
        fflush(stdin);
        printf("\n2. cikis:");
        scanf("%c",&cikis2);
        if(giris1==giris2||giris1==cikis1||giris1==cikis2||giris2==cikis1||giris2==cikis2||cikis1==cikis2)
        {
            printf("yollari yanlis sectiniz lutfen tekrar secim yapiniz");
            goto giris;
        }
        for(i=0; i<8; i++)
        {
            fflush(stdin);
            printf("\n%c yolunun degerini giriniz:",yol_isim[i]);
            scanf("%d",&yol_deger[i]);
        }


        //yol özelliklerini belirleme while'ý
        while(kosul==1)
        {
            fflush(stdin);
            printf("\nhangi yolun yonunu belirleyeceginizi seciniz:");
            scanf("%c",&yol);
            switch(yol)
            {
            case 'a' :

secim1 :
                fflush(stdin);
                printf("\nbaslangic yonunu seciniz:");
                scanf("%c",&yol_a_oz[0]);
                fflush(stdin);
                printf("\ncikis yonunu seciniz:");
                scanf("%c",&yol_a_oz[1]);
                if(yol_a_oz[0]==giris1||yol_a_oz[0]==giris2)
                {

                }
                else
                {
                    printf("giris ve cikis degerlerini yanlis sectiniz tekrar secim yapiniz \n");
                    goto secim1;
                }
                if(yol_a_oz[1]==cikis1||yol_a_oz[1]==cikis2)
                {

                }
                else
                {
                    printf("giris ve cikis degerlerini yanlis sectiniz tekrar secim yapiniz \n");
                    goto secim1;
                }
                if(yol_a_oz[0]=='t')
                {

                    al_draw_bitmap(rok,800,380,0);
                    al_flip_display();


                    yol_deger[0]=yol_deger[0]*-1;

                }
                else if(yol_a_oz[0]=='x')
                {

                    al_draw_bitmap(dok,800,380,0);
                    al_flip_display();
                }
                else if(yol_a_oz[0]=='y'&&yol_a_oz[1]=='x')
                {

                    al_draw_bitmap(rok,800,380,0);
                    al_flip_display();

                    yol_deger[0]=yol_deger[0]*-1;
                }
                else if(yol_a_oz[0]=='y'&&yol_a_oz[1]=='t')
                {

                    al_draw_bitmap(dok,800,380,0);
                    al_flip_display();
                }
                else if(yol_a_oz[0]=='y'&&yol_a_oz[1]=='z')
                {

                    al_draw_bitmap(dok,800,380,0);
                    al_flip_display();
                }
                else if(yol_a_oz[0]=='z'&&yol_a_oz[1]=='x')
                {

                    al_draw_bitmap(rok,800,380,0);
                    al_flip_display();

                    yol_deger[0]=yol_deger[0]*-1;
                }
                else if(yol_a_oz[0]=='z'&&yol_a_oz[1]=='y')
                {

                    al_draw_bitmap(rok,800,380,0);
                    al_flip_display();


                }
                else if(yol_a_oz[0]=='z'&&yol_a_oz[1]=='t')
                {

                    al_draw_bitmap(dok,800,380,0);
                    al_flip_display();
                }

                break;

            case 'b' :
secim2 :
                fflush(stdin);
                printf("\nbaslangic yonunu seciniz:");
                scanf("%c",&yol_b_oz[0]);
                fflush(stdin);
                printf("\ncikis yonunu seciniz:");
                scanf("%c",&yol_b_oz[1]);
                if(yol_b_oz[0]==giris1||yol_b_oz[0]==giris2)
                {

                }
                else
                {
                    printf("giris ve cikis degerlerini yanlis sectiniz tekrar secim yapiniz \n");
                    goto secim2;
                }
                if(yol_b_oz[1]==cikis1||yol_b_oz[1]==cikis2)
                {

                }
                else
                {
                    printf("giris ve cikis degerlerini yanlis sectiniz tekrar secim yapiniz \n");
                    goto secim2;
                }
                if(yol_b_oz[0]=='x')
                {

                    al_draw_bitmap(dok,1000,380,0);
                    al_flip_display();
                }
                else if(yol_b_oz[0]=='y')
                {

                    al_draw_bitmap(lok,1000,380,0);
                    al_flip_display();

                    yol_deger[1]=yol_deger[1]*-1;
                }
                else if(yol_b_oz[0]=='z'&&yol_b_oz[1]=='y')
                {

                    al_draw_bitmap(dok,1000,380,0);
                    al_flip_display();
                }
                else if(yol_b_oz[0]=='z'&&yol_b_oz[1]=='t')
                {

                    al_draw_bitmap(lok,1000,380,0);
                    al_flip_display();

                    yol_deger[1]=yol_deger[1]*-1;
                }
                else if(yol_b_oz[0]=='z'&&yol_b_oz[1]=='x')
                {

                    al_draw_bitmap(lok,1000,380,0);
                    al_flip_display();

                    yol_deger[1]=yol_deger[1]*-1;
                }
                else if(yol_b_oz[0]=='t'&&yol_b_oz[1]=='x')
                {

                    al_draw_bitmap(lok,1000,380,0);
                    al_flip_display();

                    yol_deger[1]=yol_deger[1]*-1;
                }
                else if(yol_b_oz[0]=='t'&&yol_b_oz[1]=='y')
                {

                    al_draw_bitmap(dok,1000,380,0);
                    al_flip_display();
                }
                else if(yol_b_oz[0]=='t'&&yol_b_oz[1]=='z')
                {

                    al_draw_bitmap(dok,1000,380,0);
                    al_flip_display();
                }

                break;




            case 'c' :
secim3 :
                fflush(stdin);
                printf("\nbaslangic yonunu seciniz:");
                scanf("%c",&yol_c_oz[0]);
                fflush(stdin);
                printf("\ncikis yonunu seciniz:");
                scanf("%c",&yol_c_oz[1]);
                if(yol_c_oz[0]==giris1||yol_c_oz[0]==giris2)
                {

                }
                else
                {
                    printf("giris ve cikis degerlerini yanlis sectiniz tekrar secim yapiniz \n");
                    goto secim3;
                }
                if(yol_c_oz[1]==cikis1||yol_c_oz[1]==cikis2)
                {

                }
                else
                {
                    printf("giris ve cikis degerlerini yanlis sectiniz tekrar secim yapiniz \n");
                    goto secim3;
                }
                if(yol_c_oz[0]=='t')
                {

                    al_draw_bitmap(rok,800,580,0);
                    al_flip_display();
                    yol_deger[2]=yol_deger[2]*-1;
                }
                else if(yol_c_oz[0]=='z')
                {

                    al_draw_bitmap(uok,800,580,0);
                    al_flip_display();
                }
                else if(yol_c_oz[0]=='y'&&yol_c_oz[1]=='z')
                {

                    al_draw_bitmap(rok,800,580,0);
                    al_flip_display();
                    yol_deger[2]=yol_deger[2]*-1;
                }
                else if(yol_c_oz[0]=='y'&&yol_c_oz[1]=='t')
                {

                    al_draw_bitmap(uok,800,580,0);
                    al_flip_display();
                }
                else if(yol_c_oz[0]=='y'&&yol_c_oz[1]=='x')
                {

                    al_draw_bitmap(uok,800,580,0);
                    al_flip_display();
                }
                else if(yol_c_oz[0]=='x'&&yol_c_oz[1]=='t')
                {

                    al_draw_bitmap(uok,800,580,0);
                    al_flip_display();
                }
                else if(yol_c_oz[0]=='x'&&yol_c_oz[1]=='y')
                {

                    al_draw_bitmap(rok,800,580,0);
                    al_flip_display();
                    yol_deger[2]=yol_deger[2]*-1;
                }
                else if(yol_c_oz[0]=='x'&&yol_c_oz[1]=='z')
                {

                    al_draw_bitmap(rok,800,580,0);
                    al_flip_display();
                    yol_deger[2]=yol_deger[2]*-1;
                }

                break;



            case 'd' :
secim4 :
                fflush(stdin);
                printf("\nbaslangic yonunu seciniz:");
                scanf("%c",&yol_d_oz[0]);
                fflush(stdin);
                printf("\ncikis yonunu seciniz:");
                scanf("%c",&yol_d_oz[1]);
                if(yol_d_oz[0]==giris1||yol_d_oz[0]==giris2)
                {

                }
                else
                {
                    printf("giris ve cikis degerlerini yanlis sectiniz tekrar secim yapiniz \n");
                    goto secim4;
                }
                if(yol_d_oz[1]==cikis1||yol_d_oz[1]==cikis2)
                {

                }
                else
                {
                    printf("giris ve cikis degerlerini yanlis sectiniz tekrar secim yapiniz \n");
                    goto secim4;
                }
                if(yol_d_oz[0]=='z')
                {

                    al_draw_bitmap(uok,1000,580,0);
                    al_flip_display();
                    yol_deger[3]=yol_deger[3]*-1;
                }
                else if(yol_d_oz[0]=='y')
                {

                    al_draw_bitmap(lok,1000,580,0);
                    al_flip_display();

                }
                else if(yol_d_oz[0]=='x'&&yol_d_oz[1]=='y')
                {

                    al_draw_bitmap(uok,1000,580,0);
                    al_flip_display();
                    yol_deger[3]=yol_deger[3]*-1;
                }
                else if(yol_d_oz[0]=='x'&&yol_d_oz[1]=='t')
                {

                    al_draw_bitmap(lok,1000,580,0);
                    al_flip_display();

                }
                else if(yol_d_oz[0]=='x'&&yol_d_oz[1]=='z')
                {

                    al_draw_bitmap(lok,1000,580,0);
                    al_flip_display();
                }
                else if(yol_d_oz[0]=='t'&&yol_d_oz[1]=='x')
                {

                    al_draw_bitmap(uok,1000,580,0);
                    al_flip_display();
                    yol_deger[3]=yol_deger[3]*-1;
                }
                else if(yol_d_oz[0]=='t'&&yol_d_oz[1]=='y')
                {

                    al_draw_bitmap(uok,1000,580,0);
                    al_flip_display();
                    yol_deger[3]=yol_deger[3]*-1;
                }
                else if(yol_d_oz[0]=='t'&&yol_d_oz[1]=='z')
                {

                    al_draw_bitmap(lok,1000,580,0);
                    al_flip_display();
                }

                break;


            }

            fflush(stdin);
            printf("\ntekrar yol bilgisi girmek icin 1 girin eger girmek istemiyorsaniz 0 giriniz:");
            scanf("%d",&kosul);

        }
        //x için matrise atama
        if(giris1==yol_isim[4]||giris2==yol_isim[4])
        {

            if(yol_deger[4]==-1)
            {
                matris[0][4]=1;
                matris[1][4]=1;
            }
            else
            {
                matris[0][9]=matris[0][9]-yol_deger[4];
                matris[1][9]=matris[1][9]-yol_deger[4];
            }
        }
        else
        {
            if(yol_deger[4]==-1)
            {
                matris[0][4]=-1;
                matris[1][4]=-1;
            }
            else
            {
                matris[0][9]=matris[0][9]+yol_deger[4];
                matris[1][9]=matris[1][9]+yol_deger[4];
            }
        }

        //y için matrise atama
        if(giris1==yol_isim[5]||giris2==yol_isim[5])
        {

            if(yol_deger[5]==-1)
            {
                matris[0][5]=1;
                matris[2][5]=1;

            }
            else
            {
                matris[0][9]=matris[0][9]-yol_deger[5];
                matris[2][9]=matris[2][9]-yol_deger[5];
            }
        }
        else
        {
            if(yol_deger[5]==-1)
            {
                matris[0][5]=-1;
                matris[2][5]=-1;
            }
            else
            {
                matris[0][9]=matris[0][9]+yol_deger[5];
                matris[2][9]=matris[2][9]+yol_deger[5];
            }
        }
        //z için atama
        if(giris1==yol_isim[6]||giris2==yol_isim[6])
        {

            if(yol_deger[6]==-1)
            {
                matris[0][6]=1;
                matris[3][6]=1;
            }
            else
            {
                matris[0][9]=matris[0][9]-yol_deger[6];
                matris[3][9]=matris[3][9]-yol_deger[6];
            }
        }
        else
        {
            if(yol_deger[6]==-1)
            {
                matris[0][6]=-1;
                matris[3][6]=-1;
            }
            else
            {
                matris[0][9]=matris[0][9]+yol_deger[6];
                matris[3][9]=matris[3][9]+yol_deger[6];
            }
        }
        // t için atama
        if(giris1==yol_isim[7]||giris2==yol_isim[7])
        {

            if(yol_deger[7]==-1)
            {
                matris[0][7]=1;
                matris[4][7]=1;

            }
            else
            {
                matris[0][9]=matris[0][9]-yol_deger[7];
                matris[4][9]=matris[4][9]-yol_deger[7];
            }
        }
        else
        {
            if(yol_deger[7]==-1)
            {
                matris[0][7]=-1;
                matris[4][7]=-1;
            }
            else
            {
                matris[0][9]=matris[0][9]+yol_deger[7];
                matris[4][9]=matris[4][9]+yol_deger[7];
            }
        }
        // 2. denklem x=a+b matrise atama

        //x için matrise atama yapıldı


        // a   için
        if(yol_deger[0]==-1)
        {
            matris[1][0]=yol_deger[0];//-1 atıoz
            matris[4][0]=yol_deger[0]*-1;
        }
        else
        {
            matris[1][9]=matris[1][9]+yol_deger[0];
            matris[4][9]=matris[4][9]-yol_deger[0];


        }
        // b için
        if(yol_deger[1]==-1)
        {
            matris[1][1]=yol_deger[1];
            matris[2][1]=yol_deger[1]*-1;
        }
        else
        {
            matris[1][9]=matris[1][9]+yol_deger[1];
            matris[2][9]=matris[2][9]-yol_deger[1];
        }
    // 3. denklem için matrise atama y=b+d
    // b nin ataması bi önceki denklemde yapıldığı için tekrar atamıyoruz
    // y için atama yapıldı

    // d için

    if(yol_deger[3]==-1)
        {
            matris[2][3]=yol_deger[3];
            matris[3][3]=yol_deger[3]*-1;
        }
        else
        {
            matris[2][9]=matris[2][9]+yol_deger[3];
            matris[3][9]=matris[3][9]-yol_deger[3];
        }

        // 4. denklem için z=d+c
        // d nin ataması yapıldı
        // z nin ataması yapıldı
        //c nin ataması
         if(yol_deger[2]==-1)
        {
            matris[3][2]=yol_deger[2];
            matris[4][2]=yol_deger[2]*-1;
        }
        else
        {
            matris[3][9]=matris[3][9]+yol_deger[2];
            matris[4][9]=matris[4][9]-yol_deger[2];
        }
        //5. denklem için atama t=a+c
        //t nin atması a nın ataması c nin ataması yapıldı
        //matrisi ekrana yazdırma
        for(i=0;i<5;i++)
        {
            for(j=0;j<10;j++)
            {
                printf("%d  ",matris[i][j]);
            }
            printf("\n");
        }
    }
    else if(secim==2)
    {
        al_clear_to_color(al_map_rgb(0,0,0));
        al_draw_bitmap(pic2,760,340,0);
        al_flip_display();
giris2 :
        fflush(stdin);
        printf("\ngiris yonlerini seciniz:\n1. giris:");
        scanf("%c",&giris1);
        fflush(stdin);
        printf("\n2. giris:");
        scanf("%c",&giris2);
        fflush(stdin);
        printf("\ncikis yonlerini seciniz:\n1. cikis:");
        scanf("%c",&cikis1);
        fflush(stdin);
        printf("\n2. cikis:");
        scanf("%c",&cikis2);
        if(giris1==giris2||giris1==cikis1||giris1==cikis2||giris2==cikis1||giris2==cikis2||cikis1==cikis2)
        {
            printf("yollari yanlis sectiniz lutfen tekrar secim yapiniz");
            goto giris2;
        }
        for(i=0; i<9; i++)
        {
            fflush(stdin);
            printf("\n%c yolunun degerini giriniz:",yol_isim2[i]);
            scanf("%d",&yol_deger2[i]);

        }


        //yol özelliklerini belirleme while'ý
        while(kosul==1)
        {
            fflush(stdin);
            printf("\nhangi yolun yonunu belirleyeceginizi seciniz:");
            scanf("%c",&yol);
            switch(yol)
            {
            case 'a' :

secim21 :
                fflush(stdin);
                printf("\nbaslangic yonunu seciniz:");
                scanf("%c",&yol_a_oz[0]);
                fflush(stdin);
                printf("\ncikis yonunu seciniz:");
                scanf("%c",&yol_a_oz[1]);
                if(yol_a_oz[0]==giris1||yol_a_oz[0]==giris2)
                {

                }
                else
                {
                    printf("giris ve cikis degerlerini yanlis sectiniz tekrar secim yapiniz \n");
                    goto secim21;
                }
                if(yol_a_oz[1]==cikis1||yol_a_oz[1]==cikis2)
                {

                }
                else
                {
                    printf("giris ve cikis degerlerini yanlis sectiniz tekrar secim yapiniz \n");
                    goto secim21;
                }
                if(yol_a_oz[0]=='t')
                {

                    al_draw_bitmap(rok,800,380,0);
                    al_flip_display();
                    yol_deger[0]=yol_deger[0]*-1;
                }
                else if(yol_a_oz[0]=='x')
                {

                    al_draw_bitmap(dok,800,380,0);
                    al_flip_display();
                }
                else if(yol_a_oz[0]=='y'&&yol_a_oz[1]=='x')
                {

                    al_draw_bitmap(rok,800,380,0);
                    al_flip_display();
                    yol_deger[0]=yol_deger[0]*-1;
                }
                else if(yol_a_oz[0]=='y'&&yol_a_oz[1]=='t')
                {

                    al_draw_bitmap(dok,800,380,0);
                    al_flip_display();
                }
                else if(yol_a_oz[0]=='y'&&yol_a_oz[1]=='z')
                {

                    al_draw_bitmap(dok,800,380,0);
                    al_flip_display();
                }
                else if(yol_a_oz[0]=='z'&&yol_a_oz[1]=='x')
                {

                    al_draw_bitmap(rok,800,380,0);
                    al_flip_display();
                    yol_deger[0]=yol_deger[0]*-1;
                }
                else if(yol_a_oz[0]=='z'&&yol_a_oz[1]=='y')
                {

                    al_draw_bitmap(rok,800,380,0);
                    al_flip_display();
                    yol_deger[0]=yol_deger[0]*-1;
                }
                else if(yol_a_oz[0]=='z'&&yol_a_oz[1]=='t')
                {

                    al_draw_bitmap(dok,800,380,0);
                    al_flip_display();
                }

                break;

            case 'b' :
secim22 :
                fflush(stdin);
                printf("\nbaslangic yonunu seciniz:");
                scanf("%c",&yol_b_oz[0]);
                fflush(stdin);
                printf("\ncikis yonunu seciniz:");
                scanf("%c",&yol_b_oz[1]);
                if(yol_b_oz[0]==giris1||yol_b_oz[0]==giris2)
                {

                }
                else
                {
                    printf("giris ve cikis degerlerini yanlis sectiniz tekrar secim yapiniz \n");
                    goto secim22;
                }
                if(yol_b_oz[1]==cikis1||yol_b_oz[1]==cikis2)
                {

                }
                else
                {
                    printf("giris ve cikis degerlerini yanlis sectiniz tekrar secim yapiniz \n");
                    goto secim22;
                }
                if(yol_b_oz[0]=='x')
                {

                    al_draw_bitmap(dok,1000,380,0);
                    al_flip_display();
                }
                else if(yol_b_oz[0]=='y')
                {

                    al_draw_bitmap(lok,1000,380,0);
                    al_flip_display();
                }
                else if(yol_b_oz[0]=='z'&&yol_b_oz[1]=='y')
                {

                    al_draw_bitmap(dok,1000,380,0);
                    al_flip_display();
                }
                else if(yol_b_oz[0]=='z'&&yol_b_oz[1]=='t')
                {

                    al_draw_bitmap(lok,1000,380,0);
                    al_flip_display();
                }
                else if(yol_b_oz[0]=='z'&&yol_b_oz[1]=='x')
                {

                    al_draw_bitmap(lok,1000,380,0);
                    al_flip_display();
                }
                else if(yol_b_oz[0]=='t'&&yol_b_oz[1]=='x')
                {

                    al_draw_bitmap(lok,1000,380,0);
                    al_flip_display();
                }
                else if(yol_b_oz[0]=='t'&&yol_b_oz[1]=='y')
                {

                    al_draw_bitmap(dok,1000,380,0);
                    al_flip_display();
                }
                else if(yol_b_oz[0]=='t'&&yol_b_oz[1]=='z')
                {

                    al_draw_bitmap(dok,1000,380,0);
                    al_flip_display();
                }

                break;




            case 'c' :
secim23 :
                fflush(stdin);
                printf("\nbaslangic yonunu seciniz:");
                scanf("%c",&yol_c_oz[0]);
                fflush(stdin);
                printf("\ncikis yonunu seciniz:");
                scanf("%c",&yol_c_oz[1]);
                if(yol_c_oz[0]==giris1||yol_c_oz[0]==giris2)
                {

                }
                else
                {
                    printf("giris ve cikis degerlerini yanlis sectiniz tekrar secim yapiniz \n");
                    goto secim23;
                }
                if(yol_c_oz[1]==cikis1||yol_c_oz[1]==cikis2)
                {

                }
                else
                {
                    printf("giris ve cikis degerlerini yanlis sectiniz tekrar secim yapiniz \n");
                    goto secim23;
                }
                if(yol_c_oz[0]=='t')
                {

                    al_draw_bitmap(rok,800,580,0);
                    al_flip_display();
                }
                else if(yol_c_oz[0]=='z')
                {

                    al_draw_bitmap(uok,800,580,0);
                    al_flip_display();
                }
                else if(yol_c_oz[0]=='y'&&yol_c_oz[1]=='z')
                {

                    al_draw_bitmap(rok,800,580,0);
                    al_flip_display();
                }
                else if(yol_c_oz[0]=='y'&&yol_c_oz[1]=='t')
                {

                    al_draw_bitmap(uok,800,580,0);
                    al_flip_display();
                }
                else if(yol_c_oz[0]=='y'&&yol_c_oz[1]=='x')
                {

                    al_draw_bitmap(uok,800,580,0);
                    al_flip_display();
                }
                else if(yol_c_oz[0]=='x'&&yol_c_oz[1]=='t')
                {

                    al_draw_bitmap(uok,800,580,0);
                    al_flip_display();
                }
                else if(yol_c_oz[0]=='x'&&yol_c_oz[1]=='y')
                {

                    al_draw_bitmap(rok,800,580,0);
                    al_flip_display();
                }
                else if(yol_c_oz[0]=='x'&&yol_c_oz[1]=='z')
                {

                    al_draw_bitmap(rok,800,580,0);
                    al_flip_display();
                }

                break;



            case 'd' :
secim24 :
                fflush(stdin);
                printf("\nbaslangic yonunu seciniz:");
                scanf("%c",&yol_d_oz[0]);
                fflush(stdin);
                printf("\ncikis yonunu seciniz:");
                scanf("%c",&yol_d_oz[1]);
                if(yol_d_oz[0]==giris1||yol_d_oz[0]==giris2)
                {

                }
                else
                {
                    printf("giris ve cikis degerlerini yanlis sectiniz tekrar secim yapiniz \n");
                    goto secim24;
                }
                if(yol_d_oz[1]==cikis1||yol_d_oz[1]==cikis2)
                {

                }
                else
                {
                    printf("giris ve cikis degerlerini yanlis sectiniz tekrar secim yapiniz \n");
                    goto secim24;
                }
                if(yol_d_oz[0]=='z')
                {

                    al_draw_bitmap(uok,1000,580,0);
                    al_flip_display();
                }
                else if(yol_d_oz[0]=='y')
                {

                    al_draw_bitmap(lok,1000,580,0);
                    al_flip_display();
                }
                else if(yol_d_oz[0]=='x'&&yol_d_oz[1]=='y')
                {

                    al_draw_bitmap(uok,1000,580,0);
                    al_flip_display();
                }
                else if(yol_d_oz[0]=='x'&&yol_d_oz[1]=='t')
                {

                    al_draw_bitmap(lok,1000,580,0);
                    al_flip_display();
                }
                else if(yol_d_oz[0]=='x'&&yol_d_oz[1]=='z')
                {

                    al_draw_bitmap(lok,1000,580,0);
                    al_flip_display();
                }
                else if(yol_d_oz[0]=='t'&&yol_d_oz[1]=='x')
                {

                    al_draw_bitmap(uok,1000,580,0);
                    al_flip_display();
                }
                else if(yol_d_oz[0]=='t'&&yol_d_oz[1]=='y')
                {

                    al_draw_bitmap(uok,1000,580,0);
                    al_flip_display();
                }
                else if(yol_d_oz[0]=='t'&&yol_d_oz[1]=='z')
                {

                    al_draw_bitmap(lok,1000,580,0);
                    al_flip_display();
                }

                break;

            case 'e' :
secim25 :
                fflush(stdin);
                printf("\nbaslangic yonunu seciniz:");
                scanf("%c",&yol_e_oz[0]);
                fflush(stdin);
                printf("\ncikis yonunu seciniz:");
                scanf("%c",&yol_e_oz[1]);
                if(yol_e_oz[0]==giris1||yol_e_oz[0]==giris2)
                {

                }
                else
                {
                    printf("giris ve cikis degerlerini yanlis sectiniz tekrar secim yapiniz \n");
                    goto secim25;
                }
                if(yol_e_oz[1]==cikis1||yol_e_oz[1]==cikis2)
                {

                }
                else
                {
                    printf("giris ve cikis degerlerini yanlis sectiniz tekrar secim yapiniz \n");
                    goto secim25;
                }
                if(yol_e_oz[0]=='t')
                {

                    al_draw_bitmap(rok,900,440,0);
                    al_flip_display();
                    yol_deger[4]=yol_deger[4]*-1;
                }
                else if(yol_e_oz[0]=='y')
                {

                    al_draw_bitmap(lok,900,440,0);
                    al_flip_display();
                }
                else if(yol_e_oz[0]=='x'&&yol_e_oz[1]=='y')
                {

                    al_draw_bitmap(rok,900,440,0);
                    al_flip_display();
                    yol_deger[4]=yol_deger[4]*-1;
                }
                else if(yol_e_oz[0]=='x'&&yol_e_oz[1]=='t')
                {

                    al_draw_bitmap(lok,900,440,0);
                    al_flip_display();
                }

                else if(yol_e_oz[0]=='z'&&yol_e_oz[1]=='t')
                {

                    al_draw_bitmap(lok,900,440,0);
                    al_flip_display();
                }
                else if(yol_e_oz[0]=='z'&&yol_e_oz[1]=='y')
                {

                    al_draw_bitmap(rok,900,440,0);
                    al_flip_display();
                    yol_deger[4]=yol_deger[4]*-1;
                }

                break;




            }

            fflush(stdin);
            printf("\ntekrar yol bilgisi girmek icin 1 girin eger girmek istemiyorsaniz 0 giriniz:");
            scanf("%d",&kosul);

        }
         //x için matrise atama
        if(giris1==yol_isim2[5]||giris2==yol_isim2[5])
        {

            if(yol_deger2[5]==-1)
            {
                matris[0][5]=1;
                matris[1][5]=1;
            }
            else
            {
                matris[0][9]=matris[0][9]-yol_deger2[5];
                matris[1][9]=matris[1][9]-yol_deger2[5];
            }
        }
        else
        {
            if(yol_deger2[5]==-1)
            {
                matris[0][5]=-1;
                matris[1][5]=-1;
            }
            else
            {
                matris[0][9]=matris[0][9]+yol_deger2[5];
                matris[1][9]=matris[1][9]+yol_deger2[5];
            }
        }

        //y için matrise atama
        if(giris1==yol_isim2[6]||giris2==yol_isim2[6])
        {

            if(yol_deger2[6]==-1)
            {
                matris[0][6]=1;
                matris[2][6]=1;

            }
            else
            {
                matris[0][9]=matris[0][9]-yol_deger2[6];
                matris[2][9]=matris[2][9]-yol_deger2[6];
            }
        }
        else
        {
            if(yol_deger2[6]==-1)
            {
                matris[0][6]=-1;
                matris[2][6]=-1;
            }
            else
            {
                matris[0][9]=matris[0][9]+yol_deger2[6];
                matris[2][9]=matris[2][9]+yol_deger2[6];
            }
        }
        //z için atama
        if(giris1==yol_isim2[7]||giris2==yol_isim2[7])
        {

            if(yol_deger2[7]==-1)
            {
                matris[0][7]=1;
                matris[3][7]=1;
            }
            else
            {
                matris[0][9]=matris[0][9]-yol_deger2[7];
                matris[3][9]=matris[3][9]-yol_deger2[7];
            }
        }
        else
        {
            if(yol_deger2[7]==-1)
            {
                matris[0][7]=-1;
                matris[3][7]=-1;
            }
            else
            {
                matris[0][9]=matris[0][9]+yol_deger2[7];
                matris[3][9]=matris[3][9]+yol_deger2[7];
            }
        }
        // t için atama
        if(giris1==yol_isim2[8]||giris2==yol_isim2[8])
        {

            if(yol_deger2[8]==-1)
            {
                matris[0][8]=1;
                matris[4][8]=1;

            }
            else
            {
                matris[0][9]=matris[0][9]-yol_deger2[8];
                matris[4][9]=matris[4][9]-yol_deger2[8];
            }
        }
        else
        {
            if(yol_deger2[8]==-1)
            {
                matris[0][8]=-1;
                matris[4][8]=-1;
            }
            else
            {
                matris[0][9]=matris[0][9]+yol_deger2[8];
                matris[4][9]=matris[4][9]+yol_deger2[8];
            }
        }
        // 2. denklem x=a+b matrise atama

        //x için matrise atama yapıldı


        // a   için
        if(yol_deger2[0]==-1)
        {
            matris[1][0]=yol_deger2[0];//-1 atıoz
            matris[4][0]=yol_deger2[0]*-1;
        }
        else
        {
            matris[1][9]=matris[1][9]+yol_deger2[0];
            matris[4][9]=matris[4][9]-yol_deger2[0];


        }
        // b için
        if(yol_deger2[1]==-1)
        {
            matris[1][1]=yol_deger2[1];
            matris[2][1]=yol_deger2[1]*-1;
        }
        else
        {
            matris[1][9]=matris[1][9]+yol_deger2[1];
            matris[2][9]=matris[2][9]-yol_deger2[1];
        }
    // 3. denklem için matrise atama y=b+d+e
    // b nin ataması bi önceki denklemde yapıldığı için tekrar atamıyoruz
    // y için atama yapıldı
    // e için
    if(yol_deger2[4]==-1)
        {
            matris[2][4]=yol_deger2[4];
            matris[4][4]=yol_deger2[4]*-1;
        }
        else
        {
            matris[2][9]=matris[2][9]+yol_deger2[4];
            matris[4][9]=matris[3][9]-yol_deger2[4];
        }


    // d için

    if(yol_deger2[3]==-1)
        {
            matris[2][3]=yol_deger2[3];
            matris[3][3]=yol_deger2[3]*-1;
        }
        else
        {
            matris[2][9]=matris[2][9]+yol_deger2[3];
            matris[3][9]=matris[3][9]-yol_deger2[3];
        }

        // 4. denklem için z=d+c
        // d nin ataması yapıldı
        // z nin ataması yapıldı
        //c nin ataması
         if(yol_deger2[2]==-1)
        {
            matris[3][2]=yol_deger2[2];
            matris[4][2]=yol_deger2[2]*-1;
        }
        else
        {
            matris[3][9]=matris[3][9]+yol_deger2[2];
            matris[4][9]=matris[4][9]-yol_deger2[2];
        }
        //5. denklem için atama t=a+c
        //t nin atması a nın ataması c nin ataması ve e nin ataması yapıldı
        //matrisi ekrana yazdırma
        for(i=0;i<5;i++)
        {
            for(j=0;j<10;j++)
            {
                printf("%d  ",matris[i][j]);
            }
            printf("\n");
        }
    }







    else
    {
        printf("\nyanlis bir parametre girdiniz tekrar secim yapiniz\n");
        goto tekrar;
    }




    return 0;
}

