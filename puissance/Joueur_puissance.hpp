#ifndef JOUEUR_PUISSANCE_HPP
#define JOUEUR_PUISSANCE_HPP

#include <string>
#include "../base/Joueur.hpp"
using namespace std;

class Joueur_puissance : public Joueur{
public:
	Joueur_puissance(string _nom, int _numero);
	virtual ~Joueur_puissance();
};

#endif
