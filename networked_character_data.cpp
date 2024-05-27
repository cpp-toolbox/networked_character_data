#include "networked_character_data.hpp"
// Overload the stream insertion operator for NetworkedCharacterData
std::ostream &operator<<(std::ostream &os, const NetworkedCharacterData &data) {
    os << "NetworkedCharacterData{"
       << "client_id: " << data.client_id
       << ", cihtems_of_last_server_processed_input_snapshot: " << data.cihtems_of_last_server_processed_input_snapshot
       << ", character_x_position: " << data.character_x_position
       << ", character_y_position: " << data.character_y_position
       << ", character_z_position: " << data.character_z_position
       << ", character_x_velocity: " << data.character_x_velocity
       << ", character_y_velocity: " << data.character_y_velocity
       << ", character_z_velocity: " << data.character_z_velocity << ", camera_yaw_angle: " << data.camera_yaw_angle
       << ", camera_pitch_angle: " << data.camera_pitch_angle << "}";
    return os;
}
