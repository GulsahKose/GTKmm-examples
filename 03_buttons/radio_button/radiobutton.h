#include <gtkmm/window.h>
#include <gtkmm/box.h>
#include <gtkmm/radiobutton.h>

class RadioButton : public Gtk::Window
{
public:
  RadioButton();
  virtual ~RadioButton();

protected:
  //Child widgets:
  Gtk::Box m_Box;
  Gtk::RadioButton m_RadioButton1, m_RadioButton2, m_RadioButton3;
};
