// rea decompile_all
// name: CakeOrder.UI.UIPopupListRewardClaimed$$PlaceInCenteredRows
// address: 0x42bd598
// body: available
// range: 0x42bd598-0x42bd7bf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42bd7b4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42bd7bc to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_UI_UIPopupListRewardClaimed__PlaceInCenteredRows
               (float param_1,long param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  if ((DAT_095172fd & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b14a0);
    FUN_03f5c2a4(&DAT_09189c98);
    DAT_095172fd = 1;
  }
  if (*(long *)(param_2 + 0xc0) != 0) {
    UnityEngine_Behaviour__set_enabled(*(long *)(param_2 + 0xc0),0,0);
    lVar5 = *(long *)(param_2 + 0xc0);
    if (lVar5 != 0) {
      if (0 < param_3) {
        fVar8 = *(float *)(lVar5 + 0x68);
        fVar9 = *(float *)(lVar5 + 0x6c);
        fVar10 = *(float *)(lVar5 + 0x70);
        fVar7 = *(float *)(lVar5 + 0x74);
        iVar6 = 0;
        do {
          iVar2 = 0;
          if (param_4 != 0) {
            iVar2 = iVar6 / param_4;
          }
          iVar3 = param_3 - iVar2 * param_4;
          iVar1 = param_4;
          if (iVar3 <= param_4) {
            iVar1 = iVar3;
          }
          if ((*(long *)(param_2 + 0xc0) == 0) ||
             (lVar5 = *(long *)(*(long *)(param_2 + 0xc0) + 0x20), lVar5 == 0)) goto LAB_042bd7b4;
          iVar3 = UnityEngine_RectOffset__get_top(lVar5,0);
          if (*(long *)(param_2 + 0x170) == 0) goto LAB_042bd7b4;
          lVar5 = FUN_057e0998(*(long *)(param_2 + 0x170),iVar6,DAT_091b14a0);
          if ((lVar5 == 0) ||
             (plVar4 = (long *)UnityEngine_Component__get_transform(lVar5,0), plVar4 == (long *)0x0)
             ) goto LAB_042bd7b4;
          if (*plVar4 != DAT_09189c98) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c8d0(plVar4);
          }
          UnityEngine_RectTransform__set_anchorMax(0,0x3f800000,plVar4,0);
          UnityEngine_RectTransform__set_anchorMin(0,0x3f800000,plVar4,0);
          UnityEngine_RectTransform__set_pivot(0x3f000000,0x3f000000,plVar4,0);
          UnityEngine_RectTransform__set_sizeDelta(fVar8,fVar9,plVar4,0);
          UnityEngine_RectTransform__set_anchoredPosition
                    ((fVar8 + fVar10) * (float)(iVar6 + -param_4 * iVar2) +
                     fVar8 * 0.5 +
                     (param_1 - (fVar8 * (float)iVar1 + fVar10 * (float)(iVar1 + -1))) * 0.5,
                     -((fVar9 + fVar7) * (float)iVar2 + fVar9 * 0.5 + (float)iVar3),plVar4,0);
          iVar6 = iVar6 + 1;
        } while (param_3 != iVar6);
      }
      return;
    }
  }
LAB_042bd7b4:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

