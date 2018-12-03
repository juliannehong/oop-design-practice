//
//  Level.hpp
//  ParkingLot
//
//  Created by Julianne Hong on 12/2/18.
//  Copyright © 2018 Julianne Hong. All rights reserved.
//

#ifndef Level_hpp
#define Level_hpp

#include <stdio.h>
#include "ParkingLot.hpp"
#include "Spot.hpp"
//class Spot;
class Level {
public:
  Level(int floor);
  const static int NUM_ROW = 5;
  const static int NUM_SPOTS_PER_ROW = 15; // large 5, compact 8, motocycle 3
  const static int NUM_TOTAL_SPOTS = NUM_ROW * NUM_SPOTS_PER_ROW;
  
private:
  int _levelNumber;
  std::array<Spot*, NUM_TOTAL_SPOTS> _spots;
  int _numSpotLeft;
};

#endif /* Level_hpp */
