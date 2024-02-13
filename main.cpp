#include<stdio.h>
#include <list>
#include <string>
#include <iostream>
using namespace std;

int main() {

	list<const char*> station{
		"Tokyo", "Kanda", "Akihabara", "Okachimachi", "Ueno", "Uguisudani", "Nippori","Tabata", "Komagome",
		"Sugamo", "Otsuka", "Ikebukuro", "Mejiro", "Takadanobaba", "Shin-Okubo","Shinjuku", "Yoyogi", "Harajuku", "Shibuya",
		"Ebisu", "Meguro", "Gotanda", "Osaki", "Shinagawa","Tamachi", "Hamamatutsucho", "Shimbashi", "Yurakucho",
	};

	
	printf("1970”N\n");
	for (auto itr = station.begin(); itr != station.end(); ++itr) {
		std::cout << *itr << "\n";
	}
	printf("\n");
	
	for (auto itr = station.begin(); itr != station.end(); ++itr) {
		if (*itr == "Tabata") {
			itr = station.insert(itr, "Nishi-Nippori");
			++itr;
		}
	}
	printf("2019”N\n");
	for (auto itr = station.begin(); itr != station.end(); ++itr) {
		std::cout << *itr << "\n";
	}
	printf("\n");
	
	for (auto itr = station.begin(); itr != station.end(); ++itr) {
		if (*itr == "Tamachi") {
			itr = station.insert(itr, "Takanawa Gateway");
			++itr;
		}
	}

	printf("2022”N\n");
	for (auto itr = station.begin(); itr != station.end(); ++itr) {
		std::cout << *itr << "\n";
	}

	return 0;
}