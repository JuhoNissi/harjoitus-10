/**************
*Teht�v�: Harjoitus 10 (Palautus vko 43)
*Tekij�: Juho Nissi
*Tee ohjelma, joka laskee sy�tetyist� kokonaisluvuista sek� positiivisten
*ett� negatiivisten kokonaislukujen osuuden. Lukujen sy�tt� lopetetaan
*sy�tt�m�ll� luku 0.
*
*Tulostus:
*Sy�tit kokonaislukuja seuraavasti:
*----------------------------------
*Negatiiviset 7 kpl 70.00%
*Positiiviset 3 kpl 30.00%
*Yhteens� 10 kpl 100.00%
*Versio: 1.0
*P�iv�ys: 1.10.2014
***************/
#include <iostream>
using namespace std;
void main()
{
	int numero;
	int pos = 0, neg = 0;
	while (true)
	{
		cout << "Anna kokonaisluku "<< neg+pos+1 << " ";
		cin >> numero;
		if (numero != 0)
			if (numero < 0)
				neg++;
			else
				pos++;
		else break;
	}
	cout << "\n\n\nSyotit kokonaislukuja seuraavasti: " << neg + pos << "kpl" << endl;
	cout << "Lukuja yhteensa: " << (neg + pos) / (neg + pos) * 100 << "%" << endl;
	cout << "negatiivisia lukuja: " << neg << "kpl" << endl;
	cout << "negatiivisten lukujen osuus: " << float(neg) / (neg + pos) * 100 << "%" << endl;
	cout << "positiivisia lukuja: " << pos << "kpl" << endl;
	cout << "positiivisten lukujen osuus: " << float(pos) / (neg + pos) * 100 << "%" << endl;
	return;
}