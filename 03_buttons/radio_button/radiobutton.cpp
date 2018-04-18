#include "radiobutton.h"
#include <iostream>

RadioButton::RadioButton()
{
    set_title("radiobutton example");

    m_rb1.signal_clicked().connect( sigc::mem_fun(*this,
                &RadioButton::on_button_clicked) );


  Gtk::RadioButton::Group group;
  Gtk::RadioButton* m_rb1 = Gtk::manage(new Gtk::RadioButton(group, "button1"));
  Gtk::RadioButton* m_rb2 = Gtk::manage(new Gtk::RadioButton(group, "button2"));
  Gtk::RadioButton* m_rb3 = Gtk::manage(new Gtk::RadioButton(group, "button3"));

    show_all_children();
}

RadioButton::~RadioButton()
{
}

void RadioButton::on_button_clicked()
{
    std::cout << "The Button was clicked." << std::endl;
}
