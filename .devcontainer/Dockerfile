# Ubuntu 22.04 with ROS 2 Humble
FROM ros:jazzy AS viator

# ---- system packages ----
RUN --mount=type=cache,target=/var/cache/apt,sharing=locked \
    --mount=type=cache,target=/var/lib/apt,sharing=locked \
    DEBIAN_FRONTEND=noninteractive apt-get update && apt-get install --no-install-recommends -y \
    git \
    python3-pip \
    ssh-client \
    ros-jazzy-rosbridge-server \
    usbutils \
    can-utils \
    iproute2 \
    kmod \
    # cv_bridge
    python3-numpy \
    libboost-python-dev \
    libopencv-dev \
    python3-opencv \
    pybind11-dev

RUN pip3 install --no-cache-dir --break-system-packages --no-deps \
    moteus \
    pyusb \
    pybind11 \
    pybind11-stubgen \
    "pydocstyle>=6.3.0"

# ---- dev tooling ----

RUN --mount=type=cache,target=/var/cache/apt,sharing=locked \
    --mount=type=cache,target=/var/lib/apt,sharing=locked \
    curl -fsSL https://deb.nodesource.com/setup_lts.x | bash - \
    && DEBIAN_FRONTEND=noninteractive apt-get install --no-install-recommends -y nodejs

RUN pip3 install --no-cache-dir --break-system-packages --no-deps ruff mypy pre-commit \
    && curl -sSL "https://github.com/mvdan/sh/releases/download/v3.10.0/shfmt_v3.10.0_linux_$(dpkg --print-architecture)" \
    -o /usr/local/bin/shfmt \
    && chmod +x /usr/local/bin/shfmt
# ---- user ----
RUN useradd calinp --shell /bin/bash --create-home --no-log-init -G video,sudo,dialout,plugdev \
    && echo "calinp:calinp" | chpasswd \
    && touch /home/calinp/.sudo_as_admin_successful \
    && chown calinp:calinp /home/calinp/.sudo_as_admin_successful

COPY .devcontainer/calinp.bashrc /home/calinp/.bashrc

USER calinp
