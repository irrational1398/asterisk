function memcpy(dest, src, size) {
  if (arguments.length !== 3) {
    throw new TypeError('memcpy expects 3 arguments. ' + arguments.length + ' provided.');
  }

  if (!(dest instanceof ArrayBuffer) || !(src instanceof ArrayBuffer)) {
    throw new TypeError('both dest and src must be ArrayBuffer instances.');
  }

  let destView = new DataView(dest);
  let srcView = new DataView(src);

  for (let i = 0; i < size; i++) {
    let byte = srcView.getUint8(i);
    destView.setUint8(i, byte);
  }
}

this.memcpy = memcpy;
