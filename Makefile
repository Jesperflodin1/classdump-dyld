GO_EASY_ON_ME=1
#TARGET = macosx
export TARGET = iphone:clang:9.3:9.3
export ARCHS=arm64
include $(THEOS)/makefiles/common.mk
TOOL_NAME = classdump-dyld
classdump-dyld_FILES = main.xm
classdump-dyld_LDFLAGS = -Wl,-segalign,0x4000

include $(THEOS_MAKE_PATH)/tool.mk

include $(THEOS_MAKE_PATH)/library.mk

SUBPROJECTS += classdumpdyldlib
include $(THEOS_MAKE_PATH)/aggregate.mk

