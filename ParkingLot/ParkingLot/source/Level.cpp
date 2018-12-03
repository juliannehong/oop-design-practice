//
//  Level.cpp
//  ParkingLot
//
//  Created by Julianne Hong on 12/2/18.
//  Copyright © 2018 Julianne Hong. All rights reserved.
//
#include "Level.hpp"
#include "Spot.hpp"
Level::Level(int floor) : _levelNumber(floor), _numSpotLeft(NUM_TOTAL_SPOTS){
  for (int i = 0; i < NUM_ROW; ++i) {
    for (int j = 0; j < NUM_SPOTS_PER_ROW; ++j) {
      Spot* curr;
      if (j < 5) {
        curr = new Spot(floor, j + 1, i + 1, Bus);
      } else if (j >= 5 && j <= 11) {
        curr = new Spot(floor, j + 1, i + 1, Compact);
      } else {
        curr = new Spot(floor, j + 1, i + 1, Motocycle);
      }
      _spots[i*NUM_SPOTS_PER_ROW + j] = curr;
    }
  }
}
