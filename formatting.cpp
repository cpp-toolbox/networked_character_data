#include "spdlog/fmt/ostr.h" // must be included
#include "formatting.hpp"

std::ostream &operator<<(std::ostream &os, const NetworkedCharacterData &data) {
    os << "Client ID: " << data.client_id << ",\n"
       << "Client Input History Insertion Time (epoch ms): " << data.cihtems_of_last_server_processed_input_snapshot
       << ",\n"
       << "Position: (" << data.character_x_position << ", " << data.character_y_position << ", "
       << data.character_z_position << "),\n"
       << "Velocity: (" << data.character_x_velocity << ", " << data.character_y_velocity << ", "
       << data.character_z_velocity << "),\n"
       << "Camera Yaw Angle: " << data.camera_yaw_angle << ",\n"
       << "Camera Pitch Angle: " << data.camera_pitch_angle << "\n";
    return os;
}
