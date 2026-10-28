// rea decompile_all
// name: Mono.Globalization.Unicode.SimpleCollator$$MatchesBackward
// address: 0x741c72c
// body: available
// range: 0x741c72c-0x741c8db inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x741c8d8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
Mono_Globalization_Unicode_SimpleCollator__MatchesBackward
          (undefined8 param_1,long param_2,int *param_3,undefined4 param_4,undefined4 param_5,
          undefined4 param_6,undefined8 param_7,uint param_8,long param_9)

{
  uint uVar1;
  undefined2 uVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  byte bVar8;
  long local_68;
  
  local_68 = 0;
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  uVar3 = System_String__get_Chars(param_2,*param_3,0);
  uVar1 = uVar3 & 0xffff;
  if (((*(long *)(param_9 + 0x10) == 0) || (0x7f < uVar1)) ||
     ((*(byte *)((ulong)(uVar1 >> 3) + *(long *)(param_9 + 0x10)) >> (ulong)(uVar3 & 7) & 1) == 0))
  {
    if (((*(long *)(param_9 + 8) == 0) || (0x7f < uVar1)) ||
       ((*(byte *)(*(long *)(param_9 + 8) + (ulong)(uVar1 >> 3)) >> (ulong)(uVar3 & 7) & 1) == 0)) {
      uVar2 = System_String__get_Chars(param_2,*param_3,0);
      iVar4 = Mono_Globalization_Unicode_SimpleCollator__GetExtenderType(param_1,uVar2);
      local_68 = 0;
      uVar6 = Mono_Globalization_Unicode_SimpleCollator__MatchesBackwardCore
                        (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8 & 1,iVar4,
                         &local_68,param_9);
      if ((uVar6 & 1) == 0) {
        lVar7 = *(long *)(param_9 + 8);
        if (lVar7 == 0) {
          return 0;
        }
        if (local_68 != 0) {
          return 0;
        }
        if (iVar4 != 0) {
          return 0;
        }
        if (0x7f < uVar1) {
          return 0;
        }
        uVar6 = (ulong)(uVar1 >> 3);
        uVar5 = 0;
        bVar8 = *(byte *)(lVar7 + uVar6) | (byte)(1 << ((ulong)uVar1 & 7));
      }
      else {
        lVar7 = *(long *)(param_9 + 0x10);
        uVar5 = 1;
        if (lVar7 == 0) {
          return 1;
        }
        if (local_68 != 0) {
          return 1;
        }
        if (iVar4 != 0) {
          return 1;
        }
        if (0x7f < uVar1) {
          return 1;
        }
        uVar6 = (ulong)(uVar1 >> 3);
        bVar8 = *(byte *)(lVar7 + uVar6) | (byte)(1 << ((ulong)uVar1 & 7));
      }
      *(byte *)(lVar7 + uVar6) = bVar8;
    }
    else {
      uVar5 = 0;
      *param_3 = *param_3 + -1;
    }
  }
  else {
    uVar5 = 1;
  }
  return uVar5;
}

