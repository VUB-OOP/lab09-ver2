#include <string>

class Pjesma {
public:
  Pjesma(std::string naziv, std::string izvodac, int trajanje);
  void sviraj();
  std::string dohvatiInformacije();

protected:
  std::string naziv;
  std::string izvodac;
  int trajanje; // u sekundama
};