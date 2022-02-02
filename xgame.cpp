#include <iostream>

void PlayIntroduction()
{
    std::cout << "Welcome to the xgame";
}

void PlayGame()
{
     std::cout << "You're an agent of chaos, you will be breaking into a secure throne world...\n";
    std::cout << "Enter the correct sequence to continue...\n\n";

    // Declare 3 number code
    const int CodeA = 4;
    const int CodeB = 3;
    const int CodeC = 2;

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
    } 
    else {
         std::cout << "\nYou lose!";
    }

}

int main()
{   
    PlayIntroduction();
    PlayGame();
    return 0;
}