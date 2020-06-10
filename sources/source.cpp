// Copyright 2020 CrestoniX

#include "Enumeration.hpp"

void enumeration() {
    static const std::string str = "0000";
    while (true) {
        std::string rand = std::to_string(std::rand());
        std::string hash = picosha2::hash256_hex_string(rand);

        if (hash.substr(hash.size() - str.size()) == str) {
            BOOST_LOG_TRIVIAL(info) << "Found correct value '" << rand
            << "' with hash '" << hash << "'";
        } else {
            BOOST_LOG_TRIVIAL(trace) << "Current value '" << rand
            << "' with hash '" << hash << "'";
        }
    }
}

