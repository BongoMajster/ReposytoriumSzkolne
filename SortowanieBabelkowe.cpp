
//Sortowanie bąbelkowe
#include <iostream>
void sortowanieBabelkowe(int tablica[], int rozmiar) {
   for (int i = 0; i < rozmiar - 1; ++i) {
       for (int j = 0; j < rozmiar - i - 1; ++j) {
           if (tablica[j] > tablica[j + 1]) {
               std::swap(tablica[j], tablica[j + 1]);
           }
       }
   }
}
int main() {
   const int rozmiar = 10; // Możesz dostosować rozmiar tablicy
   int tablica[rozmiar] = {5, 2, 8, 1, 6, 3, 7, 9, 4, 10};
   std::cout << "Tablica przed sortowaniem bąbelkowym:" << std::endl;
   for (int i = 0; i < rozmiar; ++i) {
       std::cout << tablica[i] << " ";
   }
   std::cout << std::endl;
   sortowanieBabelkowe(tablica, rozmiar);
   std::cout << "Tablica po sortowaniu bąbelkowym:" << std::endl;
   for (int i = 0; i < rozmiar; ++i) {
       std::cout << tablica[i] << " ";
   }
   std::cout << std::endl;
   return 0;
}