卷 DATA1 的文件夹 PATH 列表
卷序列号为 00000144 20DC:5E14
D:\REPO\SPDK-MASTER
│  .astylerc
│  .gitignore
│  .gitmodules
│  autobuild.sh
│  autopackage.sh
│  autorun.sh
│  autorun_post.py
│  autotest.sh
│  CHANGELOG.md
│  CODE_OF_CONDUCT.md
│  CONFIG
│  configure
│  CONTRIBUTING.md
│  deprecation.md
│  LICENSE
│  Makefile
│  mdl_rules.rb
│  README.md
│  result.md
│  SECURITY.md
│  
├─.githooks
│      pre-commit
│      pre-push
│      
├─.github
│  │  dependabot.yml
│  │  mistaken-pull-closer.yml
│  │  
│  └─ISSUE_TEMPLATE
│          bug_report.md
│          config.yml
│          intermittent_failure.md
│          
├─app
│  │  Makefile
│  │  
│  ├─fio
│  │  │  Makefile
│  │  │  
│  │  ├─bdev
│  │  │      bdev.json
│  │  │      bdev_zoned.json
│  │  │      example_config.fio
│  │  │      fio_plugin.c
│  │  │      full_bench.fio
│  │  │      Makefile
│  │  │      README.md
│  │  │      zbd_example.fio
│  │  │      
│  │  └─nvme
│  │          example_config.fio
│  │          fio_plugin.c
│  │          full_bench.fio
│  │          Makefile
│  │          mock_sgl_config.fio
│  │          README.md
│  │          
│  ├─iscsi_tgt              <!--iscsi target: iSCSI服务端--> 
│  │      .gitignore
│  │      iscsi_tgt.c
│  │      Makefile
│  │      
│  ├─nvmf_tgt
│  │      .gitignore
│  │      Makefile
│  │      nvmf_main.c
│  │      
│  ├─spdk_dd
│  │      .gitignore
│  │      Makefile
│  │      spdk_dd.c
│  │      
│  ├─spdk_lspci
│  │      .gitignore
│  │      Makefile
│  │      spdk_lspci.c
│  │      
│  ├─spdk_nvme_discover
│  │      discovery_aer.c
│  │      Makefile
│  │      
│  ├─spdk_nvme_identify
│  │      .gitignore
│  │      identify.c
│  │      Makefile
│  │      
│  ├─spdk_nvme_perf
│  │      .gitignore
│  │      Makefile
│  │      perf.c
│  │      README.md
│  │      
│  ├─spdk_tgt
│  │      .gitignore
│  │      Makefile
│  │      spdk_tgt.c
│  │      
│  ├─spdk_top
│  │      .gitignore
│  │      Makefile
│  │      README
│  │      spdk_top.c
│  │      
│  ├─trace
│  │      .gitignore
│  │      Makefile
│  │      trace.cpp
│  │      
│  ├─trace_record
│  │      .gitignore
│  │      Makefile
│  │      trace_record.c
│  │      
│  └─vhost
│          .gitignore
│          Makefile
│          vhost.c
│          
├─doc
│  │  .gitignore
│  │  about.md
│  │  accel_fw.md
│  │  applications.md
│  │  backporting.md
│  │  bdev.md
│  │  bdevperf.md
│  │  bdev_module.md
│  │  bdev_pg.md
│  │  blob.md
│  │  blobfs.md
│  │  ci_tools.md
│  │  compression.md
│  │  concepts.md
│  │  concurrency.md
│  │  containers.md
│  │  distributions.md
│  │  Doxyfile
│  │  driver_modules.md
│  │  event.md
│  │  fips.md
│  │  footer.html
│  │  ftl.md
│  │  gdb_macros.md
│  │  general.md
│  │  getting_started.md
│  │  header.html
│  │  idxd.md
│  │  index.md
│  │  intro.md
│  │  ioat.md
│  │  iscsi.md
│  │  jsonrpc.md
│  │  jsonrpc_proxy.md
│  │  libraries.md
│  │  lvol.md
│  │  Makefile
│  │  memory.md
│  │  misc.md
│  │  notify.md
│  │  nvme.md
│  │  nvme_multipath.md
│  │  nvme_spec.md
│  │  nvmf.md
│  │  nvmf_multipath_howto.md
│  │  nvmf_tgt_pg.md
│  │  nvmf_tracing.md
│  │  overview.md
│  │  peer_2_peer.md
│  │  performance_reports.md
│  │  pkgconfig.md
│  │  porting.md
│  │  prog_guides.md
│  │  README.md
│  │  rpm.md
│  │  scheduler.md
│  │  shfmt.md
│  │  sma.md
│  │  spdkcli.md
│  │  spdk_top.md
│  │  ssd_internals.md
│  │  stylesheet.css
│  │  system_configuration.md
│  │  template_pg.md
│  │  tools.md
│  │  two.min.js
│  │  ublk.md
│  │  usdt.md
│  │  userspace.md
│  │  user_guides.md
│  │  vagrant.md
│  │  vhost.md
│  │  vhost_processing.md
│  │  virtio.md
│  │  vmd.md
│  │  
│  └─img
│          iscsi.svg
│          iscsi_example.svg
│          lvol_clone_snapshot_read.svg
│          lvol_clone_snapshot_write.svg
│          lvol_esnap_clone.svg
│          lvol_inflate_clone_snapshot.svg
│          lvol_thin_provisioning.svg
│          lvol_thin_provisioning_write.svg
│          nvme_cuse.svg
│          qemu_vhost_data_flow.svg
│          ublk_service.svg
│          
├─docker
│  │  docker-compose.monitoring.yaml
│  │  docker-compose.yaml
│  │  README.md
│  │  
│  ├─build_base
│  │      Dockerfile
│  │      post-install
│  │      
│  ├─monitoring
│  │      prometheus.yaml
│  │      telegraf.conf
│  │      
│  ├─spdk-app
│  │      Dockerfile
│  │      init
│  │      proxy-container.conf
│  │      storage-target.conf
│  │      
│  └─traffic-generator
│          conf-nvme
│          conf-virtio
│          Dockerfile
│          fio-nvme.conf
│          fio-virtio.conf
│          init
│          
├─dpdk
├─dpdkbuild
│      Makefile
│      
├─examples
│  │  Makefile
│  │  
│  ├─accel
│  │  │  Makefile
│  │  │  
│  │  └─perf
│  │          .gitignore
│  │          accel_perf.c
│  │          Makefile
│  │          
│  ├─bdev
│  │  │  Makefile
│  │  │  
│  │  ├─bdevperf
│  │  │      .gitignore
│  │  │      bdevperf.c
│  │  │      bdevperf.py
│  │  │      Makefile
│  │  │      
│  │  └─hello_world
│  │          .gitignore
│  │          bdev.json
│  │          hello_bdev.c
│  │          Makefile
│  │          
│  ├─blob
│  │  │  Makefile
│  │  │  
│  │  ├─cli
│  │  │      .gitignore
│  │  │      blobcli.c
│  │  │      Makefile
│  │  │      README.md
│  │  │      
│  │  └─hello_world
│  │          .gitignore
│  │          hello_blob.c
│  │          hello_blob.json
│  │          Makefile
│  │          
│  ├─go
│  │  │  Makefile
│  │  │  
│  │  └─hello_gorpc
│  │          go.mod
│  │          hello_gorpc.go
│  │          Makefile
│  │          
│  ├─idxd
│  │  │  Makefile
│  │  │  
│  │  └─perf
│  │          .gitignore
│  │          Makefile
│  │          perf.c
│  │          
│  ├─interrupt_tgt
│  │      .gitignore
│  │      interrupt_plugin.py
│  │      interrupt_tgt.c
│  │      Makefile
│  │      
│  ├─ioat
│  │  │  Makefile
│  │  │  
│  │  ├─perf
│  │  │      .gitignore
│  │  │      Makefile
│  │  │      perf.c
│  │  │      
│  │  └─verify
│  │          .gitignore
│  │          Makefile
│  │          verify.c
│  │          
│  ├─nvme
│  │  │  Makefile
│  │  │  
│  │  ├─abort
│  │  │      .gitignore
│  │  │      abort.c
│  │  │      Makefile
│  │  │      
│  │  ├─arbitration
│  │  │      .gitignore
│  │  │      arbitration.c
│  │  │      Makefile
│  │  │      
│  │  ├─cmb_copy
│  │  │      .gitignore
│  │  │      cmb_copy.c
│  │  │      Makefile
│  │  │      
│  │  ├─hello_world
│  │  │      .gitignore
│  │  │      hello_world.c
│  │  │      Makefile
│  │  │      
│  │  ├─hotplug
│  │  │      .gitignore
│  │  │      hotplug.c
│  │  │      hotplug_plugin.py
│  │  │      Makefile
│  │  │      
│  │  ├─nvme_manage
│  │  │      .gitignore
│  │  │      Makefile
│  │  │      nvme_manage.c
│  │  │      
│  │  ├─pmr_persistence
│  │  │      Makefile
│  │  │      pmr_persistence.c
│  │  │      
│  │  └─reconnect
│  │          .gitignore
│  │          Makefile
│  │          reconnect.c
│  │          
│  ├─nvmf
│  │  │  Makefile
│  │  │  
│  │  └─nvmf
│  │          .gitignore
│  │          Makefile
│  │          nvmf.c
│  │          README.md
│  │          
│  ├─sock
│  │  │  Makefile
│  │  │  
│  │  └─hello_world
│  │          .gitignore
│  │          hello_sock.c
│  │          Makefile
│  │          
│  ├─thread
│  │  │  Makefile
│  │  │  
│  │  └─thread
│  │          Makefile
│  │          thread_ex.c
│  │          
│  ├─util
│  │  │  Makefile
│  │  │  
│  │  └─zipf
│  │          Makefile
│  │          zipf.c
│  │          
│  └─vmd
│      │  Makefile
│      │  
│      ├─led
│      │      .gitignore
│      │      led.c
│      │      Makefile
│      │      
│      └─lsvmd
│              .gitignore
│              lsvmd.c
│              Makefile
│              
├─go
│  └─rpc
│      │  clientIntegration.go
│      │  go.mod
│      │  go.sum
│      │  LICENSE
│      │  Makefile
│      │  README.md
│      │  
│      ├─client
│      │      client.go
│      │      client_test.go
│      │      
│      └─mocks
│              boilerplate.txt
│              IClient.go
│              
├─include
│  │  Makefile
│  │  
│  ├─linux
│  │      virtio_blk.h
│  │      virtio_config.h
│  │      virtio_pci.h
│  │      virtio_ring.h
│  │      virtio_scsi.h
│  │      virtio_types.h
│  │      
│  ├─spdk
│  │      accel.h
│  │      accel_module.h
│  │      assert.h
│  │      barrier.h
│  │      base64.h
│  │      bdev.h
│  │      bdev_module.h
│  │      bdev_zone.h
│  │      bit_array.h
│  │      bit_pool.h
│  │      blob.h
│  │      blobfs.h
│  │      blobfs_bdev.h
│  │      blob_bdev.h
│  │      conf.h
│  │      cpuset.h
│  │      crc16.h
│  │      crc32.h
│  │      crc64.h
│  │      dif.h
│  │      dma.h
│  │      endian.h
│  │      env.h
│  │      env_dpdk.h
│  │      event.h
│  │      fd.h
│  │      fd_group.h
│  │      file.h
│  │      ftl.h
│  │      gpt_spec.h
│  │      hexlify.h
│  │      histogram_data.h
│  │      idxd.h
│  │      idxd_spec.h
│  │      init.h
│  │      ioat.h
│  │      ioat_spec.h
│  │      iscsi_spec.h
│  │      json.h
│  │      jsonrpc.h
│  │      keyring.h
│  │      keyring_module.h
│  │      likely.h
│  │      log.h
│  │      lvol.h
│  │      memory.h
│  │      mmio.h
│  │      nbd.h
│  │      notify.h
│  │      nvme.h
│  │      nvme_intel.h
│  │      nvme_ocssd.h
│  │      nvme_ocssd_spec.h
│  │      nvme_spec.h
│  │      nvme_zns.h
│  │      nvmf.h
│  │      nvmf_cmd.h
│  │      nvmf_fc_spec.h
│  │      nvmf_spec.h
│  │      nvmf_transport.h
│  │      opal.h
│  │      opal_spec.h
│  │      pci_ids.h
│  │      pipe.h
│  │      queue.h
│  │      queue_extras.h
│  │      reduce.h
│  │      rpc.h
│  │      scheduler.h
│  │      scsi.h
│  │      scsi_spec.h
│  │      sock.h
│  │      stdinc.h
│  │      string.h
│  │      thread.h
│  │      trace.h
│  │      trace_parser.h
│  │      tree.h
│  │      ublk.h
│  │      util.h
│  │      uuid.h
│  │      version.h
│  │      vfio_user_pci.h
│  │      vfio_user_spec.h
│  │      vfu_target.h
│  │      vhost.h
│  │      vmd.h
│  │      xor.h
│  │      zipf.h
│  │      
│  └─spdk_internal
│          assert.h
│          cunit.h
│          event.h
│          idxd.h
│          init.h
│          lvolstore.h
│          mlx5.h
│          mock.h
│          nvme.h
│          nvme_tcp.h
│          rdma_provider.h
│          rdma_utils.h
│          sgl.h
│          sock.h
│          thread.h
│          trace_defs.h
│          uring.h
│          usdt.h
│          utf.h
│          vhost_user.h
│          virtio.h
│          
├─intel-ipsec-mb
├─ipsecbuild
│      Makefile
│      
├─isa-l
├─isa-l-crypto
├─isalbuild
│      isa-l
│      Makefile
│      
├─isalcryptobuild
│      isa-l-crypto
│      Makefile
│      
├─lib
│  │  Makefile
│  │  
│  ├─accel
│  │      accel.c
│  │      accel_internal.h
│  │      accel_rpc.c
│  │      accel_sw.c
│  │      Makefile
│  │      spdk_accel.map
│  │      
│  ├─bdev
│  │      bdev.c
│  │      bdev_internal.h
│  │      bdev_rpc.c
│  │      bdev_zone.c
│  │      Makefile
│  │      part.c
│  │      scsi_nvme.c
│  │      spdk_bdev.map
│  │      vtune.c
│  │      
│  ├─blob
│  │      blobstore.c
│  │      blobstore.h
│  │      blob_bs_dev.c
│  │      Makefile
│  │      request.c
│  │      request.h
│  │      spdk_blob.map
│  │      zeroes.c
│  │      
│  ├─blobfs
│  │      blobfs.c
│  │      cache_tree.h
│  │      Makefile
│  │      spdk_blobfs.map
│  │      tree.c
│  │      
│  ├─conf
│  │      conf.c
│  │      Makefile
│  │      spdk_conf.map
│  │      
│  ├─dma
│  │      dma.c
│  │      Makefile
│  │      spdk_dma.map
│  │      
│  ├─env_dpdk
│  │  │  env.c
│  │  │  env.mk
│  │  │  env_internal.h
│  │  │  init.c
│  │  │  Makefile
│  │  │  memory.c
│  │  │  pci.c
│  │  │  pci_dpdk.c
│  │  │  pci_dpdk.h
│  │  │  pci_dpdk_2207.c
│  │  │  pci_dpdk_2211.c
│  │  │  pci_event.c
│  │  │  pci_idxd.c
│  │  │  pci_ioat.c
│  │  │  pci_virtio.c
│  │  │  pci_vmd.c
│  │  │  sigbus_handler.c
│  │  │  spdk_env_dpdk.map
│  │  │  threads.c
│  │  │  
│  │  ├─22.07
│  │  │      rte_bus.h
│  │  │      rte_bus_pci.h
│  │  │      rte_dev.h
│  │  │      
│  │  └─22.11
│  │          bus_driver.h
│  │          bus_pci_driver.h
│  │          dev_driver.h
│  │          rte_bus.h
│  │          rte_bus_pci.h
│  │          rte_dev.h
│  │          
│  ├─env_ocf
│  │      .gitignore
│  │      Makefile
│  │      mpool.c
│  │      mpool.h
│  │      ocf_env.c
│  │      ocf_env.h
│  │      ocf_env_headers.h
│  │      ocf_env_list.h
│  │      
│  ├─event
│  │      app.c
│  │      app_rpc.c
│  │      event_internal.h
│  │      log_rpc.c
│  │      Makefile
│  │      reactor.c
│  │      scheduler_static.c
│  │      spdk_event.map
│  │      
│  ├─ftl
│  │  │  ftl_band.c
│  │  │  ftl_band.h
│  │  │  ftl_band_ops.c
│  │  │  ftl_core.c
│  │  │  ftl_core.h
│  │  │  ftl_debug.c
│  │  │  ftl_debug.h
│  │  │  ftl_init.c
│  │  │  ftl_internal.h
│  │  │  ftl_io.c
│  │  │  ftl_io.h
│  │  │  ftl_l2p.c
│  │  │  ftl_l2p.h
│  │  │  ftl_l2p_cache.c
│  │  │  ftl_l2p_cache.h
│  │  │  ftl_l2p_flat.c
│  │  │  ftl_l2p_flat.h
│  │  │  ftl_layout.c
│  │  │  ftl_layout.h
│  │  │  ftl_nv_cache.c
│  │  │  ftl_nv_cache.h
│  │  │  ftl_nv_cache_io.h
│  │  │  ftl_p2l.c
│  │  │  ftl_reloc.c
│  │  │  ftl_rq.c
│  │  │  ftl_sb.c
│  │  │  ftl_sb.h
│  │  │  ftl_sb_common.h
│  │  │  ftl_sb_current.h
│  │  │  ftl_trace.c
│  │  │  ftl_trace.h
│  │  │  ftl_utils.h
│  │  │  ftl_writer.c
│  │  │  ftl_writer.h
│  │  │  Makefile
│  │  │  spdk_ftl.map
│  │  │  
│  │  ├─base
│  │  │      ftl_base_bdev.c
│  │  │      ftl_base_dev.c
│  │  │      ftl_base_dev.h
│  │  │      
│  │  ├─mngt
│  │  │      ftl_mngt.c
│  │  │      ftl_mngt.h
│  │  │      ftl_mngt_band.c
│  │  │      ftl_mngt_bdev.c
│  │  │      ftl_mngt_ioch.c
│  │  │      ftl_mngt_l2p.c
│  │  │      ftl_mngt_md.c
│  │  │      ftl_mngt_misc.c
│  │  │      ftl_mngt_p2l.c
│  │  │      ftl_mngt_recovery.c
│  │  │      ftl_mngt_self_test.c
│  │  │      ftl_mngt_shutdown.c
│  │  │      ftl_mngt_startup.c
│  │  │      ftl_mngt_steps.h
│  │  │      ftl_mngt_upgrade.c
│  │  │      
│  │  ├─nvc
│  │  │      ftl_nvc_bdev_vss.c
│  │  │      ftl_nvc_dev.c
│  │  │      ftl_nvc_dev.h
│  │  │      
│  │  ├─upgrade
│  │  │      ftl_band_upgrade.c
│  │  │      ftl_chunk_upgrade.c
│  │  │      ftl_layout_upgrade.c
│  │  │      ftl_layout_upgrade.h
│  │  │      ftl_p2l_upgrade.c
│  │  │      ftl_sb_prev.h
│  │  │      ftl_sb_upgrade.c
│  │  │      ftl_sb_upgrade.h
│  │  │      ftl_sb_v3.c
│  │  │      ftl_sb_v3.h
│  │  │      ftl_sb_v5.c
│  │  │      ftl_sb_v5.h
│  │  │      ftl_trim_upgrade.c
│  │  │      
│  │  └─utils
│  │          ftl_addr_utils.h
│  │          ftl_bitmap.c
│  │          ftl_bitmap.h
│  │          ftl_conf.c
│  │          ftl_conf.h
│  │          ftl_defs.h
│  │          ftl_df.h
│  │          ftl_layout_tracker_bdev.c
│  │          ftl_layout_tracker_bdev.h
│  │          ftl_log.h
│  │          ftl_md.c
│  │          ftl_md.h
│  │          ftl_mempool.c
│  │          ftl_mempool.h
│  │          ftl_property.c
│  │          ftl_property.h
│  │          
│  ├─idxd
│  │      idxd.c
│  │      idxd_internal.h
│  │      idxd_kernel.c
│  │      idxd_user.c
│  │      Makefile
│  │      spdk_idxd.map
│  │      
│  ├─init
│  │      json_config.c
│  │      Makefile
│  │      rpc.c
│  │      spdk_init.map
│  │      subsystem.c
│  │      subsystem.h
│  │      subsystem_rpc.c
│  │      
│  ├─ioat
│  │      ioat.c
│  │      ioat_internal.h
│  │      Makefile
│  │      spdk_ioat.map
│  │      
│  ├─iscsi
│  │      conn.c
│  │      conn.h
│  │      init_grp.c
│  │      init_grp.h
│  │      iscsi.c
│  │      iscsi.h
│  │      iscsi_rpc.c
│  │      iscsi_subsystem.c
│  │      Makefile
│  │      md5.c
│  │      md5.h
│  │      param.c
│  │      param.h
│  │      portal_grp.c
│  │      portal_grp.h
│  │      spdk_iscsi.map
│  │      task.c
│  │      task.h
│  │      tgt_node.c
│  │      tgt_node.h
│  │      
│  ├─json
│  │      json_parse.c
│  │      json_util.c
│  │      json_write.c
│  │      Makefile
│  │      spdk_json.map
│  │      
│  ├─jsonrpc
│  │      jsonrpc_client.c
│  │      jsonrpc_client_tcp.c
│  │      jsonrpc_internal.h
│  │      jsonrpc_server.c
│  │      jsonrpc_server_tcp.c
│  │      Makefile
│  │      spdk_jsonrpc.map
│  │      
│  ├─keyring
│  │      keyring.c
│  │      keyring_internal.h
│  │      keyring_rpc.c
│  │      Makefile
│  │      spdk_keyring.map
│  │      
│  ├─log
│  │      log.c
│  │      log_deprecated.c
│  │      log_flags.c
│  │      Makefile
│  │      spdk_log.map
│  │      
│  ├─lvol
│  │      lvol.c
│  │      Makefile
│  │      spdk_lvol.map
│  │      
│  ├─mlx5
│  │      Makefile
│  │      mlx5_crypto.c
│  │      spdk_mlx5.map
│  │      
│  ├─nbd
│  │      Makefile
│  │      nbd.c
│  │      nbd_internal.h
│  │      nbd_rpc.c
│  │      spdk_nbd.map
│  │      
│  ├─notify
│  │      Makefile
│  │      notify.c
│  │      notify_rpc.c
│  │      spdk_notify.map
│  │      
│  ├─nvme
│  │      Makefile
│  │      nvme.c
│  │      nvme_auth.c
│  │      nvme_ctrlr.c
│  │      nvme_ctrlr_cmd.c
│  │      nvme_ctrlr_ocssd_cmd.c
│  │      nvme_cuse.c
│  │      nvme_cuse.h
│  │      nvme_discovery.c
│  │      nvme_fabric.c
│  │      nvme_internal.h
│  │      nvme_io_msg.c
│  │      nvme_io_msg.h
│  │      nvme_ns.c
│  │      nvme_ns_cmd.c
│  │      nvme_ns_ocssd_cmd.c
│  │      nvme_opal.c
│  │      nvme_opal_internal.h
│  │      nvme_pcie.c
│  │      nvme_pcie_common.c
│  │      nvme_pcie_internal.h
│  │      nvme_poll_group.c
│  │      nvme_qpair.c
│  │      nvme_quirks.c
│  │      nvme_rdma.c
│  │      nvme_stubs.c
│  │      nvme_tcp.c
│  │      nvme_transport.c
│  │      nvme_vfio_user.c
│  │      nvme_zns.c
│  │      spdk_nvme.map
│  │      
│  ├─nvmf
│  │      auth.c
│  │      ctrlr.c
│  │      ctrlr_bdev.c
│  │      ctrlr_discovery.c
│  │      fc.c
│  │      fc_ls.c
│  │      Makefile
│  │      mdns_server.c
│  │      nvmf.c
│  │      nvmf_fc.h
│  │      nvmf_internal.h
│  │      nvmf_rpc.c
│  │      rdma.c
│  │      spdk_nvmf.map
│  │      stubs.c
│  │      subsystem.c
│  │      tcp.c
│  │      transport.c
│  │      transport.h
│  │      vfio_user.c
│  │      
│  ├─rdma_provider
│  │      common.c
│  │      Makefile
│  │      rdma_provider_mlx5_dv.c
│  │      rdma_provider_verbs.c
│  │      spdk_rdma_provider.map
│  │      
│  ├─rdma_utils
│  │      Makefile
│  │      rdma_utils.c
│  │      spdk_rdma_utils.map
│  │      
│  ├─reduce
│  │      Makefile
│  │      reduce.c
│  │      spdk_reduce.map
│  │      
│  ├─rocksdb
│  │      env_spdk.cc
│  │      spdk.rocksdb.mk
│  │      
│  ├─rpc
│  │      Makefile
│  │      rpc.c
│  │      spdk_rpc.map
│  │      
│  ├─scsi
│  │      dev.c
│  │      lun.c
│  │      Makefile
│  │      port.c
│  │      scsi.c
│  │      scsi_bdev.c
│  │      scsi_internal.h
│  │      scsi_pr.c
│  │      scsi_rpc.c
│  │      spdk_scsi.map
│  │      task.c
│  │      
│  ├─sock
│  │      Makefile
│  │      sock.c
│  │      sock_rpc.c
│  │      spdk_sock.map
│  │      
│  ├─thread
│  │      iobuf.c
│  │      Makefile
│  │      spdk_thread.map
│  │      thread.c
│  │      thread_internal.h
│  │      
│  ├─trace
│  │      Makefile
│  │      spdk_trace.map
│  │      trace.c
│  │      trace_flags.c
│  │      trace_internal.h
│  │      trace_rpc.c
│  │      
│  ├─trace_parser
│  │      Makefile
│  │      spdk_trace_parser.map
│  │      trace.cpp
│  │      
│  ├─ublk
│  │      Makefile
│  │      spdk_ublk.map
│  │      ublk.c
│  │      ublk_internal.h
│  │      ublk_rpc.c
│  │      
│  ├─ut
│  │      Makefile
│  │      spdk_ut.map
│  │      ut.c
│  │      
│  ├─util
│  │      base64.c
│  │      base64_neon.c
│  │      base64_sve.c
│  │      bit_array.c
│  │      cpuset.c
│  │      crc16.c
│  │      crc32.c
│  │      crc32c.c
│  │      crc32_ieee.c
│  │      crc64.c
│  │      crc_internal.h
│  │      dif.c
│  │      fd.c
│  │      fd_group.c
│  │      file.c
│  │      hexlify.c
│  │      iov.c
│  │      Makefile
│  │      math.c
│  │      pipe.c
│  │      spdk_util.map
│  │      strerror_tls.c
│  │      string.c
│  │      util_internal.h
│  │      uuid.c
│  │      xor.c
│  │      zipf.c
│  │      
│  ├─ut_mock
│  │      Makefile
│  │      mock.c
│  │      
│  ├─vfio_user
│  │  │  Makefile
│  │  │  
│  │  └─host
│  │          Makefile
│  │          spdk_vfio_user.map
│  │          vfio_user.c
│  │          vfio_user_internal.h
│  │          vfio_user_pci.c
│  │          
│  ├─vfu_tgt
│  │      Makefile
│  │      spdk_vfu_tgt.map
│  │      tgt_endpoint.c
│  │      tgt_internal.h
│  │      tgt_rpc.c
│  │      
│  ├─vhost
│  │      Makefile
│  │      rte_vhost_user.c
│  │      spdk_vhost.map
│  │      vhost.c
│  │      vhost_blk.c
│  │      vhost_internal.h
│  │      vhost_rpc.c
│  │      vhost_scsi.c
│  │      
│  ├─virtio
│  │      Makefile
│  │      spdk_virtio.map
│  │      virtio.c
│  │      virtio_pci.c
│  │      virtio_vfio_user.c
│  │      virtio_vhost_user.c
│  │      
│  └─vmd
│          led.c
│          Makefile
│          spdk_vmd.map
│          vmd.c
│          vmd_internal.h
│          vmd_spec.h
│          
├─libvfio-user
├─licenses
│      bsd-2-clause.txt
│      bsd-3-clause.txt
│      
├─mk
│      nvme.libtest.mk
│      spdk.app.mk
│      spdk.app_cxx.mk
│      spdk.app_vars.mk
│      spdk.common.mk
│      spdk.deps.mk
│      spdk.fio.mk
│      spdk.lib.mk
│      spdk.lib_deps.mk
│      spdk.mock.unittest.mk
│      spdk.modules.mk
│      spdk.subdirs.mk
│      spdk.unittest.mk
│      spdk_blank.map
│      
├─module
│  │  Makefile
│  │  
│  ├─accel
│  │  │  Makefile
│  │  │  
│  │  ├─dpdk_compressdev
│  │  │      accel_dpdk_compressdev.c
│  │  │      accel_dpdk_compressdev.h
│  │  │      accel_dpdk_compressdev_rpc.c
│  │  │      Makefile
│  │  │      
│  │  ├─dpdk_cryptodev
│  │  │      accel_dpdk_cryptodev.c
│  │  │      accel_dpdk_cryptodev.h
│  │  │      accel_dpdk_cryptodev_rpc.c
│  │  │      Makefile
│  │  │      
│  │  ├─dsa
│  │  │      accel_dsa.c
│  │  │      accel_dsa.h
│  │  │      accel_dsa_rpc.c
│  │  │      Makefile
│  │  │      
│  │  ├─error
│  │  │      accel_error.c
│  │  │      accel_error.h
│  │  │      accel_error_rpc.c
│  │  │      Makefile
│  │  │      
│  │  ├─iaa
│  │  │      accel_iaa.c
│  │  │      accel_iaa.h
│  │  │      accel_iaa_rpc.c
│  │  │      Makefile
│  │  │      
│  │  ├─ioat
│  │  │      accel_ioat.c
│  │  │      accel_ioat.h
│  │  │      accel_ioat_rpc.c
│  │  │      Makefile
│  │  │      
│  │  └─mlx5
│  │          accel_mlx5.c
│  │          accel_mlx5.h
│  │          accel_mlx5_rpc.c
│  │          Makefile
│  │          
│  ├─bdev
│  │  │  Makefile
│  │  │  
│  │  ├─aio
│  │  │      bdev_aio.c
│  │  │      bdev_aio.h
│  │  │      bdev_aio_rpc.c
│  │  │      Makefile
│  │  │      
│  │  ├─compress
│  │  │      Makefile
│  │  │      vbdev_compress.c
│  │  │      vbdev_compress.h
│  │  │      vbdev_compress_rpc.c
│  │  │      
│  │  ├─crypto
│  │  │      Makefile
│  │  │      vbdev_crypto.c
│  │  │      vbdev_crypto.h
│  │  │      vbdev_crypto_rpc.c
│  │  │      
│  │  ├─daos
│  │  │      bdev_daos.c
│  │  │      bdev_daos.h
│  │  │      bdev_daos_rpc.c
│  │  │      Makefile
│  │  │      
│  │  ├─delay
│  │  │      Makefile
│  │  │      vbdev_delay.c
│  │  │      vbdev_delay.h
│  │  │      vbdev_delay_rpc.c
│  │  │      
│  │  ├─error
│  │  │      Makefile
│  │  │      vbdev_error.c
│  │  │      vbdev_error.h
│  │  │      vbdev_error_rpc.c
│  │  │      
│  │  ├─ftl
│  │  │      bdev_ftl.c
│  │  │      bdev_ftl.h
│  │  │      bdev_ftl_rpc.c
│  │  │      Makefile
│  │  │      
│  │  ├─gpt
│  │  │      gpt.c
│  │  │      gpt.h
│  │  │      Makefile
│  │  │      vbdev_gpt.c
│  │  │      
│  │  ├─iscsi
│  │  │      bdev_iscsi.c
│  │  │      bdev_iscsi.h
│  │  │      bdev_iscsi_rpc.c
│  │  │      Makefile
│  │  │      
│  │  ├─lvol
│  │  │      Makefile
│  │  │      vbdev_lvol.c
│  │  │      vbdev_lvol.h
│  │  │      vbdev_lvol_rpc.c
│  │  │      
│  │  ├─malloc
│  │  │      bdev_malloc.c
│  │  │      bdev_malloc.h
│  │  │      bdev_malloc_rpc.c
│  │  │      Makefile
│  │  │      
│  │  ├─null
│  │  │      bdev_null.c
│  │  │      bdev_null.h
│  │  │      bdev_null_rpc.c
│  │  │      Makefile
│  │  │      
│  │  ├─nvme
│  │  │      bdev_mdns_client.c
│  │  │      bdev_nvme.c
│  │  │      bdev_nvme.h
│  │  │      bdev_nvme_cuse_rpc.c
│  │  │      bdev_nvme_rpc.c
│  │  │      Makefile
│  │  │      nvme_rpc.c
│  │  │      vbdev_opal.c
│  │  │      vbdev_opal.h
│  │  │      vbdev_opal_rpc.c
│  │  │      
│  │  ├─ocf
│  │  │      ctx.c
│  │  │      ctx.h
│  │  │      data.c
│  │  │      data.h
│  │  │      Makefile
│  │  │      stats.c
│  │  │      stats.h
│  │  │      utils.c
│  │  │      utils.h
│  │  │      vbdev_ocf.c
│  │  │      vbdev_ocf.h
│  │  │      vbdev_ocf_rpc.c
│  │  │      volume.c
│  │  │      volume.h
│  │  │      
│  │  ├─passthru
│  │  │      Makefile
│  │  │      vbdev_passthru.c
│  │  │      vbdev_passthru.h
│  │  │      vbdev_passthru_rpc.c
│  │  │      
│  │  ├─raid
│  │  │      bdev_raid.c
│  │  │      bdev_raid.h
│  │  │      bdev_raid_rpc.c
│  │  │      bdev_raid_sb.c
│  │  │      concat.c
│  │  │      Makefile
│  │  │      raid0.c
│  │  │      raid1.c
│  │  │      raid5f.c
│  │  │      
│  │  ├─rbd
│  │  │      bdev_rbd.c
│  │  │      bdev_rbd.h
│  │  │      bdev_rbd_rpc.c
│  │  │      Makefile
│  │  │      
│  │  ├─split
│  │  │      Makefile
│  │  │      vbdev_split.c
│  │  │      vbdev_split.h
│  │  │      vbdev_split_rpc.c
│  │  │      
│  │  ├─uring
│  │  │      bdev_uring.c
│  │  │      bdev_uring.h
│  │  │      bdev_uring_rpc.c
│  │  │      Makefile
│  │  │      
│  │  ├─virtio
│  │  │      bdev_virtio.h
│  │  │      bdev_virtio_blk.c
│  │  │      bdev_virtio_rpc.c
│  │  │      bdev_virtio_scsi.c
│  │  │      Makefile
│  │  │      
│  │  ├─xnvme
│  │  │      bdev_xnvme.c
│  │  │      bdev_xnvme.h
│  │  │      bdev_xnvme_rpc.c
│  │  │      Makefile
│  │  │      
│  │  └─zone_block
│  │          Makefile
│  │          vbdev_zone_block.c
│  │          vbdev_zone_block.h
│  │          vbdev_zone_block_rpc.c
│  │          
│  ├─blob
│  │  │  Makefile
│  │  │  
│  │  └─bdev
│  │          blob_bdev.c
│  │          Makefile
│  │          spdk_blob_bdev.map
│  │          
│  ├─blobfs
│  │  │  Makefile
│  │  │  
│  │  └─bdev
│  │          blobfs_bdev.c
│  │          blobfs_bdev_rpc.c
│  │          blobfs_fuse.c
│  │          blobfs_fuse.h
│  │          Makefile
│  │          spdk_blobfs_bdev.map
│  │          
│  ├─env_dpdk
│  │      env_dpdk_rpc.c
│  │      Makefile
│  │      
│  ├─event
│  │  │  Makefile
│  │  │  
│  │  └─subsystems
│  │      │  Makefile
│  │      │  
│  │      ├─accel
│  │      │      accel.c
│  │      │      Makefile
│  │      │      
│  │      ├─bdev
│  │      │      bdev.c
│  │      │      Makefile
│  │      │      
│  │      ├─iobuf
│  │      │      iobuf.c
│  │      │      iobuf_rpc.c
│  │      │      Makefile
│  │      │      
│  │      ├─iscsi
│  │      │      iscsi.c
│  │      │      Makefile
│  │      │      
│  │      ├─keyring
│  │      │      keyring.c
│  │      │      Makefile
│  │      │      
│  │      ├─nbd
│  │      │      Makefile
│  │      │      nbd.c
│  │      │      
│  │      ├─nvmf
│  │      │      event_nvmf.h
│  │      │      Makefile
│  │      │      nvmf_rpc.c
│  │      │      nvmf_tgt.c
│  │      │      
│  │      ├─scheduler
│  │      │      Makefile
│  │      │      scheduler.c
│  │      │      
│  │      ├─scsi
│  │      │      Makefile
│  │      │      scsi.c
│  │      │      
│  │      ├─sock
│  │      │      Makefile
│  │      │      sock.c
│  │      │      
│  │      ├─ublk
│  │      │      Makefile
│  │      │      ublk.c
│  │      │      
│  │      ├─vfu_tgt
│  │      │      Makefile
│  │      │      vfu_tgt.c
│  │      │      
│  │      ├─vhost_blk
│  │      │      Makefile
│  │      │      vhost_blk.c
│  │      │      
│  │      ├─vhost_scsi
│  │      │      Makefile
│  │      │      vhost_scsi.c
│  │      │      
│  │      └─vmd
│  │              event_vmd.h
│  │              Makefile
│  │              vmd.c
│  │              vmd_rpc.c
│  │              
│  ├─keyring
│  │  │  Makefile
│  │  │  
│  │  ├─file
│  │  │      keyring.c
│  │  │      keyring_file.h
│  │  │      keyring_rpc.c
│  │  │      Makefile
│  │  │      
│  │  └─linux
│  │          keyring.c
│  │          keyring_linux.h
│  │          keyring_rpc.c
│  │          Makefile
│  │          
│  ├─scheduler
│  │  │  Makefile
│  │  │  
│  │  ├─dpdk_governor
│  │  │      dpdk_governor.c
│  │  │      Makefile
│  │  │      
│  │  ├─dynamic
│  │  │      Makefile
│  │  │      scheduler_dynamic.c
│  │  │      
│  │  └─gscheduler
│  │          gscheduler.c
│  │          Makefile
│  │          
│  ├─sock
│  │  │  Makefile
│  │  │  sock_kernel.h
│  │  │  
│  │  ├─posix
│  │  │      Makefile
│  │  │      posix.c
│  │  │      
│  │  └─uring
│  │          Makefile
│  │          uring.c
│  │          
│  └─vfu_device
│          Makefile
│          vfu_virtio.c
│          vfu_virtio_blk.c
│          vfu_virtio_internal.h
│          vfu_virtio_rpc.c
│          vfu_virtio_scsi.c
│          
├─ocf
├─proto
│      Makefile
│      nvme.proto
│      nvmf.proto
│      nvmf_tcp.proto
│      sma.proto
│      virtio_blk.proto
│      
├─python
│  │  Makefile
│  │  setup.py
│  │  
│  └─spdk
│      │  __init__.py
│      │  
│      ├─rpc
│      │      accel.py
│      │      app.py
│      │      bdev.py
│      │      blobfs.py
│      │      client.py
│      │      cmd_parser.py
│      │      compressdev.py
│      │      dpdk_cryptodev.py
│      │      dsa.py
│      │      env_dpdk.py
│      │      helpers.py
│      │      iaa.py
│      │      ioat.py
│      │      iobuf.py
│      │      iscsi.py
│      │      keyring.py
│      │      log.py
│      │      lvol.py
│      │      mlx5.py
│      │      nbd.py
│      │      notify.py
│      │      nvme.py
│      │      nvmf.py
│      │      sock.py
│      │      subsystem.py
│      │      trace.py
│      │      ublk.py
│      │      vfio_user.py
│      │      vhost.py
│      │      vmd.py
│      │      __init__.py
│      │      
│      ├─sma
│      │  │  common.py
│      │  │  qmp.py
│      │  │  qos.py
│      │  │  sma.py
│      │  │  __init__.py
│      │  │  
│      │  ├─device
│      │  │      device.py
│      │  │      nvmf_tcp.py
│      │  │      nvmf_vfiouser.py
│      │  │      vhost_blk.py
│      │  │      __init__.py
│      │  │      
│      │  ├─proto
│      │  │      .gitignore
│      │  │      __init__.py
│      │  │      
│      │  └─volume
│      │          crypto.py
│      │          crypto_bdev.py
│      │          volume.py
│      │          __init__.py
│      │          
│      └─spdkcli
│              ui_node.py
│              ui_node_iscsi.py
│              ui_node_nvmf.py
│              ui_root.py
│              __init__.py
│              
├─rpmbuild
│      rpm-deps.sh
│      rpm.sh
│      spdk.spec
│      
├─scripts
│  │  ar-xnvme-fixer
│  │  arm_cross_compile.sh
│  │  backport.sh
│  │  bpftrace.sh
│  │  calc-iobuf.py
│  │  check_format.sh
│  │  common.sh
│  │  core-collector.sh
│  │  detect_cc.sh
│  │  dpdk_mem_info.py
│  │  eofnl
│  │  fio-wrapper
│  │  gdb_macros.py
│  │  genconfig.py
│  │  gen_ftl.sh
│  │  gen_nvme.sh
│  │  gen_sma_goapi.sh
│  │  get-pmr
│  │  histogram.py
│  │  iostat.py
│  │  ledctl.sh
│  │  lspci
│  │  pc.sh
│  │  pc_libs.sh
│  │  pc_modules.sh
│  │  pkgdep.sh
│  │  posix.txt
│  │  prep_benchmarks.sh
│  │  qat_setup.sh
│  │  rpc.py
│  │  rpc_http_proxy.py
│  │  rxe_cfg_small.sh
│  │  setup.sh
│  │  sma-client.py
│  │  sma.py
│  │  spdk-gpt.py
│  │  spdkcli.py
│  │  spdx.sh
│  │  sync_dev_uevents.sh
│  │  
│  ├─bash-completion
│  │      spdk
│  │      
│  ├─bpf
│  │      gen.py
│  │      gen_enums.sh
│  │      intr-wakeups.bt
│  │      nvme.bt
│  │      nvmf.bt
│  │      nvmf_path.bt
│  │      nvmf_timeout.bt
│  │      readv.bt
│  │      sched.bt
│  │      send_msg.bt
│  │      syscalls.bt
│  │      trace.py
│  │      
│  ├─ceph
│  │      ceph.conf
│  │      start.sh
│  │      stop.sh
│  │      
│  ├─common
│  │  └─setup
│  │          interactive.sh
│  │          
│  ├─env_dpdk
│  │  │  check_dpdk_pci_api.sh
│  │  │  README.md
│  │  │  
│  │  └─22.11
│  │          22.11-rte_bus_pci.h.patch
│  │          23.07-rte_bus_pci.h.patch
│  │          23.11-rte_bus_pci.h.patch
│  │          23.11-rte_dev.h.patch
│  │          
│  ├─perf
│  │  ├─nvme
│  │  │      fio_test.conf
│  │  │      README
│  │  │      run_fio_test.py
│  │  │      run_fio_test.sh
│  │  │      
│  │  ├─nvmf
│  │  │      common.py
│  │  │      config.json
│  │  │      README.md
│  │  │      run_nvmf.py
│  │  │      set_xps_rxqs
│  │  │      
│  │  ├─pm
│  │  │      collect-bmc-pm
│  │  │      collect-cpu-load
│  │  │      collect-cpu-temp
│  │  │      collect-vmstat
│  │  │      common
│  │  │      
│  │  └─vhost
│  │          conf-generator
│  │          run_vhost_test.sh
│  │          
│  ├─pkgdep
│  │      arch.sh
│  │      azurelinux.sh
│  │      centos.sh
│  │      common.sh
│  │      debian.sh
│  │      fedora.sh
│  │      freebsd.sh
│  │      helpers.sh
│  │      mariner.sh
│  │      openeuler.sh
│  │      requirements.txt
│  │      rhel.sh
│  │      sles.sh
│  │      ubuntu.sh
│  │      
│  └─vagrant
│          autorun-spdk.conf
│          create_nvme_img.sh
│          create_vbox.sh
│          local.conf
│          README.md
│          run-autorun.sh
│          update.sh
│          Vagrantfile
│          
├─shared_lib
│      Makefile
│      
├─test
│  │  Makefile
│  │  
│  ├─accel
│  │  │  accel.sh
│  │  │  accel_rpc.sh
│  │  │  bib
│  │  │  Makefile
│  │  │  
│  │  └─dif
│  │          .gitignore
│  │          dif.c
│  │          Makefile
│  │          
│  ├─app
│  │  │  cmdline.sh
│  │  │  Makefile
│  │  │  version.sh
│  │  │  
│  │  ├─bdev_svc
│  │  │      .gitignore
│  │  │      bdev_svc.c
│  │  │      Makefile
│  │  │      
│  │  ├─fuzz
│  │  │  │  Makefile
│  │  │  │  
│  │  │  ├─common
│  │  │  │      fuzz_common.h
│  │  │  │      fuzz_rpc.py
│  │  │  │      
│  │  │  ├─iscsi_fuzz
│  │  │  │      .gitignore
│  │  │  │      iscsi_fuzz.c
│  │  │  │      Makefile
│  │  │  │      README.md
│  │  │  │      
│  │  │  ├─llvm_nvme_fuzz
│  │  │  │      .gitignore
│  │  │  │      llvm_nvme_fuzz.c
│  │  │  │      Makefile
│  │  │  │      
│  │  │  ├─llvm_vfio_fuzz
│  │  │  │      .gitignore
│  │  │  │      llvm_vfio_fuzz.c
│  │  │  │      Makefile
│  │  │  │      
│  │  │  ├─nvme_fuzz
│  │  │  │      .gitignore
│  │  │  │      example.json
│  │  │  │      Makefile
│  │  │  │      nvme_fuzz.c
│  │  │  │      README.md
│  │  │  │      
│  │  │  └─vhost_fuzz
│  │  │          .gitignore
│  │  │          example.json
│  │  │          Makefile
│  │  │          README.md
│  │  │          vhost_fuzz.c
│  │  │          vhost_fuzz.h
│  │  │          vhost_fuzz_rpc.c
│  │  │          
│  │  ├─histogram_perf
│  │  │      .gitignore
│  │  │      histogram_perf.c
│  │  │      Makefile
│  │  │      
│  │  ├─jsoncat
│  │  │      .gitignore
│  │  │      jsoncat.c
│  │  │      Makefile
│  │  │      
│  │  ├─match
│  │  │      match
│  │  │      
│  │  └─stub
│  │          .gitignore
│  │          Makefile
│  │          stub.c
│  │          
│  ├─bdev
│  │  │  bdev_raid.sh
│  │  │  blockdev.sh
│  │  │  chaining.sh
│  │  │  Makefile
│  │  │  nbd_common.sh
│  │  │  nonarray.json
│  │  │  nonenclosed.json
│  │  │  
│  │  ├─bdevio
│  │  │      .gitignore
│  │  │      bdevio.c
│  │  │      Makefile
│  │  │      tests.py
│  │  │      
│  │  └─bdevperf
│  │          common.sh
│  │          conf.json
│  │          test_config.sh
│  │          
│  ├─blobfs
│  │  │  blobfs.sh
│  │  │  Makefile
│  │  │  
│  │  ├─fuse
│  │  │      .gitignore
│  │  │      fuse.c
│  │  │      Makefile
│  │  │      
│  │  ├─mkfs
│  │  │      .gitignore
│  │  │      Makefile
│  │  │      mkfs.c
│  │  │      
│  │  └─rocksdb
│  │          .gitignore
│  │          common_flags.txt
│  │          postprocess.py
│  │          rocksdb.sh
│  │          rocksdb_commit_id
│  │          
│  ├─blobstore
│  │  │  blobstore.sh
│  │  │  btest.out.ignore
│  │  │  btest.out.match
│  │  │  test.bs
│  │  │  
│  │  ├─blobstore_grow
│  │  │      blobstore_grow.sh
│  │  │      
│  │  └─blob_io_wait
│  │          blob_io_wait.sh
│  │          
│  ├─common
│  │  │  applications.sh
│  │  │  autobuild_common.sh
│  │  │  autotest_common.sh
│  │  │  skipped_build_files.txt
│  │  │  skipped_tests.txt
│  │  │  
│  │  ├─config
│  │  │  │  autotest_setup.sh
│  │  │  │  README.md
│  │  │  │  
│  │  │  └─pkgdep
│  │  │      │  apt-get
│  │  │      │  git
│  │  │      │  pacman
│  │  │      │  pkg
│  │  │      │  tdnf
│  │  │      │  yum
│  │  │      │  
│  │  │      ├─os
│  │  │      │      centos
│  │  │      │      debian
│  │  │      │      fedora
│  │  │      │      mariner
│  │  │      │      rhel
│  │  │      │      ubuntu
│  │  │      │      
│  │  │      └─patches
│  │  │          ├─dpdk
│  │  │          │  ├─20.11
│  │  │          │  │      dpdk_pci.patch
│  │  │          │  │      dpdk_qat.patch
│  │  │          │  │      
│  │  │          │  └─21.11+
│  │  │          │          dpdk_qat.patch
│  │  │          │          
│  │  │          └─qat
│  │  │                  0001-missing-prototypes.patch
│  │  │                  0001-no-vmlinux.patch
│  │  │                  0001-phys_proc_id.patch
│  │  │                  0001-strlcpy-to-strscpy.patch
│  │  │                  
│  │  ├─lib
│  │  │  │  test_env.c
│  │  │  │  test_iobuf.c
│  │  │  │  test_rdma.c
│  │  │  │  test_sock.c
│  │  │  │  ut_multithread.c
│  │  │  │  
│  │  │  └─nvme
│  │  │          common_stubs.h
│  │  │          
│  │  └─nvme
│  │          functions.sh
│  │          
│  ├─compress
│  │      compress.sh
│  │      dpdk.json
│  │      
│  ├─cpp_headers
│  │      .gitignore
│  │      Makefile
│  │      
│  ├─dd
│  │      basic_rw.sh
│  │      bdev_to_bdev.sh
│  │      common.sh
│  │      dd.sh
│  │      malloc.sh
│  │      negative_dd.sh
│  │      posix.sh
│  │      sparse.sh
│  │      uring.sh
│  │      
│  ├─dma
│  │  │  Makefile
│  │  │  
│  │  └─test_dma
│  │          .gitignore
│  │          Makefile
│  │          test_dma.c
│  │          
│  ├─dpdk_memory_utility
│  │      test_dpdk_mem_info.sh
│  │      
│  ├─env
│  │  │  env.sh
│  │  │  Makefile
│  │  │  
│  │  ├─env_dpdk_post_init
│  │  │      .gitignore
│  │  │      env_dpdk_post_init.c
│  │  │      Makefile
│  │  │      
│  │  ├─memory
│  │  │      .gitignore
│  │  │      Makefile
│  │  │      memory_ut.c
│  │  │      
│  │  ├─mem_callbacks
│  │  │      .gitignore
│  │  │      Makefile
│  │  │      mem_callbacks.c
│  │  │      
│  │  ├─pci
│  │  │      .gitignore
│  │  │      Makefile
│  │  │      pci_ut.c
│  │  │      
│  │  └─vtophys
│  │          .gitignore
│  │          Makefile
│  │          vtophys.c
│  │          
│  ├─event
│  │  │  cpu_locks.sh
│  │  │  event.sh
│  │  │  Makefile
│  │  │  
│  │  ├─app_repeat
│  │  │      .gitignore
│  │  │      app_repeat.c
│  │  │      Makefile
│  │  │      
│  │  ├─event_perf
│  │  │      .gitignore
│  │  │      event_perf.c
│  │  │      Makefile
│  │  │      
│  │  ├─reactor
│  │  │      .gitignore
│  │  │      Makefile
│  │  │      reactor.c
│  │  │      
│  │  ├─reactor_perf
│  │  │      .gitignore
│  │  │      Makefile
│  │  │      reactor_perf.c
│  │  │      
│  │  └─scheduler
│  │          .gitignore
│  │          Makefile
│  │          scheduler.c
│  │          scheduler.sh
│  │          scheduler_plugin.py
│  │          
│  ├─external_code
│  │  │  Makefile
│  │  │  README.md
│  │  │  test_make.sh
│  │  │  
│  │  ├─accel
│  │  │      app_driver.c
│  │  │      app_module.c
│  │  │      driver.c
│  │  │      driver.json
│  │  │      Makefile
│  │  │      module.c
│  │  │      module.json
│  │  │      
│  │  ├─hello_world
│  │  │      .gitignore
│  │  │      bdev.json
│  │  │      bdev_external.json
│  │  │      hello_bdev.c
│  │  │      Makefile
│  │  │      
│  │  ├─nvme
│  │  │      .gitignore
│  │  │      identify.c
│  │  │      identify.sh
│  │  │      Makefile
│  │  │      nvme.c
│  │  │      nvme.h
│  │  │      
│  │  └─passthru
│  │          Makefile
│  │          vbdev_passthru.c
│  │          vbdev_passthru.h
│  │          vbdev_passthru_rpc.c
│  │          
│  ├─ftl
│  │  │  bdevperf.sh
│  │  │  common.sh
│  │  │  dirty_shutdown.sh
│  │  │  fio.sh
│  │  │  ftl.sh
│  │  │  restore.sh
│  │  │  trim.sh
│  │  │  upgrade_shutdown.sh
│  │  │  write_after_write.sh
│  │  │  
│  │  └─config
│  │      └─fio
│  │              drive-prep.fio
│  │              randr.fio
│  │              randrw.fio
│  │              randw-verify-depth128.fio
│  │              randw-verify-j2.fio
│  │              randw-verify-qd128-ext.fio
│  │              randw-verify-qd2048-ext.fio
│  │              randw-verify-qd256-nght.fio
│  │              randw-verify.fio
│  │              randw.fio
│  │              unmap.fio
│  │              write_after_write.fio
│  │              
│  ├─fuzz
│  │  │  autofuzz.sh
│  │  │  autofuzz_iscsi.sh
│  │  │  autofuzz_nvmf.sh
│  │  │  autofuzz_vhost.sh
│  │  │  llvm.sh
│  │  │  
│  │  └─llvm
│  │      │  common.sh
│  │      │  llvm-gcov.sh
│  │      │  
│  │      ├─nvmf
│  │      │      fuzz_json.conf
│  │      │      run.sh
│  │      │      
│  │      └─vfio
│  │              fuzz_vfio_json.conf
│  │              run.sh
│  │              
│  ├─interrupt
│  │      common.sh
│  │      interrupt_common.sh
│  │      reactor_set_interrupt.sh
│  │      reap_unregistered_poller.sh
│  │      
│  ├─ioat
│  │      ioat.sh
│  │      
│  ├─iscsi_tgt
│  │  │  common.sh
│  │  │  iscsi_tgt.sh
│  │  │  
│  │  ├─bdev_io_wait
│  │  │      bdev_io_wait.sh
│  │  │      
│  │  ├─calsoft
│  │  │      calsoft.py
│  │  │      calsoft.sh
│  │  │      iscsi.json
│  │  │      its.conf
│  │  │      
│  │  ├─digests
│  │  │      digests.sh
│  │  │      
│  │  ├─ext4test
│  │  │      ext4test.sh
│  │  │      
│  │  ├─filesystem
│  │  │      filesystem.sh
│  │  │      
│  │  ├─fio
│  │  │      fio.sh
│  │  │      iscsi.json
│  │  │      
│  │  ├─initiator
│  │  │      initiator.sh
│  │  │      
│  │  ├─ip_migration
│  │  │      ip_migration.sh
│  │  │      
│  │  ├─login_redirection
│  │  │      login_redirection.sh
│  │  │      
│  │  ├─lvol
│  │  │      iscsi_lvol.sh
│  │  │      
│  │  ├─multiconnection
│  │  │      multiconnection.sh
│  │  │      
│  │  ├─perf
│  │  │      iscsi_initiator.sh
│  │  │      iscsi_target.sh
│  │  │      perf.job
│  │  │      
│  │  ├─qos
│  │  │      qos.sh
│  │  │      
│  │  ├─rbd
│  │  │      rbd.sh
│  │  │      
│  │  ├─reset
│  │  │      reset.sh
│  │  │      
│  │  ├─resize
│  │  │      resize.sh
│  │  │      
│  │  ├─rpc_config
│  │  │      rpc_config.py
│  │  │      rpc_config.sh
│  │  │      
│  │  ├─sock
│  │  │      sock.sh
│  │  │      
│  │  └─trace_record
│  │          trace_record.sh
│  │          
│  ├─json_config
│  │  │  clear_config.py
│  │  │  common.sh
│  │  │  config_filter.py
│  │  │  extra_key.json
│  │  │  json_config.sh
│  │  │  json_config_extra_key.sh
│  │  │  json_config_with_delay.sh
│  │  │  json_diff.sh
│  │  │  
│  │  └─alias_rpc
│  │          alias_rpc.sh
│  │          conf.json
│  │          
│  ├─keyring
│  │      common.sh
│  │      file.sh
│  │      linux.sh
│  │      
│  ├─lvol
│  │  │  basic.sh
│  │  │  common.sh
│  │  │  external_copy.sh
│  │  │  external_snapshot.sh
│  │  │  hotremove.sh
│  │  │  lvol.sh
│  │  │  Makefile
│  │  │  rename.sh
│  │  │  resize.sh
│  │  │  snapshot_clone.sh
│  │  │  tasting.sh
│  │  │  thin_provisioning.sh
│  │  │  
│  │  └─esnap
│  │          .gitignore
│  │          esnap.c
│  │          Makefile
│  │          
│  ├─make
│  │      check_so_deps.sh
│  │      
│  ├─nvme
│  │  │  hw_hotplug.sh
│  │  │  Makefile
│  │  │  nvme.sh
│  │  │  nvme_bp.sh
│  │  │  nvme_fdp.sh
│  │  │  nvme_opal.sh
│  │  │  nvme_pmr.sh
│  │  │  nvme_reset_stuck_adm_cmd.sh
│  │  │  nvme_rpc.sh
│  │  │  nvme_rpc_timeouts.sh
│  │  │  nvme_scc.sh
│  │  │  sw_hotplug.sh
│  │  │  
│  │  ├─aer
│  │  │      .gitignore
│  │  │      aer.c
│  │  │      Makefile
│  │  │      
│  │  ├─boot_partition
│  │  │      .gitignore
│  │  │      boot_partition.c
│  │  │      Makefile
│  │  │      
│  │  ├─cmb
│  │  │      cmb.sh
│  │  │      cmb_copy.sh
│  │  │      
│  │  ├─compliance
│  │  │      .gitignore
│  │  │      compliance.sh
│  │  │      Makefile
│  │  │      nvme_compliance.c
│  │  │      
│  │  ├─connect_stress
│  │  │      .gitignore
│  │  │      connect_stress.c
│  │  │      Makefile
│  │  │      
│  │  ├─cuse
│  │  │      .gitignore
│  │  │      common.sh
│  │  │      cuse.c
│  │  │      Makefile
│  │  │      nvme_cuse.sh
│  │  │      nvme_cuse_rpc.sh
│  │  │      nvme_ns_manage_cuse.sh
│  │  │      spdk_nvme_cli_cuse.sh
│  │  │      spdk_nvme_cli_plugin.sh
│  │  │      spdk_smartctl_cuse.sh
│  │  │      
│  │  ├─doorbell_aers
│  │  │      .gitignore
│  │  │      doorbell_aers.c
│  │  │      Makefile
│  │  │      
│  │  ├─e2edp
│  │  │      .gitignore
│  │  │      Makefile
│  │  │      nvme_dp.c
│  │  │      
│  │  ├─err_injection
│  │  │      .gitignore
│  │  │      err_injection.c
│  │  │      Makefile
│  │  │      
│  │  ├─fdp
│  │  │      .gitignore
│  │  │      fdp.c
│  │  │      Makefile
│  │  │      
│  │  ├─fused_ordering
│  │  │      .gitignore
│  │  │      fused_ordering.c
│  │  │      Makefile
│  │  │      
│  │  ├─overhead
│  │  │      .gitignore
│  │  │      Makefile
│  │  │      overhead.c
│  │  │      README
│  │  │      
│  │  ├─perf
│  │  │      common.sh
│  │  │      config.fio.tmp
│  │  │      README.md
│  │  │      run_perf.sh
│  │  │      
│  │  ├─reserve
│  │  │      .gitignore
│  │  │      Makefile
│  │  │      reserve.c
│  │  │      
│  │  ├─reset
│  │  │      .gitignore
│  │  │      Makefile
│  │  │      reset.c
│  │  │      
│  │  ├─sgl
│  │  │      .gitignore
│  │  │      Makefile
│  │  │      sgl.c
│  │  │      
│  │  ├─simple_copy
│  │  │      .gitignore
│  │  │      Makefile
│  │  │      simple_copy.c
│  │  │      
│  │  ├─startup
│  │  │      .gitignore
│  │  │      Makefile
│  │  │      startup.c
│  │  │      
│  │  ├─xnvme
│  │  │      xnvme.sh
│  │  │      
│  │  └─zns
│  │          zns.sh
│  │          
│  ├─nvmf
│  │  │  common.sh
│  │  │  nvmf.sh
│  │  │  README.md
│  │  │  
│  │  ├─fips
│  │  │      fips.sh
│  │  │      
│  │  ├─host
│  │  │      aer.sh
│  │  │      async_init.sh
│  │  │      auth.sh
│  │  │      bdevperf.sh
│  │  │      digest.sh
│  │  │      discovery.sh
│  │  │      discovery_remove_ifc.sh
│  │  │      dma.sh
│  │  │      failover.sh
│  │  │      fio.sh
│  │  │      identify.sh
│  │  │      identify_kernel_nvmf.sh
│  │  │      mdns_discovery.sh
│  │  │      multicontroller.sh
│  │  │      multipath.sh
│  │  │      multipath_status.sh
│  │  │      perf.sh
│  │  │      target_disconnect.sh
│  │  │      timeout.sh
│  │  │      
│  │  └─target
│  │          abort.sh
│  │          abort_qd_sizes.sh
│  │          auth.sh
│  │          bdevio.sh
│  │          bdev_io_wait.sh
│  │          connect_disconnect.sh
│  │          connect_stress.sh
│  │          delete_subsystem.sh
│  │          device_removal.sh
│  │          dif.sh
│  │          discovery.sh
│  │          fabrics_fuzz.sh
│  │          filesystem.sh
│  │          fio.sh
│  │          fused_ordering.sh
│  │          host_management.sh
│  │          identify_passthru.sh
│  │          initiator_timeout.sh
│  │          invalid.sh
│  │          multiconnection.sh
│  │          multipath.sh
│  │          multitarget.sh
│  │          multitarget_rpc.py
│  │          nmic.sh
│  │          ns_hotplug_stress.sh
│  │          ns_masking.sh
│  │          nvme_cli.sh
│  │          nvmf_example.sh
│  │          nvmf_lvol.sh
│  │          nvmf_lvs_grow.sh
│  │          nvmf_vfio_user.sh
│  │          perf_adq.sh
│  │          queue_depth.sh
│  │          referrals.sh
│  │          rpc.sh
│  │          shutdown.sh
│  │          srq_overwhelm.sh
│  │          tls.sh
│  │          vfio_user_fuzz.sh
│  │          zcopy.sh
│  │          
│  ├─ocf
│  │  │  common.sh
│  │  │  ocf.sh
│  │  │  
│  │  ├─integrity
│  │  │      bdevperf-iotypes.sh
│  │  │      fio-modes.sh
│  │  │      flush.sh
│  │  │      mallocs.conf
│  │  │      stats.sh
│  │  │      test.fio
│  │  │      
│  │  └─management
│  │          configuration-change.sh
│  │          create-destruct.sh
│  │          multicore.sh
│  │          remove.sh
│  │          
│  ├─openstack
│  │      install_devstack.sh
│  │      run_openstack_tests.sh
│  │      
│  ├─packaging
│  │  │  packaging.sh
│  │  │  
│  │  └─rpm
│  │          rpm.sh
│  │          
│  ├─rpc
│  │      rpc.sh
│  │      rpc_plugin.py
│  │      skip_rpc.sh
│  │      
│  ├─rpc_client
│  │      .gitignore
│  │      Makefile
│  │      rpc_client.sh
│  │      rpc_client_test.c
│  │      
│  ├─rpc_plugins
│  │      rpc_plugin.py
│  │      scheduler_plugin.py
│  │      
│  ├─scheduler
│  │      cgroups.sh
│  │      common.sh
│  │      governor.sh
│  │      idle.sh
│  │      interrupt.sh
│  │      isolate_cores.sh
│  │      load_balancing.sh
│  │      rdmsr.pl
│  │      scheduler.sh
│  │      
│  ├─setup
│  │      acl.sh
│  │      common.sh
│  │      devices.sh
│  │      driver.sh
│  │      hugepages.sh
│  │      test-setup.sh
│  │      
│  ├─sma
│  │  │  common.sh
│  │  │  crypto.sh
│  │  │  discovery.sh
│  │  │  nvmf_tcp.sh
│  │  │  plugins.sh
│  │  │  qos.sh
│  │  │  sma.sh
│  │  │  vfiouser_qemu.sh
│  │  │  vhost_blk.sh
│  │  │  
│  │  └─plugins
│  │      ├─plugin1
│  │      │      __init__.py
│  │      │      
│  │      └─plugin2
│  │              __init__.py
│  │              
│  ├─spdkcli
│  │  │  common.sh
│  │  │  iscsi.sh
│  │  │  nvmf.sh
│  │  │  raid.sh
│  │  │  rbd.sh
│  │  │  spdkcli_job.py
│  │  │  tcp.sh
│  │  │  vhost.sh
│  │  │  virtio.sh
│  │  │  
│  │  └─match_files
│  │          spdkcli_details_lvs.test.match
│  │          spdkcli_details_vhost.test.match
│  │          spdkcli_details_vhost_ctrl.test.match
│  │          spdkcli_details_vhost_target.test.match
│  │          spdkcli_iscsi.test.match
│  │          spdkcli_nvmf.test.match
│  │          spdkcli_pmem_info.test.match
│  │          spdkcli_raid.test.match
│  │          spdkcli_rbd.test.match
│  │          spdkcli_vhost.test.match
│  │          spdkcli_virtio_pci.test.match
│  │          spdkcli_virtio_user.test.match
│  │          
│  ├─thread
│  │  │  Makefile
│  │  │  thread.sh
│  │  │  
│  │  ├─lock
│  │  │      .gitignore
│  │  │      Makefile
│  │  │      spdk_lock.c
│  │  │      
│  │  └─poller_perf
│  │          .gitignore
│  │          Makefile
│  │          poller_perf.c
│  │          
│  ├─ublk
│  │      ublk.sh
│  │      ublk_recovery.sh
│  │      
│  ├─unit
│  │  │  .gitignore
│  │  │  Makefile
│  │  │  unittest.sh
│  │  │  
│  │  ├─include
│  │  │  │  Makefile
│  │  │  │  
│  │  │  └─spdk
│  │  │      │  Makefile
│  │  │      │  
│  │  │      └─histogram_data.h
│  │  │              histogram_ut.c
│  │  │              Makefile
│  │  │              
│  │  └─lib
│  │      │  json_mock.c
│  │      │  Makefile
│  │      │  
│  │      ├─accel
│  │      │  │  Makefile
│  │      │  │  
│  │      │  ├─accel.c
│  │      │  │      accel_ut.c
│  │      │  │      Makefile
│  │      │  │      
│  │      │  ├─dpdk_compressdev.c
│  │      │  │      accel_dpdk_compressdev_ut.c
│  │      │  │      Makefile
│  │      │  │      
│  │      │  └─dpdk_cryptodev.c
│  │      │          accel_dpdk_cryptodev_ut.c
│  │      │          Makefile
│  │      │          
│  │      ├─bdev
│  │      │  │  Makefile
│  │      │  │  
│  │      │  ├─bdev.c
│  │      │  │      bdev_ut.c
│  │      │  │      Makefile
│  │      │  │      
│  │      │  ├─bdev_zone.c
│  │      │  │      bdev_zone_ut.c
│  │      │  │      Makefile
│  │      │  │      
│  │      │  ├─compress.c
│  │      │  │      compress_ut.c
│  │      │  │      Makefile
│  │      │  │      
│  │      │  ├─crypto.c
│  │      │  │      crypto_ut.c
│  │      │  │      Makefile
│  │      │  │      
│  │      │  ├─gpt
│  │      │  │  │  Makefile
│  │      │  │  │  
│  │      │  │  └─gpt.c
│  │      │  │          gpt_ut.c
│  │      │  │          Makefile
│  │      │  │          
│  │      │  ├─mt
│  │      │  │  │  Makefile
│  │      │  │  │  
│  │      │  │  └─bdev.c
│  │      │  │          bdev_ut.c
│  │      │  │          Makefile
│  │      │  │          
│  │      │  ├─nvme
│  │      │  │  │  Makefile
│  │      │  │  │  
│  │      │  │  └─bdev_nvme.c
│  │      │  │          bdev_nvme_ut.c
│  │      │  │          Makefile
│  │      │  │          
│  │      │  ├─part.c
│  │      │  │      Makefile
│  │      │  │      part_ut.c
│  │      │  │      
│  │      │  ├─raid
│  │      │  │  │  common.c
│  │      │  │  │  Makefile
│  │      │  │  │  
│  │      │  │  ├─bdev_raid.c
│  │      │  │  │      bdev_raid_ut.c
│  │      │  │  │      Makefile
│  │      │  │  │      
│  │      │  │  ├─bdev_raid_sb.c
│  │      │  │  │      bdev_raid_sb_ut.c
│  │      │  │  │      Makefile
│  │      │  │  │      
│  │      │  │  ├─concat.c
│  │      │  │  │      concat_ut.c
│  │      │  │  │      Makefile
│  │      │  │  │      
│  │      │  │  ├─raid0.c
│  │      │  │  │      Makefile
│  │      │  │  │      raid0_ut.c
│  │      │  │  │      
│  │      │  │  ├─raid1.c
│  │      │  │  │      Makefile
│  │      │  │  │      raid1_ut.c
│  │      │  │  │      
│  │      │  │  └─raid5f.c
│  │      │  │          Makefile
│  │      │  │          raid5f_ut.c
│  │      │  │          
│  │      │  ├─scsi_nvme.c
│  │      │  │      Makefile
│  │      │  │      scsi_nvme_ut.c
│  │      │  │      
│  │      │  ├─vbdev_lvol.c
│  │      │  │      Makefile
│  │      │  │      vbdev_lvol_ut.c
│  │      │  │      
│  │      │  └─vbdev_zone_block.c
│  │      │          Makefile
│  │      │          vbdev_zone_block_ut.c
│  │      │          
│  │      ├─blob
│  │      │  │  bs_dev_common.c
│  │      │  │  bs_scheduler.c
│  │      │  │  Makefile
│  │      │  │  
│  │      │  ├─blob.c
│  │      │  │      blob_ut.c
│  │      │  │      esnap_dev.c
│  │      │  │      ext_dev.c
│  │      │  │      Makefile
│  │      │  │      
│  │      │  └─blob_bdev.c
│  │      │          blob_bdev_ut.c
│  │      │          Makefile
│  │      │          
│  │      ├─blobfs
│  │      │  │  Makefile
│  │      │  │  
│  │      │  ├─blobfs_async_ut
│  │      │  │      blobfs_async_ut.c
│  │      │  │      Makefile
│  │      │  │      
│  │      │  ├─blobfs_bdev.c
│  │      │  │      blobfs_bdev_ut.c
│  │      │  │      Makefile
│  │      │  │      
│  │      │  ├─blobfs_sync_ut
│  │      │  │      blobfs_sync_ut.c
│  │      │  │      Makefile
│  │      │  │      
│  │      │  └─tree.c
│  │      │          Makefile
│  │      │          tree_ut.c
│  │      │          
│  │      ├─dma
│  │      │  │  Makefile
│  │      │  │  
│  │      │  └─dma.c
│  │      │          .gitignore
│  │      │          dma_ut.c
│  │      │          Makefile
│  │      │          
│  │      ├─env_dpdk
│  │      │  │  Makefile
│  │      │  │  
│  │      │  └─pci_event.c
│  │      │          Makefile
│  │      │          pci_event_ut.c
│  │      │          
│  │      ├─event
│  │      │  │  Makefile
│  │      │  │  
│  │      │  ├─app.c
│  │      │  │      app_ut.c
│  │      │  │      Makefile
│  │      │  │      
│  │      │  └─reactor.c
│  │      │          Makefile
│  │      │          reactor_ut.c
│  │      │          
│  │      ├─ftl
│  │      │  │  Makefile
│  │      │  │  
│  │      │  ├─common
│  │      │  │      utils.c
│  │      │  │      
│  │      │  ├─ftl_band.c
│  │      │  │      .gitignore
│  │      │  │      ftl_band_ut.c
│  │      │  │      Makefile
│  │      │  │      
│  │      │  ├─ftl_bitmap.c
│  │      │  │      .gitignore
│  │      │  │      ftl_bitmap_ut.c
│  │      │  │      Makefile
│  │      │  │      
│  │      │  ├─ftl_io.c
│  │      │  │      .gitignore
│  │      │  │      ftl_io_ut.c
│  │      │  │      Makefile
│  │      │  │      
│  │      │  ├─ftl_l2p
│  │      │  │      .gitignore
│  │      │  │      ftl_l2p_ut.c
│  │      │  │      Makefile
│  │      │  │      
│  │      │  ├─ftl_layout_upgrade
│  │      │  │      .gitignore
│  │      │  │      ftl_layout_upgrade_ut.c
│  │      │  │      Makefile
│  │      │  │      
│  │      │  ├─ftl_mempool.c
│  │      │  │      .gitignore
│  │      │  │      ftl_mempool_ut.c
│  │      │  │      Makefile
│  │      │  │      
│  │      │  ├─ftl_mngt
│  │      │  │      .gitignore
│  │      │  │      ftl_mngt_ut.c
│  │      │  │      Makefile
│  │      │  │      
│  │      │  ├─ftl_p2l.c
│  │      │  │      .gitignore
│  │      │  │      ftl_p2l_ut.c
│  │      │  │      Makefile
│  │      │  │      
│  │      │  └─ftl_sb
│  │      │          .gitignore
│  │      │          ftl_sb_ut.c
│  │      │          Makefile
│  │      │          
│  │      ├─idxd
│  │      │  │  Makefile
│  │      │  │  
│  │      │  ├─idxd.c
│  │      │  │      idxd_ut.c
│  │      │  │      Makefile
│  │      │  │      
│  │      │  └─idxd_user.c
│  │      │          idxd_user_ut.c
│  │      │          Makefile
│  │      │          
│  │      ├─init
│  │      │  │  Makefile
│  │      │  │  
│  │      │  ├─rpc.c
│  │      │  │      Makefile
│  │      │  │      rpc_ut.c
│  │      │  │      
│  │      │  └─subsystem.c
│  │      │          Makefile
│  │      │          subsystem_ut.c
│  │      │          
│  │      ├─ioat
│  │      │  │  Makefile
│  │      │  │  
│  │      │  └─ioat.c
│  │      │          ioat_ut.c
│  │      │          Makefile
│  │      │          
│  │      ├─iscsi
│  │      │  │  common.c
│  │      │  │  Makefile
│  │      │  │  
│  │      │  ├─conn.c
│  │      │  │      conn_ut.c
│  │      │  │      Makefile
│  │      │  │      
│  │      │  ├─init_grp.c
│  │      │  │      init_grp_ut.c
│  │      │  │      Makefile
│  │      │  │      
│  │      │  ├─iscsi.c
│  │      │  │      iscsi_ut.c
│  │      │  │      Makefile
│  │      │  │      
│  │      │  ├─param.c
│  │      │  │      Makefile
│  │      │  │      param_ut.c
│  │      │  │      
│  │      │  ├─portal_grp.c
│  │      │  │      Makefile
│  │      │  │      portal_grp_ut.c
│  │      │  │      
│  │      │  └─tgt_node.c
│  │      │          Makefile
│  │      │          tgt_node_ut.c
│  │      │          
│  │      ├─json
│  │      │  │  Makefile
│  │      │  │  
│  │      │  ├─json_parse.c
│  │      │  │      json_parse_ut.c
│  │      │  │      Makefile
│  │      │  │      
│  │      │  ├─json_util.c
│  │      │  │      json_util_ut.c
│  │      │  │      Makefile
│  │      │  │      
│  │      │  └─json_write.c
│  │      │          json_write_ut.c
│  │      │          Makefile
│  │      │          
│  │      ├─jsonrpc
│  │      │  │  Makefile
│  │      │  │  
│  │      │  └─jsonrpc_server.c
│  │      │          jsonrpc_server_ut.c
│  │      │          Makefile
│  │      │          
│  │      ├─keyring
│  │      │  │  Makefile
│  │      │  │  
│  │      │  └─keyring.c
│  │      │          keyring_ut.c
│  │      │          Makefile
│  │      │          
│  │      ├─log
│  │      │  │  Makefile
│  │      │  │  
│  │      │  └─log.c
│  │      │          log_ut.c
│  │      │          Makefile
│  │      │          
│  │      ├─lvol
│  │      │  │  Makefile
│  │      │  │  
│  │      │  └─lvol.c
│  │      │          lvol_ut.c
│  │      │          Makefile
│  │      │          
│  │      ├─notify
│  │      │  │  Makefile
│  │      │  │  
│  │      │  └─notify.c
│  │      │          Makefile
│  │      │          notify_ut.c
│  │      │          
│  │      ├─nvme
│  │      │  │  Makefile
│  │      │  │  
│  │      │  ├─nvme.c
│  │      │  │      Makefile
│  │      │  │      nvme_ut.c
│  │      │  │      
│  │      │  ├─nvme_ctrlr.c
│  │      │  │      Makefile
│  │      │  │      nvme_ctrlr_ut.c
│  │      │  │      
│  │      │  ├─nvme_ctrlr_cmd.c
│  │      │  │      Makefile
│  │      │  │      nvme_ctrlr_cmd_ut.c
│  │      │  │      
│  │      │  ├─nvme_ctrlr_ocssd_cmd.c
│  │      │  │      Makefile
│  │      │  │      nvme_ctrlr_ocssd_cmd_ut.c
│  │      │  │      
│  │      │  ├─nvme_cuse.c
│  │      │  │      Makefile
│  │      │  │      nvme_cuse_ut.c
│  │      │  │      
│  │      │  ├─nvme_fabric.c
│  │      │  │      Makefile
│  │      │  │      nvme_fabric_ut.c
│  │      │  │      
│  │      │  ├─nvme_io_msg.c
│  │      │  │      Makefile
│  │      │  │      nvme_io_msg_ut.c
│  │      │  │      
│  │      │  ├─nvme_ns.c
│  │      │  │      Makefile
│  │      │  │      nvme_ns_ut.c
│  │      │  │      
│  │      │  ├─nvme_ns_cmd.c
│  │      │  │      Makefile
│  │      │  │      nvme_ns_cmd_ut.c
│  │      │  │      
│  │      │  ├─nvme_ns_ocssd_cmd.c
│  │      │  │      Makefile
│  │      │  │      nvme_ns_ocssd_cmd_ut.c
│  │      │  │      
│  │      │  ├─nvme_opal.c
│  │      │  │      Makefile
│  │      │  │      nvme_opal_ut.c
│  │      │  │      
│  │      │  ├─nvme_pcie.c
│  │      │  │      Makefile
│  │      │  │      nvme_pcie_ut.c
│  │      │  │      
│  │      │  ├─nvme_pcie_common.c
│  │      │  │      Makefile
│  │      │  │      nvme_pcie_common_ut.c
│  │      │  │      
│  │      │  ├─nvme_poll_group.c
│  │      │  │      Makefile
│  │      │  │      nvme_poll_group_ut.c
│  │      │  │      
│  │      │  ├─nvme_qpair.c
│  │      │  │      Makefile
│  │      │  │      nvme_qpair_ut.c
│  │      │  │      
│  │      │  ├─nvme_quirks.c
│  │      │  │      Makefile
│  │      │  │      nvme_quirks_ut.c
│  │      │  │      
│  │      │  ├─nvme_rdma.c
│  │      │  │      Makefile
│  │      │  │      nvme_rdma_ut.c
│  │      │  │      
│  │      │  ├─nvme_tcp.c
│  │      │  │      Makefile
│  │      │  │      nvme_tcp_ut.c
│  │      │  │      
│  │      │  └─nvme_transport.c
│  │      │          Makefile
│  │      │          nvme_transport_ut.c
│  │      │          
│  │      ├─nvmf
│  │      │  │  Makefile
│  │      │  │  
│  │      │  ├─auth.c
│  │      │  │      auth_ut.c
│  │      │  │      Makefile
│  │      │  │      
│  │      │  ├─ctrlr.c
│  │      │  │      ctrlr_ut.c
│  │      │  │      Makefile
│  │      │  │      
│  │      │  ├─ctrlr_bdev.c
│  │      │  │      ctrlr_bdev_ut.c
│  │      │  │      Makefile
│  │      │  │      
│  │      │  ├─ctrlr_discovery.c
│  │      │  │      ctrlr_discovery_ut.c
│  │      │  │      Makefile
│  │      │  │      
│  │      │  ├─fc.c
│  │      │  │      fc_ut.c
│  │      │  │      Makefile
│  │      │  │      
│  │      │  ├─fc_ls.c
│  │      │  │      fc_ls_ut.c
│  │      │  │      Makefile
│  │      │  │      
│  │      │  ├─nvmf.c
│  │      │  │      Makefile
│  │      │  │      nvmf_ut.c
│  │      │  │      
│  │      │  ├─rdma.c
│  │      │  │      Makefile
│  │      │  │      rdma_ut.c
│  │      │  │      
│  │      │  ├─subsystem.c
│  │      │  │      Makefile
│  │      │  │      subsystem_ut.c
│  │      │  │      
│  │      │  ├─tcp.c
│  │      │  │      Makefile
│  │      │  │      tcp_ut.c
│  │      │  │      
│  │      │  ├─transport.c
│  │      │  │      Makefile
│  │      │  │      transport_ut.c
│  │      │  │      
│  │      │  └─vfio_user.c
│  │      │          Makefile
│  │      │          vfio_user_ut.c
│  │      │          
│  │      ├─rdma
│  │      │  │  Makefile
│  │      │  │  
│  │      │  └─common.c
│  │      │          .gitignore
│  │      │          common_ut.c
│  │      │          Makefile
│  │      │          
│  │      ├─reduce
│  │      │  │  Makefile
│  │      │  │  
│  │      │  └─reduce.c
│  │      │          Makefile
│  │      │          reduce_ut.c
│  │      │          
│  │      ├─rpc
│  │      │  │  Makefile
│  │      │  │  
│  │      │  └─rpc.c
│  │      │          .gitignore
│  │      │          Makefile
│  │      │          rpc_ut.c
│  │      │          
│  │      ├─scsi
│  │      │  │  Makefile
│  │      │  │  
│  │      │  ├─dev.c
│  │      │  │      dev_ut.c
│  │      │  │      Makefile
│  │      │  │      
│  │      │  ├─lun.c
│  │      │  │      lun_ut.c
│  │      │  │      Makefile
│  │      │  │      
│  │      │  ├─scsi.c
│  │      │  │      Makefile
│  │      │  │      scsi_ut.c
│  │      │  │      
│  │      │  ├─scsi_bdev.c
│  │      │  │      Makefile
│  │      │  │      scsi_bdev_ut.c
│  │      │  │      
│  │      │  └─scsi_pr.c
│  │      │          Makefile
│  │      │          scsi_pr_ut.c
│  │      │          
│  │      ├─sock
│  │      │  │  Makefile
│  │      │  │  
│  │      │  ├─posix.c
│  │      │  │      Makefile
│  │      │  │      posix_ut.c
│  │      │  │      
│  │      │  ├─sock.c
│  │      │  │      Makefile
│  │      │  │      sock_ut.c
│  │      │  │      
│  │      │  └─uring.c
│  │      │          Makefile
│  │      │          uring_ut.c
│  │      │          
│  │      ├─thread
│  │      │  │  Makefile
│  │      │  │  
│  │      │  ├─iobuf.c
│  │      │  │      iobuf_ut.c
│  │      │  │      Makefile
│  │      │  │      
│  │      │  └─thread.c
│  │      │          Makefile
│  │      │          thread_ut.c
│  │      │          
│  │      ├─util
│  │      │  │  Makefile
│  │      │  │  
│  │      │  ├─base64.c
│  │      │  │      base64_ut.c
│  │      │  │      Makefile
│  │      │  │      
│  │      │  ├─bit_array.c
│  │      │  │      bit_array_ut.c
│  │      │  │      Makefile
│  │      │  │      
│  │      │  ├─cpuset.c
│  │      │  │      cpuset_ut.c
│  │      │  │      Makefile
│  │      │  │      
│  │      │  ├─crc16.c
│  │      │  │      crc16_ut.c
│  │      │  │      Makefile
│  │      │  │      
│  │      │  ├─crc32c.c
│  │      │  │      crc32c_ut.c
│  │      │  │      Makefile
│  │      │  │      
│  │      │  ├─crc32_ieee.c
│  │      │  │      crc32_ieee_ut.c
│  │      │  │      Makefile
│  │      │  │      
│  │      │  ├─crc64.c
│  │      │  │      crc64_ut.c
│  │      │  │      Makefile
│  │      │  │      
│  │      │  ├─dif.c
│  │      │  │      dif_ut.c
│  │      │  │      Makefile
│  │      │  │      
│  │      │  ├─iov.c
│  │      │  │      iov_ut.c
│  │      │  │      Makefile
│  │      │  │      
│  │      │  ├─math.c
│  │      │  │      Makefile
│  │      │  │      math_ut.c
│  │      │  │      
│  │      │  ├─pipe.c
│  │      │  │      Makefile
│  │      │  │      pipe_ut.c
│  │      │  │      
│  │      │  ├─string.c
│  │      │  │      Makefile
│  │      │  │      string_ut.c
│  │      │  │      
│  │      │  └─xor.c
│  │      │          Makefile
│  │      │          xor_ut.c
│  │      │          
│  │      └─vhost
│  │          │  Makefile
│  │          │  
│  │          └─vhost.c
│  │                  Makefile
│  │                  vhost_ut.c
│  │                  
│  ├─vfio_user
│  │  │  autotest.config
│  │  │  common.sh
│  │  │  vfio_user.sh
│  │  │  
│  │  ├─nvme
│  │  │      common.sh
│  │  │      vfio_user_fio.sh
│  │  │      vfio_user_restart_vm.sh
│  │  │      
│  │  └─virtio
│  │          common.sh
│  │          fio_restart_vm.sh
│  │          initiator_bdevperf.sh
│  │          
│  ├─vhost
│  │  │  common.sh
│  │  │  irqs.sh
│  │  │  manual.sh
│  │  │  parse_irqs.sh
│  │  │  vhost.sh
│  │  │  
│  │  ├─common
│  │  │  │  autotest.config
│  │  │  │  
│  │  │  └─fio_jobs
│  │  │          default_initiator.job
│  │  │          default_integrity.job
│  │  │          default_integrity_nightly.job
│  │  │          default_performance.job
│  │  │          
│  │  ├─fio
│  │  │      fio.sh
│  │  │      vhost_fio.job
│  │  │      
│  │  ├─fiotest
│  │  │      fio.sh
│  │  │      
│  │  ├─fuzz
│  │  │      fuzz.sh
│  │  │      
│  │  ├─hotplug
│  │  │  │  blk_hotremove.sh
│  │  │  │  common.sh
│  │  │  │  scsi_hotattach.sh
│  │  │  │  scsi_hotdetach.sh
│  │  │  │  scsi_hotplug.sh
│  │  │  │  scsi_hotremove.sh
│  │  │  │  
│  │  │  └─fio_jobs
│  │  │          default_integrity.job
│  │  │          
│  │  ├─initiator
│  │  │      autotest.config
│  │  │      bdev.fio
│  │  │      blockdev.sh
│  │  │      
│  │  ├─integrity
│  │  │      integrity_start.sh
│  │  │      integrity_vm.sh
│  │  │      
│  │  ├─lvol
│  │  │      autotest.config
│  │  │      lvol_test.sh
│  │  │      
│  │  ├─migration
│  │  │      migration-tc1.job
│  │  │      migration-tc1.sh
│  │  │      migration-tc2.job
│  │  │      migration-tc2.sh
│  │  │      migration.sh
│  │  │      
│  │  ├─nvmf
│  │  │      nvmf_vhost.sh
│  │  │      nvmf_vhost_fio.job
│  │  │      
│  │  ├─other
│  │  │      negative.sh
│  │  │      
│  │  ├─perf_bench
│  │  │      vhost_perf.sh
│  │  │      
│  │  ├─readonly
│  │  │      delete_partition_vm.sh
│  │  │      disabled_readonly_vm.sh
│  │  │      enabled_readonly_vm.sh
│  │  │      readonly.sh
│  │  │      
│  │  ├─shared
│  │  │      shared.sh
│  │  │      
│  │  ├─vhost_boot
│  │  │      vhost_boot.sh
│  │  │      
│  │  └─windows
│  │          windows_scsi_compliance.ps1
│  │          windows_scsi_compliance.py
│  │          windows_scsi_compliance.sh
│  │          
│  └─vmd
│      │  vmd.sh
│      │  
│      └─config
│              config.fio
│              
├─vfiouserbuild
│      Makefile
│      
├─xnvme
└─xnvmebuild
        Makefile
        
