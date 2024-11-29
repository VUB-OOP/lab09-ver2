#include <iostream>
#include "pjesma.h"

Pjesma::Pjesma(std::string naziv, std::string izvodac, int trajanje) :
  naziv(naziv), izvodac(izvodac), trajanje(trajanje) {
}

void Pjesma::sviraj() {
  std::cout << "Reprodukcija pjesme:" << std::endl;
  std::cout << dohvatiInformacije() << std::endl;
}

std::string Pjesma::dohvatiInformacije() {
  int minute = trajanje / 60;
  int sekunde = trajanje % 60;

  return
    "Naziv: " + naziv + 
    "\nIzvodac: " + izvodac + 
    "\nTrajanje: " + std::to_string(minute) + ":" + (sekunde < 10 ? "0" : "") + std::to_string(sekunde);
}