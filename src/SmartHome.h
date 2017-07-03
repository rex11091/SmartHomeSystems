#ifndef _SMARTHOME_H
#define _SMARTHOME_H

typedef struct GpsCoordinate GpsCoordinate;
struct GpsCoordinate {
  int x;
  int y;   
};

typedef enum {
  GARAGE_DOOR,
  KITCHEN_LIGHT,
  AIRCOND,
  WATER_HEATER,
} Device;

typedef enum {
  OFF,
  ON
} State;


float sqr(float x);
void doSmartThings();
#endif // _SMARTHOME_H