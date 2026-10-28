// rea decompile_all
// name: ChocDino.UIFX.MathUtils$$CreateRandomIndices
// address: 0x43a3890
// body: available
// range: 0x43a3890-0x43a39bb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x43a39b4 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x43a39b8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void ChocDino_UIFX_MathUtils__CreateRandomIndices(long *param_1,uint param_2)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  uint uVar6;
  
  if ((DAT_09517ab2 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091801b8);
    DAT_09517ab2 = 1;
  }
  if ((*param_1 == 0) || (*(int *)(*param_1 + 0x18) < (int)param_2)) {
    lVar4 = FUN_03f5c394(DAT_091801b8,param_2);
    *param_1 = lVar4;
    thunk_FUN_03f5d7b8(param_1,lVar4);
  }
  if (0 < (int)param_2) {
    lVar4 = *param_1;
    if (lVar4 == 0) {
LAB_043a39b8:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar6 = *(uint *)(lVar4 + 0x18);
    uVar5 = 0;
    do {
      if (uVar6 == uVar5) goto LAB_043a39b4;
      *(int *)(lVar4 + 0x20 + uVar5 * 4) = (int)uVar5;
      uVar5 = uVar5 + 1;
    } while (param_2 != uVar5);
    uVar6 = param_2;
    if (0 < (int)param_2) {
      do {
        uVar2 = UnityEngine_Random__Range(0,param_2,0);
        uVar3 = UnityEngine_Random__Range(0,(ulong)param_2,0);
        if (uVar2 != uVar3) {
          lVar4 = *param_1;
          if (lVar4 == 0) goto LAB_043a39b8;
          if ((*(uint *)(lVar4 + 0x18) <= uVar2) || (*(uint *)(lVar4 + 0x18) <= uVar3)) {
LAB_043a39b4:
                    /* WARNING: Subroutine does not return */
            FUN_03f5c558();
          }
          lVar4 = lVar4 + 0x20;
          uVar1 = *(undefined4 *)(lVar4 + (long)(int)uVar2 * 4);
          *(undefined4 *)(lVar4 + (long)(int)uVar2 * 4) =
               *(undefined4 *)(lVar4 + (long)(int)uVar3 * 4);
          *(undefined4 *)(lVar4 + (long)(int)uVar3 * 4) = uVar1;
        }
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
    }
  }
  return;
}

