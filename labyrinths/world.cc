#include "labyrinths/world.h"

namespace labyrinths {

World NewEmptyWorld() {
  Room start;
  start.name = "Empty room";
  start.description = "You are in an empty room. The walls, the ceiling, and the floors are all nondescript.";
  
  World world;
  world.rooms.push_back(start);
  return world;
}

}  // labyrinths

