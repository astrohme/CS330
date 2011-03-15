// Jay Bondzeleske, John (Jack) Johnson, Jamie Veals
//------------------------------------------------------------
// If Nonbreakable.h is not defined, defines it
#ifndef _NONBREAKABLE_H
#define _NONBREAKABLE_H
//------------------------------------------------------------
// Includes the Drawable.h file
#include "Drawable.h"
//------------------------------------------------------------
// Nonbreakable class
class Nonbreakable:public Drawable {
//------------------------------------------------------------
public:
    // Nonbreakable constructor
    Nonbreakable()
    {
        //Will set the type dependent on the scene information
        //Only Question blocks can have rewards that are also set this way





    }
	virtual void draw();
	// Returns object type
	virtual int objectType() { return type; }
    // generateReward method that creates an award
	// isLarge is bool that tells if Mario is big or small
    void generateReward(bool isLarge);
	// Checks to see if there is a reward in the nonbreakable box
	bool hasReward(int item = -1);

private:
    // Two types of blocks (Question - 3, Regular - 15)
    int type;
    // Four different rewards (coin - 1, mushroom/fireflower -2 , star - 3)
    // Mushroom or fireflower is dependent on whether Mario is large or not
    int reward;
};
#endif

