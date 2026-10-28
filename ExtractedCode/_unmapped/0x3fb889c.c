// rea decompile_all
// name: FUN_03fb889c
// address: 0x3fb889c
// body: available
// range: 0x3fb889c-0x3fb8aaf inclusive
// range: 0x3fb8b14-0x3fb8b17 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x3fb8b14 to 0x89db930 <EXTERNAL>::__stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_03fb889c(long param_1,long param_2)

{
  ulong uVar1;
  size_t sVar2;
  void *pvVar3;
  void *pvVar4;
  byte bVar5;
  long lVar6;
  byte *pbVar7;
  bool bVar8;
  undefined1 auVar9 [16];
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_1b0 [16];
  void *local_1a0;
  byte local_198;
  byte bStack_197;
  undefined6 uStack_196;
  undefined2 local_190;
  undefined6 uStack_18e;
  void *local_188;
  undefined1 *local_180;
  undefined2 local_178;
  void *local_170;
  long lStack_168;
  byte local_160 [8];
  size_t local_158;
  void *local_150;
  undefined1 uStack_141;
  undefined6 local_140;
  undefined2 uStack_13a;
  undefined6 uStack_138;
  undefined1 auStack_130 [48];
  byte local_100;
  ulong local_f8;
  undefined8 local_a4;
  undefined8 uStack_9c;
  undefined8 local_94;
  undefined8 uStack_8c;
  undefined8 local_84;
  undefined8 uStack_7c;
  undefined8 local_74;
  undefined8 uStack_6c;
  undefined8 local_64;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 uStack_50;
  long local_48;
  
  lVar6 = tpidr_el0;
  local_48 = *(long *)(lVar6 + 0x28);
  if (param_1 != 0) {
    FUN_03f92aa4(param_1);
    FUN_03f926e8(local_160);
    memset(auStack_130,0,0x89);
    local_178 = 0x100;
    sVar2 = (ulong)(local_160[0] >> 1);
    local_170 = (void *)((ulong)local_160 | 1);
    if ((local_160[0] & 1) != 0) {
      sVar2 = local_158;
      local_170 = local_150;
    }
    lStack_168 = (long)local_170 + sVar2;
    uStack_9c = 0;
    local_a4 = 0;
    uStack_8c = 0;
    local_94 = 0;
    uStack_7c = 0;
    local_84 = 0;
    uStack_6c = 0;
    local_74 = 0;
    uStack_5c = 0;
    local_64 = 0;
    uStack_50 = 0;
    uStack_58 = 0;
    uStack_54 = 0;
    local_180 = auStack_130;
    auVar9 = FUN_03fb5cf4(&local_180,1);
    if ((auVar9._0_8_ & 1) == 0) {
LAB_03fb8964:
      bVar8 = true;
    }
    else {
      uVar1 = (ulong)(local_100 >> 1);
      if ((local_100 & 1) != 0) {
        uVar1 = local_f8;
      }
      if (uVar1 != 0) goto LAB_03fb8964;
      local_198 = 0;
      bStack_197 = 0;
      uStack_196 = 0;
      local_190 = 0;
      uStack_18e = 0;
      local_188 = (void *)0x0;
      sVar2 = (ulong)(local_160[0] >> 1);
      if ((local_160[0] & 1) != 0) {
        sVar2 = local_158;
      }
      FUN_03f5d198(local_1b0,auVar9._8_8_,sVar2 + 2,&uStack_141);
      pvVar4 = (void *)((ulong)local_1b0 | 1);
      if (((byte)local_1b0[0] & 1) != 0) {
        pvVar4 = local_1a0;
      }
      if (sVar2 != 0) {
        pvVar3 = (void *)((ulong)local_160 | 1);
        if ((local_160[0] & 1) != 0) {
          pvVar3 = local_150;
        }
        memmove(pvVar4,pvVar3,sVar2);
      }
      *(undefined2 *)((long)pvVar4 + sVar2) = 0x202c;
      *(undefined1 *)((undefined2 *)((long)pvVar4 + sVar2) + 1) = 0;
      pbVar7 = (byte *)std::__ndk1::
                       basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                       ::append(local_1b0,*(char **)**(undefined8 **)(param_2 + 0x20));
      pvVar4 = *(void **)(pbVar7 + 0x10);
      bVar5 = *pbVar7;
      pbVar7[0x10] = 0;
      pbVar7[0x11] = 0;
      pbVar7[0x12] = 0;
      pbVar7[0x13] = 0;
      pbVar7[0x14] = 0;
      pbVar7[0x15] = 0;
      pbVar7[0x16] = 0;
      pbVar7[0x17] = 0;
      local_140 = (undefined6)*(undefined8 *)(pbVar7 + 2);
      bStack_197 = pbVar7[1];
      uStack_13a = (undefined2)*(undefined8 *)(pbVar7 + 8);
      uStack_138 = (undefined6)((ulong)*(undefined8 *)(pbVar7 + 8) >> 0x10);
      pbVar7[0] = 0;
      pbVar7[1] = 0;
      pbVar7[2] = 0;
      pbVar7[3] = 0;
      pbVar7[4] = 0;
      pbVar7[5] = 0;
      pbVar7[6] = 0;
      pbVar7[7] = 0;
      pbVar7[8] = 0;
      pbVar7[9] = 0;
      pbVar7[10] = 0;
      pbVar7[0xb] = 0;
      pbVar7[0xc] = 0;
      pbVar7[0xd] = 0;
      pbVar7[0xe] = 0;
      pbVar7[0xf] = 0;
      uStack_196 = local_140;
      local_190 = uStack_13a;
      local_198 = bVar5;
      uStack_18e = uStack_138;
      local_188 = pvVar4;
      if (((byte)local_1b0[0] & 1) != 0) {
        operator_delete(local_1a0);
      }
      pvVar3 = (void *)((ulong)&local_198 | 1);
      if ((bVar5 & 1) != 0) {
        pvVar3 = pvVar4;
      }
      param_2 = FUN_03f967b4(pvVar3);
      if ((local_198 & 1) != 0) {
        operator_delete(local_188);
      }
      bVar8 = false;
    }
    FUN_03fb72c4(auStack_130);
    if ((local_160[0] & 1) != 0) {
      operator_delete(local_150);
    }
    if (!bVar8) goto LAB_03fb8988;
  }
  param_2 = param_1;
LAB_03fb8988:
  if (*(long *)(lVar6 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_2;
}

