#include <iostream>
#include <vector>

std::vector<std::vector<int> > createBoard(){
  std::vector<std::vector<int> > myBoard;
  return myBoard;
}

void displayBoard(std::vector<std::vector<int> > board){
  for (int i = 0; i < board.size(); i++)
    {

        for (int j = 0; j < board[i].size(); j++)
        {
            std::cout << board[i][j] << " ";
        }
        std::cout << std::endl;

    }

}

int main(){
  std::vector<std::vector<int> > board = createBoard();
  createBoard();
}
