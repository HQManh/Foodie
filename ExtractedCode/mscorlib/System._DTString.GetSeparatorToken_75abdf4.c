// rea decompile_all
// name: System.__DTString$$GetSeparatorToken
// address: 0x75abdf4
// body: available
// range: 0x75abdf4-0x75abef7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x75abef4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4
System___DTString__GetSeparatorToken
          (long param_1,long param_2,undefined4 *param_3,undefined2 *param_4)

{
  int iVar1;
  undefined2 uVar2;
  long lVar3;
  undefined4 uVar4;
  ulong uVar5;
  undefined8 local_38;
  
  if ((DAT_09521c82 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091835a8);
    FUN_03f5c2a4(&DAT_0918db18);
    DAT_09521c82 = 1;
  }
  lVar3 = DAT_0918db18;
  local_38 = 0;
  *param_3 = *(undefined4 *)(param_1 + 0x10);
  iVar1 = *(int *)(lVar3 + 0xe4);
  *param_4 = *(undefined2 *)(param_1 + 0x14);
  if (iVar1 == 0) {
    FUN_03f5c424();
  }
  uVar5 = System___DTString__SkipWhiteSpaceCurrent(param_1);
  if ((uVar5 & 1) == 0) {
    uVar4 = 0x200;
  }
  else {
    uVar2 = *(undefined2 *)(param_1 + 0x14);
    if (*(int *)(DAT_091835a8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar5 = System_DateTimeParse__IsDigit(uVar2,0);
    if ((uVar5 & 1) == 0) {
      if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar5 = System_Globalization_DateTimeFormatInfo__Tokenize
                        (param_2,0xff00,(long)&local_38 + 4,&local_38,param_1,0);
      if ((uVar5 & 1) != 0) {
        return local_38._4_4_;
      }
    }
    uVar4 = 0x300;
  }
  return uVar4;
}

