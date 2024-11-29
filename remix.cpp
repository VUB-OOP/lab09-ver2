#include <iostream>
#include "remix.h"

Remix::Remix(std::string naziv, std::string izvodac, int trajanje,
             std::string remixer, bool produzena) :
  Pjesma(naziv, izvodac, trajanje),
  remixer(remixer),
  produzenaVerzija(produzena) {
}

void Remix::sviraj() {
  std::cout << "Reprodukcija remixa:" << std::endl;
  std::cout << dohvatiInformacije() << std::endl;
}

std::string Remix::dohvatiInformacije() {
  return
    Pjesma::dohvatiInformacije() +
    "\nRemixer: " + remixer +
    "\nProduzena verzija: " + (produzenaVerzija ? "Da" : "Ne");
}