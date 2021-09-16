// vim: set et:

#include "m_ftdi/ftdi.h"

void ftdi_if_mpsse_init(struct ftdi_interface* itf) {
    (void)itf;
}
void ftdi_if_mpsse_deinit(struct ftdi_interface* itf) {
    (void)itf;
}
void ftdi_if_mpsse_set_baudrate(struct ftdi_interface* itf, uint32_t baudrate) {
    (void)itf; (void)baudrate;
}


void ftdi_if_mpsse_flush(struct ftdi_interface* itf) {
    (void)itf;
}
void ftdi_if_mpsse_wait_io(struct ftdi_interface* itf, bool level) {
    (void)itf; (void)level;
}

void ftdi_if_mpsse_set_dirval_lo(struct ftdi_interface* itf, uint8_t dir, uint8_t val) {
    (void)itf; (void)dir; (void)val;
}
void ftdi_if_mpsse_set_dirval_hi(struct ftdi_interface* itf, uint8_t dir, uint8_t val) {
    (void)itf; (void)dir; (void)val;
}
uint8_t ftdi_if_mpsse_read_lo(struct ftdi_interface* itf) {
    (void)itf;

    return 0;
}
uint8_t ftdi_if_mpsse_read_hi(struct ftdi_interface* itf) {
    (void)itf;

    return 0;
}
void ftdi_if_mpsse_loopback(struct ftdi_interface* itf, bool enable) {
    (void)itf; (void)enable;
}
void ftdi_if_mpsse_set_clkdiv(struct ftdi_interface* itf, uint16_t div) {
    (void)itf; (void)div;
}

uint8_t ftdi_if_mpsse_xfer_bits(struct ftdi_interface* itf, int flags, size_t nbits, uint8_t value) {
    (void)itf; (void)flags; (void)nbits; (void)value;

    return 0;
}
void ftdi_if_mpsse_xfer_bytes(struct ftdi_interface* itf, int flags, size_t nbytes, uint8_t* dst, const uint8_t* src) {
    (void)itf; (void)flags; (void)nbytes; (void)dst; (void)src;
}
uint8_t ftdi_if_mpsse_tms_xfer(struct ftdi_interface* itf, int flags, size_t nbits, uint8_t value) {
    (void)itf; (void)flags; (void)nbits; (void)value;

    return 0;
}

void ftdi_if_mpsse_div5(struct ftdi_interface* itf, bool enable) {
    (void)itf; (void)enable;
}
void ftdi_if_mpsse_data_3ph(struct ftdi_interface* itf, bool enable) {
    (void)itf; (void)enable;
}
void ftdi_if_mpsse_adaptive(struct ftdi_interface* itf, bool enable) {
    (void)itf; (void)enable;
}

void ftdi_if_mpsse_clockonly(struct ftdi_interface* itf, uint32_t cycles) {
    (void)itf; (void)cycles;
}
void ftdi_if_mpsse_clock_wait_io(struct ftdi_interface* itf, bool level) {
    (void)itf; (void)level;
}
void ftdi_if_mpsse_clockonly_wait_io(struct ftdi_interface* itf, bool level, uint32_t cycles) {
    (void)itf; (void)level; (void)cycles;
}
void ftdi_if_mpsse_hi_is_tristate(struct ftdi_interface* itf, uint16_t pinmask) {
    (void)itf; (void)pinmask;
}

