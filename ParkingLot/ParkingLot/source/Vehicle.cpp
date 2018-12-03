//
//  Vehicle.cpp
//  ParkingLot
//
//  Created by Julianne Hong on 12/2/18.
//  Copyright © 2018 Julianne Hong. All rights reserved.
//

#include "Vehicle.hpp"

Vehicle::Vehicle(VehicleSize s) : _size(s), parked(false) {};
void Vehicle::parkSpot(ParkingSpot *s) {
}

Motocycle::Motocycle() : Vehicle(Motocycle) {}

void Motocycle::parkSpot(ParkingSpot *s) {
  s->park(this);
}



