#include "aspectframe.h"

ExampleWindow::ExampleWindow()
: m_AspectFrame("2x1", /* label */
    Gtk::ALIGN_CENTER, /* center x */
    Gtk::ALIGN_CENTER, /* center y */
    2.0, /* xsize/ysize = 2 */
    false /* ignore child's aspect */),
  m_button("Button")
{
  set_default_size(200, 200);
  set_title("Aspect Frame");
  set_border_width(10);

  // Add a child widget to the aspect frame */
  // Ask for a 200x200 window, but the AspectFrame will give us a 200x100
  // window since we are forcing a 2x1 aspect ratio */
  m_AspectFrame.add(m_button);

  // Add the aspect frame to our toplevel window:
  add(m_AspectFrame);

  show_all_children();
}

ExampleWindow::~ExampleWindow()
{
}
