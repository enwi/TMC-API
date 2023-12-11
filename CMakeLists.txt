# Note this component will get registered as `TMC-API`, because this CMakeLists.txt file resides inside the folder `TMC-API`

idf_component_register(
    SRC_DIRS
        "tmc/helpers"
        "tmc/ic/MAX22216"
        "tmc/ic/TMC43xx"
        "tmc/ic/TMC262"
        "tmc/ic/TMC389"
        # "tmc/ic/TMC424" # Incomplete -> issues with SPI, code issues
        # "tmc/ic/TMC429" # Incomplete -> issues with SPI, code issues
        # "tmc/ic/TMC457" # Incomplete -> issues with SPI, code issues
        "tmc/ic/TMC846x"
        "tmc/ic/TMC2130"
        "tmc/ic/TMC2160"
        "tmc/ic/TMC2208"
        "tmc/ic/TMC2209"
        "tmc/ic/TMC2224"
        "tmc/ic/TMC2225"
        "tmc/ic/TMC2226"
        "tmc/ic/TMC2240"
        "tmc/ic/TMC2300"
        "tmc/ic/TMC2590"
        "tmc/ic/TMC2660"
        # "tmc/ic/TMC4210" # Incomplete -> issues with SPI, code issues
        "tmc/ic/TMC4330"
        "tmc/ic/TMC4331"
        "tmc/ic/TMC4361A"
        "tmc/ic/TMC4671"
        "tmc/ic/TMC5031"
        "tmc/ic/TMC5041"
        "tmc/ic/TMC5062"
        "tmc/ic/TMC5072"
        "tmc/ic/TMC5130"
        "tmc/ic/TMC5160"
        "tmc/ic/TMC5240"
        "tmc/ic/TMC5271"
        "tmc/ic/TMC5272"
        "tmc/ic/TMC6100"
        "tmc/ic/TMC7300"
        "tmc/ic/TMC8461"
        "tmc/ic/TMC8462"
        "tmc/ramp"
    INCLUDE_DIRS "."
    REQUIRES
)