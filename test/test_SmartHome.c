#include "unity.h"
#include "SmartHome.h"
#include "mock_gpscoordinate.h"

void setUp(void)
{
}

void tearDown(void)
{
}

GpsCoordinate houseMock ={
  
  200.00,
  5345.00,
  
};
GpsCoordinate GarageDoorMock={
  
  220.00,
  5300.00,
  
};

GpsCoordinate garageMock ={
  
  215.00,
  5300.00,
  
};

GpsCoordinate kitchenMock ={
  
  196.00,
  5400.00,
  
};



void test_smarthome_Distance_2KM_EXpect_aircon_waterHeater_on(void)
{

  getGpsCoordinate_ExpectAndReturn(houseMock);

  turn_Expect(AIRCOND, ON);
  turn_Expect(WATER_HEATER, ON);
  
  doSmartThing();
  
}

void test_smarthome_at_center_garage_EXpect_garageDoor_off(void)
{

  getGpsCoordinate_ExpectAndReturn(garageMock);

  turn_Expect(GARAGE_DOOR, OFF);
  
  doSmartThing();
  
}

void test_smarthome_Distance_less_5M_EXpect_garageDoor_on(void)
{

  getGpsCoordinate_ExpectAndReturn(GarageDoorMock);

  turn_Expect(GARAGE_DOOR, ON);
  
  doSmartThing();
  
}



void test_smarthome_Distance_2M_EXpect_kitchenlight_on(void)
{

  getGpsCoordinate_ExpectAndReturn(kitchenMock);

  turn_Expect(KITCHEN_LIGHT, ON);
  
  doSmartThing();
  
}





