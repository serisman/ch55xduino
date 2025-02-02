/*
 created by Deqing Sun for use with CH55xduino
 need SDCC 13402 or higher version
 */
#if !defined(NO_UART1)
#include "Arduino.h"

void Serial1_print_i_func(long i) {
    Print_print_i(Serial1_write, i);
}
void Serial1_print_ib_func(long i, __xdata uint8_t base) {
    Print_print_ib(Serial1_write, i, base);
}
void Serial1_print_u_func(unsigned long u) {
    Print_print_u(Serial1_write, u);
}
void Serial1_print_ub_func(unsigned long u, __xdata uint8_t base) {
    Print_print_ib(Serial1_write, u, base);
}
void Serial1_print_s_func(char * s) {
    Print_print_s(Serial1_write, s);
}
void Serial1_print_sn_func(char * s, __xdata uint8_t size) {
    Print_print_sn(Serial1_write, s, size);
}
#endif