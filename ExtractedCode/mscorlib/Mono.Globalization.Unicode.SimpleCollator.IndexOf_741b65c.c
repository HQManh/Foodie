// rea decompile_all
// name: Mono.Globalization.Unicode.SimpleCollator$$IndexOf
// address: 0x741b65c
// body: available
// range: 0x741b65c-0x741b85b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x741b720 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x741b858 to 0x89db930 <EXTERNAL>::__stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Mono_Globalization_Unicode_SimpleCollator__IndexOf
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
               undefined4 param_5,int param_6)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined4 local_f0 [4];
  undefined4 local_e0 [4];
  undefined4 local_d0 [4];
  undefined8 local_c0 [2];
  undefined8 local_b0 [3];
  char local_94 [4];
  undefined8 local_90;
  undefined8 *puStack_88;
  undefined8 *local_80;
  undefined4 *puStack_78;
  undefined4 *puStack_70;
  undefined8 local_68;
  undefined8 local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  local_60 = 0;
  puStack_78 = (undefined4 *)0x0;
  local_80 = (undefined8 *)0x0;
  local_68 = 0;
  puStack_70 = (undefined4 *)0x0;
  puStack_88 = (undefined8 *)0x0;
  local_90 = 0;
  local_94[0] = '\0';
  if (param_6 == 0) {
    Mono_Globalization_Unicode_SimpleCollator__QuickIndexOf
              (param_1,param_2,param_3,param_4,param_5,local_94);
    if (local_94[0] != '\0') goto LAB_0741b744;
  }
  else {
    if ((param_6 == 0x10000000) || (param_6 == 0x40000000)) {
      thunk_FUN_03fc39d4(&DAT_09188920);
      uVar2 = thunk_FUN_03f9944c();
      uVar3 = thunk_FUN_03fc39d4(&DAT_0920d010);
      System_NotSupportedException___ctor(uVar2,uVar3,0);
      if (*(long *)(lVar1 + 0x28) == local_58) {
        uVar3 = thunk_FUN_03fc39d4(&DAT_091d9198);
                    /* WARNING: Subroutine does not return */
        FUN_03f5c414(uVar2,uVar3);
      }
      goto LAB_0741b858;
    }
LAB_0741b744:
    local_80 = local_b0;
    local_b0[0] = 0;
    local_b0[1] = 0;
    puStack_88 = local_c0;
    local_c0[0] = 0;
    local_c0[1] = 0;
    local_d0[0] = 0;
    puStack_78 = local_e0;
    local_e0[0] = 0;
    puStack_70 = local_f0;
    lVar4 = 0;
    local_f0[0] = 0;
    do {
      *(undefined1 *)((long)local_80 + lVar4) = 0;
      lVar4 = lVar4 + 1;
    } while (lVar4 != 0x10);
    lVar4 = 0;
    do {
      *(undefined1 *)((long)puStack_88 + lVar4) = 0;
      lVar4 = lVar4 + 1;
    } while (lVar4 != 0x10);
    lVar4 = 0;
    do {
      *(undefined1 *)((long)local_d0 + lVar4) = 0;
      lVar4 = lVar4 + 1;
    } while (lVar4 != 4);
    lVar4 = 0;
    do {
      *(undefined1 *)((long)puStack_78 + lVar4) = 0;
      lVar4 = lVar4 + 1;
    } while (lVar4 != 4);
    lVar4 = 0;
    do {
      *(undefined1 *)((long)puStack_70 + lVar4) = 0;
      lVar4 = lVar4 + 1;
    } while (lVar4 != 4);
    local_90 = CONCAT44(local_90._4_4_,param_6);
    local_60 = 0;
    local_68 = CONCAT44(local_68._4_4_,0xffffffff);
    Mono_Globalization_Unicode_SimpleCollator__IndexOf
              (param_1,param_2,param_3,param_4,param_5,local_d0,&local_90);
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
LAB_0741b858:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

