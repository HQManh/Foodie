// rea decompile_all
// name: Utilities.UI.UniformStretchGridLayoutGroup$$GetColumnWidths
// address: 0x453259c
// body: available
// range: 0x453259c-0x45326c7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x45326a4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x45326c4 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long Utilities_UI_UniformStretchGridLayoutGroup__GetColumnWidths
               (undefined1 param_1 [16],undefined1 param_2 [16],float param_3,long param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  float *pfVar6;
  int iVar7;
  float fVar8;
  
  if ((DAT_0951864f & 1) == 0) {
    FUN_03f5c2a4(&DAT_091af770);
    FUN_03f5c2a4(&DAT_091af778);
    FUN_03f5c2a4(&DAT_09189c30);
    FUN_03f5c2a4(&DAT_09180528);
    DAT_0951864f = 1;
  }
  lVar4 = FUN_03f5c394(DAT_09180528,*(undefined4 *)(param_4 + 100));
  lVar5 = *(long *)(param_4 + 0x58);
  if (lVar5 != 0) {
    iVar7 = 0;
    do {
      if (*(int *)(lVar5 + 0x18) <= iVar7) {
        return lVar4;
      }
      iVar1 = *(int *)(param_4 + 100);
      lVar5 = FUN_057e0998(lVar5,iVar7,DAT_091af778);
      if (lVar5 == 0) break;
      UnityEngine_RectTransform__get_rect(lVar5,0);
      fVar8 = param_3;
      if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if (lVar4 == 0) break;
      iVar3 = 0;
      if (iVar1 != 0) {
        iVar3 = iVar7 / iVar1;
      }
      uVar2 = iVar7 - iVar3 * iVar1;
      if (*(uint *)(lVar4 + 0x18) <= uVar2) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      pfVar6 = (float *)(lVar4 + (long)(int)uVar2 * 4 + 0x20);
      if (*pfVar6 < param_3) {
        *pfVar6 = param_3;
      }
      lVar5 = *(long *)(param_4 + 0x58);
      iVar7 = iVar7 + 1;
      param_3 = fVar8;
    } while (lVar5 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

