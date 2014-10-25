#include <iostream>
#include <map>
#include "Algorithms/Lee/Lee.h"
#include "Maps/Maps.h"
#include "DataStructures/Global.h"

using namespace std;

int main() {

    bool use_random = false;
    bool use_debug = true;

    if(use_random) {
        printf("Using random map\n");
        Maps *random_map = new Maps(5);
        Lee lee(random_map);
        lee.start_lee();
        lee.print_map();
        delete(random_map);
    }

    if(use_debug) {
        printf("using debug map\n\n");
        // The sink/source are always in the same spot
        Maps *debug_map = new Maps();
        debug_map->set_difficulty(5)
                .set_sink(0, 4)
                .set_source(2, 2);

        Lee lee(debug_map);

        lee.start_lee();

        debug_map->print_map();

        delete(debug_map);
    }

    return 0;
}