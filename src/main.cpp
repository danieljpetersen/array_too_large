#define FLECS_CPP
#include <flecs.h>
#include <iostream>

struct Position {
    int x = 0;
    int y = 0;
};

int main(int, char *[]) {
    flecs::world ecs;

    ecs.component<Position>()
        .member<int>("x")
        .member<int>("y");

    flecs::entity e = ecs.entity()
        .set<Position>({10, 20});

    const Position *ptr = e.get<Position>();
    std::cout << ecs.to_expr(ptr).c_str() << "\n"; // {x: 10, y: 20}
}