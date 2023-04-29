#pragma once
#include <string>

#include "serialib.h"

class Serial {
private:
  const char *m_port;
  int m_baudrate;
  int m_delay;
  serialib m_serialconnection;

public:
  Serial(const char *port, int baudrate, int delay);
  void closeSerial();
  int getSeral();
};