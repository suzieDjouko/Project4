# Project4

Bearbeitung von Eingabeströmen in einer Schleife:
a) Schreiben Sie ein Programm, welches Buchstaben vom Eingabestrom
stdin liest und auf den Ausgabestrom stdout wieder ausgibt, solange
bis der Benutzer die Eingabe mit STRG-D beendet. Das Programm soll
dann die Anzahl gelesener Zeichen ausgeben.
b) Ergänzen Sie Ihre Schleife um die Funktionalität, dass die Anzahlen der
Kleinbuchstaben mit Oberlängen und mit Unterlängen in 2
Gruppen gezählt werden:
- Oberlängen-Buchstaben sind: 'b' 'd' 'f' 'h' 'k' 'l' 't'
- Unterlängen-Buchstaben sind: 'g' 'j' 'p' 'q' 'y'
- Großbuchstaben werden nicht mitgezählt.
Das Programm soll nach der Schleife die 2 Zählerwerte ausgeben.
c) Ergänzen Sie Ihre Schleife um die Funktionalität, dass bei
Ziffernbuchstaben die Quersumme der Ziffern errechnet wird. Durch
Subtraktion des Null-Ziffernbuchstabens '0' können Sie den Zahlenwert
der Ziffer errechnen und diesen auf die bisherige Quersumme
addieren. Vermeiden Sie die Verwendung der ASCII-Code-Nummern.
Überprüfen Sie den korrekten Lauf mit den Zeichenfolgen:
12 Becher Riesenpopcorn kosten 24,99 Euro
Die Oma hat 4 Kinder und 6 Enkel, wohnt in 67541 Worms und ist 1,65 m gross
Verschaffen Sie sich zunächst das Verständnis über die Aufgabenstellung
(z.B. wie erkennen Sie die Gruppenzugehörigkeit der eingegebenen Zeichen?
wie können die Zähler für die Buchstabengruppen aussehen? wie wird eine
Schleife abgebrochen?)
● Planen Sie Ihr Vorgehen (z.B. Papierskizze erstellen).
● Verwenden Sie eine do-while-Schleife.
● Verwenden Sie die Bibliotheksfunktionen getchar() und putchar().
● Testen Sie Ihr Programm mit geeigneten Eingabezeichenfolgen.


Es dürfen keine globalen Variablen verwendet werden.
Die Codeformatierungsregeln müssen eingehalten werden.
Kommentieren Sie den Quellcode hinreichend und tragen Sie Ihren Namen in
den Kopfkommentar ein.
Das Programm muss fehlerfrei und ohne Warnungen mit der Compileroption
-Wall übersetzen.
Bewertungsschema:
Übersetzungsfehler ==> 0 P !
sonst:
Codeformatierung 3 P
sinnvolle Kommentare 2 P
Hauptschleife Einlesen / Ausgeben 5 P
Zähler der 2 Oberlängen/Unterlängen-Gruppen ermitteln 5 P
Quersumme berechnen 5 P
-----
Summe 20 P
