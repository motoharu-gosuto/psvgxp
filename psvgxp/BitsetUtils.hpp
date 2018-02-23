#pragma once

#include <cstdint>

template<std::uint8_t>
struct NbitsToMask
{
};

template<>
struct NbitsToMask<1>
{
   static const std::uint8_t mask = 0x1;
   static const std::uint8_t size = 0x1;
};

template<>
struct NbitsToMask<2>
{
   static const std::uint8_t mask = 0x3;
   static const std::uint8_t size = 0x2;
};

template<>
struct NbitsToMask<3>
{
   static const std::uint8_t mask = 0x7;
   static const std::uint8_t size = 0x3;
};

template<>
struct NbitsToMask<4>
{
   static const std::uint8_t mask = 0xF;
   static const std::uint8_t size = 0x4;
};

template<>
struct NbitsToMask<5>
{
   static const std::uint8_t mask = 0x1F;
   static const std::uint8_t size = 0x5;
};

template<>
struct NbitsToMask<6>
{
   static const std::uint8_t mask = 0x3F;
   static const std::uint8_t size = 0x6;
};

template<>
struct NbitsToMask<7>
{
   static const std::uint8_t mask = 0x7F;
   static const std::uint8_t size = 0x7;
};

template<>
struct NbitsToMask<8>
{
   static const std::uint8_t mask = 0xFF;
   static const std::uint8_t size = 0x8;
};

namespace _util
{
   template<typename... Targs>
   struct SumBitsInternal;

   template<typename T>
   struct SumBitsImpl
   {
      static const std::uint8_t value = T::size;
   };

   template<typename T, typename... V>
   struct SumBitsHelper
   {
       static const std::uint8_t result = SumBitsImpl<T>::value + SumBitsInternal<V...>::result;
   };

   template<typename... Targs>
   struct SumBitsInternal
   {
      static const std::uint8_t result = SumBitsHelper<Targs...>::result;
   };

   template<>
   struct SumBitsInternal<>
   {
      static const std::uint8_t result = 0;
   };
}

template<typename... Targs>
struct SumBits
{
   static const std::uint8_t result = _util::SumBitsInternal<Targs...>::result;
};

template<>
struct SumBits<>
{
   static const std::uint8_t result = 0;
};