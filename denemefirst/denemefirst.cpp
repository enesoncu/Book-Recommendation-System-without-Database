#include <iostream>
using namespace std;


int main()
{
    setlocale(LC_ALL, "Turkish");


    string Roman[10] = { "Kuyucakl� Yusuf � Sabahattin Ali", "Yeni�ehir�de Bir ��le Vakti � Sevgi Soysal", "Mai ve Siyah � Halid Ziya U�akl�gil", "K�skanmak � Nahid S�rr� �rik", "Cevdet Bey ve O�ullar� � Orhan Pamuk", "Eyl�l � Mehmet Rauf", "Gece � Bilge Karasu", "Fahim Bey ve Biz � Abd�lhak �inasi Hisar", "47�liler � F�ruzan", "G�lgesizler � Hasan Ali Topta�" };
    string T�rkKlasikleri[10] = { "Sevgili Ars�z �l�m � Latife Tekin", "Yaban � Yakup Kadri Karaosmano�lu", "Bir D���n Gecesi � Adalet A�ao�lu", "Tehlikeli Oyunlar � O�uz Atay", "�lmeye Yatmak � Adalet A�ao�lu", "K�rk Mantolu Madonna � Sabahattin Ali", "�� �stanbul � Mithat Cemal Kuntay", "�al�ku�u � Re�at Nuri G�ntekin", "Dokuzuncu Hariciye Ko�u�u � Peyami Safa", "Devlet Ana � Kemal Tahir" };
    string Polisiye[10] = { "Yer Demir G�k Bak�r � Ya�ar Kemal", "Tuhaf Bir Kad�n � Leyla Erbil", "A��r Roman � Metin Ka�an", "Orta Direk � Ya�ar Kemal", "F�rat Suyu Kan Ak�yor Baksana � Ya�ar Kemal", "��imizdeki �eytan � Sabahattin Ali", "Yaln�z�z � Peyami Safa", "Bin H�z�nl� Haz � Hasan Ali Topta�", "Son Ad�m � Ayhan Ge�gin" };
    string Romantik[10] = { "Bir G�n Tek Ba��na � Vedat T�rkali", "Hakkari�de Bir Mevsim � Ferit Edg�", "Demirciler �ar��s� Cinayeti � Ya�ar Kemal", "Yorgun Sava��� � Kemal Tahir", "Y�lanlar�n �c� � Fakir Baykurt", "Her Gece Bodrum � Selim �leri", "Sinekli Bakkal � Halide Edib Ad�var", "Sultan Hamid D��erken � Nahid S�rr� �rik", "Serenad � Z�lf� Livaneli", "Tol � Murat Uyurkulak" };
    string Tarih[10] = { "Nutuk � Mustafa Kemal Atat�rk", "�u ��lg�n T�rkler � Turgut �zakman", "Semerkant � Amin Maalouf", "Katre - i Matem � �skender Pala", "Veda � Ay�e Kulin", "Osmanc�k � Tar�k Bu�ra", "Fedailerin Kalesi Alamut � Vladimir Bartol", "Devlet - i Aliyye � Halil �nalc�k", "Sar� Zeybek � Can D�ndar", "�ah ve Sultan � �skender Pala" };
    string Bilim[10] = { "Zaman�n K�sa Tarihi � Stephen Hawking", "Ceviz Kabu�undaki Evren� Stephen Hawking", "Kara Delikler� Stephen Hawking", "B�y�k Tasar�m� Stephen Hawking", "Zaman Makinesi � H.G.Wells", "Mars Y�ll�klar� � Ray Bradbury", "M�lks�zler � Ursula K.Le Guin", "�nsan V�cudunun �yk�s� � Daniel E.Lieberman", "T�fek, Mikrop ve �elik � Jared Diamond", "Kozmos - Carl Sagan" };
    string Felsefe[10] = { "Sofie�nin D�nyas� � Jostein Gaarder", "Bir �ift Y�rek � Marlo Morgan", "Beyaz Zambaklar �lkesinde � Grigory Petrov", "S�r � Rhonda Byrne", "Yabanc� � Albert Camus", "Devlet � Platon", "Bulant� � Jean - Paul Sartre", "Bu �lke � Cemil Meri�", "�topya � Thomas More", "G�steri Peygamberi � Chuck Palahniuk" };
    string Biyografi[10] = { "Latife Han�m � �pek �al��lar", "Halide Edib � �pek �al��lar", "Steve Jobs � Walter Isaacson", "Anne Frank'�n Hat�ra Defteri � Anne Frank", "Einstein(Ya�am� ve Evreni) � Walter Isaacson", "Benim Ad�m Messi � Michael Part", "K�z�m Amy � Mitch Winehouse", "Enver � Murat Bardak��", "T�rkan � Ay�e Kulin", "Dar A�ac�nda �� Fidan � Nihat Behram" };
    string Ki�iselGeli�im[10] = { "B�t�n Beyinli �ocuk - Daniel J.Siegel", "K���k A�a�'�n E�itimi - Forrest Carter", "Beni �d�lle Cezaland�rma - Dr.�zg�r Bolat", "Yeti�in �ocuklar - Prof.Dr.Sel�uk �irin", "�ocu�unuza S�n�r Koyma - Robert J.Mackenzie", "Oyuncu Anne - �ermin �arkac�", "�ocu�unu Do�ru Besle - Dr.Ender Sara�", "�st�n Zekal� �ocu�a Yard�m - Jeanne Siaud - Facchin", "A��l�n Ben Anneyim - Jill Smokler", "Etkili Anne Baba E�itimi - Dr.Thomas Gordon" };
    string �fke[10] = { "Aya�l� ve Kirac�lar� � Memduh �evket Esendal", "M���hedat � Ahmet Midhat Efendi", "Kinyas ile Kayra � Hakan G�nday", "Berci Kristin ��p Masallar� � Latife Tekin", "Denizin �a��r��� � Kemal Bilba�ar", "K�r�k Hayatlar � Halit Ziya U�akl�gil", "Kurt Kanunu � Kemal Tahir", "Medar� Mai�et Motoru � Sait Faik Abas�yan�k", "Odalarda � Erdal �z", "Ye�il Gece � Re�at Nuri G�ntekin" };
    string Korku[10] = { "Bir Solgun Adam � Sel�uk Baran", "Kurtlar Sofras� � Attil� �lhan", "Bir Deliler Evinin Yalan Yanl�� Anlat�lan K�sa Tarihi � Ayfer Tun�", "Buzul �a��n�n Vir�s� � V�s�at O.Bener", "Esir �ehrin �nsanlar� � Kemal Tahir", "Gurbet Ku�lar� � Orhan Kemal", "�stanbul Hat�ras� � Ahmet �mit", "Mel�un � Selim �leri", "Rahmet Yollar� Kesti � Kemal Tahir", "Bir Kad�n�n Penceresinden � Oktay Rifat" };
    string Mutlu[10] = { "Uzun S�rm�� Bir G�n�n Ak�am� � Bilge Karasu", "Heba � Hasan Ali Topta�", "Masumiyet M�zesi � Orhan Pamuk", "Ya�amak G�zel �ey Be Karde�im � N�z�m Hikmet", "�aml�ca�daki Eni�temiz � Abd�lhak �inasi Hisar", "�ocuklu�un So�uk Geceleri � Tezer �zl�", "Kay�p Aran�yor � Sait Faik Abas�yan�k", "Kiral�k Konak � Yakup Kadri Karaosmano�lu", "Eski Hastal�k � Re�at Nuri G�ntekin", "Mutluluk � Z�lf� Livaneli" };
    string �z�nt�[10] = { "�imdiki �ocuklar Harika � Aziz Nesin", "Bo�azkesen � Nedim G�rsel", "Karartma Geceleri � R�fat Ilgaz", "Matmazel Noraliya�n�n Koltu�u � Peyami Safa", "Sahnenin D���ndakiler � Ahmet Hamdi Tanp�nar", "Yaral�s�n � Erdal �z", "Ye�il�am Dedikleri T�rkiye � Vedat T�rkali", "Ankara � Yakup Kadri Karaosmano�lu", "Araba Sevdas� � Recaizade Mahmut Ekrem", "Ate� Gecesi � Re�at Nuri G�ntekin" };
    string N�tr[10] = { "��lg�n Gibi � Suat Dervi�", "G��m�� Kediler Bah�esi � Bilge Karasu", "Handan � Halide Edib Ad�var", "Mahur Beste � Ahmet Hamdi Tanp�nar", "�u ��lg�n T�rkler � Turgut �zakman", "T�t�n Zaman� � Necati Cumal�", "Veda � Ay�e Kulin", "Viski � �etin Altan", "Yalan � Tahsin Y�cel", "Yaral�s�n � Erdal �z" };
    string A�k[10] = { "Sevgili Ars�z �l�m � Latife Tekin", "Yaban � Yakup Kadri Karaosmano�lu", "Bir D���n Gecesi � Adalet A�ao�lu", "Tehlikeli Oyunlar � O�uz Atay", "�lmeye Yatmak � Adalet A�ao�lu", "K�rk Mantolu Madonna � Sabahattin Ali", "�� �stanbul � Mithat Cemal Kuntay", "�al�ku�u � Re�at Nuri G�ntekin", "Dokuzuncu Hariciye Ko�u�u � Peyami Safa", "Devlet Ana � Kemal Tahir" };
    string Depresif[10] = { "�nce Memed � Ya�ar Kemal", "Tutunamayanlar � O�uz Atay", "Saatleri Ayarlama Enstit�s� � Ahmet Hamdi Tanp�nar", "Huzur � Ahmet Hamdi Tanp�nar", "Kara Kitap � Orhan Pamuk", "Bereketli Topraklar �zerinde � Orhan Kemal", "Aylak Adam � Yusuf At�lgan", "A�k - � Memnu � Halit Ziya U�akl�gil", "Benim Ad�m K�rm�z� � Orhan Pamuk", "Puslu K�talar Atlas� � �hsan Oktay Anar" };
    string �a�k�n[10] = { "Bir G�n Tek Ba��na � Vedat T�rkali", "Hakkari�de Bir Mevsim � Ferit Edg�", "�nce Memed � Ya�ar Kemal", "Tutunamayanlar � O�uz Atay", "Saatleri Ayarlama Enstit�s� � Ahmet Hamdi Tanp�nar", "Huzur � Ahmet Hamdi Tanp�nar", "Kara Kitap � Orhan Pamuk", "Bereketli Topraklar �zerinde � Orhan Kemal", "Aylak Adam � Yusuf At�lgan", "A�k - � Memnu � Halit Ziya U�akl�gil" };


    char A;
    char B;
    char m;

    cout << "        *HO�GELD�N�Z*\n\n";
    cout << "--Kitap �neri Y�ntemini Se�iniz--\n";
    cout << "A- Kategoriye G�re\n";
    cout << "B- Duygu Durumuna G�re\n\n";

    cout <<"Se�ilen Y�ntem: ";
    cin >> m;

    while(true)
    {
        switch (m)
        {
        case 'A':
            char ch;
            cout << "\n --Kitap Kategorileri--\n";
            cout << "1 - Roman\n";
            cout << "2 - T�rk Klasikleri\n";
            cout << "3 - Polisiye\n";
            cout << "4 - Romantik\n";
            cout << "5 - Tarih\n";
            cout << "6 - Bilim\n";
            cout << "7 - Felsefe\n";
            cout << "8 - Biyografi\n";
            cout << "9 - Ki�isel Geli�im\n\n";

            cout << "Se�ti�iniz Kategorinin Numaras�n� Giriniz : ";
            cin >> ch;

            switch (ch)
            {
            case '1':

                srand(time(0));

                for (int i = 0; i < 2; i++) {
                    int index = rand() % 10;

                    string temp = Roman[i];
                    Roman[i] = Roman[index];
                    Roman[index] = temp;

                }

                for (int i = 0; i < 2; i++) {
                    cout << endl << Roman[i] << endl;
                }

                break;

            case '2':

                srand(time(0));

                for (int i = 0; i < 2; i++) {
                    int index = rand() % 10;

                    string temp = T�rkKlasikleri[i];
                    T�rkKlasikleri[i] = T�rkKlasikleri[index];
                    T�rkKlasikleri[index] = temp;

                }

                for (int i = 0; i < 2; i++) {
                    cout << endl << T�rkKlasikleri[i] << endl;
                }

                break;

            case '3':

                srand(time(0));

                for (int i = 0; i < 2; i++) {
                    int index = rand() % 10;

                    string temp = Polisiye[i];
                    Polisiye[i] = Polisiye[index];
                    Polisiye[index] = temp;

                }

                for (int i = 0; i < 2; i++) {
                    cout << endl << Polisiye[i] << endl;
                }

                break;

            case '4':

                srand(time(0));

                for (int i = 0; i < 2; i++) {
                    int index = rand() % 10;

                    string temp = Romantik[i];
                    Romantik[i] = Romantik[index];
                    Romantik[index] = temp;

                }

                for (int i = 0; i < 2; i++) {
                    cout << endl << Romantik[i] << endl;
                }

                break;

            case '5':

                srand(time(0));

                for (int i = 0; i < 2; i++) {
                    int index = rand() % 10;

                    string temp = Tarih[i];
                    Tarih[i] = Tarih[index];
                    Tarih[index] = temp;

                }

                for (int i = 0; i < 2; i++) {
                    cout << endl << Tarih[i] << endl;
                }

                break;

            case '6':

                srand(time(0));

                for (int i = 0; i < 2; i++) {
                    int index = rand() % 10;

                    string temp = Bilim[i];
                    Bilim[i] = Bilim[index];
                    Bilim[index] = temp;

                }

                for (int i = 0; i < 2; i++) {
                    cout << endl << Bilim[i] << endl;
                }

                break;

            case '7':

                srand(time(0));

                for (int i = 0; i < 2; i++) {
                    int index = rand() % 10;

                    string temp = Felsefe[i];
                    Felsefe[i] = Felsefe[index];
                    Felsefe[index] = temp;

                }

                for (int i = 0; i < 2; i++) {
                    cout << endl << Felsefe[i] << endl;
                }

                break;

            case '8':

                srand(time(0));

                for (int i = 0; i < 2; i++) {
                    int index = rand() % 10;

                    string temp = Biyografi[i];
                    Biyografi[i] = Biyografi[index];
                    Biyografi[index] = temp;

                }

                for (int i = 0; i < 2; i++) {
                    cout << endl << Biyografi[i] << endl;
                }

                break;

            case '9':

                srand(time(0));

                for (int i = 0; i < 2; i++) {
                    int index = rand() % 10;

                    string temp = Ki�iselGeli�im[i];
                    Ki�iselGeli�im[i] = Ki�iselGeli�im[index];
                    Ki�iselGeli�im[index] = temp;

                }

                for (int i = 0; i < 2; i++) {
                    cout << endl << Ki�iselGeli�im[i] << endl;
                }

                break;

            default:
                cout << "Arad���n�z Kategori Bulunmamaktad�r.\n";
                break;
            }
            break;


        case 'B':
            char dy;
            cout << "\n --Duygu Durumlar�--\n";
            cout << "1 - �fke\n";
            cout << "2 - Korku\n";
            cout << "3 - Mutlu\n";
            cout << "4 - �z�nt�\n";
            cout << "5 - N�tr\n";
            cout << "6 - A�k\n";
            cout << "7 - Depresif\n";
            cout << "8 - �a�k�n\n\n";

            cout << "Se�ti�iniz Duygunun Numaras�n� Giriniz : ";
            cin >> dy;

            switch (dy)
            {
            case '1':

                srand(time(0));

                for (int i = 0; i < 2; i++) {
                    int index = rand() % 10;

                    string temp = �fke[i];
                    �fke[i] = �fke[index];
                    �fke[index] = temp;

                }

                for (int i = 0; i < 2; i++) {
                    cout << endl << �fke[i] << endl;
                }

                break;

            case '2':

                srand(time(0));

                for (int i = 0; i < 2; i++) {
                    int index = rand() % 10;

                    string temp = Korku[i];
                    Korku[i] = Korku[index];
                    Korku[index] = temp;

                }

                for (int i = 0; i < 2; i++) {
                    cout << endl << Korku[i] << endl;
                }


                break;

            case '3':

                srand(time(0));

                for (int i = 0; i < 2; i++) {
                    int index = rand() % 10;

                    string temp = Mutlu[i];
                    Mutlu[i] = Mutlu[index];
                    Mutlu[index] = temp;

                }

                for (int i = 0; i < 2; i++) {
                    cout << endl << Mutlu[i] << endl;
                }

                break;

            case '4':

                srand(time(0));

                for (int i = 0; i < 2; i++) {
                    int index = rand() % 10;

                    string temp = �z�nt�[i];
                    �z�nt�[i] = �z�nt�[index];
                    �z�nt�[index] = temp;

                }

                for (int i = 0; i < 2; i++) {
                    cout << endl << �z�nt�[i] << endl;
                }

                break;

            case '5':

                srand(time(0));

                for (int i = 0; i < 2; i++) {
                    int index = rand() % 10;

                    string temp = N�tr[i];
                    N�tr[i] = N�tr[index];
                    N�tr[index] = temp;

                }

                for (int i = 0; i < 2; i++) {
                    cout << endl << N�tr[i] << endl;
                }

                break;

            case '6':

                srand(time(0));

                for (int i = 0; i < 2; i++) {
                    int index = rand() % 10;

                    string temp = A�k[i];
                    A�k[i] = A�k[index];
                    A�k[index] = temp;

                }

                for (int i = 0; i < 2; i++) {
                    cout << endl << A�k[i] << endl;
                }

                break;

            case '7':

                srand(time(0));

                for (int i = 0; i < 2; i++) {
                    int index = rand() % 10;

                    string temp = Depresif[i];
                    Depresif[i] = Depresif[index];
                    Depresif[index] = temp;

                }

                for (int i = 0; i < 2; i++) {
                    cout << endl << Depresif[i] << endl;
                }

                break;

            case '8':

                srand(time(0));

                for (int i = 0; i < 2; i++) {
                    int index = rand() % 10;

                    string temp = �a�k�n[i];
                    �a�k�n[i] = �a�k�n[index];
                    �a�k�n[index] = temp;

                }

                for (int i = 0; i < 2; i++) {
                    cout << endl << �a�k�n[i] << endl;
                }

                break;

            default:
                cout << "Arad���n�z Duygu Durumu Bulunmamaktad�r.\n";
                break;
            }

            break;
        }

        char f;
        char H;
        char E;

        cout << "\n\n�nerilen Kitaplar� Be�endiniz Mi? (E/H): ";
        cin >> f;

        if (f == 'H' || f == 'h') 
        {
            cout << endl;
            system("CLS");
            continue;
        }
        if (f == 'E' || f == 'e')
        {
            cout << "\nBizi Tercih Etti�iniz ��in Te�ekk�r Ederiz. \n";
            break;
        }

    }



}



