#include "cubelet.h"
#include <stdint.h>
#include "routing_table.h"

void setup() {
    set_flashlight(0);
    block_value = 0;
    wait(500);
}

void loop() {
    uint8_t aux1 = get_block_value(1457307);
  //  uint8_t aux2 = get_block_value(1458538);
    //uint8_t aux3 = get_block_value(74227);
 //   uint8_t aux4 = get_block_value(1408211);
  //  uint8_t aux5 = get_block_value(923624);
 //   uint8_t aux6 = get_block_value(1458627);
//    uint8_t aux7 = get_block_value(820396);
    uint8_t aux8 = get_block_value(1458538);//1365097);//
    uint8_t aux9 = get_block_value(1365046);//
    
    uint8_t sum = aux1 + aux8 + aux9;
    if(sum == 3 && block_value == 0){
        set_flashlight(30);
        block_value = 1;
    } else if(sum > 3 && block_value == 1){
        set_flashlight(0);
        block_value = 0;
    } else if(sum <= 1 && block_value == 1){
        set_flashlight(0);
        block_value = 0;
    } else if((sum == 2 || sum == 3) && block_value == 1){
        set_flashlight(30);
        block_value = 1;
    }
    wait(500);
}
