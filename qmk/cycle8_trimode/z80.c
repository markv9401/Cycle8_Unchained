/* Copyright 2022 Jacky
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#include "quantum.h"



void keyboard_post_init_kb(void)
 {
    AFIO->MAPR = (AFIO->MAPR & ~AFIO_MAPR_SWJ_CFG_Msk);
    AFIO->MAPR|= AFIO_MAPR_SWJ_CFG_DISABLE;
    setPinOutput(B3);
    writePinLow(B3);
    setPinOutput(A14);
    writePinLow(A14);
    setPinOutput(A13);
    writePinLow(A13);
    setPinOutput(A8);
    writePinHigh(A8);
    setPinInput(A15);
    setPinOutput(A5);
    writePinLow(A5);
    setPinOutput(B15);    
    writePinLow(B15);  
}

