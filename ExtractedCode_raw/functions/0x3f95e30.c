// rea decompile_all
// name: FUN_03f95e30
// address: 0x3f95e30
// body: available
// range: 0x3f95e30-0x3f96023 inclusive
// range: 0x3f960fc-0x3f960ff inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x3f96020 to 0x3fa5c38 FUN_03fa5c38 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x3f960fc to 0x89db930 <EXTERNAL>::__stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_03f95e30(long param_1,long param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  byte bVar3;
  long lVar4;
  ulong *puVar5;
  char *pcVar6;
  byte *pbVar7;
  undefined8 uVar8;
  byte local_120 [16];
  void *local_110;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_108 [16];
  void *local_f8;
  ulong local_f0;
  ulong uStack_e8;
  void *local_e0;
  ulong local_d0;
  ulong uStack_c8;
  void *local_c0;
  ulong local_b0;
  ulong uStack_a8;
  void *local_a0;
  ulong local_90;
  ulong uStack_88;
  void *local_80;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_78 [16];
  void *local_68;
  byte local_60;
  byte bStack_5f;
  undefined6 uStack_5e;
  undefined2 local_58;
  undefined6 uStack_56;
  ulong local_50;
  undefined6 local_48;
  undefined2 uStack_42;
  undefined6 uStack_40;
  long local_38;
  
  lVar4 = tpidr_el0;
  local_38 = *(long *)(lVar4 + 0x28);
  local_60 = 0;
  bStack_5f = 0;
  uStack_5e = 0;
  local_58 = 0;
  uStack_56 = 0;
  local_50 = 0;
  FUN_03fb7b60(local_108,param_2 + 0x20,0);
  puVar5 = (ulong *)std::__ndk1::
                    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                    insert(local_108,0,"Attempt to access method \'");
  local_e0 = (void *)puVar5[2];
  uStack_e8 = puVar5[1];
  local_f0 = *puVar5;
  puVar5[1] = 0;
  puVar5[2] = 0;
  *puVar5 = 0;
  puVar5 = (ulong *)std::__ndk1::
                    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                    append((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                            *)&local_f0,".");
  local_c0 = (void *)puVar5[2];
  uStack_c8 = puVar5[1];
  local_d0 = *puVar5;
  puVar5[1] = 0;
  puVar5[2] = 0;
  *puVar5 = 0;
  pcVar6 = (char *)FUN_03f9adb4(*(undefined8 *)(*(long *)(param_2 + 0x98) + (param_3 & 0xffff) * 8))
  ;
  puVar5 = (ulong *)std::__ndk1::
                    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                    append((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                            *)&local_d0,pcVar6);
  local_a0 = (void *)puVar5[2];
  uStack_a8 = puVar5[1];
  local_b0 = *puVar5;
  puVar5[1] = 0;
  puVar5[2] = 0;
  *puVar5 = 0;
  puVar5 = (ulong *)std::__ndk1::
                    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                    append((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                            *)&local_b0,"\' on type \'");
  local_80 = (void *)puVar5[2];
  uStack_88 = puVar5[1];
  local_90 = *puVar5;
  puVar5[1] = 0;
  puVar5[2] = 0;
  *puVar5 = 0;
  FUN_03fb7b60(local_120,param_1 + 0x20,0);
  FUN_03f6efc0(local_78,&local_90,local_120);
  pbVar7 = (byte *)std::__ndk1::
                   basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                   append(local_78,"\' failed.");
  uVar2 = *(ulong *)(pbVar7 + 0x10);
  bVar3 = *pbVar7;
  pbVar7[0x10] = 0;
  pbVar7[0x11] = 0;
  pbVar7[0x12] = 0;
  pbVar7[0x13] = 0;
  pbVar7[0x14] = 0;
  pbVar7[0x15] = 0;
  pbVar7[0x16] = 0;
  pbVar7[0x17] = 0;
  local_48 = (undefined6)*(undefined8 *)(pbVar7 + 2);
  bStack_5f = pbVar7[1];
  uStack_42 = (undefined2)*(undefined8 *)(pbVar7 + 8);
  uStack_40 = (undefined6)((ulong)*(undefined8 *)(pbVar7 + 8) >> 0x10);
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
  uStack_5e = local_48;
  local_58 = uStack_42;
  local_60 = bVar3;
  uStack_56 = uStack_40;
  local_50 = uVar2;
  if (((byte)local_78[0] & 1) != 0) {
    operator_delete(local_68);
  }
  if ((local_120[0] & 1) != 0) {
    operator_delete(local_110);
  }
  if ((local_90 & 1) != 0) {
    operator_delete(local_80);
  }
  if ((local_b0 & 1) != 0) {
    operator_delete(local_a0);
  }
  if ((local_d0 & 1) != 0) {
    operator_delete(local_c0);
  }
  if ((local_f0 & 1) != 0) {
    operator_delete(local_e0);
  }
  if (((byte)local_108[0] & 1) != 0) {
    operator_delete(local_f8);
  }
  uVar1 = (ulong)&local_60 | 1;
  if ((bVar3 & 1) != 0) {
    uVar1 = uVar2;
  }
  uVar8 = FUN_03fa70c8(uVar1);
  if (*(long *)(lVar4 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
    FUN_03fa5c38(uVar8,0);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

