#include <iostream>

#include "labyrinths/parser.h"
#include "labyrinths/world.h"
#include "labyrinths/vec2i.h"

using ::labyrinths::ActionType;
using ::labyrinths::Parse;
using ::labyrinths::ParseResult;
using ::labyrinths::PopulateWorld;
using ::labyrinths::Room;
using ::labyrinths::ToWorldIndex;
using ::labyrinths::Vec2i;
using ::labyrinths::World;

int main(int argc, char **argv) {
  std::cout << "Labyrinths" << std::endl;
  std::cout << "© Robert Berry, 2023" << std::endl;
  std::cout << std::endl;

  World world;
  PopulateWorld(world);

  Vec2i position(1, 1);

  bool running = true;

  while (running) {
    int index = ToWorldIndex(position);
    Room& room = world.rooms[index];
    std::cout << "You are at " << room.name << std::endl;

    ParseResult result = Parse(std::cin);
    if (result.action_type == ActionType::kUnknownAction) {
      running = false;
    }
  }

  return 0;
}
