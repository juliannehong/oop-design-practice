//
//  Vehicle.hpp
//  ParkingLot
//
//  Created by Julianne Hong on 12/2/18.
//  Copyright © 2018 Julianne Hong. All rights reserved.
//

#ifndef Vehicle_hpp
#define Vehicle_hpp

#include "ParkingLot.hpp"
#include <stdio.h>
class Vehicle {
public:
  Vehicle(VehicleSize s);
protected:
  virtual void parkSpot(ParkingSpot* s);
  const ParkingSpot* getAvailableParkingSpot();
  virtual bool canFit(ParkingSpot* s);
  virtual void leaveSpot(ParkingSpot* s);
  
private:
  VehicleSize _size;
  bool parked;
};

class Motocycle : public Vehicle {
public:
  Motocycle(VehicleSize s);
protected:
  virtual void parkSpot(const ParkingSpot* s);
  const ParkingSpot* getAvailableParkingSpot();
  virtual bool canFit(const ParkingSpot* s);
  
private:
};

class Car : public Vehicle {
public:
protected:
  virtual void parkSpot(const ParkingSpot* s);
  const ParkingSpot* getAvailableParkingSpot();
  virtual bool canFit(const ParkingSpot* s);
private:
};

class Bus : public Vehicle {
public:
protected:
  virtual void parkSpot(const ParkingSpot* s);
  const ParkingSpot* getAvailableParkingSpot();
  virtual bool canFit(const ParkingSpot* s);
private:
};

#endif /* Vehicle_hpp */
