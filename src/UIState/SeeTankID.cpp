/**
 * SeeTankID.cpp
 */

#include "SeeTankID.h"

#include "Devices/EEPROM_TC.h"
#include "Devices/LiquidCrystal_TC.h"

void SeeTankID::start() {
  LiquidCrystal_TC::instance()->writeLine(prompt(), 0);
  char id[17];
  snprintf_P(id, sizeof(id), (PGM_P)F("%i"), EEPROM_TC::instance()->getTankID());
  LiquidCrystal_TC::instance()->writeLine(id, 1);
}
