/**
  ******************************************************************************
  * @file    asp_ssd1306
  * @author  ������
  * @date    2023-04-05
  * @brief   �ṩSSD1306 LED��Ļ��������
  *****************************************************************************/

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __asp_ssd1306_H
#define __asp_ssd1306_H

#include "common.h"

/* ssd1306��ʼ�� */
void asp_ssd1306_init(void);

/* �����Ļ */
void ssd1306_clear_screen(void);

/* ��ʾ�ַ��� */
void ssd1306_display_string(int x, int y, char* str);

#endif /* __asp_ssd1306_H */

/*********************************** END OF FILE ***********************************/
