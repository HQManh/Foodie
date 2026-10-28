// rea decompile_all
// name: EssentialSystemR1.OnlineTimeCheck$$DrawCheatWindow
// address: 0x457d9c8
// body: available
// range: 0x457d9c8-0x457ee0f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x457dd44 to 0x457bb8c EssentialSystemR1.OnlineTimeCheck$$SetCheatPanelInteractionBlocked (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x457ee08 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x457ee0c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void EssentialSystemR1_OnlineTimeCheck__DrawCheatWindow(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  float fVar14;
  undefined4 local_84;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_58;
  
  if ((DAT_0951891f & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c01c8);
    FUN_03f5c2a4(&DAT_09183548);
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_0917ff68);
    FUN_03f5c2a4(&DAT_09184ac0);
    FUN_03f5c2a4(&DAT_09188c20);
    FUN_03f5c2a4(&DAT_0918bd60);
    FUN_03f5c2a4(&DAT_091f9de8);
    FUN_03f5c2a4(&DAT_09207e70);
    FUN_03f5c2a4(&DAT_0920e7c0);
    FUN_03f5c2a4(&DAT_09204140);
    FUN_03f5c2a4(&DAT_092001d8);
    FUN_03f5c2a4(&DAT_09208130);
    FUN_03f5c2a4(&DAT_091f9dc8);
    FUN_03f5c2a4(&DAT_09225f88);
    FUN_03f5c2a4(&DAT_0920b238);
    FUN_03f5c2a4(&DAT_091f86c0);
    FUN_03f5c2a4(&DAT_091fbcd8);
    FUN_03f5c2a4(&DAT_091f8da0);
    FUN_03f5c2a4(&DAT_09209c98);
    FUN_03f5c2a4(&DAT_0920c9a0);
    FUN_03f5c2a4(&DAT_092134d0);
    FUN_03f5c2a4(&DAT_091f9d98);
    FUN_03f5c2a4(&DAT_09213848);
    FUN_03f5c2a4(&DAT_091f9eb0);
    FUN_03f5c2a4(&DAT_0920be28);
    FUN_03f5c2a4(&DAT_091fbcd0);
    FUN_03f5c2a4(&DAT_09226008);
    FUN_03f5c2a4(&DAT_091f9760);
    FUN_03f5c2a4(&DAT_091f9768);
    FUN_03f5c2a4(&DAT_09225fe8);
    FUN_03f5c2a4(&DAT_09201118);
    FUN_03f5c2a4(&DAT_09208508);
    FUN_03f5c2a4(&DAT_091f9ea8);
    FUN_03f5c2a4(&DAT_09209ca0);
    FUN_03f5c2a4(&DAT_0920a738);
    FUN_03f5c2a4(&DAT_0920a178);
    FUN_03f5c2a4(&DAT_0920e7b8);
    DAT_0951891f = 1;
  }
  lVar1 = DAT_091c01c8;
  lVar7 = *(long *)(DAT_091c01c8 + 0x38);
  if (lVar7 == 0) {
    FUN_03f95ac8(DAT_091c01c8);
    lVar7 = *(long *)(lVar1 + 0x38);
  }
  lVar7 = *(long *)(lVar7 + 0x10);
  if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_03f95a6c();
  }
  if (*(int *)(lVar7 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0x38) + 0x10);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_03f95a6c();
  }
  UnityEngine_GUILayout__BeginHorizontal(**(undefined8 **)(lVar1 + 0xb8),0);
  UnityEngine_GUILayout__FlexibleSpace(0);
  if (*(int *)(DAT_09184ac0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  UnityEngine_GUI__set_backgroundColor(0x3f800000,0x3ef5c28f,0x3ef5c28f,0x3f800000,0);
  if (*(int *)(DAT_09188c20 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = EssentialSystemR1_OnlineTimeCheck__StepButtonStyle();
  lVar1 = FUN_03f5c394(DAT_0917ff68,1);
  uVar3 = UnityEngine_GUILayout__Width(0x43020000,0);
  if (lVar1 == 0) goto LAB_0457ee08;
  if (*(int *)(lVar1 + 0x18) == 0) goto LAB_0457ee0c;
  *(undefined8 *)(lVar1 + 0x20) = uVar3;
  thunk_FUN_03f5d7b8();
  uVar4 = UnityEngine_GUILayout__Button(DAT_092134d0,uVar2,lVar1,0);
  UnityEngine_GUI__set_backgroundColor(0x3f800000,0x3f800000,0x3f800000,0x3f800000,0);
  UnityEngine_GUILayout__EndHorizontal(0);
  lVar1 = DAT_091c01c8;
  if ((uVar4 & 1) != 0) {
    *(undefined1 *)(param_1 + 0x48) = 0;
    EssentialSystemR1_OnlineTimeCheck__SetCheatPanelInteractionBlocked(param_1,0);
    return;
  }
  uVar12 = *(undefined4 *)(param_1 + 0x88);
  uVar13 = *(undefined4 *)(param_1 + 0x8c);
  lVar7 = *(long *)(DAT_091c01c8 + 0x38);
  if (lVar7 == 0) {
    FUN_03f95ac8(DAT_091c01c8);
    lVar7 = *(long *)(lVar1 + 0x38);
  }
  lVar7 = *(long *)(lVar7 + 0x10);
  if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_03f95a6c();
  }
  if (*(int *)(lVar7 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0x38) + 0x10);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_03f95a6c();
  }
  uVar12 = UnityEngine_GUILayout__BeginScrollView(uVar12,**(undefined8 **)(lVar1 + 0xb8),0);
  lVar1 = DAT_09188c20;
  *(undefined4 *)(param_1 + 0x88) = uVar12;
  *(undefined4 *)(param_1 + 0x8c) = uVar13;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = EssentialSystemR1_OnlineTimeCheck__get_BaseNow();
  uVar3 = EssentialSystemR1_OnlineTimeCheck__AddClamped(uVar2,*(undefined8 *)(param_1 + 0x50));
  lVar1 = DAT_09184ac0;
  *(undefined8 *)(param_1 + 0x58) = uVar3;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar1 = UnityEngine_GUI__GetNameOfFocusedControl(0);
  uVar4 = System_String__IsNullOrEmpty(lVar1,0);
  if ((uVar4 & 1) == 0) {
    if (lVar1 == 0) goto LAB_0457ee08;
    uVar4 = System_String__StartsWith(lVar1,DAT_09209ca0,4,0);
    if ((uVar4 & 1) == 0) goto LAB_0457de2c;
  }
  else {
LAB_0457de2c:
    EssentialSystemR1_OnlineTimeCheck__SyncDatePartText(param_1);
  }
  uVar3 = *(undefined8 *)(param_1 + 0x50);
  if (*(int *)(DAT_09188c20 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar3 = EssentialSystemR1_OnlineTimeCheck__FormatTimeOffset(uVar3);
  uVar5 = EssentialSystemR1_OnlineTimeCheck__OffsetValueStyle();
  lVar1 = DAT_091c01c8;
  lVar7 = *(long *)(DAT_091c01c8 + 0x38);
  if (lVar7 == 0) {
    FUN_03f95ac8(DAT_091c01c8);
    lVar7 = *(long *)(lVar1 + 0x38);
  }
  lVar7 = *(long *)(lVar7 + 0x10);
  if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_03f95a6c();
  }
  if (*(int *)(lVar7 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0x38) + 0x10);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_03f95a6c();
  }
  UnityEngine_GUILayout__Label(uVar3,uVar5,**(undefined8 **)(lVar1 + 0xb8),0);
  uVar3 = EssentialSystemR1_OnlineTimeCheck__CaptionStyle();
  lVar1 = DAT_091c01c8;
  lVar7 = *(long *)(DAT_091c01c8 + 0x38);
  if (lVar7 == 0) {
    FUN_03f95ac8(DAT_091c01c8);
    lVar7 = *(long *)(lVar1 + 0x38);
  }
  lVar7 = *(long *)(lVar7 + 0x10);
  if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_03f95a6c();
  }
  if (*(int *)(lVar7 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0x38) + 0x10);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_03f95a6c();
  }
  UnityEngine_GUILayout__Label(DAT_0920a738,uVar3,**(undefined8 **)(lVar1 + 0xb8),0);
  UnityEngine_GUILayout__Space(0x40c00000,0);
  uVar3 = EssentialSystemR1_OnlineTimeCheck__CardStyle();
  lVar1 = DAT_091c01c8;
  lVar7 = *(long *)(DAT_091c01c8 + 0x38);
  if (lVar7 == 0) {
    FUN_03f95ac8(DAT_091c01c8);
    lVar7 = *(long *)(lVar1 + 0x38);
  }
  lVar7 = *(long *)(lVar7 + 0x10);
  if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_03f95a6c();
  }
  if (*(int *)(lVar7 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0x38) + 0x10);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_03f95a6c();
  }
  UnityEngine_GUILayout__BeginVertical(uVar3,**(undefined8 **)(lVar1 + 0xb8),0);
  uVar3 = EssentialSystemR1_OnlineTimeCheck__SectionLabelStyle();
  lVar1 = DAT_091c01c8;
  lVar7 = *(long *)(DAT_091c01c8 + 0x38);
  if (lVar7 == 0) {
    FUN_03f95ac8(DAT_091c01c8);
    lVar7 = *(long *)(lVar1 + 0x38);
  }
  lVar7 = *(long *)(lVar7 + 0x10);
  if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_03f95a6c();
  }
  if (*(int *)(lVar7 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0x38) + 0x10);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_03f95a6c();
  }
  UnityEngine_GUILayout__Label(DAT_0920a178,uVar3,**(undefined8 **)(lVar1 + 0xb8),0);
  local_58 = *(undefined8 *)(param_1 + 0x58);
  uVar3 = FUN_03f5c42c(DAT_09183548,&local_58);
  uVar3 = System_String__Format(DAT_09226008,uVar3,0);
  uVar5 = EssentialSystemR1_OnlineTimeCheck__PreviewDateStyle();
  lVar1 = DAT_091c01c8;
  lVar7 = *(long *)(DAT_091c01c8 + 0x38);
  if (lVar7 == 0) {
    FUN_03f95ac8(DAT_091c01c8);
    lVar7 = *(long *)(lVar1 + 0x38);
  }
  lVar7 = *(long *)(lVar7 + 0x10);
  if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_03f95a6c();
  }
  if (*(int *)(lVar7 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0x38) + 0x10);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_03f95a6c();
  }
  UnityEngine_GUILayout__Label(uVar3,uVar5,**(undefined8 **)(lVar1 + 0xb8),0);
  local_78 = *(undefined8 *)(param_1 + 0x58);
  uVar3 = FUN_03f5c42c(DAT_09183548,&local_78);
  uVar3 = System_String__Format(DAT_09225fe8,uVar3,0);
  uVar5 = EssentialSystemR1_OnlineTimeCheck__PreviewTimeStyle();
  lVar1 = DAT_091c01c8;
  lVar7 = *(long *)(DAT_091c01c8 + 0x38);
  if (lVar7 == 0) {
    FUN_03f95ac8(DAT_091c01c8);
    lVar7 = *(long *)(lVar1 + 0x38);
  }
  lVar7 = *(long *)(lVar7 + 0x10);
  if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_03f95a6c();
  }
  if (*(int *)(lVar7 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0x38) + 0x10);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_03f95a6c();
  }
  UnityEngine_GUILayout__Label(uVar3,uVar5,**(undefined8 **)(lVar1 + 0xb8),0);
  local_80 = EssentialSystemR1_OnlineTimeCheck__get_Now();
  uVar3 = FUN_03f5c42c(DAT_09183548,&local_80);
  uVar3 = System_String__Format(DAT_091fbcd0,uVar3,0);
  uVar5 = EssentialSystemR1_OnlineTimeCheck__CaptionStyle();
  lVar1 = DAT_091c01c8;
  lVar7 = *(long *)(DAT_091c01c8 + 0x38);
  if (lVar7 == 0) {
    FUN_03f95ac8(DAT_091c01c8);
    lVar7 = *(long *)(lVar1 + 0x38);
  }
  lVar7 = *(long *)(lVar7 + 0x10);
  if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_03f95a6c();
  }
  if (*(int *)(lVar7 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0x38) + 0x10);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_03f95a6c();
  }
  UnityEngine_GUILayout__Label(uVar3,uVar5,**(undefined8 **)(lVar1 + 0xb8),0);
  UnityEngine_GUILayout__EndVertical(0);
  UnityEngine_GUILayout__Space(0x41400000,0);
  uVar3 = EssentialSystemR1_OnlineTimeCheck__SectionLabelStyle();
  lVar1 = DAT_091c01c8;
  lVar7 = *(long *)(DAT_091c01c8 + 0x38);
  if (lVar7 == 0) {
    FUN_03f95ac8(DAT_091c01c8);
    lVar7 = *(long *)(lVar1 + 0x38);
  }
  lVar7 = *(long *)(lVar7 + 0x10);
  if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_03f95a6c();
  }
  if (*(int *)(lVar7 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0x38) + 0x10);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_03f95a6c();
  }
  UnityEngine_GUILayout__Label(DAT_0920b238,uVar3,**(undefined8 **)(lVar1 + 0xb8),0);
  lVar1 = DAT_091c01c8;
  lVar7 = *(long *)(DAT_091c01c8 + 0x38);
  if (lVar7 == 0) {
    FUN_03f95ac8(DAT_091c01c8);
    lVar7 = *(long *)(lVar1 + 0x38);
  }
  lVar7 = *(long *)(lVar7 + 0x10);
  if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_03f95a6c();
  }
  if (*(int *)(lVar7 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0x38) + 0x10);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_03f95a6c();
  }
  UnityEngine_GUILayout__BeginHorizontal(**(undefined8 **)(lVar1 + 0xb8),0);
  uVar3 = EssentialSystemR1_OnlineTimeCheck__BodyLabelStyle();
  lVar1 = FUN_03f5c394(DAT_0917ff68,1);
  uVar5 = UnityEngine_GUILayout__Width(0x42400000,0);
  if (lVar1 != 0) {
    if (*(int *)(lVar1 + 0x18) != 0) {
      *(undefined8 *)(lVar1 + 0x20) = uVar5;
      thunk_FUN_03f5d7b8();
      UnityEngine_GUILayout__Label(DAT_091f8da0,uVar3,lVar1,0);
      uVar13 = *(undefined4 *)(param_1 + 0x68);
      uVar3 = EssentialSystemR1_OnlineTimeCheck__SliderStyle();
      uVar5 = EssentialSystemR1_OnlineTimeCheck__SliderThumbStyle();
      lVar1 = FUN_03f5c394(DAT_0917ff68,1);
      uVar6 = UnityEngine_GUILayout__Height(0x42280000,0);
      if (lVar1 == 0) goto LAB_0457ee08;
      if (*(int *)(lVar1 + 0x18) != 0) {
        *(undefined8 *)(lVar1 + 0x20) = uVar6;
        thunk_FUN_03f5d7b8();
        fVar8 = (float)UnityEngine_GUILayout__DoHorizontalSlider
                                 (uVar13,0xc2700000,0x42700000,uVar3,uVar5,lVar1,0);
        uVar3 = EssentialSystemR1_OnlineTimeCheck__BodyLabelStyle();
        lVar1 = FUN_03f5c394(DAT_0917ff68,1);
        uVar5 = UnityEngine_GUILayout__Width(0x42400000,0);
        if (lVar1 == 0) goto LAB_0457ee08;
        if (*(int *)(lVar1 + 0x18) != 0) {
          *(undefined8 *)(lVar1 + 0x20) = uVar5;
          thunk_FUN_03f5d7b8();
          UnityEngine_GUILayout__Label(DAT_091f86c0,uVar3,lVar1,0);
          UnityEngine_GUILayout__EndHorizontal(0);
          local_84 = *(undefined4 *)(param_1 + 0x68);
          uVar3 = FUN_03f5c42c(DAT_09535450,&local_84);
          uVar3 = System_String__Format(DAT_09225f88,uVar3,0);
          uVar5 = EssentialSystemR1_OnlineTimeCheck__CaptionStyle();
          lVar1 = DAT_091c01c8;
          lVar7 = *(long *)(DAT_091c01c8 + 0x38);
          if (lVar7 == 0) {
            FUN_03f95ac8(DAT_091c01c8);
            lVar7 = *(long *)(lVar1 + 0x38);
          }
          lVar7 = *(long *)(lVar7 + 0x10);
          if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
            lVar7 = FUN_03f95a6c();
          }
          if (*(int *)(lVar7 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          lVar1 = *(long *)(*(long *)(lVar1 + 0x38) + 0x10);
          if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
            lVar1 = FUN_03f95a6c();
          }
          UnityEngine_GUILayout__Label(uVar3,uVar5,**(undefined8 **)(lVar1 + 0xb8),0);
          fVar14 = *(float *)(param_1 + 0x68);
          if (DAT_09515cee == '\0') {
            FUN_03f5c2a4(&DAT_09187e98);
            DAT_09515cee = '\x01';
          }
          fVar10 = ABS(fVar14);
          fVar9 = ABS(fVar8);
          if (ABS(fVar8) <= fVar10) {
            fVar9 = fVar10;
          }
          fVar11 = **(float **)(DAT_09187e98 + 0xb8) * 8.0;
          fVar10 = fVar9 * 1e-06;
          if (fVar9 * 1e-06 <= fVar11) {
            fVar10 = fVar11;
          }
          if (fVar10 <= ABS(fVar14 - fVar8)) {
            *(float *)(param_1 + 0x68) = fVar8;
            if (*(int *)(DAT_0918bd60 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar3 = System_TimeSpan__FromDays((double)fVar8,0);
            lVar1 = DAT_09188c20;
            *(undefined8 *)(param_1 + 0x50) = uVar3;
            if (*(int *)(lVar1 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar2 = EssentialSystemR1_OnlineTimeCheck__AddClamped(uVar2,uVar3);
            *(undefined8 *)(param_1 + 0x58) = uVar2;
            EssentialSystemR1_OnlineTimeCheck__SyncDatePartText(param_1);
          }
          UnityEngine_GUILayout__Space(0x41400000,0);
          if (*(int *)(DAT_09188c20 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar2 = EssentialSystemR1_OnlineTimeCheck__SectionLabelStyle();
          lVar1 = DAT_091c01c8;
          lVar7 = *(long *)(DAT_091c01c8 + 0x38);
          if (lVar7 == 0) {
            FUN_03f95ac8(DAT_091c01c8);
            lVar7 = *(long *)(lVar1 + 0x38);
          }
          lVar7 = *(long *)(lVar7 + 0x10);
          if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
            lVar7 = FUN_03f95a6c();
          }
          if (*(int *)(lVar7 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          lVar1 = *(long *)(*(long *)(lVar1 + 0x38) + 0x10);
          if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
            lVar1 = FUN_03f95a6c();
          }
          UnityEngine_GUILayout__Label(DAT_09201118,uVar2,**(undefined8 **)(lVar1 + 0xb8),0);
          uVar2 = EssentialSystemR1_OnlineTimeCheck__CaptionStyle();
          lVar1 = DAT_091c01c8;
          lVar7 = *(long *)(DAT_091c01c8 + 0x38);
          if (lVar7 == 0) {
            FUN_03f95ac8(DAT_091c01c8);
            lVar7 = *(long *)(lVar1 + 0x38);
          }
          lVar7 = *(long *)(lVar7 + 0x10);
          if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
            lVar7 = FUN_03f95a6c();
          }
          if (*(int *)(lVar7 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          lVar1 = *(long *)(*(long *)(lVar1 + 0x38) + 0x10);
          if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
            lVar1 = FUN_03f95a6c();
          }
          UnityEngine_GUILayout__Label(DAT_0920e7b8,uVar2,**(undefined8 **)(lVar1 + 0xb8),0);
          lVar1 = DAT_091c01c8;
          lVar7 = *(long *)(DAT_091c01c8 + 0x38);
          if (lVar7 == 0) {
            FUN_03f95ac8(DAT_091c01c8);
            lVar7 = *(long *)(lVar1 + 0x38);
          }
          lVar7 = *(long *)(lVar7 + 0x10);
          if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
            lVar7 = FUN_03f95a6c();
          }
          if (*(int *)(lVar7 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          lVar1 = *(long *)(*(long *)(lVar1 + 0x38) + 0x10);
          if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
            lVar1 = FUN_03f95a6c();
          }
          UnityEngine_GUILayout__BeginHorizontal(**(undefined8 **)(lVar1 + 0xb8),0);
          EssentialSystemR1_OnlineTimeCheck__DrawDatePartField(param_1,0,DAT_09213848);
          EssentialSystemR1_OnlineTimeCheck__DrawDatePartField(param_1,1,DAT_09208130);
          EssentialSystemR1_OnlineTimeCheck__DrawDatePartField(param_1,2,DAT_092001d8);
          UnityEngine_GUILayout__EndHorizontal(0);
          lVar1 = DAT_091c01c8;
          lVar7 = *(long *)(DAT_091c01c8 + 0x38);
          if (lVar7 == 0) {
            FUN_03f95ac8(DAT_091c01c8);
            lVar7 = *(long *)(lVar1 + 0x38);
          }
          lVar7 = *(long *)(lVar7 + 0x10);
          if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
            lVar7 = FUN_03f95a6c();
          }
          if (*(int *)(lVar7 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          lVar1 = *(long *)(*(long *)(lVar1 + 0x38) + 0x10);
          if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
            lVar1 = FUN_03f95a6c();
          }
          UnityEngine_GUILayout__BeginHorizontal(**(undefined8 **)(lVar1 + 0xb8),0);
          EssentialSystemR1_OnlineTimeCheck__DrawDatePartField(param_1,3,DAT_09204140);
          EssentialSystemR1_OnlineTimeCheck__DrawDatePartField(param_1,4,DAT_09207e70);
          EssentialSystemR1_OnlineTimeCheck__DrawDatePartField(param_1,5,DAT_0920c9a0);
          UnityEngine_GUILayout__EndHorizontal(0);
          EssentialSystemR1_OnlineTimeCheck__DrawActiveDatePartSlider(param_1);
          UnityEngine_GUILayout__Space(0x41600000,0);
          uVar2 = EssentialSystemR1_OnlineTimeCheck__SectionLabelStyle();
          lVar1 = DAT_091c01c8;
          lVar7 = *(long *)(DAT_091c01c8 + 0x38);
          if (lVar7 == 0) {
            FUN_03f95ac8(DAT_091c01c8);
            lVar7 = *(long *)(lVar1 + 0x38);
          }
          lVar7 = *(long *)(lVar7 + 0x10);
          if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
            lVar7 = FUN_03f95a6c();
          }
          if (*(int *)(lVar7 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          lVar1 = *(long *)(*(long *)(lVar1 + 0x38) + 0x10);
          if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
            lVar1 = FUN_03f95a6c();
          }
          UnityEngine_GUILayout__Label(DAT_09208508,uVar2,**(undefined8 **)(lVar1 + 0xb8),0);
          if (*(int *)(DAT_0918bd60 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar2 = System_TimeSpan__FromDays(0x4014000000000000,0);
          EssentialSystemR1_OnlineTimeCheck__DrawOffsetButtonPair(param_1,DAT_091f9ea8,uVar2);
          uVar2 = System_TimeSpan__FromDays(0x3ff0000000000000,0);
          EssentialSystemR1_OnlineTimeCheck__DrawOffsetButtonPair(param_1,DAT_091f9760,uVar2);
          uVar2 = System_TimeSpan__FromHours(0x4014000000000000,0);
          EssentialSystemR1_OnlineTimeCheck__DrawOffsetButtonPair(param_1,DAT_091f9eb0,uVar2);
          uVar2 = System_TimeSpan__FromHours(0x3ff0000000000000,0);
          EssentialSystemR1_OnlineTimeCheck__DrawOffsetButtonPair(param_1,DAT_091f9768,uVar2);
          uVar2 = System_TimeSpan__FromMinutes(0x4039000000000000,0);
          EssentialSystemR1_OnlineTimeCheck__DrawOffsetButtonPair(param_1,DAT_091f9d98,uVar2);
          uVar2 = System_TimeSpan__FromMinutes(0x4008000000000000,0);
          EssentialSystemR1_OnlineTimeCheck__DrawOffsetButtonPair(param_1,DAT_091f9dc8,uVar2);
          uVar2 = System_TimeSpan__FromSeconds(0x403e000000000000,0);
          EssentialSystemR1_OnlineTimeCheck__DrawOffsetButtonPair(param_1,DAT_091f9de8,uVar2);
          UnityEngine_GUILayout__Space(0x41600000,0);
          lVar1 = DAT_091c01c8;
          lVar7 = *(long *)(DAT_091c01c8 + 0x38);
          if (lVar7 == 0) {
            FUN_03f95ac8(DAT_091c01c8);
            lVar7 = *(long *)(lVar1 + 0x38);
          }
          lVar7 = *(long *)(lVar7 + 0x10);
          if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
            lVar7 = FUN_03f95a6c();
          }
          if (*(int *)(lVar7 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          lVar1 = *(long *)(*(long *)(lVar1 + 0x38) + 0x10);
          if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
            lVar1 = FUN_03f95a6c();
          }
          UnityEngine_GUILayout__BeginHorizontal(**(undefined8 **)(lVar1 + 0xb8),0);
          if (*(int *)(DAT_09184ac0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          UnityEngine_GUI__set_backgroundColor(0x3f400000,0x3f51eb85,0x3f6b851f,0x3f800000,0);
          uVar2 = EssentialSystemR1_OnlineTimeCheck__ActionButtonStyle();
          lVar1 = DAT_091c01c8;
          lVar7 = *(long *)(DAT_091c01c8 + 0x38);
          if (lVar7 == 0) {
            FUN_03f95ac8(DAT_091c01c8);
            lVar7 = *(long *)(lVar1 + 0x38);
          }
          lVar7 = *(long *)(lVar7 + 0x10);
          if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
            lVar7 = FUN_03f95a6c();
          }
          if (*(int *)(lVar7 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          lVar1 = *(long *)(*(long *)(lVar1 + 0x38) + 0x10);
          if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
            lVar1 = FUN_03f95a6c();
          }
          uVar4 = UnityEngine_GUILayout__Button
                            (DAT_0920be28,uVar2,**(undefined8 **)(lVar1 + 0xb8),0);
          if ((uVar4 & 1) != 0) {
            if (*(int *)(DAT_0918bd60 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar2 = **(undefined8 **)(DAT_0918bd60 + 0xb8);
            if (*(int *)(DAT_09188c20 + 0xe4) == 0) {
              FUN_03f5c424(DAT_09188c20);
            }
            EssentialSystemR1_OnlineTimeCheck__SetTimeOffset(uVar2);
            *(undefined8 *)(param_1 + 0x50) = **(undefined8 **)(DAT_0918bd60 + 0xb8);
            uVar2 = EssentialSystemR1_OnlineTimeCheck__get_BaseNow();
            uVar2 = EssentialSystemR1_OnlineTimeCheck__AddClamped
                              (uVar2,*(undefined8 *)(param_1 + 0x50));
            *(undefined8 *)(param_1 + 0x58) = uVar2;
            EssentialSystemR1_OnlineTimeCheck__SyncDatePartText(param_1);
            EssentialSystemR1_OnlineTimeCheck__SyncDaySlider(param_1);
          }
          if (*(int *)(DAT_09184ac0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          UnityEngine_GUI__set_backgroundColor(0x3eb33333,0x3f666666,0x3f0ccccd,0x3f800000,0);
          if (*(int *)(DAT_09188c20 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar2 = EssentialSystemR1_OnlineTimeCheck__ActionButtonStyle();
          lVar1 = DAT_091c01c8;
          lVar7 = *(long *)(DAT_091c01c8 + 0x38);
          if (lVar7 == 0) {
            FUN_03f95ac8(DAT_091c01c8);
            lVar7 = *(long *)(lVar1 + 0x38);
          }
          lVar7 = *(long *)(lVar7 + 0x10);
          if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
            lVar7 = FUN_03f95a6c();
          }
          if (*(int *)(lVar7 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          lVar1 = *(long *)(*(long *)(lVar1 + 0x38) + 0x10);
          if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
            lVar1 = FUN_03f95a6c();
          }
          uVar4 = UnityEngine_GUILayout__Button
                            (DAT_091fbcd8,uVar2,**(undefined8 **)(lVar1 + 0xb8),0);
          if ((uVar4 & 1) != 0) {
            uVar2 = *(undefined8 *)(param_1 + 0x50);
            if (*(int *)(DAT_09188c20 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            EssentialSystemR1_OnlineTimeCheck__SetTimeOffset(uVar2);
            uVar2 = EssentialSystemR1_OnlineTimeCheck__get_BaseNow();
            uVar2 = EssentialSystemR1_OnlineTimeCheck__AddClamped
                              (uVar2,*(undefined8 *)(param_1 + 0x50));
            *(undefined8 *)(param_1 + 0x58) = uVar2;
            EssentialSystemR1_OnlineTimeCheck__SyncDatePartText(param_1);
            EssentialSystemR1_OnlineTimeCheck__SyncDaySlider(param_1);
            if (DAT_09517209 == '\0') {
              FUN_03f5c2a4(&DAT_09188c20);
              DAT_09517209 = '\x01';
            }
            if (*(int *)(DAT_09188c20 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar2 = EssentialSystemR1_OnlineTimeCheck__FormatTimeOffset
                              (*(undefined8 *)(*(long *)(DAT_09188c20 + 0xb8) + 8));
            local_58 = EssentialSystemR1_OnlineTimeCheck__get_Now();
            uVar3 = FUN_03f5c42c(DAT_09183548,&local_58);
            local_78 = EssentialSystemR1_OnlineTimeCheck__get_UtcNow();
            uVar5 = FUN_03f5c42c(DAT_09183548,&local_78);
            uVar2 = System_String__Format(DAT_09209c98,uVar2,uVar3,uVar5,0);
            if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
              FUN_03f5c424(DAT_091835d0);
            }
            UnityEngine_Debug__Log(uVar2,0);
          }
          if (*(int *)(DAT_09184ac0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          UnityEngine_GUI__set_backgroundColor(0x3f800000,0x3f800000,0x3f800000,0x3f800000,0);
          UnityEngine_GUILayout__EndHorizontal(0);
          if (*(int *)(DAT_09188c20 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar2 = EssentialSystemR1_OnlineTimeCheck__CaptionStyle();
          lVar1 = DAT_091c01c8;
          lVar7 = *(long *)(DAT_091c01c8 + 0x38);
          if (lVar7 == 0) {
            FUN_03f95ac8(DAT_091c01c8);
            lVar7 = *(long *)(lVar1 + 0x38);
          }
          lVar7 = *(long *)(lVar7 + 0x10);
          if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
            lVar7 = FUN_03f95a6c();
          }
          if (*(int *)(lVar7 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          lVar1 = *(long *)(*(long *)(lVar1 + 0x38) + 0x10);
          if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
            lVar1 = FUN_03f95a6c();
          }
          UnityEngine_GUILayout__Label(DAT_0920e7c0,uVar2,**(undefined8 **)(lVar1 + 0xb8),0);
          UnityEngine_GUILayout__EndScrollView(0);
          return;
        }
      }
    }
LAB_0457ee0c:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c558();
  }
LAB_0457ee08:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

