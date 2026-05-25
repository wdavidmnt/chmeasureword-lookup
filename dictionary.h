#ifndef DICTIONARY_H
#define DICTIONARY_H
// Rolul liniilor de mai sus (#ifndef și #define): Sunt numite "header guards" (gărzi de incluziune).
// Ele se asigură că acest fișier ("dictionary.h") nu este inclus de mai multe ori în același proiect,
// prevenind astfel erorile de redefinire la compilare.
#include <string>
#include <map>
#include <vector>

/// Această secțiune stochează toate datele pentru o categorie de clasificatori.
struct Entry{
    // Rolul structurii 'Entry': Grupează sub un singur nume toate informațiile specifice unei categorii
    // (de exemplu: numele categoriei, clasificatorii în cele 3 limbi, exemplele și listele de substantive).
 std::string name_english;
 std::string name_romanian;
 std::string measureword_mandarin;
 std::string measureword_cantonese;
 std::string measureword_hokkien;
 std::string example_mandarin;
 std::string example_cantonese;
 std::string example_hokkien;
 std::string example_english;
 std::string example_romanian;
 std::vector<std::string>nouns_english;
 std::vector<std::string>nouns_romanian;
};
//struct este precum o structura
///Stocheaza toate mesajele interfetei
struct Language{
    std::string title;
    std::string select_chinese;
    std::string option_mandarin;
    std::string option_cantonese;
    std::string option_hokkien;
    std::string option_all;
    std::string enter_choice;
    std::string available_categories;
    std::string enter_category;
    std::string not_found;
    std::string goodbye;
    std::string mandarin_label;
    std::string cantonese_label;
    std::string hokkien_label;
    std::string translation_label;
    std::string invalid_choice;
    std::string nouns_label;
    std::string category_label;
};


std::map<std::string, Entry> loadDictionary();
//Ce face: Încarcă baza de date cu clasificatori
//Output: Un std::map (un dicționar în C++), unde cheia este un text (numele categoriei, ex: "books") iar valoarea este structura Entry cu toate detaliile acelei categorii.
Language loadLanguage(int choice);
//Ce face: Încarcă textele interfeței în funcție de limba dorită de utilizator.
//Parametru: int choice (de exemplu: 1 pentru Română, 2 pentru Engleză).
//Output: O structură Language populată cu mesajele în limba selectată.
void showCategories(const std::map<std::string, Entry>& dict,
                    const Language& lang,
                    int interface_choice);
//Ce face: Afișează pe ecran lista cu toate categoriile disponibile în dicționar.
///void: Înseamnă că funcția nu returnează nimic, doar printează text pe ecran.
///Parametri: Primește dicționarul de clasificatori (dict), textele interfeței (lang) și opțiunea de limbă a utilizatorului (interface_choice). Cuvântul const și semnul & (referință) sunt folosite pentru eficiență, ca programul să nu copieze degeaba datele în memorie.
void lookupCategory(const std::map<std::string, Entry>& dict,
                    //Ce face: Funcția de căutare. Când utilizatorul tastează o categorie (ex: "animals"), această funcție caută în dicționar și afișează clasificatorii și exemplele corespunzătoare.

//Parametri:
 //   dict și lang (baza de date și textele interfeței).
 //   input: Ce a tastat utilizatorul.
//   chinese_choice: Filtrează afișarea (dacă utilizatorul vrea să vadă doar Cantoneza, doar Mandarina, sau toate cele 3 limbi chineze).
                    const std::string& input,
                    int chinese_choice,
                    const Language& lang,
                    int interface_choice);

#endif
