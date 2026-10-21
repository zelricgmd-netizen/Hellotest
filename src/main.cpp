include <Geode/Geode.hpp>
#include <Geode/modify/MenuLayer.hpp>

using namespace geode::prelude;

class $modify(HelloMenuLayer, MenuLayer) {
    bool init() {
        if (!MenuLayer::init()) return false;

        static bool shown = false;
        if (!shown) {
            shown = true;
            FLAlertLayer::create("Hello Test", "It works! The mod loaded.", "OK")->show();
        }
        return true;
    }
};
