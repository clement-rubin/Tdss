#include <stdlib.h>
#include <math.h>
#include <stdio.h>

#define _USE_MATH_DEFINES
#include <math.h>
//int main() {

	//printf("Hello Word");
	//return EXIT_SUCCESS;
//}
/*-------------------------------------------------------------EXO 2--------------------------------------*/

//void polynome(int a, int b, int c) {
//    float x1, x2;
//    float del;
//
//    del = b * b - 4 * a * c; 
//
//    if (del > 0) {
//        x1 = (-b - sqrt(del)) / (2 * a); 
//        x2 = (-b + sqrt(del)) / (2 * a);  
//        printf("x1 = %f et x2 = %f\n", x1, x2);  
//    }
//    else if (del == 0) {
//        x1 = -b / (2 * a); 
//        printf("x1 = %f\n", x1);  
//    }
//    else {
//        printf("Erreur : pas de solution réelle.\n");
//    }
//}
//
//int main() {
//    int a, b, c;
//    printf("Entrez 3 entiers : ");
//    scanf("%d %d %d", &a, &b, &c);
//    polynome(a, b, c);  
//    return 0;
//}
/*---------------------------------------------------------------EXO 3-----------------------------------------------------*/
//char cartoCAR(char car) {
	//if (car>= 'A' && car <= 'Z') {
		//car = car + 'a' - 'A'; // Convertit en minuscule
	//}
	// Convertir minuscules en majuscules
	//else if (car >= 'a' && car <= 'z') {
		//car = car + 'A' - 'a'; // Convertit en majuscule
	//}
	//return car;
//}

//int main() {
	//char car, ret;
	// Demande à l'utilisateur de rentrer un caractère
	//printf("Caractere a convertir : ");
	//scanf("%c", &car); // Lire un seul caractère avec %c

	// Appeler la fonction de conversion
	//ret = cartoCAR(car);

	// Afficher le caractère converti
	//printf("Le caractere converti est : %c\n", ret);
//
	//return 0;
//}
/*---------------------------------------------------------------------EXO 4---------------------------------------------------------*/
#include <stdio.h>

//int main()
//{
	//int nbr, i, f = 1;

	//printf("Entrez un nombre pour calculer sa factorielle\n");
//	scanf("%d", &nbr);

	//for (i = 1; i <= nbr; i++)
		//f = f * i;

	//printf("Factorielle de %d = %d\n", nbr, f);

	//return 0;
//}
// Avec la boucle while
//int main() {
	//int nbr;
	//int i =1;
	//i//nt f = 1;
	//printf("Entrez un nombre pour calculer sa factorielle\n");
    //scanf("%d", &nbr);
	//while (i <= nbr) {
		//f = f * i;
		//i++;
	//}

	//printf("Factorielle de %d = %d\n", nbr, f);

	//return 0;
//}
// En recursif 

//int factorial(int x)
//{
	// (x < 1)
	//	return 1;
	//else
//		return (x * factorial(x - 1));
//}
//int main() {
	//int nombre;
	//long fact;
	//
	//printf("Entrez un nombre pour calculer sa factorielle\n");
	//scanf("%d", &nombre);
	//
	//if (nombre <= 0) {
	//	printf("calcul de la factorielle impossible");
	//}
	//
	//{
	//	fact = factorial(nombre);
	//	printf("la factorielle est %ld", fact);
	//}
//
//}
//---------------------------------------------------EXO 5--------------------------------------------*/

int main() {
	int essais;
	char mot[10];
	char lettre;
	bool find = false;
	int i;
	printf("rentre le mot a faire deviner");
	scanf("%s", &mot);
	printf("Merci de rentrer une lettre");
	scanf("%c", &lettre);
	for (i = 0; i < sizeof(mot); i++) {
		if (lettre == mot[i]) {
			printf("Bravo! %c", mot);
			mot[i] =
				lettre++;

		}
	}
}

