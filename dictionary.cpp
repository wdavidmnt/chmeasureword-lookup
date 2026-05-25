#include "dictionary.h"
#include <iostream>

std::map<std::string, Entry> loadDictionary() {
    std::map<std::string, Entry> dict;


    dict["general"] = {
        "General / People",
        "General / Oameni",
        "個 (gè)",
        "個 (go3)",
        "個 (ê)",
        "一個人 (yī gè rén)",
        "一個人 (jat1 go3 jan4)",
        "一個人 (tsi̍t ê lâng)",
        "one person",
        "o persoană",
        {"person","student","doctor","friend","apple","ball"},
        {"persoană","student","doctor","prieten","măr","minge"}
    };


    dict["books"] = {
        "Books and bound objects",
        "Cărți și obiecte legate",
        "本 (běn)",
        "本 (bun2)",
        "本 (pún)",
        "一本書 (yī běn shū)",
        "一本書 (yat1 bun2 syu1)",
        "一本冊 (tsi̍t pún tsheh)",
        "one book",
        "o carte",
        {"book","notebook","magazine","dictionary","comic"},
        {"carte","caiet","revistă","dicționar","benzi desenate"}
    };


    dict["animals"] = {
        "Animals and paired objects",
        "Animale și obiecte pereche",
        "隻 (zhī)",
        "隻 (zek3)",
        "隻 (tsiah)",
        "一隻貓 (yī zhī māo)",
        "一隻貓 (yat1 zek3 maau1)",
        "一隻貓 (tsi̍t tsiah niau)",
        "one cat",
        "o pisică",
        {"cat","dog","bird","rabbit","shoe","glove"},
        {"pisică","câine","pasăre","iepure","pantof","mănușă"}
    };


    dict["long_objects"] = {
        "Long flexible objects",
        "Obiecte lungi și flexibile",
        "條 (tiáo)",
        "條 (tiu4)",
        "條 (tiâu)",
        "一條魚 (yī tiáo yú)",
        "一條魚 (yat1 tiu4 jyu2)",
        "一條魚 (tsi̍t tiâu hî)",
        "one fish",
        "un pește",
        {"fish","river","road","snake","noodle","trousers","towel"},
        {"pește","râu","drum","șarpe","tăiței","pantaloni","prosop"}
    };


    dict["flat_objects"] = {
        "Flat surface objects",
        "Obiecte cu suprafață plată",
        "張 (zhāng)",
        "張 (zoeng1)",
        "張 (tiunn)",
        "一張紙 (yī zhāng zhǐ)",
        "一張紙 (yat1 zoeng1 zi2)",
        "一張紙 (tsi̍t tiunn tsuá)",
        "one piece of paper",
        "o foaie de hârtie",
        {"paper","table","map","ticket","photo","bed"},
        {"hârtie","masă","hartă","bilet","fotografie","pat"}
    };


    dict["clothing"] = {
        "Clothing and gift items",
        "Îmbrăcăminte și cadouri",
        "件 (jiàn)",
        "件 (gin6)",
        "件 (kiānn)",
        "一件衫 (yī jiàn shān)",
        "一件衫 (yat1 gin6 saam1)",
        "一件衫 (tsi̍t kiānn sann)",
        "one shirt",
        "o cămașă",
        {"shirt","dress","jacket","coat","sweater","gift"},
        {"cămașă","rochie","jachetă","palton","pulover","cadou"}
    };


    dict["buildings"] = {
        "Buildings and rooms",
        "Clădiri și camere",
        "間 (jiān)",
        "間 (gaan1)",
        "間 (keng)",
        "一間屋子 (yī jiān wūzi)",
        "一間屋 (yat1 gaan1 uk1)",
        "一間厝 (tsi̍t keng tshù)",
        "one house",
        "o casă",
        {"house","room","school","hospital","restaurant","hotel"},
        {"casă","cameră","școală","spital","restaurant","hotel"}
    };


    dict["vehicles"] = {
        "Vehicles and machines",
        "Vehicule și mașini",
        "台 (tái)",
        "台 (toi4)",
        "台 (tâi)",
        "一台電腦 (yī tái diànnǎo)",
        "一台電腦 (yat1 toi4 din6 nou5)",
        "一台電腦 (tsi̍t tâi tiān-náu)",
        "one computer",
        "un computer",
        {"car","computer","television","bicycle","motorcycle","bus"},
        {"mașină","computer","televizor","bicicletă","motocicletă","autobuz"}
    };


    dict["drinks"] = {
        "Drinks in cups or glasses",
        "Băuturi în cești sau pahare",
        "杯 (bēi)",
        "杯 (bui1)",
        "杯 (pue)",
        "一杯水 (yī bēi shuǐ)",
        "一杯水 (yat1 bui1 seoi2)",
        "一杯水 (tsi̍t pue tsuí)",
        "one cup of water",
        "un pahar de apă",
        {"water","tea","coffee","juice","milk","beer"},
        {"apă","ceai","cafea","suc","lapte","bere"}
    };


    dict["large_objects"] = {
        "Large and grand objects",
        "Obiecte mari și grandioase",
        "座 (zuò)",
        "座 (zo6)",
        "座 (chō)",
        "一座山 (yī zuò shān)",
        "一座山 (yat1 zo6 saan1)",
        "一座山 (tsi̍t chō suann)",
        "one mountain",
        "un munte",
        {"mountain","skyscraper","statue","bridge","tower"},
        {"munte","zgârie-nori","statuie","pod","turn"}
    };


    dict["small_round"] = {
        "Small round objects",
        "Obiecte mici și rotunde",
        "粒 (lì)",
        "粒 (lap1)",
        "粒 (lia̍p)",
        "一粒米 (yī lì mǐ)",
        "一粒糖 (yat1 lap1 tong2)",
        "一粒米 (tsi̍t lia̍p bí)",
        "one grain of rice",
        "un bob de orez",
        {"grain","sweet","pill","pearl","bullet","star"},
        {"bob","bomboană","pastilă","perlă","glonț","stea"}
    };


    dict["flowers"] = {
        "Flowers and clouds",
        "Flori și nori",
        "朵 (duǒ)",
        "朵 (do2)",
        "蕊 (lúi)",
        "一朵花 (yī duǒ huā)",
        "一朵花 (yat1 do2 faa1)",
        "一蕊花 (tsi̍t lúi hue)",
        "one flower",
        "o floare",
        {"flower","rose","tulip","cloud","daisy"},
        {"floare","trandafir","lalea","nor","margaretă"}
    };


    dict["trees"] = {
        "Trees and plants",
        "Copaci și plante",
        "棵 (kē)",
        "棵 (po1)",
        "欉 (châng)",
        "一棵樹 (yī kē shù)",
        "一棵樹 (yat1 po1 syu6)",
        "一欉樹 (tsi̍t châng tshiū)",
        "one tree",
        "un copac",
        {"tree","bush","bamboo","cactus","palm"},
        {"copac","tufiș","bambus","cactus","palmier"}
    };


    dict["polite_people"] = {
        "People (polite form)",
        "Oameni (formă politicoasă)",
        "位 (wèi)",
        "位 (wai2)",
        "位 (ūi)",
        "一位女士 (yī wèi nǚshì)",
        "一位女士 (yat1 wai2 neoi5 si6)",
        "一位女士 (tsi̍t ūi lú-sū)",
        "one lady",
        "o doamnă",
        {"teacher","doctor","professor","guest","elder"},
        {"profesor","doctor","conferențiar","oaspete","bătrân"}
    };


    dict["groups"] = {
        "Groups of people or animals",
        "Grupuri de oameni sau animale",
        "群 (qún)",
        "群 (kwan4)",
        "群 (kûn)",
        "一群人 (yī qún rén)",
        "一群人 (yat1 kwan4 jan4)",
        "一群人 (tsi̍t kûn lâng)",
        "one group of people",
        "un grup de oameni",
        {"crowd","herd","flock","pack","team"},
        {"mulțime","turmă","stol","haită","echipă"}
    };


    dict["letters"] = {
        "Letters and sealed items",
        "Scrisori și obiecte sigilate",
        "封 (fēng)",
        "封 (fung1)",
        "封 (hong)",
        "一封信 (yī fēng xìn)",
        "一封信 (yat1 fung1 seon3)",
        "一封批 (tsi̍t hong phue)",
        "one letter",
        "o scrisoare",
        {"letter","envelope","parcel","invitation"},
        {"scrisoare","plic","pachet","invitație"}
    };


    dict["drops"] = {
        "Drops of liquid",
        "Picături de lichid",
        "滴 (dī)",
        "滴 (dik6)",
        "滴 (tih)",
        "一滴水 (yī dī shuǐ)",
        "一滴水 (yat1 dik6 seoi2)",
        "一滴水 (tsi̍t tih tsuí)",
        "one drop of water",
        "o picătură de apă",
        {"drop","tear","raindrop","dewdrop"},
        {"picături","lacrimi","picături de ploaie","rouă"}
    };

    dict["packages"] = {
        "Packages and bundles",
        "Pachete și legături",
        "包 (bāo)",
        "包 (baau1)",
        "包 (pau)",
        "一包大米 (yī bāo dàmǐ)",
        "一包薯片 (yat1 baau1 syu4 pin3)",
        "一包米 (tsi̍t pau bí)",
        "one bag of rice",
        "o pungă de orez",
        {"bag","packet","bundle","sack","parcel"},
        {"pungă","pachet","legătură","sac","colet"}
    };


    dict["pairs"] = {
        "Pairs of objects",
        "Perechi de obiecte (obiecte duble)",
        "雙 (shuāng)",
        "雙 (soeng1)",
        "雙 (siang)",
        "一雙鞋 (yī shuāng xié)",
        "一雙鞋 (yat1 soeng1 haai4)",
        "一雙鞋 (tsi̍t siang ê)",
        "one pair of shoes",
        "o pereche de pantofi",
        {"shoes","chopsticks","socks","gloves","eyes"},
        {"pantofi","bețișoare","șosete","mănuși","ochi"}
    };


    dict["long_rigid"] = {
        "Long rigid and stick-like objects",
        "Obiecte lungi, rigide și cilindrice",
        "支 (zhī)",
        "支 (zi1)",
        "支 (ki)",
        "一支筆 (yī zhī bǐ)",
        "一支筆 (yat1 zi1 bat1)",
        "一支筆 (tsi̍t ki pit)",
        "one pen",
        "un pix",
        {"pen","pencil","gun","arrow","flower stem","flute"},
        {"pix","creion","armă","săgeată","tulpină","flaut"}
    };


    dict["machinery_vehicles"] = {
        "Heavy machinery and vehicles (alternative)",
        "Utilaje și vehicule mari",
        "部 (bù)",
        "部 (bou6)",
        "部 (pōo)",
        "一部電影 (yī bù diànyǐng)",
        "一部車 (yat1 bou6 ce1)",
        "一部車 (tsi̍t pōo tshia)",
        "one car",
        "o mașină",
        {"car","movie","phone","machine","novel"},
        {"mașină","film","telefon","utilaj","roman"}
    };


    dict["thin_slices"] = {
        "Thin slices or pieces",
        "Felii subțiri sau bucăți tăiate",
        "片 (piàn)",
        "片 (pin3)",
        "片 (phiàn)",
        "一片麵包 (yī piàn miànbāo)",
        "一片麵包 (yat1 pin3 min6 baau1)",
        "一片麵包 (tsi̍t phiàn mī-pau)",
        "one slice of bread",
        "o felie de pâine",
        {"bread","meat","leaf","cloud","cookie"},
        {"pâine","carne","frunză","nor","biscuite"}
    };


    dict["sets_series"] = {
        "Sets, suites and series",
        "Seturi, serii și colecții",
        "套 (tào)",
        "套 (tou3)",
        "套 (thò)",
        "一套運動服 (yī tào yùndòngfú)",
        "一套西裝 (yat1 tou3 sai1 zong1)",
        "一套西裝 (tsi̍t thò se-tsong)",
        "one suit",
        "un costum",
        {"suit","apartment","set of books","software","furniture"},
        {"costum","apartament","colecție de cărți","software","mobilă"}
    };

    return dict;
}

Language loadLanguage(int choice) {
    Language lang;

    if (choice == 1) {
        lang.title                = "=== Instrument de căutare a cuvintelor de măsură chinezești ===";
        lang.select_chinese       = "\nSelectați varietatea chineză:\n";
        lang.option_mandarin      = "1. Mandarină\n";
        lang.option_cantonese     = "2. Cantoneză\n";
        lang.option_hokkien       = "3. Hokkien\n";
        lang.option_all           = "4. Toate (comparați toate trei)\n";
        lang.enter_choice         = "\nIntroduceți alegerea: ";
        lang.available_categories = "\nCategorii disponibile:\n";
        lang.enter_category       = "\nIntroduceți o categorie (sau 'iesire' pentru a ieși): ";
        lang.not_found            = "Categorie negăsită. Verificați lista de mai sus.\n";
        lang.goodbye              = "Vă mulțumim pentru folosirea serviciului!\n";
        lang.mandarin_label       = "MANDARINĂ:  ";
        lang.cantonese_label      = "CANTONEZĂ:  ";
        lang.hokkien_label        = "HOKKIEN:    ";
        lang.translation_label    = "Exemplu:    ";
        lang.invalid_choice       = "Alegere invalidă. Se folosește opțiunea 4.\n";
        lang.nouns_label          = "Substantive: ";
        lang.category_label       = "Categorie:  ";
    } else {
        lang.title                = "=== Chinese Measure Word Lookup ===";
        lang.select_chinese       = "\nSelect Chinese variety:\n";
        lang.option_mandarin      = "1. Mandarin\n";
        lang.option_cantonese     = "2. Cantonese\n";
        lang.option_hokkien       = "3. Hokkien\n";
        lang.option_all           = "4. All (compare all three)\n";
        lang.enter_choice         = "\nEnter choice: ";
        lang.available_categories = "\nAvailable categories:\n";
        lang.enter_category       = "\nEnter a category (or 'quit' to exit): ";
        lang.not_found            = "Category not found. Check the list above.\n";
        lang.goodbye              = "Goodbye!\n";
        lang.mandarin_label       = "MANDARIN:   ";
        lang.cantonese_label      = "CANTONESE:  ";
        lang.hokkien_label        = "HOKKIEN:    ";
        lang.translation_label    = "Example:    ";
        lang.invalid_choice       = "Invalid choice. Defaulting to option 4.\n";
        lang.nouns_label          = "Nouns:      ";
        lang.category_label       = "Category:   ";
    }

    return lang;
}

void showCategories(const std::map<std::string, Entry>& dict,
                    const Language& lang,
                    int interface_choice) {

    std::cout << lang.available_categories;

    for (const auto& pair : dict) {
        if (interface_choice == 1) {
            std::cout << "  - " << pair.first
                      << " → " << pair.second.name_romanian
                      << "\n";
        } else {
            std::cout << "  - " << pair.first
                      << " → " << pair.second.name_english
                      << "\n";
        }
    }
    std::cout << "\n";
}

void lookupCategory(const std::map<std::string, Entry>& dict,
                    const std::string& input,
                    int chinese_choice,
                    const Language& lang,
                    int interface_choice) {

    auto it = dict.find(input);

    if (it == dict.end()) {
        std::cout << lang.not_found;
        return;
    }

    const Entry& e = it->second;
    std::cout << "\n";

    if (interface_choice == 1) {
        std::cout << lang.category_label
                  << e.name_romanian << "\n";
        std::cout << lang.translation_label
                  << e.example_romanian << "\n";
        std::cout << lang.nouns_label;
        for (size_t i = 0; i < e.nouns_romanian.size(); i++) {
            std::cout << e.nouns_romanian[i];
            if (i < e.nouns_romanian.size() - 1)
                std::cout << ", ";
        }
    } else {
        std::cout << lang.category_label
                  << e.name_english << "\n";
        std::cout << lang.translation_label
                  << e.example_english << "\n";
        std::cout << lang.nouns_label;
        for (size_t i = 0; i < e.nouns_english.size(); i++) {
            std::cout << e.nouns_english[i];
            if (i < e.nouns_english.size() - 1)
                std::cout << ", ";
        }
    }

    std::cout << "\n\n";

    if (chinese_choice == 1 || chinese_choice == 4) {
        std::cout << lang.mandarin_label
                  << e.measureword_mandarin << "\n";
        std::cout << "            "
                  << e.example_mandarin << "\n\n";
    }
    if (chinese_choice == 2 || chinese_choice == 4) {
        std::cout << lang.cantonese_label
                  << e.measureword_cantonese << "\n";
        std::cout << "            "
                  << e.example_cantonese << "\n\n";
    }
    if (chinese_choice == 3 || chinese_choice == 4) {
        std::cout << lang.hokkien_label
                  << e.measureword_hokkien << "\n";
        std::cout << "            "
                  << e.example_hokkien << "\n\n";
    }
}
