#include "displayapp/Colors.h"

using namespace Pinetime::Applications;
using namespace Pinetime::Controllers;

lv_color_t Pinetime::Applications::Convert(Pinetime::Controllers::Settings::Colors color) {
  switch (color) {
    case Pinetime::Controllers::Settings::Colors::White: return LV_COLOR_WHITE;
    case Pinetime::Controllers::Settings::Colors::Silver: return LV_COLOR_SILVER;
    case Pinetime::Controllers::Settings::Colors::Gray: return LV_COLOR_GRAY;
    case Pinetime::Controllers::Settings::Colors::Black: return LV_COLOR_BLACK;
    case Pinetime::Controllers::Settings::Colors::Red: return LV_COLOR_RED;
    case Pinetime::Controllers::Settings::Colors::Maroon: return LV_COLOR_MAKE(0xb0, 0x0, 0x0);
    case Pinetime::Controllers::Settings::Colors::Yellow: return LV_COLOR_YELLOW;
    case Pinetime::Controllers::Settings::Colors::Olive: return LV_COLOR_MAKE(0xb0, 0xb0, 0x0);
    case Pinetime::Controllers::Settings::Colors::Lime: return LV_COLOR_LIME;
    case Pinetime::Controllers::Settings::Colors::Green: return LV_COLOR_MAKE(0x0, 0xb0, 0x0);
    case Pinetime::Controllers::Settings::Colors::Cyan: return LV_COLOR_CYAN;
    case Pinetime::Controllers::Settings::Colors::Teal: return LV_COLOR_MAKE(0x0, 0xb0, 0xb0);
    case Pinetime::Controllers::Settings::Colors::Blue: return LV_COLOR_BLUE;
    case Pinetime::Controllers::Settings::Colors::Navy: return LV_COLOR_MAKE(0x0, 0x0, 0xb0);
    case Pinetime::Controllers::Settings::Colors::Magenta: return LV_COLOR_MAGENTA;
    case Pinetime::Controllers::Settings::Colors::Purple: return LV_COLOR_MAKE(0xb0, 0x0, 0xb0);
    case Pinetime::Controllers::Settings::Colors::Orange: return LV_COLOR_ORANGE;
    case Pinetime::Controllers::Settings::Colors::AkiViolet: return LV_COLOR_MAKE(0xac, 0x15, 0xca);
    case Pinetime::Controllers::Settings::Colors::Mint: return LV_COLOR_MAKE(0x00, 0xc9, 0x88);
    case Pinetime::Controllers::Settings::Colors::DarkPurple: return LV_COLOR_MAKE(0x68, 0x0, 0x7d);
    case Pinetime::Controllers::Settings::Colors::DarkMint: return LV_COLOR_MAKE(0x06, 0xd, 0x57);
    default: return LV_COLOR_WHITE;
  }
}
