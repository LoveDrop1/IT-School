#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Film {
private:
    string nume;
    float rating;
    int vizualizari;

public:
    // Constructor default
    Film() : nume(""), rating(0.0), vizualizari(0) {}

    // Constructor parametrizat
    Film(string num, float rat, int viz)
        : nume(num), rating(rat), vizualizari(viz) {
    }

    // Constructor de copiere
    Film(const Film& data)
        : nume(data.nume), rating(data.rating), vizualizari(data.vizualizari) {
    }

    // Metodă pentru afișare
    void afis() const {
        cout << "Denumirea filmului este: " << nume << endl;
        cout << "Nota filmului este: " << rating << endl;
        cout << "Numarul de vizualizari: " << vizualizari << endl;
        cout << "---------------------------" << endl;
    }

    // Metodă pentru obținerea numărului de vizualizări
    int getVizualizari() const {
        return vizualizari;
    }

    // Metodă pentru obținerea numelui filmului
    string getNume() const {
        return nume;
    }
};

// Clasa Continut care gestionează o colecție de filme
class Continut {
private:
    vector<Film> filme;

public:
    // Adaugă un film în colecție
    void adaugaFilm(const Film& film) {
        filme.push_back(film);
    }

    // Afișează numărul de vizualizări pentru fiecare film
    void afisVizualizari() const {
        cout << "Numarul de vizualizari pentru fiecare film:" << endl;
        for (const auto& film : filme) {
            cout << "Film: " << film.getNume()
                << " - Vizualizari: " << film.getVizualizari() << endl;
        }
        cout << "---------------------------" << endl;
    }
};

int main() {
    // Inițializare filme
    Film ob1("Heretic", 9.5, 2);
    Film ob2("Next", 8.2, 1);
    Film ob3("Elevation", 7.1, 1);
    Film ob4("Edduard Omul Foarfeca", 9.5, 5);

    // Creare obiect Continut și adăugare filme
    Continut continut;
    continut.adaugaFilm(ob1);
    continut.adaugaFilm(ob2);
    continut.adaugaFilm(ob3);
    continut.adaugaFilm(ob4);

    // Afișare informații filme
    ob1.afis();
    ob2.afis();
    ob3.afis();
    ob4.afis();
    // Afișare număr vizualizări
    continut.afisVizualizari();

    return 0;
}
