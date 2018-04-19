#include "box.h"
#include <gtkmm/application.h>

int main(int argc, char *argv[])
{
  auto app = Gtk::Application::create(argc, argv, "org.gtkmm.example");

  BoxWindow box;

  //Shows the window and returns when it is closed.
  return app->run(box);
}