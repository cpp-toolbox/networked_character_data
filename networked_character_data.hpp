#ifndef NETWORKED_CHARACTER_DATA_HPP
#define NETWORKED_CHARACTER_DATA_HPP

#include <cstdint>

struct NetworkedCharacterData {
    uint64_t client_id;
    // cihtems: client_input_history_insertion_time_epoch_ms
    int cihtems_of_last_server_processed_input_snapshot;
    float character_x_position;
    float character_y_position;
    float character_z_position;
    double camera_yaw_angle;
    double camera_pitch_angle;
};

#endif
