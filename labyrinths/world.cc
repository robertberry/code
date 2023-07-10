#include "labyrinths/world.h"

namespace labyrinths {



void PopulateWorld(World& world) {
  world.rooms[0] = {
    .name = "NW room",
    .exits = kExitEast
  };
  world.rooms[1] = {
    .name = "N room",
    .exits = kExitWest | kExitSouth
  };
  world.rooms[2] = {
    .name = "NE room",
    .exits = kExitSouth
  };
  world.rooms[3] = {
    .name = "W room",
    .exits = kExitEast
  };
  world.rooms[4] = {
    .name = "Start room",
    .exits = kExitNorth | kExitWest | kExitEast
  };
  world.rooms[5] = {
    .name = "E room",
    .exits = kExitNorth | kExitWest | kExitSouth
  };
  world.rooms[6] = {
    .name = "SW room",
    .exits = kExitEast
  };
  world.rooms[7] = {
    .name = "S room",
    .exits = kExitWest | kExitEast
  };
  world.rooms[8] = {
    .name = "SE room",
    .exits = kExitWest | kExitNorth
  };
}

}  // labyrinths

