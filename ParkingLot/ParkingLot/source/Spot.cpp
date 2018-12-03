//
//  Spot.cpp
//  ParkingLot
//
//  Created by Julianne Hong on 12/2/18.
//  Copyright © 2018 Julianne Hong. All rights reserved.
//

#include "Spot.hpp"

Spot::Spot(int levelNumber, int spotNumber, int rowNumber, VehicleSize vehicleSize):
_levelNumber(levelNumber), _spotNumber(spotNumber), _rowNumber(rowNumber), _vehicleSize(vehicleSize), _vehicle(nullptr)  {}

