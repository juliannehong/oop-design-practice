//
//  Spot.hpp
//  ParkingLot
//
//  Created by Julianne Hong on 12/2/18.
//  Copyright © 2018 Julianne Hong. All rights reserved.
//

#ifndef Spot_hpp
#define Spot_hpp

#include <stdio.h>
#include "ParkingLot.hpp"
#include "Vehicle.hpp"
class Spot {
public:
  Spot(int levelNumber, int spotNumber, int rowNumber, VehicleSize vehicleSize);
  bool isAvailable() { return _vehicle == nullptr; }
  
private:
  void park(Vehicle* v){Vehicle = v;}
  VehicleSize getSpotSize() { return _vehicleSize; }
  int _levelNumber;
  int _spotNumber;
  int _rowNumber;
  Vehicle* _vehicle;
  VehicleSize _vehicleSize;
};
#endif /* Spot_hpp */
