if(WIN32)
  execute_process(COMMAND bin2header.exe icon.png
    WORKING_DIRECTORY ${CMAKE_CURRENT_LIST_DIR}
    ENCODING UTF-8
  )
endif(WIN32)

if(LINUX)
  execute_process(COMMAND xxid -i icon.png > icon.png.h
    WORKING_DIRECTORY ${CMAKE_CURRENT_LIST_DIR}
    ENCODING UTF-8
  )
endif()

