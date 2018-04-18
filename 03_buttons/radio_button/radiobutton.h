#include <gtkmm/window.h>
#include <gtkmm/radiobutton.h>

class RadioButton : public Gtk::Window
{
public:
  RadioButton();
  virtual ~RadioButton();

protected:
  //Signal handlers:
  void on_button_clicked();

  //Child widgets:
  Gtk::RadioButton m_rb1, m_rb2, m_rb3;
};
