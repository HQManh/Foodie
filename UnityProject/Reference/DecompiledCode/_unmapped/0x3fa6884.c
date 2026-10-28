// rea decompile_all
// name: FUN_03fa6884
// address: 0x3fa6884
// body: available
// range: 0x3fa6884-0x3fa6b23 inclusive
// range: 0x3fa6b5c-0x3fa6b5f inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x3fa6b5c to 0x89db930 <EXTERNAL>::__stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_03fa6884(byte *param_1)

{
  byte *pbVar1;
  byte bVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  char *pcVar6;
  uint uVar7;
  void *local_70;
  ulong uStack_68;
  byte *local_60;
  ulong uStack_58;
  ulong local_50;
  ulong local_48;
  void *local_40;
  byte *local_38;
  ulong uStack_30;
  long local_28;
  
  lVar3 = tpidr_el0;
  local_28 = *(long *)(lVar3 + 0x28);
  bVar2 = param_1[0x30];
  local_50 = 0;
  local_48 = 0;
  local_40 = (void *)0x0;
  uVar4 = (ulong)(bVar2 >> 1);
  if ((bVar2 & 1) != 0) {
    uVar4 = *(ulong *)(param_1 + 0x38);
  }
  if (uVar4 == 0) {
    uVar7 = 0;
  }
  else {
    uVar4 = FUN_03f9492c(&local_70,param_1 + 0x30,"WindowsRuntimeMetadata");
    if ((uVar4 & 1) != 0) {
      uStack_30 = *(ulong *)(param_1 + 8);
      local_38 = *(byte **)(param_1 + 0x10);
      if ((*param_1 & 1) == 0) {
        local_38 = param_1 + 1;
        uStack_30 = (ulong)(*param_1 >> 1);
      }
      uStack_58 = (ulong)(param_1[0x18] >> 1);
      local_60 = param_1 + 0x19;
      if ((param_1[0x18] & 1) != 0) {
        uStack_58 = *(ulong *)(param_1 + 0x20);
        local_60 = *(byte **)(param_1 + 0x28);
      }
      uVar5 = FUN_03fa6b60(&local_38,&local_60);
      goto LAB_03fa6aec;
    }
    uVar4 = (ulong)(param_1[0x30] >> 1);
    pbVar1 = param_1 + 0x31;
    if ((param_1[0x30] & 1) != 0) {
      uVar4 = *(ulong *)(param_1 + 0x38);
      pbVar1 = *(byte **)(param_1 + 0x40);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           &local_50,(char *)pbVar1,uVar4);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           &local_50,", Version=");
    snprintf((char *)&local_38,0x10,"%d.",(ulong)*(ushort *)(param_1 + 0x98));
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           &local_50,(char *)&local_38);
    snprintf((char *)&local_38,0x10,"%d.",(ulong)*(ushort *)(param_1 + 0x9a));
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           &local_50,(char *)&local_38);
    snprintf((char *)&local_38,0x10,"%d.",(ulong)*(ushort *)(param_1 + 0x9c));
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           &local_50,(char *)&local_38);
    snprintf((char *)&local_38,0x10,"%d",(ulong)*(ushort *)(param_1 + 0x9e));
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           &local_50,(char *)&local_38);
    uVar4 = (ulong)(param_1[0x48] >> 1);
    if ((param_1[0x48] & 1) != 0) {
      uVar4 = *(ulong *)(param_1 + 0x50);
    }
    if (uVar4 == 0) {
      pcVar6 = ", Culture=neutral, PublicKeyToken=";
    }
    else {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      append((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &local_50,", Culture=");
      uVar4 = (ulong)(param_1[0x48] >> 1);
      pbVar1 = param_1 + 0x49;
      if ((param_1[0x48] & 1) != 0) {
        uVar4 = *(ulong *)(param_1 + 0x50);
        pbVar1 = *(byte **)(param_1 + 0x58);
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      append((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &local_50,(char *)pbVar1,uVar4);
      pcVar6 = ", PublicKeyToken=";
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           &local_50,pcVar6);
    pbVar1 = &DAT_01a48046;
    if (param_1[0x78] != 0) {
      pbVar1 = param_1 + 0x78;
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           &local_50,(char *)pbVar1);
    uVar7 = (uint)(byte)local_50._0_1_;
  }
  uStack_30 = *(ulong *)(param_1 + 8);
  local_38 = *(byte **)(param_1 + 0x10);
  if ((*param_1 & 1) == 0) {
    local_38 = param_1 + 1;
    uStack_30 = (ulong)(*param_1 >> 1);
  }
  uStack_58 = (ulong)(param_1[0x18] >> 1);
  local_60 = param_1 + 0x19;
  if ((param_1[0x18] & 1) != 0) {
    uStack_58 = *(ulong *)(param_1 + 0x20);
    local_60 = *(byte **)(param_1 + 0x28);
  }
  uStack_68 = (ulong)(uVar7 >> 1);
  local_70 = (void *)((ulong)&local_50 | 1);
  if ((uVar7 & 1) != 0) {
    uStack_68 = local_48;
    local_70 = local_40;
  }
  uVar5 = FUN_03fa6cf0(&local_38,&local_60,&local_70);
LAB_03fa6aec:
  if ((local_50 & 1) != 0) {
    operator_delete(local_40);
  }
  if (*(long *)(lVar3 + 0x28) == local_28) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

