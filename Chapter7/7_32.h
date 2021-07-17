#include <vector>

class Screen;
class Windows_mgr{
public:
    using ScreenIndex = std::vector<Screen>::size_type;
    void clear(ScreenIndex);

private:
    std::vector<Screen> screens;
};

class Screen{
    friend void Window_mgr::clear(ScreenIndex);
};

void Windows_mgr::clear(ScreenIndex s){
    Screen &s = screens[s];
}