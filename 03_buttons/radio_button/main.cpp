#include "radiobutton.h"
#include <gtkmm/application.h>

int main(int argc, char *argv[])
{
  auto app = Gtk::Application::create("org.gtkmm.example");

  RadioButton button;
  button.set_default_size(200, 200);

  //Shows the window and returns when it is closed.
  return app->run(button, argc, argv);
}
