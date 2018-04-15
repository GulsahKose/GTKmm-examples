#include "checkbutton.h"
#include <iostream>

CheckButton::CheckButton()
: m_button("check button")
{
    set_title("checkbutton example");

    m_button.signal_clicked().connect( sigc::mem_fun(*this,
                &CheckButton::on_button_clicked) );

    m_button.set_margin_top(10);
    m_button.set_margin_bottom(10);
    m_button.set_margin_left(10);
    m_button.set_margin_right(10);

    add(m_button);
    show_all_children();
}

CheckButton::~CheckButton()
{
}

void CheckButton::on_button_clicked()
{
    std::cout << "The Button was clicked." << std::endl;
}
