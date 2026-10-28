// rea decompile_all
// name: IngameDebugConsole.DebugLogItem$$SetContent
// address: 0x733761c
// body: available
// range: 0x733761c-0x733784b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7337848 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void IngameDebugConsole_DebugLogItem__SetContent
               (long param_1,long param_2,undefined8 *param_3,undefined4 param_4,byte param_5)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  float fVar7;
  undefined4 uVar8;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  
  *(long *)(param_1 + 0x60) = param_2;
  thunk_FUN_03f5d7b8((long *)(param_1 + 0x60));
  uVar3 = param_3[2];
  uVar6 = param_3[1];
  uVar5 = *param_3;
  *(undefined4 *)(param_1 + 0x80) = param_4;
  *(undefined8 *)(param_1 + 0x78) = uVar3;
  *(undefined8 *)(param_1 + 0x70) = uVar6;
  *(undefined8 *)(param_1 + 0x68) = uVar5;
  *(byte *)(param_1 + 0x84) = param_5;
  if (*(long *)(param_1 + 0x20) == 0) goto LAB_07337848;
  uVar4 = UnityEngine_RectTransform__get_sizeDelta(*(long *)(param_1 + 0x20),0);
  lVar1 = *(long *)(param_1 + 0x38);
  if ((param_5 & 1) == 0) {
    if (lVar1 == 0) goto LAB_07337848;
    UnityEngine_UI_Text__set_horizontalOverflow(lVar1,1,0);
    if ((*(long *)(param_1 + 0xa0) == 0) || (*(long *)(param_1 + 0x58) == 0)) goto LAB_07337848;
    uVar8 = *(undefined4 *)(*(long *)(param_1 + 0xa0) + 0x70);
    lVar1 = UnityEngine_Component__get_gameObject(*(long *)(param_1 + 0x58),0);
    if (lVar1 == 0) goto LAB_07337848;
    uVar2 = UnityEngine_GameObject__get_activeSelf(lVar1,0);
    if ((uVar2 & 1) != 0) {
      if ((*(long *)(param_1 + 0x58) == 0) ||
         (lVar1 = UnityEngine_Component__get_gameObject(*(long *)(param_1 + 0x58),0), lVar1 == 0))
      goto LAB_07337848;
      UnityEngine_GameObject__SetActive(lVar1,0,0);
      if ((*(long *)(param_1 + 0x38) == 0) ||
         (lVar1 = UnityEngine_UI_Graphic__get_rectTransform(*(long *)(param_1 + 0x38),0), lVar1 == 0
         )) goto LAB_07337848;
      UnityEngine_RectTransform__set_anchoredPosition
                (*(undefined4 *)(param_1 + 0x88),*(undefined4 *)(param_1 + 0x8c),lVar1,0);
      if ((*(long *)(param_1 + 0x38) == 0) ||
         (lVar1 = UnityEngine_UI_Graphic__get_rectTransform(*(long *)(param_1 + 0x38),0), lVar1 == 0
         )) goto LAB_07337848;
      fVar7 = *(float *)(param_1 + 0x94);
      goto LAB_073377cc;
    }
  }
  else {
    if (lVar1 == 0) goto LAB_07337848;
    UnityEngine_UI_Text__set_horizontalOverflow(lVar1,0,0);
    if ((*(long *)(param_1 + 0xa0) == 0) || (*(long *)(param_1 + 0x58) == 0)) goto LAB_07337848;
    uVar8 = *(undefined4 *)(*(long *)(param_1 + 0xa0) + 0x94);
    lVar1 = UnityEngine_Component__get_gameObject(*(long *)(param_1 + 0x58),0);
    if (lVar1 == 0) goto LAB_07337848;
    uVar2 = UnityEngine_GameObject__get_activeSelf(lVar1,0);
    if ((uVar2 & 1) == 0) {
      if ((*(long *)(param_1 + 0x58) == 0) ||
         (lVar1 = UnityEngine_Component__get_gameObject(*(long *)(param_1 + 0x58),0), lVar1 == 0))
      goto LAB_07337848;
      UnityEngine_GameObject__SetActive(lVar1,1,0);
      if ((*(long *)(param_1 + 0x38) == 0) ||
         (lVar1 = UnityEngine_UI_Graphic__get_rectTransform(*(long *)(param_1 + 0x38),0), lVar1 == 0
         )) goto LAB_07337848;
      UnityEngine_RectTransform__set_anchoredPosition
                (*(undefined4 *)(param_1 + 0x88),
                 *(float *)(param_1 + 0x8c) + *(float *)(param_1 + 0x98) * 0.5,lVar1,0);
      if ((*(long *)(param_1 + 0x38) == 0) ||
         (lVar1 = UnityEngine_UI_Graphic__get_rectTransform(*(long *)(param_1 + 0x38),0), lVar1 == 0
         )) goto LAB_07337848;
      fVar7 = *(float *)(param_1 + 0x94) - *(float *)(param_1 + 0x98);
LAB_073377cc:
      UnityEngine_RectTransform__set_sizeDelta(*(undefined4 *)(param_1 + 0x90),fVar7,lVar1,0);
    }
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    UnityEngine_RectTransform__set_sizeDelta(uVar4,uVar8,*(long *)(param_1 + 0x20),0);
    uStack_68 = param_3[1];
    local_70 = *param_3;
    local_60 = param_3[2];
    IngameDebugConsole_DebugLogItem__SetText(param_1,param_2,&local_70,param_5 & 1);
    if ((param_2 != 0) && (*(long *)(param_1 + 0x40) != 0)) {
      UnityEngine_UI_Image__set_sprite(*(long *)(param_1 + 0x40),*(undefined8 *)(param_2 + 0x28),0);
      return;
    }
  }
LAB_07337848:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

