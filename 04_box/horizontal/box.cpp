#include "box.h"

BoxWindow::BoxWindow():
    m_button1("button1"),
    m_button2("button2"),
    m_Horizontal_Top_Box(Gtk::ORIENTATION_HORIZONTAL, 0),
    m_Horizontal_Box1(Gtk::ORIENTATION_HORIZONTAL, 0),
    m_Horizontal_Box2(Gtk::ORIENTATION_HORIZONTAL, 0)
{
    set_title("Horizontal Boxes");
    set_border_width(10);
    set_default_size(300, 350);

    add(m_Horizontal_Top_Box);

    m_Horizontal_Top_Box.pack_start(m_Horizontal_Box1);
    m_Horizontal_Top_Box.pack_start(m_Horizontal_Box2);

    m_Horizontal_Box1.pack_start(m_button1);
    m_Horizontal_Box2.pack_start(m_button2);

    show_all_children();
}

BoxWindow::~BoxWindow()
{
}
