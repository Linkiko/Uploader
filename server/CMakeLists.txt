cmake_minimum_required(VERSION 3.12)

include("cmake/HunterGate.cmake")
HunterGate(
        URL "https://github.com/ruslo/hunter/archive/v0.19.111.tar.gz"
        SHA1 "683bdd1a56711abd24907973665f7f58f792ce5f"
)

project(server)

# Boost
hunter_add_package(Boost COMPONENTS program_options system filesystem)
find_package(Boost CONFIG REQUIRED program_options system filesystem)

set(CMAKE_CXX_STANDARD 14)

add_executable(server main.cpp)
target_link_libraries(${PROJECT_NAME} PUBLIC
        Boost::system
        Boost::filesystem
        Boost::program_options)
