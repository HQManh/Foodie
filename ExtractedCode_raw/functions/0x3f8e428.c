// rea decompile_all
// name: FUN_03f8e428
// address: 0x3f8e428
// body: available
// range: 0x3f8e428-0x3f8e4eb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_03f8e428(int param_1)

{
  uint uVar1;
  div_t dVar2;
  int *piVar3;
  timeval *__timeout;
  uint local_a4;
  timeval local_a0;
  fd_set local_90;
  
  while( true ) {
    local_90.fds_bits[1] = 0;
    local_90.fds_bits[0] = 0;
    local_90.fds_bits[3] = 0;
    local_90.fds_bits[2] = 0;
    local_90.fds_bits[5] = 0;
    local_90.fds_bits[4] = 0;
    local_90.fds_bits[7] = 0;
    local_90.fds_bits[6] = 0;
    local_90.fds_bits[9] = 0;
    local_90.fds_bits[8] = 0;
    local_90.fds_bits[0xb] = 0;
    local_90.fds_bits[10] = 0;
    local_90.fds_bits[0xd] = 0;
    local_90.fds_bits[0xc] = 0;
    local_90.fds_bits[0xf] = 0;
    local_90.fds_bits[0xe] = 0;
    __FD_SET_chk(0,&local_90,0x80);
    if (param_1 < 0) {
      __timeout = (timeval *)0x0;
    }
    else {
      dVar2 = div(param_1,1000);
      local_a0.tv_sec = (__time_t)dVar2.quot;
      local_a0.tv_usec = (long)dVar2 >> 0x20;
      __timeout = &local_a0;
    }
    uVar1 = select(1,&local_90,(fd_set *)0x0,(fd_set *)0x0,__timeout);
    if (uVar1 != 0xffffffff) break;
    piVar3 = (int *)__errno();
    if (*piVar3 != 4) {
      uVar1 = 0xffffffff;
LAB_03f8e4dc:
      return uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU);
    }
  }
  if (0 < (int)uVar1) {
    local_a4 = 0;
    uVar1 = ioctl(0,0x541b,&local_a4);
    if (-1 < (int)uVar1) {
      uVar1 = local_a4;
    }
  }
  goto LAB_03f8e4dc;
}

