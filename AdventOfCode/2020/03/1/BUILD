cc_library(
    name = "AOC20_03_1",
    srcs = glob(["src/*.cpp"]),
    hdrs = glob(["include/*.h"]),
    linkopts = ["-pthread"],
    strip_include_prefix = "include",
    visibility = ["//visibility:public"],
)

cc_test(
    name = "AOC20_03_1_test",
    srcs = glob(["test/*.cpp"]),
    deps = [
        "//AdventOfCode/2020/03/1:AOC20_03_1",
        "@gtest//:gtest_main",
    ],
    data = glob(["data/*.txt"]),
)

cc_binary(
    name = "AOC20_03_1_bin",
    deps = [
        "//AdventOfCode/2020/03/1:AOC20_03_1",
    ],
)
