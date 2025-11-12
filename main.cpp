#include "Animal.h"
#include "Bird.h"
#include "Mammal.h"
#include "Reptile.h"
#include "Enclosure.h"
#include "Visitor.h"
#include <iostream>
using namespace std;

#include "Animal.h";
#include "Mammal.h";
#include <iostream>
using namespace std;
Animal :: Animal (string name, int age, bool isHungry);
this->name = name;
this-> age = agel;
this-> isHungry = NULL;

    
}

Mammal::Mammal (string furColor);
this-> furColor = furColor;

}


Bird::Bird (float wingSpan);
this-> wingSpan = wingSpan;

}


Reptile::Reptile (bool isVenomous);
this-> isVenomous= NULL;

}



Enclosure::Enlcosure (string name, int capacity, int currentCount);
this-> name= name;
this-> capacity = capacity;
this-> currentCount = currentCount;
   )}
   
  Visitor::Visitor (string visitorname, int ticketsBought);
  this-> visitorname= visitorname;
  this-> ticketsBought = ticketsBought;
  


int main()
{
  Mammal* lion = new Mammal("Lion", 5, true, "Golden");
    Bird* parrot = new Bird("Parrot", 2, false, 0.25);
    Reptile* snake = new Reptile("Snake", 3, true, true);
   
 delete lion;
    delete parrot;
    delete snake;

    return 0;
    return 0;
}




// ============== MAIN FUNCTION ==============
int main() {
    
    
    return 0;
}
