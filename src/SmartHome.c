#include "SmartHome.h"
#include "gpscoordinate.h"
#include <math.h>

GpsCoordinate house ={
  
  200,
  5345,
  
};

GpsCoordinate GarageDoor={
  
  220,
  5300,
  
};




GpsCoordinate garage ={
  
  215,
  5300,
  
};

GpsCoordinate kitchen ={
  
  196,
  5400,
  
};

void doSmartThing(){
  
  GpsCoordinate Gps;
  Gps = getGpsCoordinate();
  
  float distanceFromKitchen = sqrt((sqr(Gps.x-kitchen.x))+(sqr(Gps.y-kitchen.y)));
  float distanceFromGarageDoor = sqrt((sqr(Gps.x-GarageDoor.x))+(sqr(Gps.y-GarageDoor.y)));
  float distanceFromHouse = sqrt((sqr(Gps.x-house.x))+(sqr(Gps.y-house.y)));
  
  
  
  if(distanceFromKitchen<2)
    turn(KITCHEN_LIGHT, ON);
  
  else if(garage.x==Gps.x&&garage.y==Gps.y)
    turn(GARAGE_DOOR,OFF);
  
  
  else if(distanceFromGarageDoor<5)
    turn(GARAGE_DOOR,ON);
  
  else if(distanceFromHouse<2000)
  {
    turn(AIRCOND,ON);
    turn(WATER_HEATER,ON);
  }
  
  
}


float sqr(float x){
	return x*x;
}


    

    
