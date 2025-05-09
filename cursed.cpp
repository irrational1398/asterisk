#ifndef CURSED_CPP
#define CURSED_CPP

#include <cstring>
#include <cstdint>
#include <vector>

typedef std::vector<uint8_t> ArrayBuffer;

class DataView {
public:
  DataView(ArrayBuffer &b) : buffer(b) {}

  void setUint8(int offset, uint8_t value) { // memcpy uses little endian by default
    buffer[offset] = value;
  }

  void setUint16(int offset, uint16_t value) {
    std::memcpy(&buffer[offset], &value, sizeof(uint16_t));
  }

  void setUint32(int offset, uint32_t value) {
    std::memcpy(&buffer[offset], &value, sizeof(uint32_t));
  }

  void setUint64(int offset, uint64_t value) {
    std::memcpy(&buffer[offset], &value, sizeof(uint64_t));
  }

  void setFloat32(int offset, float value) {
    std::memcpy(&buffer[offset], &value, sizeof(float));
  }

  void setFloat64(int offset, double value) {
    std::memcpy(&buffer[offset], &value, sizeof(double));
  }

  void setInt8(int offset, int8_t value) {
    std::memcpy(&buffer[offset], &value, sizeof(int8_t));
  }

  void setInt16(int offset, int16_t value) {
    std::memcpy(&buffer[offset], &value, sizeof(int16_t));
  }

  void setInt32(int offset, int32_t value) {
    std::memcpy(&buffer[offset], &value, sizeof(int32_t));
  }

  void setInt64(int offset, int64_t value) {
    std::memcpy(&buffer[offset], &value, sizeof(int64_t));
  }

private:
  ArrayBuffer &buffer;
}

#endif //CURSED_CPP
