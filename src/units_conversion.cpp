 /* WARNING - DO NOT EDIT FILE - FILE IS AUTO GENERATED BY FUNCTIONS2CPP.PL*/
  /***************************************************************************
  *
  * Project:  OpenCPN
  * Purpose:  ROUTE Plugin
  * Author:   SaltyPaws
  *
  ***************************************************************************
  *   Copyright (C) 2012 by Brazil BrokeTail                                *
  *   $EMAIL$                                                               *
  *                                                                         *
  *   This program is free software; you can redistribute it and/or modify  *
  *   it under the terms of the GNU General Public License as published by  *
  *   the Free Software Foundation; either version 2 of the License, or     *
  *   (at your option) any later version.                                   *
  *                                                                         *
  *   This program is distributed in the hope that it will be useful,       *
  *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
  *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
  *   GNU General Public License for more details.                          *
  *                                                                         *
  *   You should have received a copy of the GNU General Public License     *
  *   along with this program; if not, write to the                         *
  *   Free Software Foundation, Inc.,                                       *
  *   59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.             *
  ***************************************************************************
  */

#include "units_conversion.h"
Units_Conversion::Units_Conversion(void)
{

this->m_Unit.Add(_("Degree (\u00b0)"));
this->m_Unit_category.Add(_("Angle"));
this->m_Conversion.Add(_("1"));
this->m_Display.Add(_("TRUE"));

this->m_Unit.Add(_("Radians"));
this->m_Unit_category.Add(_("Angle"));
this->m_Conversion.Add(_("VAR/dtr=VAR*dtr"));
this->m_Display.Add(_("TRUE"));

this->m_Unit.Add(_("Degree"));
this->m_Unit_category.Add(_("Angle"));
this->m_Conversion.Add(_("1"));
this->m_Display.Add(_("FALSE"));

this->m_Unit.Add(_("Meter"));
this->m_Unit_category.Add(_("Distance"));
this->m_Conversion.Add(_("1"));
this->m_Display.Add(_("TRUE"));

this->m_Unit.Add(_("Nautical Miles"));
this->m_Unit_category.Add(_("Distance"));
this->m_Conversion.Add(_("1852"));
this->m_Display.Add(_("TRUE"));

this->m_Unit.Add(_("inch"));
this->m_Unit_category.Add(_("Distance"));
this->m_Conversion.Add(_("0.0254"));
this->m_Display.Add(_("TRUE"));

this->m_Unit.Add(_("feet"));
this->m_Unit_category.Add(_("Distance"));
this->m_Conversion.Add(_("0.3048"));
this->m_Display.Add(_("TRUE"));

this->m_Unit.Add(_("kilometer"));
this->m_Unit_category.Add(_("Distance"));
this->m_Conversion.Add(_("1000"));
this->m_Display.Add(_("TRUE"));

this->m_Unit.Add(_("foot"));
this->m_Unit_category.Add(_("Distance"));
this->m_Conversion.Add(_("0.3048"));
this->m_Display.Add(_("FALSE"));

this->m_Unit.Add(_("Fathom"));
this->m_Unit_category.Add(_("Distance"));
this->m_Conversion.Add(_("1.8288"));
this->m_Display.Add(_("FALSE"));

this->m_Unit.Add(_("m/s"));
this->m_Unit_category.Add(_("Speed"));
this->m_Conversion.Add(_("1"));
this->m_Display.Add(_("TRUE"));

this->m_Unit.Add(_("Knots"));
this->m_Unit_category.Add(_("Speed"));
this->m_Conversion.Add(_("0.514444"));
this->m_Display.Add(_("TRUE"));

this->m_Unit.Add(_("km/h"));
this->m_Unit_category.Add(_("Speed"));
this->m_Conversion.Add(_("0.277778"));
this->m_Display.Add(_("TRUE"));

this->m_Unit.Add(_("Celsius"));
this->m_Unit_category.Add(_("Temperature"));
this->m_Conversion.Add(_("1"));
this->m_Display.Add(_("TRUE"));

this->m_Unit.Add(_("Kelvin"));
this->m_Unit_category.Add(_("Temperature"));
this->m_Conversion.Add(_("VAR - 273.15=VAR + 273.15"));
this->m_Display.Add(_("TRUE"));

this->m_Unit.Add(_("Fahrenheit"));
this->m_Unit_category.Add(_("Temperature"));
this->m_Conversion.Add(_("(5/9) * (VAR - 32)=((9/5)* VAR)+32"));
this->m_Display.Add(_("TRUE"));

this->m_Unit.Add(_("Rankine"));
this->m_Unit_category.Add(_("Temperature"));
this->m_Conversion.Add(_("(5/9)*(VAR-491.67)=(9/5)*(VAR + 273.15)"));
this->m_Display.Add(_("TRUE"));

this->m_Unit.Add(_("m3/s"));
this->m_Unit_category.Add(_("Flowrate"));
this->m_Conversion.Add(_("1"));
this->m_Display.Add(_("TRUE"));

this->m_Unit.Add(_("US gallons per minute"));
this->m_Unit_category.Add(_("Flowrate"));
this->m_Conversion.Add(_("15850.3231"));
this->m_Display.Add(_("TRUE"));

this->m_Unit.Add(_("liter per minute"));
this->m_Unit_category.Add(_("Flowrate"));
this->m_Conversion.Add(_("60000"));
this->m_Display.Add(_("TRUE"));

this->m_Unit.Add(_("Seconds"));
this->m_Unit_category.Add(_("Time"));
this->m_Conversion.Add(_("1"));
this->m_Display.Add(_("TRUE"));

this->m_Unit.Add(_("Minutes"));
this->m_Unit_category.Add(_("Time"));
this->m_Conversion.Add(_("60"));
this->m_Display.Add(_("TRUE"));

this->m_Unit.Add(_("Hours"));
this->m_Unit_category.Add(_("Time"));
this->m_Conversion.Add(_("3600"));
this->m_Display.Add(_("TRUE"));

this->m_Unit.Add(_("Newton"));
this->m_Unit_category.Add(_("Force"));
this->m_Conversion.Add(_("1"));
this->m_Display.Add(_("TRUE"));

this->m_Unit.Add(_("lbs"));
this->m_Unit_category.Add(_("Force"));
this->m_Conversion.Add(_("4.4482216"));
this->m_Display.Add(_("TRUE"));

this->m_Unit.Add(_("Square meter"));
this->m_Unit_category.Add(_("Area"));
this->m_Conversion.Add(_("1"));
this->m_Display.Add(_("TRUE"));

this->m_Unit.Add(_("Square feet"));
this->m_Unit_category.Add(_("Area"));
this->m_Conversion.Add(_("0.092903"));
this->m_Display.Add(_("TRUE"));

this->m_Unit.Add(_("Square cm"));
this->m_Unit_category.Add(_("Area"));
this->m_Conversion.Add(_("0.0001"));
this->m_Display.Add(_("TRUE"));

this->m_Unit.Add(_("Centimeter"));
this->m_Unit_category.Add(_("Distance"));
this->m_Conversion.Add(_("0.01"));
this->m_Display.Add(_("TRUE"));

this->m_Unit.Add(_("bar"));
this->m_Unit_category.Add(_("Pressure"));
this->m_Conversion.Add(_("1"));
this->m_Display.Add(_("TRUE"));

this->m_Unit.Add(_("bara"));
this->m_Unit_category.Add(_("Pressure"));
this->m_Conversion.Add(_("1"));
this->m_Display.Add(_("TRUE"));

this->m_Unit.Add(_("barg"));
this->m_Unit_category.Add(_("Pressure"));
this->m_Conversion.Add(_("VAR-1=VAR+1"));
this->m_Display.Add(_("TRUE"));

this->m_Unit.Add(_("psia"));
this->m_Unit_category.Add(_("Pressure"));
this->m_Conversion.Add(_("0.0689475729"));
this->m_Display.Add(_("TRUE"));

this->m_Unit.Add(_("psi"));
this->m_Unit_category.Add(_("Pressure"));
this->m_Conversion.Add(_("0.0689475729"));
this->m_Display.Add(_("FALSE"));

this->m_Unit.Add(_("kPa"));
this->m_Unit_category.Add(_("Pressure"));
this->m_Conversion.Add(_("0.01"));
this->m_Display.Add(_("TRUE"));

this->m_Unit.Add(_("Pa"));
this->m_Unit_category.Add(_("Pressure"));
this->m_Conversion.Add(_("1e-05"));
this->m_Display.Add(_("TRUE"));

this->m_Unit.Add(_("Inches of Mercury"));
this->m_Unit_category.Add(_("Pressure"));
this->m_Conversion.Add(_("0.03386"));
this->m_Display.Add(_("TRUE"));

this->m_Unit.Add(_("mBar"));
this->m_Unit_category.Add(_("Pressure"));
this->m_Conversion.Add(_("0.001"));
this->m_Display.Add(_("TRUE"));

this->m_Unit.Add(_("atm"));
this->m_Unit_category.Add(_("Pressure"));
this->m_Conversion.Add(_("0.987"));
this->m_Display.Add(_("TRUE"));

this->m_Unit.Add(_("mmHg"));
this->m_Unit_category.Add(_("Pressure"));
this->m_Conversion.Add(_("750.06"));
this->m_Display.Add(_("TRUE"));

this->m_Unit.Add(_("kg"));
this->m_Unit_category.Add(_("Weight"));
this->m_Conversion.Add(_("1"));
this->m_Display.Add(_("2"));

this->m_Unit.Add(_("Lbs (weight)"));
this->m_Unit_category.Add(_("Weight"));
this->m_Conversion.Add(_("2.20462"));
this->m_Display.Add(_("3"));

this->m_Unit.Add(_("gram"));
this->m_Unit_category.Add(_("Weight"));
this->m_Conversion.Add(_("0.001"));
this->m_Display.Add(_("4"));

this->m_Unit.Add(_("kg/m3"));
this->m_Unit_category.Add(_("Density"));
this->m_Conversion.Add(_("1"));
this->m_Display.Add(_("TRUE"));

this->m_Unit.Add(_("kg/liter"));
this->m_Unit_category.Add(_("Density"));
this->m_Conversion.Add(_("0.001"));
this->m_Display.Add(_("TRUE"));

 //End Class

}