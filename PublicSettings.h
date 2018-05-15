#pragma once
#ifndef PUBLICSETTINGS_H
#define PUBLICSETTINGS_H
#include "Product.hpp"
#include "Positions.hpp"
class PublicSettings{
  public:
  int GetNumberOfProducts();
  private:
  const int NumberOfProducts;
};

#endif