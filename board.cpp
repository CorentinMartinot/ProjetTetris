# include "board.hpp"

# define LENGHT // Constantes a definir pour la taille du tableau
# define HEIGHT

Board::Board() {
    // Initialise les cases du jeu à vide (0 vide, 1 pleine)
    for (int i = 0; i < LENGHT; i++) {
        for (int j = 0; j < HEIGHT; j++) {
            m_board[i][j] = 0;
        }
    }
}

void Board::newTetromino(Tetromino T) {
    m_currentTetromino = T;
}

void Board::currentTetromino() {
    return m_currentTetromino;
}

void Board::flood(int i, int j, int px, int py, int k, int o, int value, bool visited[][SIZE]) {
    
    if (px < 0 || px > SIZE || py < 0 || py > SIZE || visited[px][py] == 1) {
        return;
    }

    visited[px][py] = 1;
    area[i][j] = value;

    flood(i...)
}