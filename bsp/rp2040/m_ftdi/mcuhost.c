// vim: set et:

#include "m_ftdi/ftdi.h"

void ftdi_if_mcuhost_init(struct ftdi_interface* itf) {
    (void)itf;
}
void ftdi_if_mcuhost_deinit(struct ftdi_interface* itf) {
    (void)itf;
}
void ftdi_if_mcuhost_set_baudrate(struct ftdi_interface* itf, uint32_t baudrate) {
    (void)itf; (void)baudrate;
}

void ftdi_if_mcuhost_flush(struct ftdi_interface* itf) {
    (void)itf;
}
void ftdi_if_mcuhost_wait_io(struct ftdi_interface* itf, bool level) {
    (void)itf; (void)level;
}

uint8_t ftdi_if_mcuhost_read8(struct ftdi_interface* itf, uint8_t addr) {
    (void)itf; (void)addr;

    return 0;
}
uint8_t ftdi_if_mcuhost_read16(struct ftdi_interface* itf, uint16_t addr) {
    (void)itf; (void)addr;

    return 0;
}
void ftdi_if_mcuhost_write8(struct ftdi_interface* itf, uint8_t addr, uint8_t value) {
    (void)itf; (void)addr; (void)value;
}
void ftdi_if_mcuhost_write16(struct ftdi_interface* itf, uint16_t addr, uint8_t value) {
    (void)itf; (void)addr; (void)value;
}

