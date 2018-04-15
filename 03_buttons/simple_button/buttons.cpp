#include "buttons.h"
#include <iostream>

Buttons::Buttons()
{
  m_button.add_pixlabel("info.xpm", "cool button");

  set_title("Pixmap'd buttons!");
  set_border_width(10);

  m_button.signal_clicked().connect( sigc::mem_fun(*this,
              &Buttons::on_button_clicked) );
  m_button.signal_pressed().connect( sigc::mem_fun(*this,
              &Buttons::button_pressed) );
  m_button.signal_released().connect( sigc::mem_fun(*this,
              &Buttons::button_released) );
  m_button.signal_enter().connect( sigc::mem_fun(*this,
              &Buttons::enter_notify) );
  m_button.signal_leave().connect( sigc::mem_fun(*this,
              &Buttons::leave_notify) );

  add(m_button);

  show_all_children();
}

Buttons::~Buttons()
{
}

void Buttons::on_button_clicked()
{
  std::cout << "The Button was clicked." << std::endl;
}

void Buttons::button_pressed()
{
  std::cout << "The Button was pressed." << std::endl;
}

void Buttons::button_released()
{
  std::cout << "The Button was released." << std::endl;
}

void Buttons::enter_notify()
{
  std::cout << "Mouse is on the button." << std::endl;
}

void Buttons::leave_notify()
{
  std::cout << "Mouse is not on the button." << std::endl;
}
