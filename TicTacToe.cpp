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

std::vector<std::vector<int> > placeMarker(std::vector<std::vector<int> > input,int choice,int player){
  //switch statement to convert from int to location
  switch (choice){
    //cases for each of the 9 spaces
    case 1:
    //assing basedd on location
    input[0][0] = player;
    break;
    case 2:
    input[0][1] = player;
    break;
    case 3:
    input[0][3] = player;
    break;
    case 4:
    input[1][0] = player;
    break;
    case 5:
    input[1][1] = player;
    break;
    case 6:
    input[1][2] = player;
    break;
    case 7:
    input[2][0] = player;
    break;
    case 8:
    input[2][1] = player;
    break;
    case 9:
    input[2][2] = player;
    break;
  }
return input;
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
  int turnCount = 0;
  int player = 1;
  //creating the board and storing it in a local variable
  std::vector<std::vector<int> > board = createBoard();

  //displaying the board
  displayBoard(board);
  //loop for turns 
  while (turnCount <9){
    if(turnCount % 2 == 0){
  std::cout<<"player one make choice (x)"<<std::endl;
  player = 1;
}else{
  std::cout<<"player two make choice (o)"<<std::endl;
      //this keeps track of what the player is an x or o
  player = 2;
}
    //incriment turn 
  turnCount++;
  //receiving and storing the player choice
  int choice1 = getPlayerChoice();
    //change board and then display 
  board = placeMarker(board,choice1,player);
  displayBoard(board);
}
}
