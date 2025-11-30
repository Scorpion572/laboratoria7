#include <iostream>
#include <string>
using namespace std;

int fibonachi(int x);
int fibonachi_iteracyjnie(int liczba);
void choinka(int wysokosc,int szerokosc);
int potegowanie_iteracyjnie(int podstawa, int wykladnik);
int potegowanie_rekurencyjne(int podstawa, int wykladnik);
int main()
{

   /* int x;                                                  //zadanie 1.
    cout << "podaj wysokosc choinki" << endl;
    cin >> x;
	choinka(x,1);
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
	int liczba = 0;                                       //zadanie 8.i
    cout << "podaj liczbe której silnie chcessz uzyskac" << endl;
    
    
    return 0;


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
        for (int i=0; i < wykladnik; i++) {
			return podstawa * potegowanie_rekurencyjne(podstawa, wykladnik - 1);
       }
    }
}