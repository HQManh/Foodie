// rea decompile_all
// name: FUN_03f996ec
// address: 0x3f996ec
// body: available
// range: 0x3f996ec-0x3f998f3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x3f99854 to 0x3fa5c38 FUN_03fa5c38 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x3f998f0 to 0x3fa5c38 FUN_03fa5c38 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_03f996ec(undefined8 *param_1)

{
  void *pvVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  byte local_80 [16];
  void *local_70;
  ulong local_68 [2];
  void *local_58;
  ulong local_50 [2];
  void *local_40;
  ulong local_38 [2];
  void *local_28;
  
  lVar2 = FUN_03f85e80(param_1,param_1 + 2,*(undefined4 *)((long)param_1 + 0x24));
  if (lVar2 == 0) {
    local_38[0] = 0;
    local_38[1] = 0;
    local_28 = (void *)0x0;
    FUN_03f6321c(local_50,*param_1);
    pvVar1 = (void *)((ulong)local_50 | 1);
    if ((local_50[0] & 1) != 0) {
      pvVar1 = local_40;
    }
    uVar3 = FUN_03f94940(pvVar1,"__InternalDynamic");
    if (((byte)local_50[0]._0_1_ & 1) != 0) {
      operator_delete(local_40);
    }
    if ((uVar3 & 1) == 0) {
      lVar2 = FUN_03f86048(*param_1,param_1[1],local_38);
    }
    else {
      lVar2 = FUN_03f86048(0,0,local_38);
    }
    if (lVar2 == -100) {
      local_50[0] = 0;
      local_50[1] = 0;
      local_40 = (void *)0x0;
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      append((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             local_50,"Unable to load DLL \'");
      FUN_03f6321c(local_68,*param_1);
      FUN_03f6aab8(local_50,local_68);
      if (((byte)local_68[0]._0_1_ & 1) != 0) {
        operator_delete(local_58);
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      append((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             local_50,"\'. Tried the load the following dynamic libraries: ");
      FUN_03f6aab8(local_50,local_38);
      pvVar1 = (void *)((ulong)local_50 | 1);
      if ((local_50[0] & 1) != 0) {
        pvVar1 = local_40;
      }
      uVar4 = FUN_03fa6f68(pvVar1);
                    /* WARNING: Subroutine does not return */
      FUN_03fa5c38(uVar4,0);
    }
    local_50[0] = 0;
    local_50[1] = 0;
    local_40 = (void *)0x0;
    lVar2 = FUN_03f86470(lVar2,param_1,local_50);
    if (lVar2 == 0) {
      local_68[0] = 0;
      local_68[1] = 0;
      local_58 = (void *)0x0;
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      append((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             local_68,"Unable to find an entry point named \'");
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      append((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             local_68,(char *)param_1[2]);
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      append((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             local_68,"\' in \'");
      FUN_03f6321c(local_80,*param_1);
      FUN_03f6aab8(local_68,local_80);
      if ((local_80[0] & 1) != 0) {
        operator_delete(local_70);
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      append((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             local_68,"\'. Tried the following entry points: ");
      FUN_03f6aab8(local_68,local_50);
      pvVar1 = (void *)((ulong)local_68 | 1);
      if ((local_68[0] & 1) != 0) {
        pvVar1 = local_58;
      }
      uVar4 = FUN_03fa6f18(pvVar1);
                    /* WARNING: Subroutine does not return */
      FUN_03fa5c38(uVar4,0);
    }
    if ((local_50[0] & 1) != 0) {
      operator_delete(local_40);
    }
    if ((local_38[0] & 1) != 0) {
      operator_delete(local_28);
    }
  }
  return lVar2;
}

