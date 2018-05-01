#include "scrolled.h"

ExampleWindow::ExampleWindow():
  m_Box(Gtk::ORIENTATION_VERTICAL, 0),
  m_button1("button1"),
  m_button2("button2"),
  m_button3("button3"),
  m_button4("button4")
{
  set_title("ScrolledWindow example");
  set_border_width(10);
  set_size_request(200, 100);

  m_ScrolledWindow.set_border_width(10);

  /* the policy is one of Gtk::POLICY AUTOMATIC, or Gtk::POLICY_ALWAYS.
   * Gtk::POLICY_AUTOMATIC will automatically decide whether you need
   * scrollbars, whereas Gtk::POLICY_ALWAYS will always leave the scrollbars
   * there.  The first one is the horizontal scrollbar, the second,
   * the vertical. */
  m_ScrolledWindow.set_policy(Gtk::POLICY_AUTOMATIC, Gtk::POLICY_ALWAYS);

  add(m_ScrolledWindow);

  m_Box.pack_start(m_button1);
  m_Box.pack_start(m_button2);
  m_Box.pack_start(m_button3);
  m_Box.pack_start(m_button4);

  m_ScrolledWindow.add(m_Box);

  show_all_children();
}

ExampleWindow::~ExampleWindow()
{
}
