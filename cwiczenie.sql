DROP TABLE IF EXISTS uczniowie
CREATE TABLE uczniowie
(
    idUcznia INTEGER PRIMARY KEY,
    nazwisko TEXT(30),
    imie TEXT(20),
    ulica TEXT,
    dom INTEGER,
    idKlasy TEXT,
);
DROP TABLE IF EXISTS oceny;
CREATE TABLE oceny
(
	idUcznia INTEGER PRIMARY KEY,
    ocena INTEGER,
    data DATE,
    idPrzedmiotu INTEGER,
    FOREIGN KEY (idUcznia) REFERENCES uczniowie(idUcznia)
);
DROP TABLE IF EXISTS przedmioty;
CREATE TABLE przedmioty
(
    idPrzedmiotu INTEGER,
    nazwaPrzedmiotu TEXT,
    nazwisko_naucz TEXT,
    imie_naucz TEXT
);
