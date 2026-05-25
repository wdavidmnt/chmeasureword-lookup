#ifdef _WIN32
#include <windows.h>
#endif

#include <iostream>
#include <string>
#include "dictionary.h"

int main() {

    #ifdef _WIN32
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);
    system("chcp 65001 > nul");
    #endif

    // Pas 1 — pick interface language
    int interface_choice;
    std::cout << "Select language / Selectati limba:\n";
    std::cout << "1. Romana\n";
    std::cout << "2. English\n";
    std::cout << "\nEnter / Introduceti: ";
    std::cin >> interface_choice;

    // Validate interface choice
    if (interface_choice != 1 && interface_choice != 2) {
        std::cout << "Invalid choice. Defaulting to English.\n";
        interface_choice = 2;
    }

    // Pas 2 — load messages in chosen language
    Language lang = loadLanguage(interface_choice);

    // Pas 3 — show title
    std::cout << "\n" << lang.title << "\n";

    // Pas 4 — pick Chinese variety
    int chinese_choice;
    std::cout << lang.select_chinese;
    std::cout << lang.option_mandarin;
    std::cout << lang.option_cantonese;
    std::cout << lang.option_hokkien;
    std::cout << lang.option_all;
    std::cout << lang.enter_choice;
    std::cin >> chinese_choice;

    // Validate Chinese choice
    if (chinese_choice < 1 || chinese_choice > 4) {
        std::cout << lang.invalid_choice;
        chinese_choice = 4;
    }

    // Pasul 5 — load dictionary
    std::map<std::string, Entry> dict = loadDictionary();

    // Pasul 6 — show all available categories
    showCategories(dict, lang, interface_choice);

    // Pasul 7 — main loop
    std::string input;
    while (true) {
        std::cout << lang.enter_category;
        std::cin >> input;

        if (input == "quit" || input == "iesire") {
            std::cout << lang.goodbye;
            break;
        }

        lookupCategory(dict, input, chinese_choice,
                       lang, interface_choice);
    }

    return 0;
}

