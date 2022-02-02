#include <iostream>
#include <ctime>

void PlayIntroduction(int Difficulty)
{
    std::cout << "\n\nWelcome to the xgame\n\n";
    std::cout << "You're an agent of chaos, you will be breaking into a level: " << Difficulty << " secured throne world...\n";
    std::cout << "Enter the correct sequence to continue...\n\n";
}

bool PlayGame(int Difficulty)
{

    PlayIntroduction(Difficulty);

    // Generate Code
    const int CodeA = rand() % Difficulty + Difficulty;
    const int CodeB = rand() % Difficulty + Difficulty;
    const int CodeC = rand() % Difficulty + Difficulty;

   const int CodeSum = CodeA + CodeB + CodeC;
   const int CodeProduct = (CodeA * CodeB) * CodeC;

    // Print sum and product to the terminal
    std::cout << "||| HINTS |||\n\n";
    std::cout << "+ There are 3 numbers in the code"; 
    std::cout << "\n+ The codes add-up to: " << CodeSum; 
    std::cout << "\n+ The product amounts to: " <<  CodeProduct << std::endl;

    // Store Player guess
    int GuessA, GuessB, GuessC;
    std::cin >> GuessA >> GuessB >> GuessC;
    
    int GuessSum = GuessA + GuessB + GuessC;
    int GuessProduct = GuessA * GuessB * GuessC;

    // Check if the players guess is correct
    if (GuessSum == CodeSum && GuessProduct == CodeProduct)
    {
        std::cout << "\nYou win";
        return true;
    } 
    else 
    {
        std::cout << "\nYou lose!";
        return false;
    }

}


int main()
{   
    srand(time(NULL)) // create new random sequence based on time of day

    int LevelDifficulty = 1;
    int const MaxDifficulty = 5;

    while(LevelDifficulty <= MaxDifficulty)
    {
        bool bLevelComplete = PlayGame(LevelDifficulty);
        std::cin.clear(); // Clears any errors
        std::cin.ignore(); // Discards the buffer

        if (bLevelComplete)
        {
            ++LevelDifficulty;
        }
    }
    std::cout << "\n*** Great work agent! You got all the runes! Now get out of there! ***\n";
    return 0;
}