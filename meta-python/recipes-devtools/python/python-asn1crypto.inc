DESCRIPTION = "Python binding to the Networking and Cryptography (NaCl) library"
HOMEPAGE = "https://github.com/pyca/pynacl"
SECTION = "devel/python"
LICENSE = "Apache-2.0"
LIC_FILES_CHKSUM = "file://LICENSE;md5=52010cd3c7d7bd965b55721ef4d93ec2"

PYPI_PACKAGE = "asn1crypto"

SRC_URI[md5sum] = "de3520426e81a6581352d4366f310eb1"
SRC_URI[sha256sum] = "9d5c20441baf0cb60a4ac34cc447c6c189024b6b4c6cd7877034f4965c464e49"

inherit pypi

RDEPENDS_${PN}_class-target += " \
    ${PYTHON_PN}-codecs \
    ${PYTHON_PN}-crypt \
    ${PYTHON_PN}-ctypes \
    ${PYTHON_PN}-datetime \
    ${PYTHON_PN}-io \
    ${PYTHON_PN}-netclient \
    ${PYTHON_PN}-textutils \
    ${PYTHON_PN}-subprocess \
"

BBCLASSEXTEND = "native"
