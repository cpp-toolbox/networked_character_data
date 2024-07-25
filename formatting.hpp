#ifndef NETWORKED_NETWORKED_CHARACTER_DATA_FORMATTING
#define NETWORKED_NETWORKED_CHARACTER_DATA_FORMATTING

#include "networked_character_data.hpp"
#include "spdlog/fmt/ostr.h" // must be included
#include "spdlog/sinks/stdout_sinks.h"
#include "spdlog/spdlog.h"

std::ostream &operator<<(std::ostream &os, const NetworkedCharacterData &snapshot);

// fmt v10 and above requires `fmt::formatter<T>` extends
// `fmt::ostream_formatter`. See: https://github.com/fmtlib/fmt/issues/3318
template<>
struct fmt::formatter<NetworkedCharacterData> : fmt::ostream_formatter {
};

#endif //NETWORKED_NETWORKED_CHARACTER_DATA_FORMATTING
