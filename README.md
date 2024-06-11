# Zascitno-vziganje-motorja
Zascitno vziganje avtom. motorja: Ko obrnemo kljuc v desno (simuliramo s tipko), se sklene kontakt A, ki aktivira zaganjalnik (motor). Pogoj za to pa je, da je vklopljeno skrivno stikalo B. Zaganjalnika tudi ni mogoce pognati, ce motor ze tece, kar zazna senzor M (uporabite se eno stikalo).

### KOSOVNICA
| Element     | Količina     |               
| ----------- |:------------:| 
| Tipka       |    2         |                 
| Upor 220e   |    1         |                 
|  Upor 1k    |    4         |                 
| Dioda       |    1         |                 
| Motor/LED dioda|   1       |                 
|  Koncno stikalo|   1       |                 
|Stransko stikalo|   1       |                 
|Arduino UNO     |   1       |                 
|Protoboard      |   1       |                 

### PRIREDBENI SEZNAM

VHODI:
| Oznaka v načrtu     | Operanda     |   Vrsta kontakta   |   Pomen|
| ----------- |:------------:| ---------------:|-----------------:|
|LEVA         |           S1   |  NO               |    Izklop motorja         |
|DESNA        |      S2        |    NO             |    Vklop motorja         |
|SW1          |        S3      |  Menjalni kontakt |    Pogoj za vklop motorja         |
|SW2          |          S4    |      NO           |    Senzor za delovanje motorja         |

IZHODI:
| Oznaka v načrtu     | Operanda     |   Aktiven pri   |   Pomen|
| ----------- |:------------:| ---------------:|-----------------:|
|M1           |           M1 |  1              |    Zagon         |

### VEZALNA SHEMA
![image](https://github.com/MarkRobek969/Zascitno-vziganje-motorja/assets/167552320/91d72ee0-10f2-4c54-be45-4ae1dffab9f2)
 ### VEZAVA
![20240611_110041](https://github.com/MarkRobek969/Zascitno-vziganje-motorja/assets/167552320/9a0728aa-8972-4fb0-90dc-ab6ffa46be77)

