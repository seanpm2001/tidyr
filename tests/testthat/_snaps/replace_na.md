# replacement must be castable to `data`

    Code
      (expect_error(replace_na(x, 1.5)))
    Output
      <error/vctrs_error_cast_lossy>
      Can't convert from `replace` <double> to `data` <integer> due to loss of precision.
      * Locations: 1

# replacement must be castable to corresponding column

    Code
      (expect_error(replace_na(df, list(a = 1.5))))
    Output
      <error/vctrs_error_cast_lossy>
      Can't convert from `replace$a` <double> to `data$a` <integer> due to loss of precision.
      * Locations: 1
