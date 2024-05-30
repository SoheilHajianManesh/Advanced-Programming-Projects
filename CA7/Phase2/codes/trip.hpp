#ifndef __TRIP_H__
#define __TRIP_H__
#include <iostream>
#include <math.h>
#include <stdio.h>
#include "location.hpp"
#include "const.hpp"
#include "person.hpp"
#include "passenger.hpp"
#include "driver.hpp"
#include "exceptions.hpp"

class Passenger;

class Trip
{
public:
    Trip(Location *_origin, Location *_destination, int _id, Passenger *_passenger, bool in_hurry);
    void show_info();
    void clear(std::string passenger_name);
    void trip_accepted();
    void trip_finish();

    int get_id() { return id; }
    int get_status() { return status; }
    double get_price() { return price; }

private:
    void show_status();
    void calculate_price();
    Location *origin;
    Location *destination;
    Passenger *passenger;
    int status;
    int id;
    double price;
    bool in_hurry;
};

#endif