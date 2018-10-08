#ifndef MESSAGE_TYPES_HPP
#define MESSAGE_TYPES_HPP
#include <cstdint>

enum class MessageType : uint16_t {
    VersionRequest = 0,
    VersionResponse = 1,
    LoginRequest = 2,
    LoginResponse = 3,
    RegisterRequest = 4,
    RegisterResponse = 5,
    PlayerMove = 6,
    OtherPlayerMove = 7,
    PlayerStop = 8,
    OtherPlayerStop = 9,
    PlayerJoin = 10,
    PlayerLeave = 11,
    PlayersRequest = 12,
    PlayersResponse = 13,
};

#endif
