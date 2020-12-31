//Bismillah 

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    //Welcoming Message
    cout << "Welcome to Ollivanders Online! Follow the instructions below to purchase a wand:" << endl;
    cout << endl;
    
    //Wood Selection 
    int Wood = 0;
   cout << " Begin by selecting from the three choices of Wood:\n";
   cout << "    Type '1' - For Oak          Oak is 10.00 Galleons.\n";
   cout << "    Type '2' - For Rowan        Rowan is 45.00 Galleons.\n";
   cout << "    Type '3' - For Elder        Elder is 300.00 Galleons.\n";
   cout << endl;
   cout << " Wood Choice: ";
   cin >> Wood;
   switch (Wood)
{
   // Print Type of Wood Chosen
   case (1):
      cout << " You have selected Oak for 10.00 Galleons.\n";
      Wood = 10.00;
      break;
   case (2):
      cout << " You have selected Rowan for 45.00 Galleons.\n";
      Wood = 45.00;
      break;
   case (3):
      cout << " You have selected Elder for 300.00 Galleons.\n";
      Wood = 300.00;
      break;
   default:
      cout << " Error, you must be a muggle!\n";
      Wood = 0;
      return 0;
      break;
}

    //Total calculation thus far.
    cout << endl;
    int Total = Wood;
    cout << "   Current Total: " << Total << " Galleons." << endl;
    cout << endl;
//AbubakarQ
    
    //Core Selection
    cout << " Now select the Core for your wand.\n";
    int Core = 0;
   cout << "    Type '1' - To enchant with Dragonheart String.    Price = 60.00 Galleons.\n";
   cout << "    Type '2' - To enchant with Phoenix Feather.       Price = 75.00 Galleons.\n";
   cout << "    Type '3' - To enchant with Thestral Tail.         Price = 450.00 Galleons.\n";
   cout << endl;//AbubakarQ
   cout << " Wand's Core Choice: ";
   cin >> Core;
   switch (Core)
{
   // Print Type of Core Chosen
   case (1):
        cout << " You have chosen Dragonheart Tail for 60.00 Galleons.\n";
        Core = 60.00;
      break;
   case (2):
        cout << " You have chosen Phoenix Feather for 75.00 Galleons.\n";
        Core = 75.00;
      break;//AbubakarQ
   case (3):
        cout << " You have chosen Thestral Tail for 450.00 Galleons.\n";
        Core = 450.00;
      break;
   default:
      cout << " Error! This is the last straw, Muggle!\n";
      Core = 0;
      return 0;
      break;
}

    //Total Calculation thus far
    Total = Wood + Core;
    cout << endl;
    cout << "   Current Total: " << Total << " Galleons.\n";
    cout << endl;
    
    //Size input
    cout << " Finally, before we send you to The Sorting Hat, input the size of wand you desire.\n";
    cout << "   Be sure to keep it between 8 to 15 inches.\n";
    int WandSize = 0;//AbubakarQ
    cout << endl;
    cout << " Enter your wand's Lenght: ";
    cin >> WandSize;
    //Size of Wand Variants
    if (WandSize > 15)
       { cout << " Error! Wand size is too big!";
        WandSize = 0;
        return 0;
       }
    else if (WandSize < 8)
       { cout << " Error! Wand size is too small!";
        WandSize = 0;
        return 0;
       }
    else if (WandSize >= 8)
        cout << " You've chosen " << WandSize << " inches for your wand's lenght. Great Choice!\n";
        
    cout << endl; //White Space 
    
    cout << " Now to calculate your wand's total cost. (Wood x Core) * Lenght " << endl;
    cout << " Wood   =  " << Wood << " Galleons" << endl;
    cout << " Core   =  " << Core << " Galleons" << endl;
    cout << " Lenght =  " << WandSize << " Inches" << endl;
    cout << endl;
    Total = (Wood +Core) * WandSize;
    cout << "   Your total is: " << Total << " Galleons. Enjoy your wand!" << endl;
    cout << endl;
    
    //Project Part II - Simulating Hogwarts Sorting Hat 
    cout << " Now that you have your wand, the Sorting Hat will put you into a house.\n";
    cout << endl;
    cout << " Follow the prompt below to begin the Sorting Hat Ceromony.\n";
    cout << " Type 'Y' or 'y' when ready to continue to the Ceromony.\n";
   char Continue = ' ';
   cout << "   Ready?: ";
   cin >> Continue;
   cout << endl;
   switch (Continue)
   {
       case 'Y': case 'y':
            cout << " Ahhh, right then. Right." << endl;
            break;
       case 'N': case 'n':
            cout << " Well? What are ya waiting for?" << endl;
            return 0;
            break;
       default:
            cout << " Muggle! Be Gone!" << endl;
            return 0;
   }

    //Midpoint of Project Completed and Tested
    cout << endl;
    cout << "-----Sorting Hat Ceromony-----\n";
    
    //Part II, Sorting Hat
    cout << " The following will ask you three questions to place you in one of the following homes:" << endl;
    cout << "                   Gryffindor " << "x" << " Hufflepuff " << "x" << " Ravenclaw " << "x" << " Slytherin " << endl;
    cout << endl;
    
    //Question 1
    cout << " 1. If you could make a potion that would guarantee you one thing, what would it be?" << endl;
    cout << "   A - Love" << endl;
    cout << "   B - Wisdom" << endl;
    cout << " Answer: ";
    char Potion = ' ';
    cin >> Potion;
    switch (Potion)
    {
        case 'A': case 'a':
        cout << " You have chosen the Love Potion." << endl;
        break;
        case 'B': case 'b':
        cout << " You have chosen the Wisdom Potion." << endl;
        break;
        default:
        cout << " Error!!";
        return 0;
    }
    
    //Question 2
    cout << " 2. When I am dead, I want people to remember me as:" << endl;
    cout << "   A - The Great" << endl;
    cout << "   B - The Wise" << endl;
    cout << " Answer: ";
    char Demise = ' ';
    cin >> Demise;
    switch (Demise)
    {
        case 'A': case 'a':
        cout << " You will be remebered as The Great." << endl;
        break;
        case 'B': case 'b':
        cout << " You will be remebered as The Wise." << endl;
        break;
        default:
        cout << " Error!!";
        return 0;
    }
    
    //Question 3
    cout << " 3. What would you least liked to be called?" << endl;
    cout << "   A - Cowardly" << endl;
    cout << "   B - Selfish" << endl;
    cout << " Answer: ";
    char calledLeast = ' ';
    cin >> calledLeast;
    switch (calledLeast)
    {
        case 'A': case 'a':
        cout << " They wouldn't dare call you Cowardly." << endl;
        break;
        case 'B': case 'b':
        cout << " They woudln't dare call you Selfish. " << endl;
        break;
        default:
        cout << " Error!!";
        return 0;
    }
    
    
    //Housing Ceromony
    cout << endl;
    cout << " Now the results are in. " << endl; 
    cout << " If you were to make a potion, you would choose 'Choice ";
    cout << Potion << "'." << endl;;
    cout << " Were it be the case of your demise, you would be remembered as 'Choice ";
    cout << Demise << "'." << endl;
    cout << " Finally, if they dare called you 'Choice ";
    cout << calledLeast << "' they would have made a grave mistake.";
    
    //NOT,AND,OR statements 
    cout << endl;
    cout << endl;
    cout << " YOU ARE IN HOUSE ";
    if (((Potion == 'A') || (Potion == 'a')) && ((calledLeast == 'A') || (calledLeast == 'a')))
    {
        cout << "GRYFFINDOR!";
    }
    if (((Potion == 'A') || (Potion == 'a')) && ((calledLeast == 'B') || (calledLeast == 'b')))
    {
        cout << "HUFFLEPUFF!";
    }
    if (((Potion == 'B') || (Potion == 'b')) && ((Demise == 'A') || (Demise == 'a')))
    {
        cout << "SLYTHERIN!";
    }
    if (((Potion == 'B') || (Potion == 'b')) && ((Demise == 'B') || (Demise == 'b')))
    {
        cout << "RAVENCLAW!";
    }
    
    cout << endl;
    cout << " Welcome to Hogwarts.\a";

    
}
