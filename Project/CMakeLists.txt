cmake_minimum_required(VERSION 3.16)

project(Cpp_Project)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_CXX_STANDARD 17)

find_package(Qt6 REQUIRED COMPONENTS Widgets Network)

# -------------------------
# 公共目录
# -------------------------
include_directories(${CMAKE_SOURCE_DIR}/include)

# -------------------------
# 公共源文件（.cpp 和 .c）
# -------------------------
set(COMMON_SRCS
    db.cpp
    db_user.cpp
    db_record.cpp
    user_service.cpp
    record_service.cpp
    md5.cpp
    sqlite3.c
)

# =====================
# ① 后端服务器
# =====================
add_executable(server_app
    server_main.cpp
    ${COMMON_SRCS}
)

if (WIN32)
    target_link_libraries(server_app ws2_32)
endif()

# =====================
# ② Qt GUI 前端
# =====================

qt6_wrap_ui(UI_SOURCES
    loginpage.ui
)

qt_add_executable(gui_app
    main.cpp
    loginpage.cpp
    ApiService.cpp
    ${UI_SOURCES}
    ${COMMON_SRCS}
)
target_include_directories(gui_app PRIVATE
    ${CMAKE_CURRENT_BINARY_DIR}
    ${CMAKE_SOURCE_DIR}/include
)

target_link_libraries(gui_app PRIVATE Qt6::Widgets Qt6::Network)
