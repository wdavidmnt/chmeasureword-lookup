`#` 📚 `Chinese Measure Word Lookup ### A bilingual Romanian / English reference tool for Chinese measure words across Mandarin, Cantonese, and Hokkien` 

```
---
```

```
## What is this project?
```

`Chinese language uses special words called "measure words" when counting nouns.In English you say "one book" but in Mandarin you say` 一本書 `(yī běn shū), where` 本 `is the measure word for books. (this is a famous characteristic of Sinitic languages and we can see it also in languages like Vietnamese, Korean, Japanese etc.` 

```
Unlike English, every category of noun has its own specific measure
word. Using the wrong one is sometimes a common mistake for learners.
```

```
This tool helps Romanian and English speakers look up the correct
measure word for any category of noun across three Chinese varieties:
```

- `**Mandarin** (` 普通話 `) — with Pinyin romanization` 

- `**Cantonese** (` 廣東話 `) — with Jyutping romanization` 

- `**Hokkien** (` 臺語 `) — with POJ romanization` 

```
---
```

```
## Why did I choose Romanian as a second language for this project?
```

```
Most Chinese language tools are available only in English or Chinese.
This project targets also Romanian speakers — a completely underserved
audience in form of learning resources — by offering a fully bilingual
Romanian / English interface.
```

```
This is one of the very few Chinese linguistics tools available in
the Romanian language.
```

```
The most common resources available in Romanian are textbooks, but as far as we
know, textbooks aren't the greatest form of learning a language.
```

```
---
```

## `## Features` 

- `Bilingual interface — Romanian and English` 

- `Covers 23 grammatical categories of measure words` 

- `Compares Mandarin, Cantonese and Hokkien side by side` 

- `Includes example sentences and example nouns for each category` 

- `Runs entirely in the terminal — no installation required (an app for Android might be available in the near future` 

- `Written in standard C++ without any external dependencies.

```
---
```

```
## How to run it
```

```
### Requirements:
```

- `A C++ compiler (g++ or MinGW on Windows)` 

- `Windows Terminal recommended for correct UTF-8 display` 

- `CodeBlocks IDE (optional but recommended)` 

```
### Steps
```

`1. Clone or download this repository` 

`2. Open the project in CodeBlocks` 

`3. Press **F9** to build and run` 

```
4. Or compile manually from the terminal:
```

```
```bash
g++ main.cpp dictionary.cpp -o measure-word-lookup
./measure-word-lookup
```
```

```
## How to use it
```

```
When you run the program you will be asked two questions.
```

```
First, choose your interface language:
Select language / Selectati limba:
```

```
Romana
English
```

```
Second, choose which Chinese variety to look up:
```

```
Mandarin
Cantonese
Hokkien
All (compare all three)
```

```
The program then displays all available categories. Type any category
name to look it up:
Available categories:
```

```
animals → Animals and paired objects
books → Books and bound objects
drinks → Drinks in cups or glasses
...
```

`Enter a category: books Category:   Books and bound objects Example:    one book Nouns:      book, notebook, magazine, dictionary, comic MANDARIN:` 本 `(běn)` 一本書 `(yī běn shū) CANTONESE:` 本 `(bun2)` 一本書 `(yat1 bun2 syu1) HOKKIEN:` 本 `(pún)` 一本冊 `(tsiLt pún tsheh) Type `quit` in English or `iesire` in Romanian to exit the program.` 

```
---
```

```
## Project structure
measure-word-lookup/
├── main.cpp          — entry point and user interface loop
├── dictionary.h      — Entry and Language struct definitions
├── dictionary.cpp    — all category data and lookup logic
├── data/
│   └── words.txt     — raw category data in pipe-separated format
└── README.md         — this file
```

```
---
```

```
## Categories covered
```

```
| Key | English name | Romanian name |
```

```
|---|---|---|
```

```
| general | General / People | General / Oameni |
```

```
| books | Books and bound objects | Cărți și obiecte legate |
```

```
| animals | Animals and paired objects | Animale și obiecte pereche |
| long_objects | Long flexible objects | Obiecte lungi și flexibile |
| flat_objects | Flat surface objects | Obiecte cu suprafață plată |
| clothing | Clothing and gift items | Îmbrăcăminte și cadouri |

| buildings | Buildings and rooms | Clădiri și camere |



| vehicles | Vehicles and machines | Vehicule și mașini |
```

```
| drinks | Drinks in cups or glasses | Băuturi în cești sau pahare |
```

```
| large_objects | Large and grand objects | Obiecte mari și grandioase |
```

```
| small_round | Small round objects | Obiecte mici și rotunde |
```

```
| flowers | Flowers and clouds | Flori și nori |
```

```
| trees | Trees and plants | Copaci și plante |
```

```
| polite_people | People polite form | Oameni formă politicoasă |
```

```
| groups | Groups of people or animals | Grupuri de oameni sau animale |
```

```
| letters | Letters and sealed items | Scrisori și obiecte sigilate |
```

```
| drops | Drops of liquid | Picături de lichid |
```

```
| packages | Packages and bundles | Pachete și legături |
```

```
| pairs | Pairs of objects | Perechi de obiecte |
```

- `| long_rigid | Long rigid and stick-like objects | Obiecte lungi rigide și cilindrice |` 

- `| machinery_vehicles | Heavy machinery and vehicles | Utilaje și vehicule mari |` 

- `| thin_slices | Thin slices or pieces | Felii subțiri sau bucăți tăiate |` 

- `| sets_series | Sets, suites and series | Seturi, serii și colecții |` 

```
---
```

## `## Data sources` 

```
Measure word data was researched and verified from the following sources:


- `MDBG Chinese Dictionary (mdbg.net) — Mandarin data` 

- `CantoDict (cantonese.sheik.gr) — Cantonese data` 

- `iTaigi (itaigi.tw) — Hokkien and Taiwanese data` 

- `Wikipedia — Cantonese, Mandarin and Hokkien classifier reference pages` 

```
---
```

## `## About this project` 

```
This is my first C++ project, built as a debut for my portfolio while studying
in high school. The goal was to create something useful for Romanian speakers in
order to make Chinese learning a bit more effective. My initial thought was to
create a tool for Chinese learning with a bilingual interface because there are
rarely any projects like these, from each more sides could benefit. Most popular
tools are exclusively in English but there are people who cannot understand
English that well.
```

```
The project covers three Chinese varieties simultaneously, which is unusual even
amongst professional Chinese language learning tools. Most tools focus
exclusively on Mandarin. Including Cantonese and Hokkien reflects the real
linguistic diversity of the Chinese-speaking world.
```
---
```

## `## Author` 

```
**Munteanu David Ioan**
[May 2026]
```

```
---
```

## `## License` 

```
This project is open source and free to use for educational purposes.
```

