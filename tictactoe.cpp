#include <iostream>
using namespace std;

int main(int argc, char** argv) {

    int players;
    string playerX, playerO;
    bool invalid = true;
    bool won = false;
    int counter = 0;
    string winner;
    string o = "O";
    string x = "X";
    
    cout << "instruction: " << endl;
    cout << "             pick  and type a number to put your sign on a assigned number. Do not exceed the chosen number to 9. We have 2 players, Player X and Player O. Player X will be the 1st to type a number before Player O" << endl;
    
	cout << endl << "PLayer X: ";
	getline(cin, playerX);

	cout << "PLayer O: ";
	getline(cin, playerO);
	
    cout << "TIC TAC TOE : " << playerX << " VS " << playerO << endl << endl;
    
   
    
    
    string array[3][3] = {{"1","2","3"},
                        {"4","5","6"},
                         {"7","8","9"}};

   for (int i = 0; i < 3; i++)
   {
      for (int j = 0; j < 3; j++)
      {
       cout << array[i][j] << " | ";
      }
      cout << endl;
   }
    
       cout << endl;
	
	
		
		
		
		
   while(counter < 9 || won == false) {
   
			
		do{
		    cout << "Pic a position to put your sign (1-9): ";
		    cin >> players;
		
		    if( players > 9 || players < 1){
		      cout << "invalid input"<< endl;
		    }
		    else{
		         invalid = false; 
		    }
		}while(invalid == true);
		
		
		if(counter % 2 == 0){
			for (int i = 0; i < 3; i++)
			   {
			      for (int j = 0; j < 3; j++)
			      {
			          if(to_string(players) == array[i][j]){
			                 array[i][j] = 	x;
			                 break;
			          }
			          
			      }
		      cout << endl;
		   }
		}else{
				for (int i = 0; i < 3; i++)
		   {
		      for (int j = 0; j < 3; j++)
		      {
		          if(to_string(players) == array[i][j]){
		                 array[i][j] = o;
		                 break;
		          }
		          
		      }
		      cout << endl;
		   }
		}
		
		 for (int i = 0; i < 3; i++)
		   {
		      for (int j = 0; j < 3; j++)
		      {
		          /* code */ cout << array[i][j] << " | ";
		      }
		      cout << endl;
		   }
	
		if(array[0][0] == x && array[0][1] == x && array[0][2] == x || array[1][0] == x && array[1][1] == x && array[1][2] == x ||array[2][0] == x && array[2][1] == x && array[2][2] == x || array[0][0] == x && array[1][0] == x && array[2][0] == x || array[0][1] == x && array[1][1] == x && array[2][1] == x ||array[0][2] == x && array[1][2] == x && array[2][2] == x){
		
			won = true;
			winner = x;
			
		}else if(array[0][0] == o && array[0][1] == o && array[0][2] == o || array[1][0] == o && array[1][1] == o && array[1][2] == o ||array[2][0] == o && array[2][1] == o && array[2][2] == o || array[0][0] == o && array[1][0] == o && array[2][0] == o || array[0][1] == o && array[1][1] == o && array[2][1] == o ||array[0][2] == o && array[1][2] == o && array[2][2] == o)
		{
		
			won = true;
			winner = o;
		}else if(array[0][0] == x && array[1][1] == x && array[2][2] == x || array[0][2] == x && array[1][1] == x && array[2][0] == x ){
			
			won = true;
			winner = x;
		}else if(array[0][0] == o && array[1][1] == o && array[2][2] == o || array[0][2] == o && array[1][1] == o && array[2][0] == o  ){
				won = true;
			winner = o;
		}else if (counter > 9){
			break;
		}else{
				counter++;
			
		}	
}
		if(counter > 9){
		 		
		 	cout << endl <<"you are both are loser";
		}else{
			if(winner == o){
				cout << "CONGRATS! PLAYER 0, " << playerO << " YOU'VE WON!'" <<endl;
			}else{
				cout << "CONGRATS! PLAYER X, " << playerX << " YOU'VE WON!'" <<endl;
			}
		}
		
		 	

    return 0 ;
}
