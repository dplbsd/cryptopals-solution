#include <iostream>
#include <algorithm>
#include <map>
#include <string>
#include <vector>
#include <cmath>
#include <cctype>
#include <stdint.h>

#include <stdio.h>
#include <assert.h>

#include "Utils.h"

using namespace std;

string& Utils::hexToBase64(string& s) {
    ByteStream *raw = hexToByteStream(s);
    std::string ret = byteStreamToBase64(raw);
    return ret;
}

string& Utils::base64ToHex(string& s) {
    ByteStream *raw = base64ToByteStream(s);
    std::string ret = byteStreamToHex(raw);
    return ret;
}

ByteStream * Utils::hexToByteStream(string &s) {
    // // XXX There should be a better way, consider using something similar to
    // // Java's Optional<>, or Maybe from Haskell
    // assert(intput.length() % 2 == 0);
    // ByteStream *bytes = new ByteStream;

    // transform(s.begin(), s.end(), s.begin(), ::tolower);
    // for (int i = 0; i < s.size(); i+=2) {
    //     uint8_t w = hexValues.at((char)s[i])<<4| hexValues.at((char)s[i+1]);
    //     bytes->push_back(w);
    // }
    // return bytes;
    return new ByteStream;
}

ByteStream * Utils::base64ToByteStream(std::string&) {
    return new ByteStream;
}

std::string Utils::byteStreamToBase64(ByteStream* raw) {
    // size_t ntriplets = (size_t)ceil(intput.length( )/ 3);
    // uint16_t lackingchars = input.length() % 3;

    // // Separate triplets into sets of four symbols.
    // for (size_t i = 0; i < ntriplets; i++)
    // {
    //     // Get the symbols.
    //     if (i == ntriplets - 1) {
    //         // We'll have to add "=" as required
    //         printf("Last iteration!\n");
    //     } else {
    //         uint64_t data = s[i*1]|s[i*2]|s[i*3];
    //         printf("Triplet: 0x%x, (int)%lu\n", data, data);
    //         // Get the 4 symbols, separating 64 bits in 4 6-bits ints
    //         uint8_t first = (uint8_t)((data & byteSel[0]) >> 56);
    //         printf("%x\n", first);
    //         // uint8_t second = 
    //         // uint8_t third = 
    //         // uint8_t fourth = 
    //     }

    //     // cout << data << endl;
    //     // cout << "    " << (char)s[i*1] << " " << (char)s[i*2] << 
    //         // " " << (char)s[i*3] << " " << endl;
    // }
    return "";
}

std::string Utils::byteStreamToHex(ByteStream* raw) {
    return "";
}


