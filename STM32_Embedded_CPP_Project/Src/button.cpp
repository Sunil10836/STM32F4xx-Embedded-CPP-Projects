/*
 * button.cpp
 *
 *  Created on: Nov 23, 2025
 *      Author: Sunil Sutar
 */

#include "button.hpp"


void Button::Button_Init()
{
	//Enable Clock for Port C
	GPIO::GPIO_ClockEnable(GPIOC);

	//Set Mode as Input
	GPIO::GPIO_SetMode(GPIOMode::INPUT);

	// Configure pull-up/pull-down : Select pull-up
	GPIO_PuPdConfig(GPIOPullType::PULL_UP);
}

bool Button::isPressed()
{
	return (! (port->IDR & (1 << pin)));
}

