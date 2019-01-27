# include "tetrominos.hpp"

# define LENGHT // Constantes a definir pour la taille du tableau
# define HEIGHT

int Tetrominos [7][4][4][4] = 
    {
        { // O
            {
                {0, 0, 0, 0},
                {0, 1, 2, 0},
                {0, 1, 1, 0},
                {0, 0, 0, 0} 
            },

            {
                {0, 0, 0, 0},
                {0, 1, 2, 0},
                {0, 1, 1, 0},
                {0, 0, 0, 0} 
            },
        
            {
                {0, 0, 0, 0},
                {0, 1, 2, 0},
                {0, 1, 1, 0},
                {0, 0, 0, 0} 
            },

            {
                {0, 0, 0, 0},
                {0, 1, 2, 0},
                {0, 1, 1, 0},
                {0, 0, 0, 0} 
            },
        },

        { // I
            {
                {0, 0, 0, 0},
                {1, 1, 2, 1},
                {0, 0, 0, 0},
                {0, 0, 0, 0} 
            },

            {
                {0, 0, 1, 0},
                {0, 0, 2, 0},
                {0, 0, 1, 0},
                {0, 0, 1, 0} 
            },
        
            {
                {0, 0, 0, 0},
                {1, 1, 2, 1},
                {0, 0, 0, 0},
                {0, 0, 0, 0} 
            },

            {
                {0, 0, 1, 0},
                {0, 0, 2, 0},
                {0, 0, 1, 0},
                {0, 0, 1, 0} 
            },
        },  

        { // T
            {
                {0, 0, 0, 0},
                {0, 1, 2, 1},
                {0, 0, 1, 0},
                {0, 0, 0, 0} 
            },

            {
                {0, 0, 1, 0},
                {0, 1, 2, 0},
                {0, 0, 1, 0},
                {0, 0, 0, 0} 
            },
        
            {
                {0, 0, 1, 0},
                {0, 1, 2, 1},
                {0, 0, 0, 0},
                {0, 0, 0, 0} 
            },

            {
                {0, 0, 1, 0},
                {0, 0, 2, 1},
                {0, 0, 1, 0},
                {0, 0, 0, 0} 
            },
        },  

        { // L
            {
                {0, 0, 0, 1},
                {0, 1, 2, 1},
                {0, 0, 0, 0},
                {0, 0, 0, 0} 
            },

            {
                {0, 0, 1, 0},
                {0, 0, 2, 0},
                {0, 0, 1, 1},
                {0, 0, 0, 0} 
            },
        
            {
                {0, 0, 0, 0},
                {0, 1, 2, 1},
                {0, 1, 0, 0},
                {0, 0, 0, 0} 
            },

            {
                {0, 0, 0, 0},
                {0, 1, 2, 0},
                {0, 0, 1, 0},
                {0, 0, 1, 0} 
            },
        },

        { // J
            {
                {0, 0, 0, 0},
                {0, 1, 2, 1},
                {0, 0, 0, 1},
                {0, 0, 0, 0} 
            },

            {
                {0, 0, 1, 0},
                {0, 0, 2, 0},
                {0, 1, 1, 0},
                {0, 0, 0, 0} 
            },
        
            {
                {0, 1, 0, 0},
                {0, 1, 2, 1},
                {0, 0, 0, 0},
                {0, 0, 0, 0} 
            },

            {
                {0, 0, 0, 0},
                {0, 0, 2, 1},
                {0, 0, 1, 0},
                {0, 0, 1, 0} 
            },
        },

        { // S
            {
                {0, 0, 0, 0},
                {0, 0, 2, 1},
                {0, 1, 1, 0},
                {0, 0, 0, 0} 
            },

            {
                {0, 1, 0, 0},
                {0, 1, 2, 0},
                {0, 0, 1, 0},
                {0, 0, 0, 0} 
            },
        
            {
                {0, 0, 1, 1},
                {0, 1, 2, 0},
                {0, 0, 0, 0},
                {0, 0, 0, 0} 
            },

            {
                {0, 0, 1, 0},
                {0, 0, 2, 1},
                {0, 0, 0, 1},
                {0, 0, 0, 0} 
            },
        },      

        { // Z
            {
                {0, 0, 0, 0},
                {0, 1, 2, 0},
                {0, 0, 1, 1},
                {0, 0, 0, 0} 
            },

            {
                {0, 0, 1, 0},
                {0, 1, 2, 0},
                {0, 1, 0, 0},
                {0, 0, 0, 0} 
            },
        
            {
                {0, 1, 1, 0},
                {0, 0, 2, 1},
                {0, 0, 0, 0},
                {0, 0, 0, 0} 
            },

            {
                {0, 0, 0, 1},
                {0, 0, 2, 1},
                {0, 0, 1, 0},
                {0, 0, 0, 0} 
            },
        },      
    };
   
Tetromino::Tetromino() {
    m_abs = LENGHT/2;
    m_ord = 0;
}

Tetromino::Tetromino(const Tetromino &T){
    m_abs = T.m_abs;
    m_ord = T.m_ord;
    m_type = T.m_type;
    m_orientation = T.m_orientation;
    m_couleur = T.m_couleur;
    m_Tetromino = T.m_Tetromino;
}

void Tetromino::rotate() {
    m_orientation ++;
    m_Tetromino = Tetrominos[m_type][m_orientation];
}

void Tetromino::down() {
    if (m_ord > -HEIGHT) {
        // Verifie qu'on peut encore descendre
        m_ord --;
    } 
}

void Tetromino::left() {
    if (m_abs > 0) {
        // Verifie qu'on peut encore decaler a gauche
        m_abs --;
    } 
}

void Tetromino::right() {
    if (m_abs < LENGHT) {
        // Verifie qu'on peut encore decaler a droite
        m_abs ++;
    } 
}

Tetromino_O::Tetromino_O(int orientation) {
    Tetromino();
    m_type = 0;
    m_orientation = orientation;
    m_couleur = JAUNE;
    m_Tetromino = Tetrominos[m_type][m_orientation];
}

Tetromino_I::Tetromino_I(int orientation) {
    Tetromino();
    m_type = 1;
    m_orientation = orientation;
    m_couleur = BLEU;
    m_Tetromino = Tetrominos[m_type][m_orientation];
}

Tetromino_T::Tetromino_T(int orientation) {
    Tetromino();
    m_type = 2;
    m_orientation = orientation;
    m_couleur = JAUNE;
    m_Tetromino = Tetrominos[m_type][m_orientation];
}

Tetromino_L::Tetromino_L(int orientation) {
    Tetromino();
    m_type = 3;
    m_orientation = orientation;
    m_couleur = ROSE;
    m_Tetromino = Tetrominos[m_type][m_orientation];
}

Tetromino_J::Tetromino_J(int orientation) {
    Tetromino();
    m_type = 4;
    m_orientation = orientation;
    m_couleur = BLEU;
    m_Tetromino = Tetrominos[m_type][m_orientation];
}

Tetromino_S::Tetromino_S(int orientation) {
    Tetromino();
    m_type = 5;
    m_orientation = orientation;
    m_couleur = VERT;
    m_Tetromino = Tetrominos[m_type][m_orientation];
}

Tetromino_Z::Tetromino_Z(int orientation) {
    Tetromino();
    m_type = 6;
    m_orientation = orientation;
    m_couleur = ROUGE;
    m_Tetromino = Tetrominos[m_type][m_orientation];
}