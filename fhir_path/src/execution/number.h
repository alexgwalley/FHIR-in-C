#ifndef FP_NUMBER_H
#define FP_NUMBER_H

namespace native_fhir
{

 enum NumberType
 {
  Number_Unknown,
  Number_Integer,
  Number_Decimal,
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

  static Decimal
  AsDecimal(Number const& num)
  {
   if (num.type == Number_Integer)
   {
    return DecimalFromInt(num.s64);
   }
   return num.decimal;
  }

  /*
  NOTE(agw): The FHIR Path implicit/explicit conversion table
  states that an Integer can become a Decimal, but there is no defined
  conversion from a Decimal to an Integer
  */

  bool operator==(Number const& num)
  {
   if (this->type == num.type && this->type == Number_Integer)
   {
    return this->s64 == num.s64;
   }

   return DecimalEqual(AsDecimal(*this), AsDecimal(num));
  }

  bool operator>(Number const& num)
  {
   if (this->type == num.type && this->type == Number_Integer)
   {
    return this->s64 > num.s64;
   }

   return DecimalCompare(AsDecimal(*this), AsDecimal(num)) > 0;
  }

  Number operator+(Number const& num)
  {
   Number ret = {};

   if (this->type == num.type && this->type == Number_Integer)
   {
    ret.type = Number_Integer;
     ret.s64 = this->s64 + num.s64;
   }
   else
   {
    ret.type = Number_Decimal;
    ret.decimal = DecimalAdd(AsDecimal(*this), AsDecimal(num));
   }

   return ret;
  }

  Number operator-(Number const& num)
  {
   Number ret = {};
   if (this->type == num.type && this->type == Number_Integer)
   {
    ret.type = Number_Integer;
     ret.s64 = this->s64 - num.s64;
   }
   else
   {
    ret.type = Number_Decimal;
    ret.decimal = DecimalSub(AsDecimal(*this), AsDecimal(num));
   }

   return ret;
  }

  Number operator*(Number const& num)
  {
   Number ret = {};
   if (this->type == num.type && this->type == Number_Integer)
   {
    ret.type = Number_Integer;
    ret.s64 = this->s64 * num.s64;
   }
   else
   {
    ret.type = Number_Decimal;
    ret.decimal = DecimalMul(AsDecimal(*this), AsDecimal(num));
   }

   return ret;
  }

  Number operator/(Number const& num)
  {
   Number ret = {};

   if (this->type == num.type && this->type == Number_Integer)
   {
    ret.type = Number_Integer;
    ret.s64 = this->s64 / num.s64;
   }
   else
   {
    ret.type = Number_Decimal;
    ret.decimal = DecimalDiv(AsDecimal(*this), AsDecimal(num));
   }

   return ret;
  }

  Number operator%(Number const& num)
  {
   Number ret = {};

   if (this->type == num.type && this->type == Number_Integer)
   {
    ret.type = Number_Integer;
    ret.s64 = this->s64 % num.s64;
   }
   else
   {
    ret.type = Number_Decimal;
    ret.decimal = DecimalMul(AsDecimal(*this), AsDecimal(num));
   }

   return ret;
  }


 };

};

#endif