#include <string>

class Pjesma {
public:
  Pjesma(std::string naziv, std::string izvodac, int trajanje);
  void sviraj();

protected:
  std::string naziv;
  std::string izvodac;
  int trajanje; // u sekundama
};