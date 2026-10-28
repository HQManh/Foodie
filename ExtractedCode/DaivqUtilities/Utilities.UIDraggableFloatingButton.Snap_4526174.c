// rea decompile_all
// name: Utilities.UIDraggableFloatingButton$$Snap
// address: 0x4526174
// body: available
// range: 0x4526174-0x452654b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4526544 to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x4526548 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Utilities_UIDraggableFloatingButton__Snap
               (float param_1,float param_2,float param_3,float param_4,long param_5)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  fVar8 = param_2;
  if ((DAT_095185ff & 1) == 0) {
    FUN_03f5c2a4(&DAT_09189c30);
    FUN_03f5c2a4(&DAT_091dbca8);
    FUN_03f5c2a4(&DAT_091dbe90);
    DAT_095185ff = 1;
  }
  if (*(long *)(param_5 + 0x30) == 0) goto LAB_04526548;
  fVar5 = (float)UnityEngine_RectTransform__get_rect(*(long *)(param_5 + 0x30),0);
  if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  if (*(long *)(param_5 + 0x30) == 0) goto LAB_04526548;
  fVar6 = (float)UnityEngine_RectTransform__get_rect(*(long *)(param_5 + 0x30),0);
  fVar7 = param_3 + fVar6;
  if (param_1 <= param_3 + fVar6) {
    fVar7 = param_1;
  }
  if (fVar5 <= param_1) {
    fVar5 = fVar7;
  }
  if (*(long *)(param_5 + 0x30) == 0) goto LAB_04526548;
  UnityEngine_RectTransform__get_rect(*(long *)(param_5 + 0x30),0);
  if (*(long *)(param_5 + 0x30) == 0) goto LAB_04526548;
  fVar6 = fVar8;
  UnityEngine_RectTransform__get_rect(*(long *)(param_5 + 0x30),0);
  iVar1 = *(int *)(param_5 + 0x40);
  fVar7 = param_4 + fVar6;
  if (param_2 <= param_4 + fVar6) {
    fVar7 = param_2;
  }
  if (fVar8 <= param_2) {
    fVar8 = fVar7;
  }
  if (iVar1 == 3) {
    if (*(long *)(param_5 + 0x30) == 0) goto LAB_04526548;
    fVar7 = (float)UnityEngine_RectTransform__get_rect(*(long *)(param_5 + 0x30),0);
    if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if ((*(long *)(param_5 + 0x38) == 0) || (*(long *)(param_5 + 0x30) == 0)) goto LAB_04526548;
    fVar6 = *(float *)(*(long *)(param_5 + 0x38) + 0x14);
    fVar9 = (float)UnityEngine_RectTransform__get_rect(*(long *)(param_5 + 0x30),0);
    if (*(long *)(param_5 + 0x38) == 0) goto LAB_04526548;
    fVar9 = param_3 + fVar9;
    param_3 = fVar7 + fVar6;
    lVar2 = *(long *)(param_5 + 0x30);
    fVar6 = ABS(fVar5 - param_3);
    if (fVar6 < ABS(fVar5 - (fVar9 - *(float *)(*(long *)(param_5 + 0x38) + 0x18))))
    goto LAB_045262e8;
LAB_0452631c:
    if (lVar2 == 0) goto LAB_04526548;
    fVar5 = (float)UnityEngine_RectTransform__get_rect(lVar2,0);
    if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (*(long *)(param_5 + 0x38) == 0) goto LAB_04526548;
    fVar6 = *(float *)(*(long *)(param_5 + 0x38) + 0x18);
    fVar5 = (param_3 + fVar5) - fVar6;
  }
  else {
    if (iVar1 == 2) {
      lVar2 = *(long *)(param_5 + 0x30);
      goto LAB_0452631c;
    }
    if (iVar1 == 1) {
      lVar2 = *(long *)(param_5 + 0x30);
LAB_045262e8:
      if (lVar2 == 0) goto LAB_04526548;
      fVar5 = (float)UnityEngine_RectTransform__get_rect(lVar2,0);
      if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if (*(long *)(param_5 + 0x38) == 0) goto LAB_04526548;
      fVar5 = fVar5 + *(float *)(*(long *)(param_5 + 0x38) + 0x14);
    }
  }
  iVar1 = *(int *)(param_5 + 0x44);
  if (iVar1 == 3) {
    if (*(long *)(param_5 + 0x30) == 0) goto LAB_04526548;
    UnityEngine_RectTransform__get_rect(*(long *)(param_5 + 0x30),0);
    fVar7 = fVar6;
    if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if ((*(long *)(param_5 + 0x38) == 0) || (*(long *)(param_5 + 0x30) == 0)) goto LAB_04526548;
    fVar9 = *(float *)(*(long *)(param_5 + 0x38) + 0x20);
    UnityEngine_RectTransform__get_rect(*(long *)(param_5 + 0x30),0);
    if (*(long *)(param_5 + 0x38) == 0) goto LAB_04526548;
    lVar2 = *(long *)(param_5 + 0x30);
    fVar6 = ABS(fVar8 - (fVar6 + fVar9));
    if (ABS(fVar8 - ((param_4 + fVar7) - *(float *)(*(long *)(param_5 + 0x38) + 0x1c))) <= fVar6)
    goto LAB_04526420;
LAB_045263ec:
    if (lVar2 == 0) goto LAB_04526548;
    UnityEngine_RectTransform__get_rect(lVar2,0);
    fVar7 = fVar6;
    if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (*(long *)(param_5 + 0x38) == 0) goto LAB_04526548;
    fVar8 = fVar6 + *(float *)(*(long *)(param_5 + 0x38) + 0x20);
  }
  else {
    if (iVar1 == 2) {
      lVar2 = *(long *)(param_5 + 0x30);
      goto LAB_045263ec;
    }
    fVar7 = fVar6;
    if (iVar1 == 1) {
      lVar2 = *(long *)(param_5 + 0x30);
LAB_04526420:
      if (lVar2 == 0) goto LAB_04526548;
      UnityEngine_RectTransform__get_rect(lVar2,0);
      if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if (*(long *)(param_5 + 0x38) == 0) goto LAB_04526548;
      fVar7 = *(float *)(*(long *)(param_5 + 0x38) + 0x1c);
      fVar8 = (param_4 + fVar6) - fVar7;
    }
  }
  if (*(long *)(param_5 + 0x28) != 0) {
    fVar6 = (float)UnityEngine_RectTransform__get_anchoredPosition(*(long *)(param_5 + 0x28),0);
    if (DAT_09515fab == '\0') {
      FUN_03f5c2a4(&DAT_09187e80);
      DAT_09515fab = '\x01';
    }
    if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar2 = *(long *)(param_5 + 0x38);
    if (lVar2 != 0) {
      puVar4 = (undefined8 *)(param_5 + 0x88);
      fVar6 = SQRT((fVar6 - fVar5) * (fVar6 - fVar5) + (fVar7 - fVar8) * (fVar7 - fVar8)) /
              *(float *)(lVar2 + 0x24);
      fVar7 = *(float *)(lVar2 + 0x28);
      if (fVar6 <= *(float *)(lVar2 + 0x28)) {
        fVar7 = fVar6;
      }
      DG_Tweening_TweenExtensions__Kill(*puVar4,0,0);
      uVar3 = DG_Tweening_DOTweenModuleUI__DOAnchorPos
                        (fVar5,fVar8,fVar7,*(undefined8 *)(param_5 + 0x28),0,0);
      uVar3 = FUN_04d95e8c(uVar3,6,DAT_091dbe90);
      uVar3 = FUN_04d8dd74(uVar3,DAT_091dbca8);
      *puVar4 = uVar3;
      thunk_FUN_03f5d7b8(puVar4);
      return;
    }
  }
LAB_04526548:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

