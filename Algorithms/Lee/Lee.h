#pragma once
#include <deque>
#include "../../Maps/Maps.h"
#include "../../DataStructures/Global.h"

using namespace std;

class Coordinates;
class Maps;

class Lee {

public:
    // Constructor
    Lee(Maps*);
    ~Lee();
    // Methods
    void start_lee();
    void print_map();
    // Variables
private:
    // Methods
    void run_lee(deque<Coordinates> *, int);
    void print_trace_back();
    bool check_traversability(int, int);
    bool is_placeable(int, int);
    int calculate_distance(int, int);
    // Variables
    Maps *lee_map;
    Coordinates sink_coords;
    Coordinates source_coords;
};