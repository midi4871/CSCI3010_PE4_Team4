#include <iostream>
#include <vector>

std::vector<std::vector<int> > createBoard(){
  //creating a board as two vectors
  std::vector<std::vector<int> > myBoard;
  for (int i = 0; i < 3; i++)
    {
        std::vector<int> temp;
        for (int j = 0; j < 3; j++)
        {
          //populating the board contents with zeros to begin
          temp.push_back(0);
        }
        //adding the new vector row to the main vector
        myBoard.push_back(temp);
    }
    //return the nested vector
  return myBoard;
}

int getPlayerChoice(){
  //display the board to the user in terms of their perimitted inputs. The inputs are linked to positions on the tic tac toe board
  std::cout << "Enter a position to place your marker. Positions are marked as such: " << std::endl;
  std::cout << "1 2 3" << std::endl;
  std::cout << "4 5 6" << std::endl;
  std::cout << "7 8 9" << std::endl;

   //storing and returning the user input
  int userInput;
  std::cin >> userInput;
  return userInput;
}

void displayBoard(std::vector<std::vector<int> > board){
  //nested for loops printing the contents of the board in the same manner they are displayed when receiving the player move (3x3)
  for (int i = 0; i < board.size(); i++)
    {
        for (int j = 0; j < board[i].size(); j++)
        {
          //converting the board contents to right strings when printing
            if(board[i][j] == 0){
              std::cout << "_";
            }
            else if (board[i][j] == 1){
              std::cout << "x";
            }
            else if (board[i][j] == 2){
              std::cout << "o";
            }
        }
        std::cout << std::endl;
    }
}

int main(){
  //creating the board and storing it in a local variable
  std::vector<std::vector<int> > board = createBoard();

  //displaying the board
  displayBoard(board);

  //receiving and storing the player choice
  int choice1 = getPlayerChoice();
}
