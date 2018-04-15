#include <gtkmm/window.h>
#include <gtkmm/checkbutton.h>

class CheckButton : public Gtk::Window
{
public:
  CheckButton();
  virtual ~CheckButton();

protected:
  //Signal handlers:
  void on_button_clicked();

  //Child widgets:
  Gtk::CheckButton m_button;
};
