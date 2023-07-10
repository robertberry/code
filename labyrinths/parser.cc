#include "labyrinths/parser.h"

#include <istream>
#include <string>

namespace labyrinths {

ParseResult Parse(std::istream& is) {
  std::string next_line;
  is >> next_line;

  if (next_line == "n") {
    return {
      .action_type = ActionType::kGoNorth
    };
  }

  return {
    .action_type = ActionType::kUnknownAction
  };
}

}  // namespace labyrinths
