#include "radiobutton.h"
#include <iostream>
using std::cout;
using std::endl;

RadioButton::RadioButton():
    m_Box(Gtk::ORIENTATION_VERTICAL),
    m_RadioButton1("button1"),
    m_RadioButton2("button2"),
    m_RadioButton3("button3")
{

    m_RadioButton2.join_group(m_RadioButton1);
    m_RadioButton3.join_group(m_RadioButton1);

    set_title("radiobutton example");

    m_Box.set_margin_top(20);
    m_Box.set_margin_bottom(20);
    m_Box.set_margin_left(20);
    m_Box.set_margin_right(20);

    // Put the radio buttons in Box:
    m_Box.pack_start(m_RadioButton1);
    m_Box.pack_start(m_RadioButton2);
    m_Box.pack_start(m_RadioButton3);

    add(m_Box);

    show_all_children();
}

RadioButton::~RadioButton()
{
}
