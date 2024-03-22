// コードを入力してください
#pragma once
#include <vector>
#include "./drawable.hpp"


class Scene {
public:
    void render() const;
    void add(Drawable* drawable);
private:
    std::vector<Drawable*> drawables;
};