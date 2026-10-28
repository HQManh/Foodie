// rea decompile_all
// name: System.Text.EncoderReplacementFallbackBuffer$$Fallback
// address: 0x743a4b0
// body: available
// range: 0x743a4b0-0x743a683 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x743a654 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x743a680 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool System_Text_EncoderReplacementFallbackBuffer__Fallback
               (long param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined4 local_28;
  undefined4 local_24;
  
  if (*(int *)(DAT_09535460 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09535460);
  }
  uVar2 = System_Char__IsHighSurrogate(param_2,0);
  if ((uVar2 & 1) == 0) {
    local_24 = 0xd800;
    uVar3 = FUN_03f5c42c(DAT_09535420,&local_24);
    local_28 = 0xdbff;
    uVar4 = FUN_03f5c42c(DAT_09535420,&local_28);
    uVar5 = thunk_FUN_03fc39d4(&DAT_09212b18);
    uVar3 = SR__Format(uVar5,uVar3,uVar4,0);
    thunk_FUN_03fc39d4(&DAT_09181558);
    uVar4 = thunk_FUN_03f9944c();
    puVar6 = &DAT_09218b18;
  }
  else {
    if (*(int *)(DAT_09535460 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar2 = System_Char__IsLowSurrogate(param_3,0);
    if ((uVar2 & 1) != 0) {
      if (*(int *)(param_1 + 0x38) < 1) {
        if (*(long *)(param_1 + 0x30) != 0) {
          iVar1 = *(int *)(*(long *)(param_1 + 0x30) + 0x10);
          *(int *)(param_1 + 0x38) = iVar1;
          *(undefined4 *)(param_1 + 0x3c) = 0xffffffff;
          return iVar1 != 0;
        }
      }
      else {
        if (*(int *)(DAT_09535460 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar2 = System_Char__ConvertToUtf32(param_2,param_3,0);
        System_Text_EncoderFallbackBuffer__ThrowLastCharRecursive(uVar2,uVar2 & 0xffffffff);
      }
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    local_24 = 0xdc00;
    uVar3 = FUN_03f5c42c(DAT_09535420,&local_24);
    local_28 = 0xdfff;
    uVar4 = FUN_03f5c42c(DAT_09535420,&local_28);
    uVar5 = thunk_FUN_03fc39d4(&DAT_09212b18);
    uVar3 = SR__Format(uVar5,uVar3,uVar4,0);
    thunk_FUN_03fc39d4(&DAT_09181558);
    uVar4 = thunk_FUN_03f9944c();
    puVar6 = &DAT_09218b20;
  }
  uVar5 = thunk_FUN_03fc39d4(puVar6);
  System_ArgumentOutOfRangeException___ctor(uVar4,uVar5,uVar3,0);
  uVar3 = thunk_FUN_03fc39d4(&DAT_091c8c38);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar4,uVar3);
}

