

#include "hal_spi_driver.h"

/* Private functions */

static void hal_spi_enable(SPI_TypeDef *SPIx)
{
	
}

static void hal_spi_disable(SPI_TypeDef *SPIx)
{
	
}

static void hal_spi_configure_phase_polarity(SPI_TypeDef *SPIx, uint32_t phase, uint32_t polarity)
{
	
}

static void hal_spi_configure_device_mode(SPI_TypeDef *SPIx, uint32_t master)
{
	
}


static void hal_spi_configure_datasize(SPI_TypeDef *SPIx, uint32_t datasize_16,uint32_t lsbfirst)
{
	
}

static void hal_spi_configure_nss_master(SPI_TypeDef *SPIx, uint32_t datasize_16,uint32_t lsbfirst)
{
	
}

static void hal_spi_configure_nss_slave(SPI_TypeDef *SPIx, uint32_t datasize_16,uint32_t lsbfirst)
{
	
}


/* API exposed */
void hal_spi_init(spi_handle_t *spi_handle){
	
}


void hal_spi_master_tx(spi_handle_t *spi_handle, uint8_t *buffer, uint32_t len)
{
}
void hal_spi_master_rx(spi_handle_t *spi_handle, uint8_t *rcv_buffer, uint32_t len)
{
}
void hal_spi_slave_tx(spi_handle_t *spi_handle, uint8_t *buffer, uint32_t len)
{
}

void hal_spi_slave_rx(spi_handle_t *spi_handle, uint8_t *rcv_buffer, uint32_t len)
{
}
	
void hal_i2c_spi_irq_handler(spi_handle_t *hspi)
{
}
