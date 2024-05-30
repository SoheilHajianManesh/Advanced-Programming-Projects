#include "passenger.hpp"
using namespace std;

Passenger::Passenger(string _name) : Person(_name)
{
}
void Passenger::check_not_being_passenger()
{
    throw Import_except("Permition denied\n");
}

void Passenger::check_not_being_driver() {}

void Passenger::without_active_trip_passenger()
{
    if (num_of_trips_pass != 0)
    {
        if (taken_trip->get_status() == WAITING || taken_trip->get_status() == TRAVELLING)
            throw Import_except("Bad Request\n");
    }
}
void Passenger::without_active_trip_driver()
{
    throw Import_except("Permition Denied\n");
}
void Passenger::delete_active_trip()
{
    taken_trip->clear(name);
}
void Passenger::active_a_trip(Trip *trip)
{
    taken_trip = trip;
    num_of_trips_pass++;
}
void Passenger::accept_a_trip(Trip *trip)
{
    throw Import_except("Permition Denied\n");
}
void Passenger::finish_current_trip(int id)
{
    throw Import_except("Permition Denied\n");
}
