// rea decompile_all
// name: AnhPD.UI.UIDrag$$OnBeginDrag
// address: 0x41cbf74
// body: available
// range: 0x41cbf74-0x41cc0db inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41cc0d8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_UI_UIDrag__OnBeginDrag
               (undefined1 param_1 [16],undefined4 param_2,long param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  undefined8 local_38;
  
  if ((DAT_09516a0a & 1) == 0) {
    FUN_03f5c2a4(&DAT_09189ca0);
    FUN_03f5c2a4(&DAT_09189c98);
    DAT_09516a0a = 1;
  }
  local_38 = 0;
  if (*(char *)(param_3 + 0x80) != '\0') {
    return;
  }
  if (*(char *)(param_3 + 0x81) != '\0') {
    *(undefined2 *)(param_3 + 0x81) = 0x100;
    AnhPD_UI_UIDrag__SetVisualVisible(param_3,1);
  }
  lVar2 = *(long *)(param_3 + 0x38);
  if (lVar2 != 0) {
    (**(code **)(lVar2 + 0x18))(*(undefined8 *)(lVar2 + 0x40),*(undefined8 *)(lVar2 + 0x28));
  }
  lVar2 = UnityEngine_Component__get_transform(param_3,0);
  if (lVar2 == 0) goto LAB_041cc0d8;
  UnityEngine_Transform__SetParent(lVar2,*(undefined8 *)(param_3 + 0x20),0);
  if (*(long *)(param_3 + 0x58) == 0) goto LAB_041cc0d8;
  uVar4 = UnityEngine_RectTransform__get_anchoredPosition(*(long *)(param_3 + 0x58),0);
  *(undefined4 *)(param_3 + 0x70) = uVar4;
  *(undefined4 *)(param_3 + 0x74) = param_2;
  if (param_4 == 0) goto LAB_041cc0d8;
  plVar3 = *(long **)(param_3 + 0x20);
  uVar4 = *(undefined4 *)(param_4 + 0x144);
  fVar6 = *(float *)(param_4 + 0x148);
  uVar1 = UnityEngine_EventSystems_PointerEventData__get_pressEventCamera(param_4,0);
  if (*(int *)(DAT_09189ca0 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09189ca0);
    if (plVar3 == (long *)0x0) goto LAB_041cc088;
LAB_041cc060:
    if (*plVar3 != DAT_09189c98) {
      plVar3 = (long *)0x0;
    }
  }
  else {
    if (plVar3 != (long *)0x0) goto LAB_041cc060;
LAB_041cc088:
    plVar3 = (long *)0x0;
  }
  UnityEngine_RectTransformUtility__ScreenPointToLocalPointInRectangle
            (uVar4,plVar3,uVar1,&local_38,0);
  if (*(long *)(param_3 + 0x58) != 0) {
    fVar5 = (float)UnityEngine_RectTransform__get_anchoredPosition(*(long *)(param_3 + 0x58),0);
    *(ulong *)(param_3 + 0x68) =
         CONCAT44(fVar6 - (float)((ulong)local_38 >> 0x20),fVar5 - (float)local_38);
    return;
  }
LAB_041cc0d8:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

