#include <iostream>
#include <cstdlib>
#include <ctime>
void wypelnijTab(int tablica[], int rozmiar) {
   srand(time(NULL));
   for (int i = 0; i < rozmiar; ++i) {
       tablica[i] = rand() % 100;
   }
}
void drukujTab(int tablica[], int rozmiar) {
   for (int i = 0; i < rozmiar; ++i) {
       std::cout << tablica[i] << " ";
   }
   std::cout << std::endl;
}
void sortowanieBabelkowe(int tablica[], int rozmiar) {
   for (int i = 0; i < rozmiar - 1; ++i) {
       for (int j = 0; j < rozmiar - i - 1; ++j) {
           if (tablica[j] > tablica[j + 1]) {
               std::swap(tablica[j], tablica[j + 1]);
           }
       }
   }
}
void merge(int tablica[], int poczatek, int srodek, int koniec) {
   int i, j, k;
   int n1 = srodek - poczatek + 1;
   int n2 = koniec - srodek;
   int* lewa = new int[n1];
   int* prawa = new int[n2];
   for (i = 0; i < n1; i++)
       lewa[i] = tablica[poczatek + i];
   for (j = 0; j < n2; j++)
       prawa[j] = tablica[srodek + 1 + j];
   i = 0;
   j = 0;
   k = poczatek;
   while (i < n1 && j < n2) {
       if (lewa[i] <= prawa[j]) {
           tablica[k] = lewa[i];
           i++;
       }
       else {
           tablica[k] = prawa[j];
           j++;
       }
       k++;
   }
   while (i < n1) {
       tablica[k] = lewa[i];
       i++;
       k++;
   }
   while (j < n2) {
       tablica[k] = prawa[j];
       j++;
       k++;
   }
   delete[] lewa;
   delete[] prawa;
}
void sortowaniePrzezScalanie(int tablica[], int poczatek, int koniec) {
   if (poczatek < koniec) {
       int srodek = poczatek + (koniec - poczatek) / 2;
       sortowaniePrzezScalanie(tablica, poczatek, srodek);
       sortowaniePrzezScalanie(tablica, srodek + 1, koniec);
       merge(tablica, poczatek, srodek, koniec);
   }
}
int main() {
   const int rozmiar = 10; 
   int tablica[rozmiar];
   wypelnijTab(tablica, rozmiar);
   std::cout << "Tablica przed sortowaniem bąbelkowym:" << std::endl;
   drukujTab(tablica, rozmiar);
   sortowanieBabelkowe(tablica, rozmiar);
   std::cout << "Tablica po sortowaniu bąbelkowym:" << std::endl;
   drukujTab(tablica, rozmiar);
   wypelnijTab(tablica, rozmiar);
   std::cout << "Tablica przed sortowaniem przez scalanie:" << std::endl;
   drukujTab(tablica, rozmiar);
   sortowaniePrzezScalanie(tablica, 0, rozmiar - 1);
   std::cout << "Tablica po sortowaniu przez scalanie:" << std::endl;
   drukujTab(tablica, rozmiar);
   return 0;
}