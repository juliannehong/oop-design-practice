//
//  ParkingLot.cpp
//  ParkingLot
//
//  Created by Julianne Hong on 12/2/18.
//  Copyright © 2018 Julianne Hong. All rights reserved.
//

#include "ParkingLot.hpp"
#include "Level.hpp"

ParkingLot::ParkingLot() {
  for (int i = 1; i <= NUM_LEVEL; ++i) {
    _levels[i] = new Level(i);
  }
}

