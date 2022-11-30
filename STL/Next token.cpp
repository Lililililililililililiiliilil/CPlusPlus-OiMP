#include "string_view"

bool NextToken(std::string_view& sv, char delimiter, std::string_view &token) {
    if (sv.empty()) {
        return false;
    }

    auto position = sv.find(delimiter);
    if (position != std::string_view::npos) {
        token = sv.substr(0, position);
        sv.remove_prefix(position + 1);
    } else {
        token = sv;
        sv.remove_prefix(sv.size());
    }
    return true;
}
