#include <iostream>

#include "labyrinths/parser.h"
#include "labyrinths/world.h"
#include "labyrinths/vec2i.h"

using ::labyrinths::ActionType;
using ::labyrinths::Parse;
using ::labyrinths::ParseResult;
using ::labyrinths::NewEmptyWorld;
using ::labyrinths::Room;
using ::labyrinths::World;

int main(int argc, char **argv) {
  std::cout << "Labyrinths" << std::endl;
  std::cout << "© Robert Berry, 2023" << std::endl;
  std::cout << std::endl;

  World world = NewEmptyWorld();

  bool running = true;
  int player_position = 0;

  while (running) {
    Room& room = world.rooms[player_position];
    if (room.visited) {
      std::cout << "Location: " << room.name << std::endl;
    } else {
      std::cout << room.description << std::endl;
      room.visited = true;;
    }

    ParseResult result = Parse(std::cin);
    if (result.action_type == ActionType::kUnknownAction) {
      running = false;
    }
  }

  return 0;
}
