// rea decompile_all
// name: FUN_03f912dc
// address: 0x3f912dc
// body: available
// range: 0x3f912dc-0x3f9156f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_03f912dc(undefined8 *param_1,long *param_2)

{
  ulong uVar1;
  size_t sVar2;
  void *pvVar3;
  void *pvVar4;
  char *pcVar5;
  ulong *puVar6;
  undefined8 *puVar7;
  undefined8 extraout_x1;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  byte local_d0 [8];
  ulong local_c8;
  char *local_c0;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_b8 [16];
  void *local_a8;
  ulong local_a0;
  ulong uStack_98;
  void *local_90;
  ulong local_80;
  ulong uStack_78;
  void *local_70;
  byte local_60 [8];
  ulong local_58;
  char *local_50;
  byte local_48 [8];
  size_t local_40;
  void *local_38;
  
  FUN_03f6321c(local_48,*(undefined8 *)(*param_2 + 0x18));
  FUN_03f6321c(local_60,*(undefined8 *)(*param_2 + 0x10));
  if (param_2[3] == 0) {
    sVar2 = (ulong)(local_48[0] >> 1);
    if ((local_48[0] & 1) != 0) {
      sVar2 = local_40;
    }
    FUN_03f5d198(&local_80,extraout_x1,sVar2 + 1,&local_a0);
    pvVar3 = (void *)((ulong)&local_80 | 1);
    if ((local_80 & 1) != 0) {
      pvVar3 = local_70;
    }
    if (sVar2 != 0) {
      pvVar4 = (void *)((ulong)local_48 | 1);
      if ((local_48[0] & 1) != 0) {
        pvVar4 = local_38;
      }
      memmove(pvVar3,pvVar4,sVar2);
    }
    *(undefined2 *)((long)pvVar3 + sVar2) = 0x2e;
    uVar1 = (ulong)(local_60[0] >> 1);
    pcVar5 = (char *)((ulong)local_60 | 1);
    if ((local_60[0] & 1) != 0) {
      uVar1 = local_58;
      pcVar5 = local_50;
    }
    puVar7 = (undefined8 *)
             std::__ndk1::
             basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                       ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                         *)&local_80,pcVar5,uVar1);
    uVar8 = puVar7[2];
    uVar10 = puVar7[1];
    uVar9 = *puVar7;
    *puVar7 = 0;
    puVar7[1] = 0;
    puVar7[2] = 0;
    param_1[1] = uVar10;
    *param_1 = uVar9;
    param_1[2] = uVar8;
    local_a8 = local_70;
    if ((local_80 & 1) == 0) goto LAB_03f9153c;
  }
  else {
    sVar2 = (ulong)(local_48[0] >> 1);
    if ((local_48[0] & 1) != 0) {
      sVar2 = local_40;
    }
    FUN_03f5d198(local_b8,extraout_x1,sVar2 + 1,local_d0);
    pvVar3 = (void *)((ulong)local_b8 | 1);
    if (((byte)local_b8[0] & 1) != 0) {
      pvVar3 = local_a8;
    }
    if (sVar2 != 0) {
      pvVar4 = (void *)((ulong)local_48 | 1);
      if ((local_48[0] & 1) != 0) {
        pvVar4 = local_38;
      }
      memmove(pvVar3,pvVar4,sVar2);
    }
    *(undefined2 *)((long)pvVar3 + sVar2) = 0x2e;
    uVar1 = (ulong)(local_60[0] >> 1);
    pcVar5 = (char *)((ulong)local_60 | 1);
    if ((local_60[0] & 1) != 0) {
      uVar1 = local_58;
      pcVar5 = local_50;
    }
    puVar6 = (ulong *)std::__ndk1::
                      basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      ::append(local_b8,pcVar5,uVar1);
    local_90 = (void *)puVar6[2];
    uStack_98 = puVar6[1];
    local_a0 = *puVar6;
    puVar6[1] = 0;
    puVar6[2] = 0;
    *puVar6 = 0;
    puVar6 = (ulong *)std::__ndk1::
                      basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      ::append((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                                *)&local_a0,": ");
    local_70 = (void *)puVar6[2];
    uStack_78 = puVar6[1];
    local_80 = *puVar6;
    puVar6[1] = 0;
    puVar6[2] = 0;
    *puVar6 = 0;
    FUN_03f92aa4(param_2[3]);
    FUN_03f926e8(local_d0);
    uVar1 = (ulong)(local_d0[0] >> 1);
    pcVar5 = (char *)((ulong)local_d0 | 1);
    if ((local_d0[0] & 1) != 0) {
      uVar1 = local_c8;
      pcVar5 = local_c0;
    }
    puVar7 = (undefined8 *)
             std::__ndk1::
             basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                       ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                         *)&local_80,pcVar5,uVar1);
    uVar8 = puVar7[2];
    uVar10 = puVar7[1];
    uVar9 = *puVar7;
    *puVar7 = 0;
    puVar7[1] = 0;
    puVar7[2] = 0;
    param_1[1] = uVar10;
    *param_1 = uVar9;
    param_1[2] = uVar8;
    if ((local_d0[0] & 1) != 0) {
      operator_delete(local_c0);
    }
    if ((local_80 & 1) != 0) {
      operator_delete(local_70);
    }
    if ((local_a0 & 1) != 0) {
      operator_delete(local_90);
    }
    if (((byte)local_b8[0] & 1) == 0) goto LAB_03f9153c;
  }
  operator_delete(local_a8);
LAB_03f9153c:
  if ((local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
  if ((local_48[0] & 1) != 0) {
    operator_delete(local_38);
  }
  return;
}

