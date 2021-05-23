package=unwind
$(package)_version=1.5.0
$(package)_download_path=http://download.savannah.nongnu.org/releases/libunwind
$(package)_file_name=lib$(package)-$($(package)_version).tar.gz
$(package)_sha256_hash=90337653d92d4a13de590781371c604f9031cdb50520366aa1e3a91e1efb1017

define $(package)_preprocess_cmds
endef

define $(package)_config_cmds
  cp -f $(BASEDIR)/config.guess config/config.guess &&\
  cp -f $(BASEDIR)/config.sub config/config.sub &&\
  $($(package)_autoconf) --disable-shared --enable-static
endef

define $(package)_build_cmds
  $(MAKE)
endef

define $(package)_stage_cmds
  $(MAKE) DESTDIR=$($(package)_staging_dir) install
endef

define $(package)_postprocess_cmds
  rm lib/*.la
endef
