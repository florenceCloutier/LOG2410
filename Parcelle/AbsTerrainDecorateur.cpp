/****************************************************************************
**
** Classe AbsTerrainDecorateur
** Author: Fabrice Charbonneau
** Date: oct-2020
**
****************************************************************************/

#include "AbsTerrainDecorateur.h"


void AbsTerrainDecorateur::simulerTranspiration() {
    m_parcelle->simulerTranspiration();
}

void AbsTerrainDecorateur::consommerEau(int quantite) {
    m_parcelle->consommerEau(quantite);
}
