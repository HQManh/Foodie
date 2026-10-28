// rea decompile_all
// name: System.Text.EncoderReplacementFallbackBuffer$$Fallback
// address: 0x743a38c
// body: available
// range: 0x743a38c-0x743a4af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x743a42c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool System_Text_EncoderReplacementFallbackBuffer__Fallback(long param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  ulong uVar11;
  undefined1 auVar12 [16];
  undefined4 uStack_58;
  undefined4 uStack_54;
  
  if (*(int *)(param_1 + 0x38) < 1) {
    if (*(long *)(param_1 + 0x30) != 0) {
      iVar1 = *(int *)(*(long *)(param_1 + 0x30) + 0x10);
      uVar2 = iVar1 - 2;
      if (iVar1 < 0) {
        iVar1 = iVar1 + 1;
      }
      *(int *)(param_1 + 0x38) = iVar1 >> 1;
      *(undefined4 *)(param_1 + 0x3c) = 0xffffffff;
      return uVar2 < 0xfffffffd;
    }
  }
  else {
    if (*(int *)(DAT_09535460 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar4 = System_Char__IsHighSurrogate(param_2,0);
    if (((uVar4 & 1) != 0) && (-1 < *(int *)(param_1 + 0x38))) goto LAB_0743a424;
    do {
      System_Text_EncoderFallbackBuffer__ThrowLastCharRecursive(uVar4,param_2 & 0xffff);
LAB_0743a424:
      if (*(long *)(param_1 + 0x30) == 0) goto LAB_0743a42c;
      uVar3 = System_String__get_Chars(*(long *)(param_1 + 0x30),*(int *)(param_1 + 0x3c) + 1,0);
      if (*(int *)(DAT_09535460 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09535460);
      }
      uVar4 = System_Char__IsLowSurrogate(uVar3,0);
    } while ((uVar4 & 1) == 0);
    if (*(long *)(param_1 + 0x30) != 0) {
      uVar3 = System_String__get_Chars(*(long *)(param_1 + 0x30),*(int *)(param_1 + 0x3c) + 1,0);
      if (*(int *)(DAT_09535460 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09535460);
      }
      uVar11 = 0;
      uVar4 = System_Char__ConvertToUtf32(param_2,uVar3,0);
      auVar12 = System_Text_EncoderFallbackBuffer__ThrowLastCharRecursive(uVar4,uVar4 & 0xffffffff);
      lVar5 = auVar12._0_8_;
      uVar4 = auVar12._8_8_ & 0xffffffff;
      if (*(int *)(DAT_09535460 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09535460);
      }
      uVar6 = System_Char__IsHighSurrogate(uVar4,0);
      if ((uVar6 & 1) == 0) {
        uStack_54 = 0xd800;
        uVar7 = FUN_03f5c42c(DAT_09535420,&uStack_54);
        uStack_58 = 0xdbff;
        uVar8 = FUN_03f5c42c(DAT_09535420,&uStack_58);
        uVar9 = thunk_FUN_03fc39d4(&DAT_09212b18);
        uVar7 = SR__Format(uVar9,uVar7,uVar8,0);
        thunk_FUN_03fc39d4(&DAT_09181558);
        uVar8 = thunk_FUN_03f9944c();
        puVar10 = &DAT_09218b18;
      }
      else {
        if (*(int *)(DAT_09535460 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar6 = System_Char__IsLowSurrogate(uVar11 & 0xffffffff,0);
        if ((uVar6 & 1) != 0) {
          if (*(int *)(lVar5 + 0x38) < 1) {
            if (*(long *)(lVar5 + 0x30) != 0) {
              iVar1 = *(int *)(*(long *)(lVar5 + 0x30) + 0x10);
              *(int *)(lVar5 + 0x38) = iVar1;
              *(undefined4 *)(lVar5 + 0x3c) = 0xffffffff;
              return iVar1 != 0;
            }
          }
          else {
            if (*(int *)(DAT_09535460 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar4 = System_Char__ConvertToUtf32(uVar4,uVar11 & 0xffffffff,0);
            System_Text_EncoderFallbackBuffer__ThrowLastCharRecursive(uVar4,uVar4 & 0xffffffff);
          }
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        uStack_54 = 0xdc00;
        uVar7 = FUN_03f5c42c(DAT_09535420,&uStack_54);
        uStack_58 = 0xdfff;
        uVar8 = FUN_03f5c42c(DAT_09535420,&uStack_58);
        uVar9 = thunk_FUN_03fc39d4(&DAT_09212b18);
        uVar7 = SR__Format(uVar9,uVar7,uVar8,0);
        thunk_FUN_03fc39d4(&DAT_09181558);
        uVar8 = thunk_FUN_03f9944c();
        puVar10 = &DAT_09218b20;
      }
      uVar9 = thunk_FUN_03fc39d4(puVar10);
      System_ArgumentOutOfRangeException___ctor(uVar8,uVar9,uVar7,0);
      uVar7 = thunk_FUN_03fc39d4(&DAT_091c8c38);
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar8,uVar7);
    }
  }
LAB_0743a42c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

