#include "main.h"
#include "gmock/gmock.h"
#include "gtest/gtest.h"
#include <fstream>

class CF1428B_BeltedRoomsTest
    : public testing::TestWithParam<std::pair<std::string, std::string>>
{
};

TEST_P(CF1428B_BeltedRoomsTest, BeltedRoomsTest)
{
    auto input_file = GetParam().first;
    auto expected_file = GetParam().second;
    std::ifstream input_ifs(input_file);
    std::ifstream expected_ifs(expected_file);
    std::stringstream output;

    Solve(input_ifs, output);

    for (std::string expected_line; std::getline(expected_ifs, expected_line);)
    {
        std::string output_line;
        std::getline(output, output_line);
        EXPECT_EQ(output_line, expected_line);
    }
}

// clang-format off
INSTANTIATE_TEST_CASE_P(
    CF1428B_BeltedRoomsTests, CF1428B_BeltedRoomsTest,
    ::testing::Values(std::make_pair("Codeforces/CF1428B/data/0_in.txt","Codeforces/CF1428B/data/0_out.txt"),
                      std::make_pair("Codeforces/CF1428B/data/1_in.txt","Codeforces/CF1428B/data/1_out.txt")));
// clang-format on

int main(int argc, char **argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
