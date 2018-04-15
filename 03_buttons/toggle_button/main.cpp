#include "togglebutton.h"
#include <gtkmm/application.h>

int main(int argc, char *argv[])
{
  auto app = Gtk::Application::create("org.gtkmm.example");

  ToggleButton button;

  //Shows the window and returns when it is closed.
  return app->run(button, argc, argv);
}
