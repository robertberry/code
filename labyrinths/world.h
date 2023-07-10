#ifndef LABYRINTHS_WORLD_H_
#define LABYRINTHS_WORLD_H_

#include <string_view>

#include "labyrinths/vec2i.h"

namespace labyrinths {

inline constexpr int kWorldWidth = 3;
inline constexpr int kWorldHeight = 3;

inline constexpr int kExitNorth = 1;
inline constexpr int kExitNorthEast = 2;
inline constexpr int kExitEast = 4;
inline constexpr int kExitSouthEast = 8;
inline constexpr int kExitSouth = 16;
inline constexpr int kExitSouthWest = 32;
inline constexpr int kExitWest = 64;
inline constexpr int kExitNorthWest = 128;

struct Room {
  std::string_view name;
  int exits;
};

struct World {
  Room rooms[kWorldWidth * kWorldHeight];
};

void PopulateWorld(World& world);

inline int ToWorldIndex(const Vec2i& position) {
  return position.x() + position.y() * kWorldWidth;
}

}  // namespace labyrinths

#endif  // LABYRINTHS_WORLD_H_
