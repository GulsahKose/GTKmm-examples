#include "paned.h"

ExampleWindow::ExampleWindow()
: m_VPaned(Gtk::ORIENTATION_VERTICAL),
  m_button1("button 1"),
  m_button2("button 2")
{
  set_title ("Paned Windows");
  set_border_width(10);
  set_default_size(300, 300);

  /* Add a vpaned widget to our toplevel window */
  add(m_VPaned);

  /* Now add the contents of the two halves of the window */
  m_VPaned.add1(m_button1);
  m_VPaned.add2(m_button2);

  show_all_children();
}

ExampleWindow::~ExampleWindow()
{
}
