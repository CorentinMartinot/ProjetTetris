# include "tetrominos.hpp"
# define LENGHT // Constantes a definir pour la taille du tableau
# define HEIGHT

class Board {

public:

    Board(); // Constructeur par defaut

    void newTetromino(Tetromino T); // Definit le Tetromino en utilisation
    void currentTetromino(); // Donne le Tetromino en utilisation
    void saveTetromino(); // Met de cote un Tetromino
    void flood(int i, int j, int px, int py, int k, int o, int value, bool visited[][SIZE]);
    void isGameOver();
    void pause();
    void resume();

private:
    Tetromino m_currentTetromino; 
    int m_board[LENGHT][HEIGHT]; // Cases du jeu
};

