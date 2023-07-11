#ifndef LABYRINTHS_WORLD_H_
#define LABYRINTHS_WORLD_H_

#include <string>
#include <vector>

#include "labyrinths/vec2i.h"

namespace labyrinths {

enum class Direction {
  kNorth,
  kNorthEast,
  kEast,
  kSouthEast,
  kSouth,
  kSouthWest,
  kWest,
  kNorthWest,
  kUp,
  kDown
};

struct Exit {
  Direction direction;
  int room_id;
};

struct Room {
  std::string name;
  std::string description;
  bool visited;
  std::vector<Exit> exits;
};

struct World {
  std::vector<Room> rooms;
};

World NewEmptyWorld();

}  // namespace labyrinths

#endif  // LABYRINTHS_WORLD_H_
