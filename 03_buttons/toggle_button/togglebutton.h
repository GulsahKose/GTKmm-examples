#include <gtkmm/window.h>
#include <gtkmm/togglebutton.h>

class ToggleButton : public Gtk::Window
{
public:
  ToggleButton();
  virtual ~ToggleButton();

protected:
  //Signal handlers:
  void on_button_clicked();

  //Child widgets:
  Gtk::ToggleButton m_button;
};
