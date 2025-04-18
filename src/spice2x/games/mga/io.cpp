#include "io.h"

std::vector<Button> &games::mga::get_buttons() {
    static std::vector<Button> buttons;

    if (buttons.empty()) {
        buttons = GameAPI::Buttons::getButtons("Metal Gear");

        GameAPI::Buttons::sortButtons(
                &buttons,
                "Add Coin",
                "Test Menu",
                "",
                "Start Button",
                "Change View (FPS/TPS)",
                "Steady Aim",
                "Kneel + Roll + Scope",
                "Use Item (option 1)",
                "Use Item (option 2)",
                "Reload",
                "Fire Weapon",
                "Cycle Weapon",
                "Walk Forwards",
                "Walk Backwards",
                "Walk Left",
                "Walk Right"
        );
    }

    return buttons;
}

std::vector<Analog> &games::mga::get_analogs() {
    static std::vector<Analog> analogs;

    if (analogs.empty()) {
        analogs = GameAPI::Analogs::getAnalogs("Metal Gear");

        GameAPI::Analogs::sortAnalogs(
                &analogs,
                "Joy X",
                "Joy Y"
        );
    }

    return analogs;
}


std::vector<Light> &games::mga::get_lights() {
    static std::vector<Light> lights;

    if (lights.empty()) {
        lights = GameAPI::Lights::getLights("Metal Gear");

        GameAPI::Lights::sortLights(
                &lights,
                "Start",
                "Left R",
                "Left G",
                "Left B",
                "Right R",
                "Right G",
                "Right B",
                "Gun R",
                "Gun G",
                "Gun B",
                "Gun Vibration"
        );
    }

    return lights;
}
