CXX := clang++
BREW_PREFIX := $(shell brew --prefix)

CPPFLAGS := -I$(BREW_PREFIX)/include
CXXFLAGS := -std=c++17 -Wall -Wextra
LDFLAGS := -L$(BREW_PREFIX)/lib -Wl,-rpath,$(BREW_PREFIX)/lib
LDLIBS := -lmatplot

CompPhyHW1: CompPhyHW1.cxx
	$(CXX) $(CPPFLAGS) $(CXXFLAGS) $< -o $@ $(LDFLAGS) $(LDLIBS)

.PHONY: clean
clean:
	rm -f CompPhyHW1
