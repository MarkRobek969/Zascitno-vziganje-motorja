# Zascitno-vziganje-motorja
Zascitno vziganje avtom. motorja: Ko obrnemo kljuc v desno (simuliramo s tipko), se sklene kontakt A(DESNO), ki aktivira zaganjalnik (motor). Pogoj za to pa je, da je vklopljeno skrivno stikalo B(SW1). Zaganjalnika tudi ni mogoce pognati, ce motor ze tece, kar zazna senzor M(SW2) (uporabite se eno stikalo).

## KOSOVNICA
| Element     | Količina     |               
| ----------- |:------------:| 
| Tipka       |    2         |                 
| Upor 220e   |    1         |                 
| Upor 1k     |    4         |                 
| Dioda       |    1         |                 
| Motor/LED dioda |   1      |                 
| Koncno stikalo  |   1      |                 
| Stransko stikalo|   1      |                 
| Arduino UNO     |   1      |                 
| Protoboard      |   1      |                 

## PRIREDBENI SEZNAM

VHODI:
| Oznaka v nacrtu     | Operanda     |   Vrsta kontakta   |   Pomen|
| ----------- |:------------:| ---------------:|-----------------:|
|LEVA         |           S1   |      NO           |    Izklop motorja                 |
|DESNA        |           S2   |      NO           |    Vklop motorja                  |
|SW1          |           S3   |  Menjalni kontakt |    Pogoj za vklop motorja         |
|SW2          |           S4   |      NO           |    Senzor za delovanje motorja    |

IZHODI:
| Oznaka v nacrtu     | Operanda     |   Aktiven pri   |   Pomen|
| ----------- |:------------:| ---------------:|-----------------:|
|M1           |           M1 |  1              |    Zagon         |

## VEZALNA SHEMA
![image](https://github.com/MarkRobek969/Zascitno-vziganje-motorja/assets/167552320/268fbb41-b512-421a-96a1-f288432c06a6)



 ## VEZAVA
![20240611_110041](https://github.com/MarkRobek969/Zascitno-vziganje-motorja/assets/167552320/9a0728aa-8972-4fb0-90dc-ab6ffa46be77)

## VIDEO
https://github.com/MarkRobek969/Zascitno-vziganje-motorja/assets/167552320/fbe56b31-1b46-4003-a77a-69bf036a68ad
## KOMENTAR
Vezje za zascitno vziganje motorja uporablja za prikaz delovanja DC motorja zeleno LED diodo. Diodo sva uporabila namesto motorja, ker Arduino UNO iz neznanega razloga ni bil zmozen pognati DC motorja. Uporabljena je zgolj za simulacijo delovanja. Simulacija v programu Tinkercad deluje brez napak.
### Mozne izboljsave:
+ Uporaba LED diod za prikaz polozaja kljuca (leva in desna)
+ Uporaba RFID kartice namesto skrivnega stikala
### Opombe:
+ Uporaba LED diode namesto DC motorja
+ Simulacija deluje v programu Tinkercad

