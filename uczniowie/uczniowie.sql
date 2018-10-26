DROP TABLE IF EXISTS uczniowie;
CREATE TABLE uczniowie 
(
    id INTEGER PRIMARY KEY AUTOINCREMENT,
    imie TEXT,
    nazwisko TEXT,
    plec TEXT,
    id_klasa INTEGER,
    egz_hum INTEGER,
    egz_mat INTEGER,
    egz_jez INTEGER
);

DROP TABLE IF EXISTS klasy;
CREATE TABLE klasy
(
    id INTEGER PRIMARY KEY,
    klasa TEXT,
    rok_naboru DATE,
    rok_matury DATE
);

DROP TABLE IF EXISTS przedmioty;
CREATE TABLE przedmioty
(
    id INTEGER PRIMARY KEY,
    przedmiot TEXT,
    nazwisko_naucz TEXT,
    imie_naucz TEXT,
    plec_naucz TEXT,
    FOREIGN KEY (id) REFERENCES uczniowie(id)
);

DROP TABLE IF EXISTS oceny;
CREATE TABLE oceny 
(
    id INTEGER PRIMARY KEY,
    datad DATE,
    id_uczen INTEGER,
    id_przedmiot INTEGER,
    ocena INTEGER,
    FOREIGN KEY (id) REFERENCES uczniowie(id)
);
