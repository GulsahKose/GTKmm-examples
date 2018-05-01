#include "frame.h"

ExampleWindow::ExampleWindow()
{
 /* Set some window properties */
  set_title("Frame Example");
  set_size_request(300, 300);

  /* Sets the border width of the window. */
  set_border_width(10);

  add(m_Frame);

  /* Set the frames label */
  m_Frame.set_label("Frame label");

  /* Align the label at the right of the frame
   * for xalign and yalign following parameters can be used
   * Gtk::ALIGN_START
   * Gtk::ALIGN_CENTER
   * Gtk::ALIGN_END
   */
  // m_Frame.set_label_align(Gtk::ALIGN_CENTER, Gtk::ALIGN_CENTER);

  /* Set the style of the frame
   * SHADOW_NONE 
   * SHADOW_IN
   * SHADOW_OUT
   * SHADOW_ETCHED_IN 
   * SHADOW_ETCHED_OUT    
   */
  m_Frame.set_shadow_type(Gtk::SHADOW_ETCHED_OUT);

  show_all_children();
}

ExampleWindow::~ExampleWindow()
{
}
