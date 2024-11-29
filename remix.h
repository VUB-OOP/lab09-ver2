#include "pjesma.h"

class Remix : public Pjesma {
public:
  Remix(std::string naziv,
        std::string izvodac,
        int trajanje,
        std::string remixer,
        bool produzena);
  void sviraj(); // nadglasavanje
  std::string dohvatiInformacije(); // nadglasavanje

protected:
  std::string remixer;
  bool produzenaVerzija;

private:
  using Pjesma::trajanje; // promjena pristupa
};