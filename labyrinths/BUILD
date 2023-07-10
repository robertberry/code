
cc_binary(
    name = "labyrinths",
    srcs = ["labyrinths.cc"],
    deps = [
        ":parser",
        ":vec2i",
        ":world"
    ]
)

cc_library(
    name = "parser",
    hdrs = ["parser.h"],
    srcs = ["parser.cc"]
)    

cc_library(
    name = "vec2i",
    hdrs = ["vec2i.h"]
)

cc_library(
    name = "world",
    hdrs = ["world.h"],
    srcs = ["world.cc"],
    deps = [
        ":vec2i"
    ]
)
