#===============================================================================
#  Intel(R) CoFluent(TM) Studio - Intel Corporation
#  C++ Modeling Library for SystemC/TLM2 (SCL)
#===============================================================================
CMAKE_MINIMUM_REQUIRED(VERSION 2.6)
SET(CMAKE_CXX_COMPILER g++)
SET(CMAKE_C_COMPILER g++)
SET(CMAKE_C_COMPILER_FORCED TRUE)
PROJECT(sampleDemoApp)
if (CMAKE_CXX_COMPILER_VERSION VERSION_LESS 9.2)
    message(FATAL_ERROR "GCC version must be at least 9.2.")
endif()

# Options
# To give warning for Windows long path.
MESSAGE(WARNING "Please enable Windows long path support If you use Windows MinGW.")
# To enable MinGW on integration test on Cygwin system.
SET(DCMAKE_SH="CMAKE_SH-NOTFOUND")
SET(CMAKE_VERBOSE_MAKEFILE ON)
SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=gnu++11 -O2 -Wall -fmessage-length=100 -frtti -fexceptions -mthreads -Wno-deprecated -Wdeprecated-declarations -Wsign-compare -w")
SET(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -std=gnu++11 -O2 -Wall -fmessage-length=100 -fexceptions -mthreads -Wno-deprecated")
SET(CMAKE_CXX_LINK_FLAGS "${CMAKE_CXX_LINK_FLAGS} -mthreads")

# Definitions
add_definitions(-DCOFS_MODEL_TYPE_APPLICATION_MODELING=COFS_MODEL_TYPE_APPLICATION_MODELING)
add_definitions(-DCOFS_SOURCE_CODEGEN_SYSTEMC=COFS_SOURCE_CODEGEN_SYSTEMC)

INCLUDE(
    ListOfSources.cmake
)

# Header directories
INCLUDE_DIRECTORIES(
	"C:/IntelCoFluentStudio_v8.1.0/workspace/sampleDemo/sampleDemo/gen-sysc/sampleDemoApp/include"
	"C:/IntelCoFluentStudio_v8.1.0/plugins/com.cofluent.studio.scl.core_8.1.0.52/include/cofluent"
	"C:/IntelCoFluentStudio_v8.1.0/plugins/com.cofluent.studio.scl.core_8.1.0.52/include/systemc"
)

# Library directories
LINK_DIRECTORIES(
	"C:/IntelCoFluentStudio_v8.1.0/plugins/com.cofluent.studio.scl.accellera_8.1.0.52/lib/mingw-gcc-9.2.0"
	"C:/IntelCoFluentStudio_v8.1.0/plugins/com.cofluent.studio.mingw_8.1.0.52/mingw-gcc-9.2.0/lib"
	"C:/IntelCoFluentStudio_v8.1.0/plugins/com.cofluent.studio.mingw_8.1.0.52"
)

# Library directories
ADD_EXECUTABLE(
	sampleDemoApp
	${COFS_SOURCES}
)

# Library linked
TARGET_LINK_LIBRARIES(
	sampleDemoApp
	cofscl
	systemc
	coflm
	ws2_32
	lmgr11
)

SET_TARGET_PROPERTIES(sampleDemoApp PROPERTIES SUFFIX ".exe")

SET(EXECUTABLE_OUTPUT_PATH ".")


