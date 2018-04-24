#include <gtkmm/window.h>
#include <gtkmm/button.h>
#include <gtkmm/box.h>

class BoxWindow : public Gtk::Window
{
public:
  BoxWindow();
  virtual ~BoxWindow();

protected:
  //Child widgets:
  Gtk::Button m_button1;
  Gtk::Button m_button2;

  Gtk::Box m_Horizontal_Top_Box;
  Gtk::Box m_Horizontal_Box1;
  Gtk::Box m_Horizontal_Box2;
};
