//
//  ParkingLot.hpp
//  ParkingLot
//
//  Created by Julianne Hong on 12/2/18.
//  Copyright © 2018 Julianne Hong. All rights reserved.
//

#ifndef ParkingLot_hpp
#define ParkingLot_hpp

#include <stdio.h>
#include <array>
#include "Level.hpp"
#include "Spot.hpp"


enum VehicleSize {
  Motocycle,
  Compact,
  Bus
};

class ParkingLot {
public:
  ParkingLot();
  const static int NUM_LEVEL = 3;
  
private:
  std::array<Level*, NUM_LEVEL> _levels;
};


#endif /* ParkingLot_hpp */
