// Copyright (c) 2018-2019, The TurtleCoin Developers
// Copyright (c) 2020, The traaittPlatform Developers

// Please see the included LICENSE file for more information
#pragma once




#include <string>

const std::string nonwindowsAsciiArt = "\n                                                                      \n"
"$$$$TRAAITTPLATFORM CLIENT $$$$$$$$$$$$$$|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n"
"$$$$$$$$$888888888$$$$$$$$$  $$    $$                                |2020 - TODAY||||████||||||||||||\n"
"$$$$       8888   $$$    $$$  $$  $$ CCCC U U RRR RRR EEE N N CCC Y Y||||||||||||||||█ETRX█|||||||||||\n"
"$$$$$$$$   8888   $$$    $$$   $$$$  CC   U U RR  RR  E   NNN C    Y ||||||||||||||██████████|||||||||\n"
"$$$$       8888   $$$$$$$$$   $$  $$ CCCC UUU RRR RRR EEE N N CCC  Y |||||||||||||████████████||||||||\n"
"$$$$$$$$$$ 8888   $$$    $$$ $$    $$                                ||||||||||||██████████████|||||||\n"
"$$$$$$$$$$ 8888   $$$     $$$$$$$$$$$$$$ HTTPS://TRAAITTPLATFORM.COM |||||||||||████████████████||||||\n"
"||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||C|O|P|Y|RI|G|H|T||||||||||||||||\n";

const std::string windowsAsciiArt ="\n\n"
"$$$$TRAAITTPLATFORM CLIENT $$$$$$$$$$$$$$||||||||||||||||||||||||||||||||||||||||||C|O|P|Y|RI|G|H|T||||||||||\n"
"$$$$$$$$$888888888$$$$$$$$$  $$    $$                                |2020 - TODAY|||||||||||||||||||||||||||\n"
"$$$$       8888   $$$    $$$  $$  $$ CCCC U U RRR RRR EEE N N CCC Y Y||||||||||||||||||||||||||||||||||||||||\n"
"$$$$$$$$   8888   $$$    $$$   $$$$  CC   U U RR  RR  E   NNN C    Y ||||||||||||||||||||||||||||||||||||||||\n"
"$$$$       8888   $$$$$$$$$   $$  $$ CCCC UUU RRR RRR EEE N N CCC  Y ||||||||||||||||||||||||||||||||||||||||\n"
"$$$$$$$$$$ 8888   $$$    $$$ $$    $$                                ||||||||||||||||||||||||||||||||||||||||\n"
"$$$$$$$$$$ 8888   $$$     $$$$$$$$$$$$$$ HTTPS://TRAAITTPLATFORM.COM ||||||||||||||||||||||||||||||||||||||||\n"
"|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n";

#ifdef _WIN32

const std::string asciiArt = windowsAsciiArt;

#else
const std::string asciiArt = nonwindowsAsciiArt;
#endif
