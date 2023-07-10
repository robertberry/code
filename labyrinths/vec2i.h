#ifndef LABYRINTHS_VEC2I_H_
#define LABYRINTHS_VEC2I_H_

#include <utility>

namespace labyrinths {

// Vector of 2 integers.
class Vec2i {
public:
  Vec2i(int x, int y) : x_(std::move(x)), y_(std::move(y)) {}

  int x() const {
    return x_;
  }

  int y() const {
    return y_;
  }

private:
  const int x_;
  const int y_;
};

}  // namespace labyrinths

#endif  // LABYRINTHS_VEC2I_H_
