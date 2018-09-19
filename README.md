docker-cpp
==========
Docker engine C++ client library.

## Development setup

  1. Install latest v2 of [swagger-codegen](https://github.com/swagger-api/swagger-codegen)
  2. Install [Python 3](https://wiki.python.org/moin/BeginnersGuide/Download)
  3. `pip3 install conan`
  4. Download relevant version
     - Find latest API version from https://docs.docker.com/engine/api/latest/

Now you can:
```sh
ver='1.37'
curl https://docs.docker.com/engine/api/v"$ver"/swagger.yaml -o docker_engine."$ver".yaml
swagger-codegen generate -i docker_engine."$ver".yaml -l tizen -o .
```

Next:
```sh
mkdir -p cmake-build-debug && cd $_
conan install ..
cmake -DCMAKE_BUILD_TYPE=Debug .. && make
```

Run tests with:
```sh
./bin/docker_cpp_test
```
