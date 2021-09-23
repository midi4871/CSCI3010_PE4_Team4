#include <iostream>
#include <vector>

std::vector<std::vector<int> > createBoard(){
  std::vector<std::vector<int> > myBoard;
  for (int i = 0; i < 3; i++)
    {
        std::vector<int> temp;
        for (int j = 0; j < 3; j++)
        {
          temp.push_back(0);
        }
        myBoard.push_back(temp);
    }
  return myBoard;
}
// std::string getPlayerChoice(){
//   std::cout>>""
// }
//function to make place marekrs
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
  displayBoard(board);


}
