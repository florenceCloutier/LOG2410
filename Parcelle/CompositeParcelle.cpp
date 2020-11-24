/****************************************************************************
**
** Classe CompositeParcelle
** Author: Fabrice Charbonneau
** Date: oct-2020
**
****************************************************************************/

#include "CompositeParcelle.h"

void CompositeParcelle::ajouterParcelle(AbsParcelle* parcelle) {
    // À COMPLÉTER
}

void CompositeParcelle::enleverParcelle(AbsParcelle* parcelle) {
    // À COMPLÉTER
}

bool CompositeParcelle::estComposite() {
    return true;
}

void CompositeParcelle::simulerTranspiration() {
    std::list<AbsParcelle*>::iterator it;
    for (it = m_parcellesEnfants.begin(); it != m_parcellesEnfants.end(); ++it) {
        // À COMPLÉTER
    }
}

std::list<AbsParcelle*> CompositeParcelle::obtenirParcellesEnfant() {
    return m_parcellesEnfants;
}
