#include <iostream>
#include <iomanip>
//int multiplier(int x, int y) {
   // return x * y;
//
//int main() {
    //int a, b;

    //std::cout << "Entrez une valeur :" << std::endl;
    //std::cin >> a;

   // std::cout << "Entrez une autre valeur :" << std::endl;
   // std::cin >> b;

   // std::cout <<"Resultat : "<< multiplier(a, b) << std::endl;

   // return 0;
//}
//(b)

//consteval int multiplier(int x, int y) {
    //return x * y;
//}

//int main() {
   // constexpr int a = 3;
   // constexpr int b = 4;

    // Utilisation de la fonction consteval
   // std::cout << "Resultat : " << multiplier(a, b) << std::endl;

   // return 0;
//}

//----------------------------------EXO 2------------------------------//
 //in//t table(int a) {
   // for (int iter_total = 0; iter_total <= 10; iter_total++) {
   //     int ret = a * iter_total;
  // //     std::cout << ret << "\n" << std::endl;
 //   }
 // 
 //   return 0;
// }
//int main(void) {
//    int a, tmp;
//    std::cout << "Entrez le chiffre : " << std::endl;
// //   std :: cin >> a;
 //   std::cout << table(a) << std::endl;
//}
int table(int a) {
    for (int iter_total = 0; iter_total <= 10; iter_total++) {
        int ret = a * iter_total;
        std::cout << std::left << std::setw(5) << ret; 
    }
    std::cout << std::right;
    return 0;
 }
int main(void) {
    int a, tmp;
    std::cout << "Entrez le chiffre : " << std::endl;
    std :: cin >> a;
    table(a);
}
//-------------------------EXO 3-----------------------//