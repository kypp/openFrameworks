set (MODULE_NAME openframeworks)

add_definitions(-DUNICODE)
if (NOT BUILD_SHARED_LIBS)
	add_definitions(-DPOCO_STATIC -DFREEIMAGE_LIB -DDISABLE_SOME_FLOATING_POINT)
endif (NOT BUILD_SHARED_LIBS)

include_directories (
	.
	graphics
	app
	sound
	utils
	communication
	video
	types
	math
	3d
	gl
	events)

file (GLOB INSTALL_HEADERS *.h 3d/*.h communication/*.h gl/*.h graphics/*.h math/*.h types/*.h utils/*.h addons/ofxNetwork/src/*.h addons/ofxXmlSettings/src/*.h app/*.h events/*.h)

include_directories (
	${FREETYPE_INCLUDE_DIR}
	${FREETYPE_INCLUDE_DIR}/freetype2
	${FREEIMAGE_INCLUDE_DIR}
	${GLEW_INCLUDE_DIR}
	${TESS2_INCLUDE_DIR}
	${POCO_INCLUDE_DIR}
	${GLFW_INCLUDE_DIR}
)

file (GLOB ${MODULE_NAME}_SRCS 3d/*.cpp app/*.cpp communication/*.cpp gl/*.cpp graphics/*.cpp math/*.cpp types/*.cpp utils/*.cpp addons/ofxNetwork/src/*.cpp addons/ofxXmlSettings/src/*.cpp addons/ofxXmlSettings/libs/*.cpp)

add_library (${MODULE_NAME} ${${MODULE_NAME}_SRCS})

install (TARGETS ${MODULE_NAME} 
		ARCHIVE DESTINATION lib 
		LIBRARY DESTINATION lib)

install (FILES ${INSTALL_HEADERS} DESTINATION include)