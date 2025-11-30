#include <iostream>
#include <string>
#include <vector>
using namespace std;
int sumacyfry_iteracyjnie(string cyfra);
int sumacyfry_rekurencyjnie(string cyfra);
int fibonachi(int x);
int fibonachi_iteracyjnie(int liczba);
void choinka(int wysokosc,int szerokosc);
int potegowanie_iteracyjnie(int podstawa, int wykladnik);
int potegowanie_rekurencyjne(int podstawa, int wykladnik);
int silnia_iteracyjnie(int liczba);
int silnia_rekurencyjnie(int liczba);
int suma_n_liczb_iteracyjnie(int liczba);
int suma_n_liczb_rekurencyjnie(int liczba);
int  algorytm_euklidesa(int a, int b);
int NWD_iteracyjnie(int a, int b);
int najwieksza_wartosc_iteracyjnie(vector<int> tablica, int rozmiar);
int najwieksza_wartosc_rekurencyjnie(vector<int> tablica, int rozmiar);
int main()
{

    /* int x;                                                  //zadanie 1.
     cout << "podaj wysokosc choinki" << endl;
     cin >> x;
     choinka(x,1);
    */

    /*string cyfra;                                                  //zadanie 2.i
    cout << "podaj cyfre" << endl;
    cin >> cyfra;
    cout << "suma cyfr wynosi " << sumacyfry_iteracyjnie(cyfra) << endl;
    */
    /*string cyfra;                                                 //zadanie 2.r
    cout << "podaj cyfre" << endl;
    cin >> cyfra;
    cout << "suma cyfr wynosi " << sumacyfry_rekurencyjnie(cyfra) << endl;
    return 0;
    */
   /* int rozmiar;                                               //zadanie 5.
    cout << "podaj rozmiar tablicy " << endl;
    cin >> rozmiar;
    vector<int> tablica(rozmiar);
    for (int i = 0; i < rozmiar; i++) {
        cout << "podaj " << i + 1 << " element tablicy " << endl;
		cin >> tablica[i];
    }
	cout << "najwieksza wartosc w tablicy to " << najwieksza_wartosc_iteracyjnie(tablica, rozmiar) << endl;
	cout << "najwieksza wartosc w tablicy to " << najwieksza_wartosc_rekurencyjnie(tablica, rozmiar) << endl;
    */
        /*
        int liczba = 0;                                         //zadanie 6.r
        cout << "podaj liczbe " << endl;
        cin >> liczba;
        cout << liczba << " liczba fibonachiago jest rowna " << fibonachi(liczba) << endl;
        */
        /*int liczba = 0;                                       //zadanie6.i
        cout << "podaj ktora liczbe ciagu fibonachiego chcesz obliczyc " << endl;
        cin >> liczba;*/
        /*int podstawa = 0, wykladnik = 0;                                                            //zadanie 7.i
        cout << " podaj podstawe i wykladnik potegi (tylko liczby naturalne)" << endl;
        cin >> podstawa;
        cin >> wykladnik;
        cout << "Wynik " << podstawa << "  podnisione do potegi " << wykladnik << " = " << potegowanie_iteracyjnie(podstawa, wykladnik) << endl;
        */
        /*int podstawa = 0, wykladnik = 0;                                                            //zadanie 7.r
        cout << " podaj podstawe i wykladnik potegi (tylko liczby naturalne)" << endl;
        cin >> podstawa;
        cin >> wykladnik;
        cout << "Wynik " << podstawa << "  podnisione do potegi " << wykladnik << " = " << potegowanie_rekurencyjne(podstawa, wykladnik) << endl;
       */
       /*int liczba = 0;                                       //zadanie 8.i
       cout << "podaj liczbe ktorej silnie chcessz uzyskac" << endl;
       cin >> liczba;
       cout  << liczba << "! wynosi " << silnia_iteracyjnie(liczba) << endl;
       */
       /* int liczba = 0;                                       //zadanie 8.r
        cout << "podaj liczbe ktorej silnie chcessz uzyskac" << endl;
        cin >> liczba;
        cout << liczba << "! wynosi " << silnia_rekurencyjnie(liczba) << endl;
        */
        /*int liczba = 0;                                       //zadanie 9.i
        cout << "podaj liczbe do ktorej chcesz obliczyc sume n liczb" << endl;
        cin >> liczba;
        cout << "suma n liczb wynosi " << suma_n_liczb_iteracyjnie(liczba) << endl;
        */
        /*int liczba = 0;                                       //zadanie 9.r
        cout << "podaj liczbe do ktorej chcesz obliczyc sume n liczb" << endl;
        cin >> liczba;
        cout << "suma n liczb wynosi " << suma_n_liczb_rekurencyjnie(liczba) << endl;
        */



        /*int liczba1, liczba2;                                       //zadanie 10.r
        cout << "podaj dwie liczby calkowite dodatnie" << endl;
        cin >> liczba1 >> liczba2;
        cout << algorytm_euklidesa(liczba1, liczba2) << endl;
        */
        /*int liczba1, liczba2;                                       //zadanie 10.i
        cout << "podaj dwie liczby calkowite dodatnie" << endl;
        cin >> liczba1 >> liczba2;
        cout << NWD_iteracyjnie(liczba1, liczba2) << endl;
        */

    }

    void choinka(int wysokosc, int szerokosc) {
        if (wysokosc > 0) {
            for (int i = 0; i < wysokosc - 1; i++) {
                cout << " ";
            }
            for (int j = 0; j < szerokosc; j++) {
                cout << "*";
            }
            cout << endl;
            choinka(wysokosc - 1, szerokosc + 2);
        }
    }


int sumacyfry_iteracyjnie(string cyfra){
    int suma = 0;
    for (int i = 0; i < cyfra.length(); i++) {
        suma = suma + cyfra[i]-48;
}
    return suma;
}
int sumacyfry_rekurencyjnie(string cyfra) {
    if (cyfra.length() == 0) {
        return 0;
   }
    else
		return (cyfra[0] - 48) + sumacyfry_rekurencyjnie(cyfra.substr(1));
}

int fibonachi(int x) {
    if (x == 0)
        return 0;
    else if (x == 1)
        return 1;
    else {
       return fibonachi(x - 1) + fibonachi(x - 2);
    }

}
int fibonachi_iteracyjnie(int liczba) {                     //w trakcie
    int wynik=0;
    for (int i = 0; i < liczba;i ++) {
        
    }
    return 0;
}


int potegowanie_iteracyjnie(int podstawa, int wykladnik) {
    int wynik = podstawa;
    if (wykladnik == 0) {
        return 1;
    }
    else {
        for (int i = 1; i < wykladnik; i++) {
            wynik = wynik * podstawa;
        }
        return wynik;
    }
}
int potegowanie_rekurencyjne(int podstawa, int wykladnik) { 
   
    if (wykladnik == 0) {
        return 1;
    }
    else if(wykladnik == 1) {
        return podstawa;
    }
    else {
			return podstawa * potegowanie_rekurencyjne(podstawa, wykladnik - 1);
    }
}

int silnia_iteracyjnie(int liczba) {
    int wynik = 1;
    for (int i = 1; i <= liczba; i++) {
        wynik = wynik * i;
    }
    return wynik;
}
int silnia_rekurencyjnie(int liczba){
    if (liczba == 0) {
        return 1;
    }
    else {
        return liczba * silnia_rekurencyjnie(liczba - 1);
    }
}

int suma_n_liczb_iteracyjnie(int liczba) {
    int suma = 0;
    for (int i = 1; i <= liczba; i++) {
        suma = suma + i;
    }
    return suma;
}
int suma_n_liczb_rekurencyjnie(int liczba){
    if (liczba == 0) {
        return 0;
    }
    else {
		return liczba + suma_n_liczb_rekurencyjnie(liczba - 1);
    }
}


int  algorytm_euklidesa(int a, int b) {
    if (b == 0) {
        return a;
    }
    else {
        return algorytm_euklidesa(b, a % b);
	}
}
int NWD_iteracyjnie(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int najwieksza_wartosc_iteracyjnie(vector<int> tablica, int rozmiar){
    for(int i=0;i<rozmiar;i++){
     if (tablica[i] > tablica[0]) {
        swap(tablica[0], tablica[i]);
	 }
	}
	return tablica[0];
}
int najwieksza_wartosc_rekurencyjnie(vector<int> tablica, int rozmiar) {
    if (rozmiar == 0) {
        return tablica[0];
    }
    else {
		return max(tablica[rozmiar - 1], najwieksza_wartosc_rekurencyjnie(tablica, rozmiar - 1));
    }
}