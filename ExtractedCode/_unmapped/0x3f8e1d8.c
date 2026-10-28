// rea decompile_all
// name: FUN_03f8e1d8
// address: 0x3f8e1d8
// body: available
// range: 0x3f8e1d8-0x3f8e35f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void * FUN_03f8e1d8(int *param_1,size_t *param_2,ulong param_3,int param_4,ulong *param_5,
                   undefined4 *param_6)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  void *pvVar4;
  uint __flags;
  undefined4 uVar5;
  ulong uVar6;
  size_t sVar7;
  __dev_t local_d0;
  __ino_t _Stack_c8;
  ulong uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  __dev_t _Stack_a8;
  long local_a0;
  __blksize_t _Stack_98;
  __blkcnt_t local_90;
  __time_t _Stack_88;
  long lStack_80;
  __time_t _Stack_78;
  long local_70;
  __time_t _Stack_68;
  long lStack_60;
  long lStack_58;
  
  sVar7 = *param_2;
  _Stack_c8 = 0;
  local_d0 = 0;
  uStack_b8._0_4_ = 0;
  uStack_b8._4_4_ = 0;
  uStack_c0 = 0;
  _Stack_a8 = 0;
  local_b0._0_4_ = 0;
  local_b0._4_4_ = 0;
  _Stack_98 = 0;
  local_a0 = 0;
  _Stack_88 = 0;
  local_90 = 0;
  _Stack_78 = 0;
  lStack_80 = 0;
  _Stack_68 = 0;
  local_70 = 0;
  lStack_58 = 0;
  lStack_60 = 0;
  uVar1 = fstat(*param_1,(stat *)&local_d0);
  lVar3 = local_a0;
  uVar2 = (ulong)uVar1;
  if ((local_a0 < (long)param_3) ||
     ((local_a0 < (long)(sVar7 + param_3) && ((local_a0 != 0 || ((uStack_c0 & 0xf000) == 0)))))) {
    if (param_6 == (undefined4 *)0x0) {
      return (void *)0x0;
    }
    uVar5 = 10;
    goto LAB_03f8e250;
  }
  if (sVar7 == 0) {
    uVar2 = FUN_03f8e3bc(uVar2);
    sVar7 = ((lVar3 + uVar2) - 1 & -uVar2) - param_3;
  }
  lVar3 = FUN_03f8e3bc(uVar2);
  uVar2 = -lVar3 & param_3;
  sVar7 = (param_3 - uVar2) + sVar7;
  *param_2 = sVar7;
  *param_5 = uVar2;
  if (param_4 < 3) {
    if (param_4 == 0) {
      uVar6 = 0x23;
    }
    else if (param_4 == 1) {
      uVar6 = 0x21;
    }
    else {
      if (param_4 != 2) {
LAB_03f8e2f4:
        uVar1 = 0;
        __flags = 0;
        goto LAB_03f8e31c;
      }
      uVar6 = 0x22;
    }
LAB_03f8e30c:
    uVar1 = (uint)uVar6 & 7;
    __flags = (uint)(uVar6 >> 3) & 2 | 1;
  }
  else {
    if (param_4 != 3) {
      if (param_4 == 4) {
        uVar6 = 0x34;
      }
      else {
        if (param_4 != 5) goto LAB_03f8e2f4;
        uVar6 = 0x27;
      }
      goto LAB_03f8e30c;
    }
    __flags = 2;
    uVar1 = 3;
  }
LAB_03f8e31c:
  pvVar4 = mmap((void *)0x0,sVar7,uVar1,__flags,*param_1,uVar2);
  if (pvVar4 != (void *)0xffffffffffffffff) {
    return pvVar4;
  }
  if (param_6 == (undefined4 *)0x0) {
    return (void *)0x0;
  }
  uVar5 = 9;
LAB_03f8e250:
  *param_6 = uVar5;
  return (void *)0x0;
}

