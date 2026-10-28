// rea decompile_all
// name: ChocDino.UIFX.MotionBlurSimpleTMP$$ForceMeshBackToOriginal
// address: 0x43b3818
// body: available
// range: 0x43b3818-0x43b396b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x43b3964 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x43b3968 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void ChocDino_UIFX_MotionBlurSimpleTMP__ForceMeshBackToOriginal(long param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  
  if ((DAT_09517b26 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0918b7b8);
    DAT_09517b26 = 1;
  }
  if (*(int *)(param_1 + 0x34) != 0) {
    return;
  }
  lVar3 = *(long *)(param_1 + 0xf8);
  if (lVar3 != 0) {
    uVar5 = 0;
    lVar6 = 0x28;
    while (lVar3 = TMPro_TMP_Text__get_textInfo(lVar3,0), lVar3 != 0) {
      if ((long)*(int *)(lVar3 + 0x34) <= (long)uVar5) {
        return;
      }
      if (((*(long *)(param_1 + 0xf8) == 0) ||
          (lVar3 = TMPro_TMP_Text__get_textInfo(*(long *)(param_1 + 0xf8),0), lVar3 == 0)) ||
         (lVar3 = *(long *)(lVar3 + 0x60), lVar3 == 0)) break;
      if (*(uint *)(lVar3 + 0x18) <= uVar5) goto LAB_043b3968;
      if (0 < *(int *)(lVar3 + lVar6)) {
        if ((((*(long *)(param_1 + 0xf8) == 0) ||
             (lVar3 = TMPro_TMP_Text__get_textInfo(*(long *)(param_1 + 0xf8),0), lVar3 == 0)) ||
            ((lVar3 = *(long *)(lVar3 + 0x60), lVar3 == 0 ||
             ((*(long *)(param_1 + 0xf8) == 0 ||
              (lVar4 = TMPro_TMP_Text__get_textInfo(*(long *)(param_1 + 0xf8),0), lVar4 == 0))))))
           || (lVar4 = *(long *)(lVar4 + 0x60), lVar4 == 0)) break;
        if (*(uint *)(lVar4 + 0x18) <= uVar5) {
LAB_043b3968:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        iVar2 = *(int *)(lVar4 + lVar6);
        if (*(int *)(DAT_0918b7b8 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        if (*(uint *)(lVar3 + 0x18) <= uVar5) goto LAB_043b3968;
        iVar1 = iVar2 + 3;
        if (-1 < iVar2) {
          iVar1 = iVar2;
        }
        TMPro_TMP_MeshInfo__ResizeMeshInfo(lVar3 + lVar6 + -8,iVar1 >> 2,0,0);
      }
      lVar3 = *(long *)(param_1 + 0xf8);
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 0x50;
      if (lVar3 == 0) break;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

