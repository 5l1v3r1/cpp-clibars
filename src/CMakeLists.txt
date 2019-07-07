
add_library(${PROJECT_NAME} SHARED clibars.cpp)

install(TARGETS ${PROJECT_NAME}
    LIBRARY DESTINATION lib
)