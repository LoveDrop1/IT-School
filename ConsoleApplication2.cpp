/*  #include <iostream>
#include <string>
#include <vector>

using namespace std;

class Move {
private:
    int* data;      //raw pointer
public:
    void set_data_value(int d) { *data = d; }
    int get_data_value() { return *data; }
    Move(int d);
   // Move(const Move& source);
    Move(Move&& source) noexcept;
    ~Move();
};

Move::Move(int d) {
    data = new int;
    *data = d;
    cout << "constructor pentru: " << d << endl;
}
/*
//copy constructor
Move::Move(const Move& source)
    :Move(source.data) {
    cout << "copy constructor - deep copy for: " << data << endl;
}


//Move constructor
Move::Move(Move&& source)noexcept
    :data{ source.data } {
    source.data = nullptr;
    cout << "Move constructor -move resource" << data << endl;
}


Move::~Move() {
    if (data != nullptr) {
        cout << "destructor free data for: " << *data << endl;   delete data;
    }
    else {
        cout << "destructor free data for nullpt " << endl;
    }
   
}


//int main()
{
    vector<Move> vec;
    vec.push_back(Move{ 10 });

    vec.push_back(Move{ 20 });
    vec.push_back(Move{ 30 });
    vec.push_back(Move{ 40 });
    vec.push_back(Move{ 50 });
    vec.push_back(Move{ 60 });
    vec.push_back(Move{ 70 });
    vec.push_back(Move{ 80 });
    vec.push_back(Move{ 90 });
    vec.push_back(Move{ 100 });
    vec.push_back(Move{ 1000 });

    return 0;
}

/*
class Move {
private: int* data; //raw pointer 
public: void set_data_value(int d) { *data = d; }
      int get_data_value() { return *data; } 
      Move(int d); 
      Move(const Move& source);
      ~Move(); 
};
Move::Move(const Move& source) { data = *new int; *data = *source.data; } */
/*

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class erou {
private:
    int baseDmg = 11;

public:

    erou () {}  // constructor normal

    //  Constructor de copiere
    erou (const erou& other) {
        baseDmg = other.baseDmg;   
    }

    // Metoda de modificare baseDmg
    void sabie(int dmg) {
        baseDmg = dmg;
    }
    void iatagan(int dmg) {
        baseDmg = dmg;
    }
    void text() const {
        cout << "Base Dmg: " << baseDmg << endl;
    }

};

int main() {

    erou ob;   // Creaza obiectul erou cu  valoarea implicita 15
    int optiune;

    // bucla while pentru a permite selectia optiunii multiple
    while (true) {
        cout << "Alege o optiune : \n - 1 Afiseaza baseDmg \n - 2 Modifica baseDmg \n - 3 Iatagan \n" - 4 Iesi \n;
        cin >> optiune;

        switch (optiune) {
        case 1:
            ob.text();  // Afiseaza valoarea lui baseDmg
            break;

        case 2:
            ob.sabie(60);  // Seteaza valoarea lui baseDmg la 60
            break;

        case 3:
            ob.iatagan(70);
            break;

        case 4:
            cout << "Iesi din program ... \n";
            return 0; // Opreste programul

        default:
            cout << "Optiune invalida\n";
            break;
        }

        // Creaza o copie a obiectului numita sabie
        erou sabie = ob;  // Apeleaza constructorul de copiere
        sabie.text();   // Afiseaza valoarea lui baseDmg pentru sabie
        erou iatagan = ob;
        iatagan.text();
    }
    return 0;
} */


/*
#include <iostream>
#include <string>
#include <vector>

using namespace std;


class film {
private:
    string nume;
    float rating;
    int vizualizari;

public:
    film() { }
     film (const film& data) {
         nume = data.nume;
         rating = data.rating;
         vizualizari = data.vizualizari;
     }
     void ob1(string num, float rat, int viz) {
         nume = num;
         rating = rat;
         vizualizari = viz;
     }
     void ob2(string num, float rat, int viz) {
         nume = num;
         rating = rat;
         vizualizari = viz;
     }
     void ob3(string num, float rat, int viz) {
         nume = num;
         rating = rat;
         vizualizari = viz;
     }
     
    void afis() const {
         cout << "Denumirea filmului este : " << nume << endl;
         cout << "Nota filmului este : " << rating << endl;
         cout << "Numarul de vizualizari : " << vizualizari << endl;
     }

     class colectie {
     public:

       


     };




};


int main() {
    

    film ob1("Heretic", 9.5, 2);
   // film ob2("Elevation", 7.1, 1);
    //film ob3("Next", 8.2, 1);
    film ob2 = ob1;
    film ob3 = ob1;

    ob1.afis();
    ob2.afis();
    ob3.afis();


    return 0;
}
*/
/*
#include <iostream>
#include <string>
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
};

int main() {
    // Inițializare obiecte folosind constructorul parametrizat
    Film ob1("Heretic", 9.5, 2);
    Film ob2("Next", 8.2, 1);
    Film ob3("Elevation", 7.1, 1);

    // Afișarea informațiilor
    ob1.afis();
    ob2.afis();
    ob3.afis();

    return 0;
}
*/

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
