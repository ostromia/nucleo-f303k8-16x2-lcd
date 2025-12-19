#ifndef __LCD_H
#define __LCD_H

void lcd_init();
void lcd_set_cursor(int x, int y);
void lcd_clear();
void lcd_write_string(char *string);

#endif
