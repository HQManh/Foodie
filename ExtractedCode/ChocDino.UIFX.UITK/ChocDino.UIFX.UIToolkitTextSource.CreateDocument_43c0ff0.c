// rea decompile_all
// name: ChocDino.UIFX.UIToolkitTextSource$$CreateDocument
// address: 0x43c0ff0
// body: available
// range: 0x43c0ff0-0x43c1477 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x43c1474 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void ChocDino_UIFX_UIToolkitTextSource__CreateDocument(long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  if ((DAT_09517b85 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091cd810);
    FUN_03f5c2a4(&DAT_091cda98);
    FUN_03f5c2a4(&DAT_09184b68);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091d8710);
    FUN_03f5c2a4(&DAT_0918bab8);
    FUN_03f5c2a4(&DAT_091bd9d0);
    FUN_03f5c2a4(&DAT_091dd828);
    FUN_03f5c2a4(&DAT_0918c528);
    FUN_03f5c2a4(&DAT_092114c0);
    DAT_09517b85 = 1;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x168);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = UnityEngine_Object__op_Equality(uVar3,0,0);
  if ((uVar1 & 1) != 0) {
    lVar2 = UnityEngine_Component__get_transform(param_1,0);
    if (lVar2 == 0) goto LAB_043c1474;
    lVar2 = UnityEngine_Transform__Find(lVar2,DAT_092114c0,0);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09188ad0);
    }
    uVar1 = UnityEngine_Object__op_Implicit(lVar2,0);
    if ((uVar1 & 1) != 0) {
      if (lVar2 == 0) goto LAB_043c1474;
      uVar3 = UnityEngine_Component__get_gameObject(lVar2,0);
      *(undefined8 *)(param_1 + 0x168) = uVar3;
      thunk_FUN_03f5d7b8(param_1 + 0x168,uVar3);
    }
  }
  uVar3 = *(undefined8 *)(param_1 + 0x168);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = UnityEngine_Object__op_Equality(uVar3,0,0);
  if ((uVar1 & 1) != 0) {
    uVar3 = thunk_FUN_03f9944c(DAT_09184b68);
    UnityEngine_GameObject___ctor(uVar3,DAT_092114c0,0);
    *(undefined8 *)(param_1 + 0x168) = uVar3;
    thunk_FUN_03f5d7b8(param_1 + 0x168,uVar3);
    if (*(long *)(param_1 + 0x168) == 0) goto LAB_043c1474;
    lVar2 = UnityEngine_GameObject__get_transform(*(long *)(param_1 + 0x168),0);
    uVar3 = UnityEngine_Component__get_transform(param_1,0);
    if (lVar2 == 0) goto LAB_043c1474;
    UnityEngine_Transform__SetParent(lVar2,uVar3,0,0);
  }
  uVar3 = *(undefined8 *)(param_1 + 0x180);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = UnityEngine_Object__op_Equality(uVar3,0,0);
  if ((uVar1 & 1) != 0) {
    if (*(long *)(param_1 + 0x168) == 0) goto LAB_043c1474;
    uVar3 = FUN_04b7c324(*(long *)(param_1 + 0x168),DAT_091cda98);
    *(undefined8 *)(param_1 + 0x180) = uVar3;
    thunk_FUN_03f5d7b8(param_1 + 0x180,uVar3);
    uVar3 = *(undefined8 *)(param_1 + 0x180);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar1 = UnityEngine_Object__op_Equality(uVar3,0,0);
    if ((uVar1 & 1) != 0) {
      if (*(long *)(param_1 + 0x168) == 0) goto LAB_043c1474;
      uVar3 = FUN_04b7c294(*(long *)(param_1 + 0x168),DAT_091cd810);
      *(undefined8 *)(param_1 + 0x180) = uVar3;
      thunk_FUN_03f5d7b8(param_1 + 0x180,uVar3);
    }
    if (*(long *)(param_1 + 0x180) == 0) goto LAB_043c1474;
    UnityEngine_UIElements_UIDocument__set_visualTreeAsset(*(long *)(param_1 + 0x180),0,0);
  }
  uVar3 = *(undefined8 *)(param_1 + 400);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = UnityEngine_Object__op_Equality(uVar3,0,0);
  if ((uVar1 & 1) != 0) {
    if (*(long *)(param_1 + 0x180) == 0) goto LAB_043c1474;
    uVar3 = UnityEngine_UIElements_UIDocument__get_panelSettings(*(long *)(param_1 + 0x180),0);
    *(undefined8 *)(param_1 + 400) = uVar3;
    thunk_FUN_03f5d7b8(param_1 + 400,uVar3);
    uVar3 = *(undefined8 *)(param_1 + 400);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar1 = UnityEngine_Object__op_Equality(uVar3,0,0);
    if ((uVar1 & 1) != 0) {
      lVar2 = *(long *)(param_1 + 0x180);
      uVar3 = FUN_04d449ec(DAT_091d8710);
      if (lVar2 == 0) goto LAB_043c1474;
      UnityEngine_UIElements_UIDocument__set_panelSettings(lVar2,uVar3,0);
      *(undefined8 *)(param_1 + 400) = uVar3;
      thunk_FUN_03f5d7b8(param_1 + 400,uVar3);
      if (*(long *)(param_1 + 400) == 0) goto LAB_043c1474;
      UnityEngine_UIElements_PanelSettings__set_themeStyleSheet
                (*(long *)(param_1 + 400),*(undefined8 *)(param_1 + 0x160),0);
      lVar2 = *(long *)(param_1 + 400);
      if (lVar2 == 0) goto LAB_043c1474;
      *(undefined4 *)(lVar2 + 0x3c) = 2;
      *(undefined8 *)(lVar2 + 0x54) = 0x43800000780;
      lVar2 = *(long *)(param_1 + 400);
      if (lVar2 == 0) goto LAB_043c1474;
      *(undefined1 *)(lVar2 + 0x71) = 0;
      *(undefined8 *)(lVar2 + 0x7c) = 0;
      *(undefined8 *)(lVar2 + 0x74) = 0;
    }
  }
  if (*(long *)(param_1 + 0x188) == 0) {
    if (*(long *)(param_1 + 0x180) == 0) {
LAB_043c1474:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar2 = UnityEngine_UIElements_UIDocument__get_rootVisualElement(*(long *)(param_1 + 0x180),0);
    if (lVar2 != 0) {
      if (*(long *)(param_1 + 0x180) == 0) goto LAB_043c1474;
      uVar3 = UnityEngine_UIElements_UIDocument__get_rootVisualElement(*(long *)(param_1 + 0x180),0)
      ;
      if (*(int *)(DAT_0918c528 + 0xe4) == 0) {
        FUN_03f5c424(DAT_0918c528);
      }
      FUN_04e0f71c(&local_80,uVar3,0,0,DAT_091dd828);
      uStack_48 = uStack_78;
      local_50 = local_80;
      uStack_38 = uStack_68;
      uStack_40 = uStack_70;
      uStack_28 = uStack_58;
      local_30 = local_60;
      uVar3 = FUN_0642797c(&local_50,DAT_091bd9d0);
      *(undefined8 *)(param_1 + 0x188) = uVar3;
      thunk_FUN_03f5d7b8(param_1 + 0x188,uVar3);
      if (*(long *)(param_1 + 0x188) == 0) {
        uVar3 = thunk_FUN_03f9944c(DAT_0918bab8);
        UnityEngine_UIElements_TextElement___ctor(uVar3,0);
        *(undefined8 *)(param_1 + 0x188) = uVar3;
        thunk_FUN_03f5d7b8(param_1 + 0x188,uVar3);
        if ((*(long *)(param_1 + 0x180) == 0) ||
           (lVar2 = UnityEngine_UIElements_UIDocument__get_rootVisualElement
                              (*(long *)(param_1 + 0x180),0), lVar2 == 0)) goto LAB_043c1474;
        UnityEngine_UIElements_VisualElement__Add(lVar2,*(undefined8 *)(param_1 + 0x188),0);
      }
    }
  }
  ChocDino_UIFX_UIToolkitTextSource__ApplyTextSettings(param_1);
  return;
}

