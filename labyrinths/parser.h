#ifndef LABYRINTHS_PARSER_H_
#define LABYRINTHS_PARSER_H_

#include <istream>

namespace labyrinths {

enum class ActionType {
  kUnknownAction,
  kGoNorth,
  kGoNorthEast,
  kGoEast,
  kGoSouthEast,
  kGoSouth,
  kGoSouthWest,
  kGoWest,
  kGoNorthWest
};

struct ParseResult {
  ActionType action_type;
};

ParseResult Parse(std::istream& is);

}  // namespace labyrinths

#endif  // LABYRINTHS_PARSER_H_
