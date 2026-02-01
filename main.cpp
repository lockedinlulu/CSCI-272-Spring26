#include <iostream>
#include <cstdlib>
#include <string>
#include <ctime>
#include <cmath>
#include "doors.h"     
#include "rollDice.h"  
#include "Progress.h"
using namespace std;


int main() { int nextDoorNumber, Red, Blue, penalty{0};      //Storage Variables
        srand(time(0));
                                                          
                                                             //Introduction to the game begins

cout << "As you press forward into the overgrown courtyard, a familiar but harrowing voice reaches out. It cuts through the silence like steel: Hello...Player." << endl;
        cout << endl;

cout << "You must be confused as to what brings you here to this dark, grim and ghastly place. Soon you will know your ultimate fate." << endl;
        cout << endl;

cout << "Allow me to reintroduce myself. I am King Nevermore, son of the late king Vergil. You must be familiar with me, as I was once your ruler...before you decided to abandon us and pursue witchcraft. The noble houses talked of heresy and treason you know? I saw your tenacity in the court and granted mercy upon you instead. Be thankful." << endl;
        cout << endl;

cout << "It was rough getting here I know. It's all coming back to you now though, is it?  The arrests, the royal court proceedings, the guilty verdict? I hope so for your sake, for your path will be difficult, if not impossible." << endl;
        cout << endl;

cout << "By now I'm sure you remember that you've chosen a fate worse than death? Reaching the yellow door at the center of the Grazi Maze, which is where you are right now. A deed that stays unclaimed by no one." << endl;
        cout << endl;
        
cout << "Alas, You made your choice and you have wasted enough of my time though, 'he scoffs.' I will tell you what you need to know, then go to your fate." << endl;
        cout << endl;

cout << "Listen Carefully: You must pick between a red door and blue door to advance, and there is a certain order the doors must be entered to reach the yellow door. When you pick the wrong door, a ghoul behind the wrong door will push you back." << endl;
        cout << endl;

cout << "How many doors will you get pushed back? That depends on what number you get when you roll the dice. So when you get pushed back, which I am certain will happen, you must remember the order of the doors to advance once more and catch up!" << endl;
        cout << endl;

cout << "And oh, I almost forgot. You'll be racing against three other people, who are also trying to reach the yellow door. I have posted a map of the first ten doors so you may have a chance at victory. So good luck hero... You'll need it." << endl;
        cout << endl;

        cout << "Now, let's begin. Red, or Blue?\n";
                                                
                                                   //Game Begins
            
                                                   //Doors 1-10... the demo doors.
        for (int door = 1; door <= 10; door++)
            {
                cin >> Red >> Blue;
                if (getCorrectDoor(door) == 1)
                {
                    cout << "Grace Period: No Penalty, move forward.\n";
                }
                else
                {
                    cout << "Grace Period: No Penalty, move forward.\n";
                }
            
                if (door == 10)
                {
                    cout << "Now it gets serious! Wrong choice equals dice penalty!\n";
                }
          for (int door = 11; door <= 25; door++)
                 cin >> Red >> Blue;
                if (getCorrectDoor(door) == 1)
                    cout << "Door #" << door << "->"
                    //<< (correct == 1 ? "Red" : "Blue")
                     << endl;
            

            return 0;

                                    //Prompts for the game
            
        cout << "Now it gets serious! Wrong choice = dice penalty!\n";
        cout << "You're halfway there!\n";          //13th door
        cout << "Correct! Move ahead.\n";           //Right Choice
        cout << "Wrong! You must roll the dice!\n"; //Wrong Choice
        cout << "Grace period: no penalty, move forward.\n"; //Grace Period for doors 1-10
        cout << "\nCONGRATULATIONS!\n"; //Winning the game
        cout << "You reached the Yellow Door and won your freedom!\n"; //Winning the game
        


        
        
}}