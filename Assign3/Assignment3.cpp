// Jon Rose
// April Browne
// CSCI 020
// 10/30/2017
/* The purpose of this assignment is to create a game of Pig. This game uses a 6-sided die.
The player and computer both roll the die until either a one is rolled or the player holds.
If a one is rolled that player gets zero for that turn. The program counts the result of 
each die roll until a one is rolled or the player holds. Play continues until one player
has a score of 100 or more points.
Basically a game of Pig.
*/

    #include <iostream> // include iostream
    using namespace std; // name space std
    
    #include <iostream> // iostream
    #include <ctime>  // ctime
    #include <string> // string


    int humanTurn(int &humTotalScore); // human turn and human total score
    int computerTurn(int &compTotalScore); // comp turn
    int rollDie(); // rolldie()
    int main() //int main
    {
	srand((int)time(0)); // srand int time

	int humanTotalScore = 0;  // human total score
	int compTotalScore = 0;  // comp total score 

	while (humanTotalScore < 100 && compTotalScore < 100) // while loop
	{
		humanTurn(humanTotalScore);  // run human turn  
		computerTurn(compTotalScore);  // run comp turn

		std::cout << "You have " << humanTotalScore << " and the computer has " // display this text with points
			  << compTotalScore << ".\n"; // show comp totol score 
	}

	if (humanTotalScore >= 100) // human total score
		std::cout << "You win!\n"; // you win no roll
	else // else 
		std::cout << "The Computer has " << compTotalScore << ". You lose!\n"; // computer points
	return 0; // return 0
    }

    int humanTurn(int &humTotalScore)// huamns turn
    {
	int score = 0;   // start score 0
	bool run = true;   // run true
	std::string response;  // string
	int roll = 0;  // int roll
	do //do
	{
	roll = rollDie(); //rollDie()
	if (roll == 1) // roll 1
	{
	std::cout << "You rolled a 1. You get no points.\n"; // zero points awarded
	run = false; // run false
	}
	else // else
	{
	score += roll;  // score += roll
	std::cout << "You rolled a " << roll // display this text
	<< ". Would you like to roll again? (r/n) "; // roll or no
	std::cin >> response; // user input 
	if (response == "n") // response n
	{
	humTotalScore += score; // total score += score
	run = false; // run false
	}
    }
    } while (run); // while run
    return 0; // return 0
    }
    int computerTurn(int &compTotalScore) // computer turn comp total score
    {
	bool run = true;
	int score = 0; // score = 0
	int roll = 0; //roll = 0
	do // do
	{
	roll = rollDie();// rollDie
	if (roll == 1) // if roll is 1
	{
	std::cout << "Computer rolls a 1. Your turn.\n"; // display this text
	score = 0; // score = 0
	run = false;
	}
	else
	{
	score += roll; // score += roll
	}
    } while (score < 20 && run); // while score<20 && run
    compTotalScore += score; // comp total score += score
	return 0; // return 0
    }
    int rollDie() // roll Die
    {
	int roll = 1 + (rand() % 6); // roll = 1 + (rand() % 6)
	return roll; // return roll
    }
    /*
    Running /home/ubuntu/workspace/Assign3/Assignment3.cpp
	You rolled a 4. Would you like to roll again? (r/n) n
	You have 4 and the computer has 20.
	You rolled a 4. Would you like to roll again? (r/n) r
	You rolled a 5. Would you like to roll again? (r/n) r
	You rolled a 5. Would you like to roll again? (r/n) n
	Computer rolls a 1. Your turn.
	You have 18 and the computer has 20.
	You rolled a 5. Would you like to roll again? (r/n) r
	You rolled a 1. You get no points.
	Computer rolls a 1. Your turn.
	You have 18 and the computer has 20.
	You rolled a 3. Would you like to roll again? (r/n) n
	You have 21 and the computer has 40.
	You rolled a 6. Would you like to roll again? (r/n) r
	You rolled a 3. Would you like to roll again? (r/n) r
	You rolled a 5. Would you like to roll again? (r/n) n
	Computer rolls a 1. Your turn.
	You have 35 and the computer has 40.
	You rolled a 6. Would you like to roll again? (r/n) r
	You rolled a 6. Would you like to roll again? (r/n) 
	r
	You rolled a 3. Would you like to roll again? (r/n) r
	You rolled a 2. Would you like to roll again? (r/n) n
	You have 52 and the computer has 60.
	You rolled a 6. Would you like to roll again? (r/n) r
	You rolled a 1. You get no points.
	You have 52 and the computer has 82.
	You rolled a 2. Would you like to roll again? (r/n) r
	You rolled a 3. Would you like to roll again? (r/n) r
	You rolled a 4. Would you like to roll again? (r/n) n
	You have 61 and the computer has 105.
	The Computer has 105. You lose!


	Process exited with code: 0
	
	
	*/