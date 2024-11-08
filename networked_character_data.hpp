#ifndef NETWORKED_CHARACTER_DATA_HPP
#define NETWORKED_CHARACTER_DATA_HPP

#include <cstdint>

enum class WeaponType { SniperRifle, RocketLauncher, LightningGun, ShotGun, GrenadeLauncher, Knife };

struct NetworkedCharacterData {
    uint64_t client_id;
    // cihtems: client_input_history_insertion_time_epoch_ms
    // it's possible to have this property as -1 if the server sends a
    // game update out before the first input has been processed for this player.
    uint64_t cihtems_of_last_server_processed_input_snapshot = -1;
    float character_x_position;
    float character_y_position;
    float character_z_position;
    float character_x_velocity;
    float character_y_velocity;
    float character_z_velocity;
    double camera_yaw_angle;
    double camera_pitch_angle;
    int health;
    WeaponType active_weapon;
};

#endif
