unsigned char max_byte(unsigned short number) {
    unsigned char byte1 = number & 0xFF; 
    unsigned char byte2 = (number >> 8) & 0xFF; 
    if ( byte1 > byte2) 
       return byte1;
    else 
        return byte2;
    
}