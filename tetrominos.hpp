enum {BLEU, JAUNE, ROSE, ROUGE, VERT};

class Tetromino {

public:
    Tetromino(const Tetromino &T); // Constructeur par recopie
    void rotate();
    void down();
    void left();
    void right();

protected:
    Tetromino(); // Constructeur par défaut
    
    // Positionnement du point de pivot
    int m_abs; 
    int m_ord;

    // Proprietes du Tetromino
    int m_type;
    int m_orientation;
    int m_couleur;
    int m_Tetromino[4][4];

};

class Tetromino_O : public Tetromino {
public:
    Tetromino_O(int orientation);
};

class Tetromino_I : public Tetromino {
public:
    Tetromino_I(int orientation);
};

class Tetromino_T : public Tetromino {
public:
    Tetromino_T(int orientation);
};

class Tetromino_L : public Tetromino {
public:
    Tetromino_L(int orientation);
};

class Tetromino_J : public Tetromino {
public:
    Tetromino_J(int orientation);
};

class Tetromino_S : public Tetromino {
public:
    Tetromino_S(int orientation);
};

class Tetromino_Z : public Tetromino {
public:
    Tetromino_Z(int orientation);
};