## How to run

#### 1) Download codeql-bundle.tar.gz manually: [here](https://github.com/github/codeql-action/releases)
#### 2) Extract it.
#### 3) Add <extraction-root>/codeql to PATH.
#### 4) Run unit tests for QL queries with:
```shell
codeql test run -- <test|dir>
```
Where `<test|dir>` is .ql or .qlref file that defines a test to run or directory which will be searched recursively for tests to run. 
To run the test cases, use the path to the `languages` folder.

After run, you will see the `NAME.actual` files (whose name matches to the `NAME.ql` test files).
Each such file contains the result of running the test.

If the `NAME.expected` (whose name must matches to the `NAME.ql` test file) file does not exist or its contents do not match the `NAME.actual` file, the test will fail.

You can also rename the `NAME.actual` files left by `codeql test run` for failing tests into `NAME.expected` using the command:
```shell
codeql test accept -- <test|dir>
```
Such that future runs on the tests that give the same output will be considered to pass.

When running tests, you can also add `--learn` flag so that if a test produces unexpected output, instead of failing it, update its `NAME.expected` file to match the actual output, such that it passes:
```shell
codeql test run --learn -- <test|dir>
```
