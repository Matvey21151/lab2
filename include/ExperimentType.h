// Copyright 2021 Matvey21151
#ifndef TEMPLATE_EXPERIMENTTYPE_H
#define TEMPLATE_EXPERIMENTTYPE_H
#include <string>
enum ExperimentType
{
  forward,
  reverse, _random };
std::string to_string(ExperimentType type);
#endif  // TEMPLATE_EXPERIMENTTYPE_H
