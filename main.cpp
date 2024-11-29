#include <iostream>
#include "remix.h"

int main() {
  Pjesma pjesma1("Stairway to Heaven", "Led Zeppelin", 482);
  pjesma1.sviraj();

  Remix remix1("Stairway to Heaven", "Led Zeppelin", 186, "DJ Prox", true);
  remix1.sviraj();
}
