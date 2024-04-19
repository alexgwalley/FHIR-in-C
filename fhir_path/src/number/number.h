#ifndef FP_NUMBER_H
#define FP_NUMBER_H

namespace native_fhir
{

 enum class NumberType
 {
  Unknown,
  Integer,
  Decimal,
 };

 typedef struct Number Number;
 struct Number
 {
  NumberType type;
  String8 quantity;
  String8 unit;

  union
  {
   S64 s64;
   Decimal decimal;
  };

  static Number FromString(String8 str);

  static Decimal AsDecimal(Number const& num);

  /*
  NOTE(agw): The FHIR Path implicit/explicit conversion table
  states that an Integer can become a Decimal, but there is no defined
  conversion from a Decimal to an Integer
  */

  bool operator==(Number const& num);
  bool operator>(Number const& num);

  Number operator+(Number const& num);
  Number operator-(Number const& num);
  
  Number operator*(Number const& num);
  Number operator/(Number const& num);

  Number operator%(Number const& num);

 };

};

#endif