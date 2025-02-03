

#include <iostream>
#include <vector>
#include <string>
#include <cmath>

using namespace std;

   /*Folosind clasa friend implementati o aplicatie in care sa aveti calculati volumul unei cutii:
-clasa cutie sa contina initializarea constructorului si metoda de afisare a dimensiunilor cutiei
-clasa freind o sa contina metoda caluleaza volum si afisaza volumul si metoda care modifica dimensiunea cutiei
- in main cream obictuel cutiamica calculam volumul si modificam cutiei si afisam dimensiunile
*/

void f1() {
    class Friend {
    private:

    protected:
        int lung;
        int lat;
        int inal;
    public:

        Friend(int lu, int la, int in) : lung(lu), lat(la), inal(in) { std::cout << "constructor Friend apelat" << std::endl; }

        void vol() {
            std::cout << "volumul este: " << calcul() << endl;
        }

        int calcul() {
            int volum = lung * lat * inal;
            return volum;
        }
       
    };

    class Cutie : public Friend {
    public:

        Cutie(int lu, int la, int in) : Friend(lu, la, in) {
            std::cout << "constructor Cutie apelat" << std::endl;
        }
       
        void afis() {
            std::cout << "Lungime: " << lung << " \nLatime: " << " " << lat << " \nInaltime: " << inal << " " << std::endl;
        }
    };
    Cutie cutiamica(10, 10, 10);
    cutiamica.afis();
    cutiamica.vol();
}

/*Implementati clasa “persoana” care contine metoda de afisare a varstei si numelui, clasa child 
“angajat” ne spune ce functie ocupa angajatul, si metoda care afisaza numele jobului.
*/

void f2() { 

    class Persoana {
    protected:
        string nume;
        int varsta;
    public:

        Persoana(string n, int v) : nume(n), varsta(v) { std::cout << "constructor baza" << std::endl; }

        void afis() {
            std::cout << "numele angajatului : " << nume << "\nvarsta angajatului : " << varsta << std::endl;
        }
    };
        class Angajat : public Persoana {
        protected:
            string post;

        public:

            Angajat (string n, int v, string p) : Persoana (n, v), post(p) {}

            void functia() {  
                std::cout << "Functia angajatului : " << post << std::endl;
            }
        };


    

    Angajat firma("Popescu Ion", 32, "Profesor");
    firma.afis();
    firma.functia();

}

int main () {

    std::cout << " Meniu : " << endl;
std::cout << " 1 pentru ex. 1." << endl;
std::cout << " 2 pentru ex. 2." << endl;

int q;
std::cin >> q;

switch (q) {

case 1:
    f1();
    break;
case 2:
    f2();
    break;

default: { std::cout << "Alegere invalida!" << std::endl; }
}

    return 0;
}
