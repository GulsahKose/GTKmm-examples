#include "togglebutton.h"
#include <iostream>

ToggleButton::ToggleButton()
: m_button("toggle button")
{
    set_title("togglebutton example");
  
    m_button.signal_clicked().connect( sigc::mem_fun(*this,
                &ToggleButton::on_button_clicked) );
  
    m_button.set_margin_top(10);
    m_button.set_margin_bottom(10);
    m_button.set_margin_left(10);
    m_button.set_margin_right(10);
  
    add(m_button);
    show_all_children();
}

ToggleButton::~ToggleButton()
{
}

void ToggleButton::on_button_clicked()
{
    std::cout << "The Button was clicked." << std::endl;
}
