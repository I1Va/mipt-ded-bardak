#pragma once

#include "modlib_mod.hpp"
#include "BmServerModule.hpp"

namespace modlib {

struct Cord { int x, y; };
struct Tile { enum Type { Empty, Wall } type; };

class MapModule : public BmServerModule {
public:
    virtual bool isWall(Cord cord) const = 0;
    virtual void loadMap() = 0;
};

} // namespace modlib