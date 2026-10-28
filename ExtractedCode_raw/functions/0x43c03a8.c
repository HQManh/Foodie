// rea decompile_all
// name: ChocDino.UIFX.TextMeshProMeshModifier$$ApplyMeshModifiers
// address: 0x43c03a8
// body: available
// range: 0x43c03a8-0x43c057b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x43c0560 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x43c0578 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void ChocDino_UIFX_TextMeshProMeshModifier__ApplyMeshModifiers(long param_1)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  
  if ((DAT_09517b7c & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c5878);
    FUN_03f5c2a4(&DAT_091c5778);
    FUN_03f5c2a4(&DAT_091ad488);
    FUN_03f5c2a4(&DAT_091b0ab8);
    DAT_09517b7c = 1;
  }
  FUN_04a6ab1c(param_1,*(undefined8 *)(param_1 + 0x30),DAT_091c5778);
  lVar5 = *(long *)(param_1 + 0x30);
  if (lVar5 != 0) {
    if (*(int *)(lVar5 + 0x18) < 1) {
      return;
    }
    plVar1 = *(long **)(param_1 + 0x28);
    if (plVar1 != (long *)0x0) {
      uVar2 = (**(code **)(*plVar1 + 0x608))(plVar1,*(undefined8 *)(*plVar1 + 0x610));
      if (*(long *)(param_1 + 0x28) != 0) {
        uVar3 = TMPro_TextMeshProUGUI__get_canvasRenderer(*(long *)(param_1 + 0x28),0);
        ChocDino_UIFX_TextMeshProMeshModifier__ModifyMesh(param_1,lVar5,uVar2,uVar3);
        if ((*(long *)(param_1 + 0x28) != 0) &&
           (lVar5 = TMPro_TMP_Text__get_textInfo(*(long *)(param_1 + 0x28),0), lVar5 != 0)) {
          if (*(int *)(lVar5 + 0x34) < 2) {
            return;
          }
          FUN_04a6ada0(param_1,0,*(undefined8 *)(param_1 + 0x38),DAT_091c5878);
          lVar5 = *(long *)(param_1 + 0x28);
          if (lVar5 != 0) {
            uVar6 = 0;
            lVar8 = 0x70;
            while (lVar5 = TMPro_TMP_Text__get_textInfo(lVar5,0), lVar5 != 0) {
              if ((long)*(int *)(lVar5 + 0x34) <= (long)(uVar6 + 1)) {
                return;
              }
              if (*(long *)(param_1 + 0x38) == 0) break;
              lVar5 = FUN_057e0998(*(long *)(param_1 + 0x38),uVar6 & 0xffffffff,DAT_091b0ab8);
              if (((*(long *)(param_1 + 0x28) == 0) ||
                  (lVar4 = TMPro_TMP_Text__get_textInfo(*(long *)(param_1 + 0x28),0), lVar4 == 0))
                 || (lVar4 = *(long *)(lVar4 + 0x60), lVar4 == 0)) break;
              uVar6 = uVar6 + 1;
              if (*(uint *)(lVar4 + 0x18) <= uVar6) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c558();
              }
              if (lVar5 == 0) break;
              uVar3 = *(undefined8 *)(param_1 + 0x30);
              uVar7 = *(undefined8 *)(lVar4 + lVar8);
              lVar8 = lVar8 + 0x50;
              uVar2 = UnityEngine_UI_Graphic__get_canvasRenderer(lVar5,0);
              ChocDino_UIFX_TextMeshProMeshModifier__ModifyMesh(param_1,uVar3,uVar7,uVar2);
              lVar5 = *(long *)(param_1 + 0x28);
              if (lVar5 == 0) break;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

