#line 145 "bits.c"
int bitXor(int x, int y) {
  return ~(x & y) & ~(~x & ~y);
#line 0 "<command-line>"
#include "/usr/include/stdc-predef.h"
#line 147 "bits.c"
}
#line 154
int tmin(void) {
  return 1 << 31;
}
#line 165
int isTmax(int x) {
  return !(~(x+1)^x) & !!(x + 1);
}
#line 176
int allOddBits(int x) {
  int mask=  0xAA |( 0xAA << 8) |( 0xAA << 16) |( 0xAA << 24);
  return !((x & mask) ^ mask);
}
#line 187
int negate(int x) {
  return ~x + 1;
}
#line 200
int isAsciiDigit(int x) {
  int cond0=  !((x >> 4) ^ 0x3);
  int cond1=(((  x & 0xF) +( ~0xA + 1)) >> 31) & 1;
  return cond0 & cond1;
}
#line 212
int conditional(int x, int y, int z) {
  x = !!x;
  x = ~x + 1;
  return (x & y) |( ~x & z);
}
#line 224
int isLessOrEqual(int x, int y) {


  int sx=(  x >> 31) & 1;
  int sy=(  y >> 31) & 1;
  int signDiff=  sx ^ sy;

  int diff=  y +( ~x + 1);
  int diffSign=(  diff >> 31) & 1;
  return (signDiff & sx) |(( ~signDiff) &( ~diffSign));
}
#line 244
int logicalNeg(int x) {
  return ((x |( ~x + 1)) >> 31) + 1;;
}
#line 259
int howManyBits(int x) {
  return 0;
}
#line 274
unsigned floatScale2(unsigned uf) {
  return 2;
}
#line 289
int floatFloat2Int(unsigned uf) {
  return 2;
}
#line 305
unsigned floatPower2(int x) {
    return 2;
}
