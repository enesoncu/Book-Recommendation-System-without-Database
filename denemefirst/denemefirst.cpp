#include <iostream>
using namespace std;


int main()
{
    setlocale(LC_ALL, "Turkish");


    string Roman[10] = { "Kuyucaklý Yusuf – Sabahattin Ali", "Yeniþehir’de Bir Öðle Vakti – Sevgi Soysal", "Mai ve Siyah – Halid Ziya Uþaklýgil", "Kýskanmak – Nahid Sýrrý Örik", "Cevdet Bey ve Oðullarý – Orhan Pamuk", "Eylül – Mehmet Rauf", "Gece – Bilge Karasu", "Fahim Bey ve Biz – Abdülhak Þinasi Hisar", "47’liler – Füruzan", "Gölgesizler – Hasan Ali Toptaþ" };
    string TürkKlasikleri[10] = { "Sevgili Arsýz Ölüm – Latife Tekin", "Yaban – Yakup Kadri Karaosmanoðlu", "Bir Düðün Gecesi – Adalet Aðaoðlu", "Tehlikeli Oyunlar – Oðuz Atay", "Ölmeye Yatmak – Adalet Aðaoðlu", "Kürk Mantolu Madonna – Sabahattin Ali", "Üç Ýstanbul – Mithat Cemal Kuntay", "Çalýkuþu – Reþat Nuri Güntekin", "Dokuzuncu Hariciye Koðuþu – Peyami Safa", "Devlet Ana – Kemal Tahir" };
    string Polisiye[10] = { "Yer Demir Gök Bakýr – Yaþar Kemal", "Tuhaf Bir Kadýn – Leyla Erbil", "Aðýr Roman – Metin Kaçan", "Orta Direk – Yaþar Kemal", "Fýrat Suyu Kan Akýyor Baksana – Yaþar Kemal", "Ýçimizdeki Þeytan – Sabahattin Ali", "Yalnýzýz – Peyami Safa", "Bin Hüzünlü Haz – Hasan Ali Toptaþ", "Son Adým – Ayhan Geçgin" };
    string Romantik[10] = { "Bir Gün Tek Baþýna – Vedat Türkali", "Hakkari’de Bir Mevsim – Ferit Edgü", "Demirciler Çarþýsý Cinayeti – Yaþar Kemal", "Yorgun Savaþçý – Kemal Tahir", "Yýlanlarýn Öcü – Fakir Baykurt", "Her Gece Bodrum – Selim Ýleri", "Sinekli Bakkal – Halide Edib Adývar", "Sultan Hamid Düþerken – Nahid Sýrrý Örik", "Serenad – Zülfü Livaneli", "Tol – Murat Uyurkulak" };
    string Tarih[10] = { "Nutuk – Mustafa Kemal Atatürk", "Þu Çýlgýn Türkler – Turgut Özakman", "Semerkant – Amin Maalouf", "Katre - i Matem – Ýskender Pala", "Veda – Ayþe Kulin", "Osmancýk – Tarýk Buðra", "Fedailerin Kalesi Alamut – Vladimir Bartol", "Devlet - i Aliyye – Halil Ýnalcýk", "Sarý Zeybek – Can Dündar", "Þah ve Sultan – Ýskender Pala" };
    string Bilim[10] = { "Zamanýn Kýsa Tarihi – Stephen Hawking", "Ceviz Kabuðundaki Evren– Stephen Hawking", "Kara Delikler– Stephen Hawking", "Büyük Tasarým– Stephen Hawking", "Zaman Makinesi – H.G.Wells", "Mars Yýllýklarý – Ray Bradbury", "Mülksüzler – Ursula K.Le Guin", "Ýnsan Vücudunun Öyküsü – Daniel E.Lieberman", "Tüfek, Mikrop ve Çelik – Jared Diamond", "Kozmos - Carl Sagan" };
    string Felsefe[10] = { "Sofie’nin Dünyasý – Jostein Gaarder", "Bir Çift Yürek – Marlo Morgan", "Beyaz Zambaklar Ülkesinde – Grigory Petrov", "Sýr – Rhonda Byrne", "Yabancý – Albert Camus", "Devlet – Platon", "Bulantý – Jean - Paul Sartre", "Bu Ülke – Cemil Meriç", "Ütopya – Thomas More", "Gösteri Peygamberi – Chuck Palahniuk" };
    string Biyografi[10] = { "Latife Haným – Ýpek Çalýþlar", "Halide Edib – Ýpek Çalýþlar", "Steve Jobs – Walter Isaacson", "Anne Frank'ýn Hatýra Defteri – Anne Frank", "Einstein(Yaþamý ve Evreni) – Walter Isaacson", "Benim Adým Messi – Michael Part", "Kýzým Amy – Mitch Winehouse", "Enver – Murat Bardakçý", "Türkan – Ayþe Kulin", "Dar Aðacýnda Üç Fidan – Nihat Behram" };
    string KiþiselGeliþim[10] = { "Bütün Beyinli Çocuk - Daniel J.Siegel", "Küçük Aðaç'ýn Eðitimi - Forrest Carter", "Beni Ödülle Cezalandýrma - Dr.Özgür Bolat", "Yetiþin Çocuklar - Prof.Dr.Selçuk Þirin", "Çocuðunuza Sýnýr Koyma - Robert J.Mackenzie", "Oyuncu Anne - Þermin Çarkacý", "Çocuðunu Doðru Besle - Dr.Ender Saraç", "Üstün Zekalý Çocuða Yardým - Jeanne Siaud - Facchin", "Açýlýn Ben Anneyim - Jill Smokler", "Etkili Anne Baba Eðitimi - Dr.Thomas Gordon" };
    string Öfke[10] = { "Ayaþlý ve Kiracýlarý – Memduh Þevket Esendal", "Müþâhedat – Ahmet Midhat Efendi", "Kinyas ile Kayra – Hakan Günday", "Berci Kristin Çöp Masallarý – Latife Tekin", "Denizin Çaðýrýþý – Kemal Bilbaþar", "Kýrýk Hayatlar – Halit Ziya Uþaklýgil", "Kurt Kanunu – Kemal Tahir", "Medarý Maiþet Motoru – Sait Faik Abasýyanýk", "Odalarda – Erdal Öz", "Yeþil Gece – Reþat Nuri Güntekin" };
    string Korku[10] = { "Bir Solgun Adam – Selçuk Baran", "Kurtlar Sofrasý – Attilâ Ýlhan", "Bir Deliler Evinin Yalan Yanlýþ Anlatýlan Kýsa Tarihi – Ayfer Tunç", "Buzul Çaðýnýn Virüsü – Vüs’at O.Bener", "Esir Þehrin Ýnsanlarý – Kemal Tahir", "Gurbet Kuþlarý – Orhan Kemal", "Ýstanbul Hatýrasý – Ahmet Ümit", "Mel’un – Selim Ýleri", "Rahmet Yollarý Kesti – Kemal Tahir", "Bir Kadýnýn Penceresinden – Oktay Rifat" };
    string Mutlu[10] = { "Uzun Sürmüþ Bir Günün Akþamý – Bilge Karasu", "Heba – Hasan Ali Toptaþ", "Masumiyet Müzesi – Orhan Pamuk", "Yaþamak Güzel Þey Be Kardeþim – Nâzým Hikmet", "Çamlýca’daki Eniþtemiz – Abdülhak Þinasi Hisar", "Çocukluðun Soðuk Geceleri – Tezer Özlü", "Kayýp Aranýyor – Sait Faik Abasýyanýk", "Kiralýk Konak – Yakup Kadri Karaosmanoðlu", "Eski Hastalýk – Reþat Nuri Güntekin", "Mutluluk – Zülfü Livaneli" };
    string Üzüntü[10] = { "Þimdiki Çocuklar Harika – Aziz Nesin", "Boðazkesen – Nedim Gürsel", "Karartma Geceleri – Rýfat Ilgaz", "Matmazel Noraliya’nýn Koltuðu – Peyami Safa", "Sahnenin Dýþýndakiler – Ahmet Hamdi Tanpýnar", "Yaralýsýn – Erdal Öz", "Yeþilçam Dedikleri Türkiye – Vedat Türkali", "Ankara – Yakup Kadri Karaosmanoðlu", "Araba Sevdasý – Recaizade Mahmut Ekrem", "Ateþ Gecesi – Reþat Nuri Güntekin" };
    string Nötr[10] = { "Çýlgýn Gibi – Suat Derviþ", "Göçmüþ Kediler Bahçesi – Bilge Karasu", "Handan – Halide Edib Adývar", "Mahur Beste – Ahmet Hamdi Tanpýnar", "Þu Çýlgýn Türkler – Turgut Özakman", "Tütün Zamaný – Necati Cumalý", "Veda – Ayþe Kulin", "Viski – Çetin Altan", "Yalan – Tahsin Yücel", "Yaralýsýn – Erdal Öz" };
    string Aþk[10] = { "Sevgili Arsýz Ölüm – Latife Tekin", "Yaban – Yakup Kadri Karaosmanoðlu", "Bir Düðün Gecesi – Adalet Aðaoðlu", "Tehlikeli Oyunlar – Oðuz Atay", "Ölmeye Yatmak – Adalet Aðaoðlu", "Kürk Mantolu Madonna – Sabahattin Ali", "Üç Ýstanbul – Mithat Cemal Kuntay", "Çalýkuþu – Reþat Nuri Güntekin", "Dokuzuncu Hariciye Koðuþu – Peyami Safa", "Devlet Ana – Kemal Tahir" };
    string Depresif[10] = { "Ýnce Memed – Yaþar Kemal", "Tutunamayanlar – Oðuz Atay", "Saatleri Ayarlama Enstitüsü – Ahmet Hamdi Tanpýnar", "Huzur – Ahmet Hamdi Tanpýnar", "Kara Kitap – Orhan Pamuk", "Bereketli Topraklar Üzerinde – Orhan Kemal", "Aylak Adam – Yusuf Atýlgan", "Aþk - ý Memnu – Halit Ziya Uþaklýgil", "Benim Adým Kýrmýzý – Orhan Pamuk", "Puslu Kýtalar Atlasý – Ýhsan Oktay Anar" };
    string Þaþkýn[10] = { "Bir Gün Tek Baþýna – Vedat Türkali", "Hakkari’de Bir Mevsim – Ferit Edgü", "Ýnce Memed – Yaþar Kemal", "Tutunamayanlar – Oðuz Atay", "Saatleri Ayarlama Enstitüsü – Ahmet Hamdi Tanpýnar", "Huzur – Ahmet Hamdi Tanpýnar", "Kara Kitap – Orhan Pamuk", "Bereketli Topraklar Üzerinde – Orhan Kemal", "Aylak Adam – Yusuf Atýlgan", "Aþk - ý Memnu – Halit Ziya Uþaklýgil" };


    char A;
    char B;
    char m;

    cout << "        *HOÞGELDÝNÝZ*\n\n";
    cout << "--Kitap Öneri Yöntemini Seçiniz--\n";
    cout << "A- Kategoriye Göre\n";
    cout << "B- Duygu Durumuna Göre\n\n";

    cout <<"Seçilen Yöntem: ";
    cin >> m;

    while(true)
    {
        switch (m)
        {
        case 'A':
            char ch;
            cout << "\n --Kitap Kategorileri--\n";
            cout << "1 - Roman\n";
            cout << "2 - Türk Klasikleri\n";
            cout << "3 - Polisiye\n";
            cout << "4 - Romantik\n";
            cout << "5 - Tarih\n";
            cout << "6 - Bilim\n";
            cout << "7 - Felsefe\n";
            cout << "8 - Biyografi\n";
            cout << "9 - Kiþisel Geliþim\n\n";

            cout << "Seçtiðiniz Kategorinin Numarasýný Giriniz : ";
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

                    string temp = TürkKlasikleri[i];
                    TürkKlasikleri[i] = TürkKlasikleri[index];
                    TürkKlasikleri[index] = temp;

                }

                for (int i = 0; i < 2; i++) {
                    cout << endl << TürkKlasikleri[i] << endl;
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

                    string temp = KiþiselGeliþim[i];
                    KiþiselGeliþim[i] = KiþiselGeliþim[index];
                    KiþiselGeliþim[index] = temp;

                }

                for (int i = 0; i < 2; i++) {
                    cout << endl << KiþiselGeliþim[i] << endl;
                }

                break;

            default:
                cout << "Aradýðýnýz Kategori Bulunmamaktadýr.\n";
                break;
            }
            break;


        case 'B':
            char dy;
            cout << "\n --Duygu Durumlarý--\n";
            cout << "1 - Öfke\n";
            cout << "2 - Korku\n";
            cout << "3 - Mutlu\n";
            cout << "4 - Üzüntü\n";
            cout << "5 - Nötr\n";
            cout << "6 - Aþk\n";
            cout << "7 - Depresif\n";
            cout << "8 - Þaþkýn\n\n";

            cout << "Seçtiðiniz Duygunun Numarasýný Giriniz : ";
            cin >> dy;

            switch (dy)
            {
            case '1':

                srand(time(0));

                for (int i = 0; i < 2; i++) {
                    int index = rand() % 10;

                    string temp = Öfke[i];
                    Öfke[i] = Öfke[index];
                    Öfke[index] = temp;

                }

                for (int i = 0; i < 2; i++) {
                    cout << endl << Öfke[i] << endl;
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

                    string temp = Üzüntü[i];
                    Üzüntü[i] = Üzüntü[index];
                    Üzüntü[index] = temp;

                }

                for (int i = 0; i < 2; i++) {
                    cout << endl << Üzüntü[i] << endl;
                }

                break;

            case '5':

                srand(time(0));

                for (int i = 0; i < 2; i++) {
                    int index = rand() % 10;

                    string temp = Nötr[i];
                    Nötr[i] = Nötr[index];
                    Nötr[index] = temp;

                }

                for (int i = 0; i < 2; i++) {
                    cout << endl << Nötr[i] << endl;
                }

                break;

            case '6':

                srand(time(0));

                for (int i = 0; i < 2; i++) {
                    int index = rand() % 10;

                    string temp = Aþk[i];
                    Aþk[i] = Aþk[index];
                    Aþk[index] = temp;

                }

                for (int i = 0; i < 2; i++) {
                    cout << endl << Aþk[i] << endl;
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

                    string temp = Þaþkýn[i];
                    Þaþkýn[i] = Þaþkýn[index];
                    Þaþkýn[index] = temp;

                }

                for (int i = 0; i < 2; i++) {
                    cout << endl << Þaþkýn[i] << endl;
                }

                break;

            default:
                cout << "Aradýðýnýz Duygu Durumu Bulunmamaktadýr.\n";
                break;
            }

            break;
        }

        char f;
        char H;
        char E;

        cout << "\n\nÖnerilen Kitaplarý Beðendiniz Mi? (E/H): ";
        cin >> f;

        if (f == 'H' || f == 'h') 
        {
            cout << endl;
            system("CLS");
            continue;
        }
        if (f == 'E' || f == 'e')
        {
            cout << "\nBizi Tercih Ettiðiniz Ýçin Teþekkür Ederiz. \n";
            break;
        }

    }



}



