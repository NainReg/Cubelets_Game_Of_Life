#include "cubelet.h"
#include <stdint.h>
#include "routing_table.h"

void setup() {
    set_flashlight(0);
    block_value = 0;
}

void loop() {
    uint8_t aux1 = get_block_value(1370425);
    uint8_t aux2 = get_block_value(1458486);
    //uint8_t aux3 = get_block_value(74227);
    //uint8_t aux4 = get_block_value(1364997);
    //uint8_t aux5 = get_block_value(1458286);
    //uint8_t aux6 = get_block_value(820396);
    //uint8_t aux7 = get_block_value(1370425);
    //uint8_t aux8 = get_block_value(1365097);
    // block_value = 1;
    
    if(aux1 == 1 && block_value == 0){
        set_flashlight(150);
        block_value = 1;
    } else if(aux2 == 1 && block_value == 1){
        set_flashlight(0);
        block_value = 0;
    }
    wait(500);
}