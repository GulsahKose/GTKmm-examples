#include <gtkmm.h>

class ExampleWindow : public Gtk::Window
{
public:
  ExampleWindow();
  virtual ~ExampleWindow();

protected:
  //Child widgets:
  Gtk::ScrolledWindow m_ScrolledWindow;
  Gtk::Box m_Box;
  Gtk::Button m_button1, m_button2, m_button3, m_button4;
};
