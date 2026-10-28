// rea decompile_all
// name: AnhPD.FoodOrder.TutorialFocusCanvasView$$RectToLocal
// address: 0x4123284
// body: available
// range: 0x4123284-0x41233e3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41233dc to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41233e0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_TutorialFocusCanvasView__RectToLocal
               (undefined8 param_1,long param_2,undefined8 *param_3,undefined8 *param_4)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined4 *puVar4;
  float fVar5;
  undefined4 uVar6;
  float fVar7;
  undefined4 uVar8;
  ulong uVar9;
  ulong uVar10;
  
  if ((DAT_095162ae & 1) == 0) {
    FUN_03f5c2a4(&DAT_09189ca0);
    FUN_03f5c2a4(&DAT_091807f8);
    DAT_095162ae = 1;
  }
  lVar1 = FUN_03f5c394(DAT_091807f8,4);
  if (param_2 != 0) {
    UnityEngine_RectTransform__GetWorldCorners(param_2,lVar1,0);
    uVar2 = AnhPD_FoodOrder_TutorialFocusCanvasView__get_Cam(param_1);
    if (lVar1 != 0) {
      uVar10 = 0xff7fffffff7fffff;
      uVar9 = 0x7f7fffff7f7fffff;
      uVar3 = 0;
      puVar4 = (undefined4 *)(lVar1 + 0x28);
      do {
        if (*(uint *)(lVar1 + 0x18) <= uVar3) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        uVar6 = puVar4[-2];
        fVar7 = (float)puVar4[-1];
        uVar8 = *puVar4;
        if (*(int *)(DAT_09189ca0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        UnityEngine_RectTransformUtility__WorldToScreenPoint(uVar6,fVar7,uVar8,uVar2,0);
        fVar5 = (float)AnhPD_FoodOrder_TutorialFocusCanvasView__ScreenToLocal(param_1);
        uVar3 = uVar3 + 1;
        puVar4 = puVar4 + 3;
        uVar9 = uVar9 ^ (uVar9 ^ CONCAT44(fVar7,fVar5)) &
                        ~CONCAT44(-(uint)((float)(uVar9 >> 0x20) < fVar7),
                                  -(uint)((float)uVar9 < fVar5));
        uVar10 = uVar10 ^ (uVar10 ^ CONCAT44(fVar7,fVar5)) &
                          ~CONCAT44(-(uint)(fVar7 < (float)(uVar10 >> 0x20)),
                                    -(uint)(fVar5 < (float)uVar10));
      } while (uVar3 != 4);
      fVar7 = (float)(uVar9 >> 0x20);
      fVar5 = (float)(uVar10 >> 0x20);
      *param_3 = CONCAT44((fVar7 + fVar5) * 0.5,((float)uVar9 + (float)uVar10) * 0.5);
      *param_4 = CONCAT44(fVar5 - fVar7,(float)uVar10 - (float)uVar9);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

