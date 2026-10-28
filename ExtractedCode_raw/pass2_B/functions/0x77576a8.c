// rea decompile_all
// name: _GAME.GameUI.RwItemUICtrl$$SetData
// address: 0x77576a8
// body: available
// range: 0x77576a8-0x7757e53 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7757e50 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_GameUI_RwItemUICtrl__SetData(long param_1,long param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  uint uVar10;
  undefined8 uVar11;
  ulong uVar12;
  ulong extraout_x1;
  uint uVar13;
  undefined4 *puVar14;
  undefined8 *puVar15;
  long lVar16;
  long *plVar17;
  long *plVar18;
  uint uVar19;
  long lVar20;
  undefined8 uVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  int local_54;
  ulong local_50;
  undefined8 local_48;
  
  if ((DAT_09522bf6 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_09185080);
    FUN_03f5c2a4(&DAT_091d4bc0);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09189978);
    FUN_03f5c2a4(&DAT_0918a450);
    FUN_03f5c2a4(&DAT_0918a4d8);
    FUN_03f5c2a4(&DAT_09226038);
    FUN_03f5c2a4(&DAT_09225c90);
    FUN_03f5c2a4(&DAT_09214140);
    FUN_03f5c2a4(&DAT_091fc530);
    FUN_03f5c2a4(&DAT_09202e60);
    DAT_09522bf6 = 1;
  }
  local_50 = 0;
  local_48 = 0;
  plVar17 = (long *)(param_1 + 0x38);
  *plVar17 = param_2;
  thunk_FUN_03f5d7b8(plVar17,param_2);
  plVar18 = (long *)(param_1 + 0x40);
  lVar20 = *plVar18;
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  auVar22 = UnityEngine_Object__op_Inequality(lVar20,0,0);
  if ((auVar22._0_8_ & 1) != 0) {
    lVar20 = *plVar18;
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    UnityEngine_Object__Destroy(lVar20,0);
    *plVar18 = 0;
    auVar22 = thunk_FUN_03f5d7b8(plVar18,0);
  }
  lVar20 = *plVar17;
  if (lVar20 == 0) goto LAB_07757e50;
  uVar13 = *(uint *)(lVar20 + 0x10);
  if (uVar13 == 0x33) {
    uVar21 = *(undefined8 *)(param_1 + 0x20);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    auVar22 = UnityEngine_Object__op_Inequality(uVar21,0,0);
    if ((auVar22._0_8_ & 1) != 0) {
      if (*plVar17 == 0) goto LAB_07757e50;
      uVar2 = *(undefined4 *)(*plVar17 + 0x14);
      if (*(int *)(DAT_0918a4d8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      auVar22 = _GAME_Profile_SOProfileConfig__GetFrame(uVar2,0);
      uVar21 = auVar22._0_8_;
      if (*(long *)(param_1 + 0x20) == 0) goto LAB_07757e50;
      auVar24 = UnityEngine_Component__get_gameObject(*(long *)(param_1 + 0x20),0);
      auVar23._8_8_ = 0;
      auVar23._0_8_ = auVar24._8_8_;
      auVar22 = auVar23 << 0x40;
      if (auVar24._0_8_ == 0) goto LAB_07757e50;
      UnityEngine_GameObject__SetActive(auVar24._0_8_,1,0);
      uVar11 = UnityEngine_Component__get_transform(param_1,0);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09188ad0);
      }
      auVar22 = FUN_04c35338(uVar21,uVar11,DAT_091d4bc0);
      lVar20 = auVar22._0_8_;
      auVar24._8_8_ = 0;
      auVar24._0_8_ = auVar22._8_8_;
      auVar22 = auVar24 << 0x40;
      if (lVar20 == 0) goto LAB_07757e50;
      auVar22 = UnityEngine_GameObject__get_transform(lVar20,0);
      lVar16 = auVar22._0_8_;
      if (DAT_09515ce6 == '\0') {
        auVar22 = FUN_03f5c2a4(&DAT_0918cbd0);
        DAT_09515ce6 = '\x01';
      }
      if (lVar16 == 0) goto LAB_07757e50;
      puVar14 = *(undefined4 **)(DAT_0918cbd0 + 0xb8);
      UnityEngine_Transform__set_position(*puVar14,puVar14[1],puVar14[2],lVar16,0);
      *plVar18 = lVar20;
      thunk_FUN_03f5d7b8(plVar18,lVar20);
    }
    uVar21 = *(undefined8 *)(param_1 + 0x28);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    auVar22 = UnityEngine_Object__op_Inequality(uVar21,0,0);
    if ((auVar22._0_8_ & 1) != 0) {
      if (*(long *)(param_1 + 0x38) == 0) goto LAB_07757e50;
      local_54 = *(int *)(*(long *)(param_1 + 0x38) + 0x14);
      lVar20 = *(long *)(param_1 + 0x28);
      uVar21 = FUN_03f5c42c(DAT_09535420,&local_54);
      puVar15 = &DAT_09202e60;
LAB_07757b04:
      auVar22 = System_String__Format(*puVar15,uVar21,0);
      if (lVar20 == 0) goto LAB_07757e50;
      auVar22 = TMPro_TMP_Text__SetText(lVar20,auVar22._0_8_,0);
    }
LAB_07757b2c:
    lVar20 = *plVar17;
    if (lVar20 == 0) goto LAB_07757e50;
    uVar13 = *(uint *)(lVar20 + 0x10);
  }
  else if (uVar13 == 0x32) {
    uVar21 = *(undefined8 *)(param_1 + 0x20);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    auVar22 = UnityEngine_Object__op_Inequality(uVar21,0,0);
    if ((auVar22._0_8_ & 1) != 0) {
      if (*plVar17 == 0) goto LAB_07757e50;
      uVar2 = *(undefined4 *)(*plVar17 + 0x14);
      if (*(int *)(DAT_0918a4d8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      auVar22 = _GAME_Profile_SOProfileConfig__GetAvatar(uVar2,0);
      uVar21 = auVar22._0_8_;
      if (*(long *)(param_1 + 0x20) == 0) goto LAB_07757e50;
      auVar23 = UnityEngine_Component__get_gameObject(*(long *)(param_1 + 0x20),0);
      auVar3._8_8_ = 0;
      auVar3._0_8_ = auVar23._8_8_;
      auVar22 = auVar3 << 0x40;
      if (auVar23._0_8_ == 0) goto LAB_07757e50;
      UnityEngine_GameObject__SetActive(auVar23._0_8_,1,0);
      uVar11 = UnityEngine_Component__get_transform(param_1,0);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09188ad0);
      }
      auVar22 = FUN_04c35338(uVar21,uVar11,DAT_091d4bc0);
      lVar20 = auVar22._0_8_;
      auVar4._8_8_ = 0;
      auVar4._0_8_ = auVar22._8_8_;
      auVar22 = auVar4 << 0x40;
      if (lVar20 == 0) goto LAB_07757e50;
      auVar22 = UnityEngine_GameObject__get_transform(lVar20,0);
      lVar16 = auVar22._0_8_;
      if (DAT_09515ce6 == '\0') {
        auVar22 = FUN_03f5c2a4(&DAT_0918cbd0);
        DAT_09515ce6 = '\x01';
      }
      if (lVar16 == 0) goto LAB_07757e50;
      puVar14 = *(undefined4 **)(DAT_0918cbd0 + 0xb8);
      UnityEngine_Transform__set_position(*puVar14,puVar14[1],puVar14[2],lVar16,0);
      *plVar18 = lVar20;
      thunk_FUN_03f5d7b8(plVar18,lVar20);
    }
    uVar21 = *(undefined8 *)(param_1 + 0x28);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    auVar22 = UnityEngine_Object__op_Inequality(uVar21,0,0);
    if ((auVar22._0_8_ & 1) != 0) {
      if (*(long *)(param_1 + 0x38) == 0) goto LAB_07757e50;
      local_54 = *(int *)(*(long *)(param_1 + 0x38) + 0x14);
      lVar20 = *(long *)(param_1 + 0x28);
      uVar21 = FUN_03f5c42c(DAT_09535420,&local_54);
      puVar15 = &DAT_091fc530;
      goto LAB_07757b04;
    }
    goto LAB_07757b2c;
  }
  local_50 = 0;
  local_48 = 0;
  if ((uVar13 & 0xfffffffe) == 0x32) {
LAB_07757bc8:
    uVar19 = 0;
  }
  else {
    if (*(int *)(DAT_09189978 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    auVar22 = _GAME_Bridge_R1RewardMap__TryGetDisplay(lVar20,&local_48,&local_50);
    if ((auVar22._0_8_ & 1) == 0) goto LAB_07757bc8;
    if (*(char *)(param_1 + 0x30) != '\0') {
      if (*plVar17 == 0) goto LAB_07757e50;
      uVar21 = _GAME_GameItem_SORwItemIconConfig__GetOutlineIcon(*(undefined4 *)(*plVar17 + 0x10),0)
      ;
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09188ad0);
      }
      uVar12 = UnityEngine_Object__op_Inequality(uVar21,0,0);
      if ((uVar12 & 1) != 0) {
        local_48 = uVar21;
      }
    }
    uVar19 = 1;
  }
  uVar21 = *(undefined8 *)(param_1 + 0x20);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar10 = UnityEngine_Object__op_Inequality(uVar21,0,0);
  uVar21 = local_48;
  if ((uVar19 & uVar10) == 1) {
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    auVar22 = UnityEngine_Object__op_Inequality(uVar21,0,0);
    if ((auVar22._0_8_ & 1) == 0) goto LAB_07757c5c;
    auVar5._8_8_ = 0;
    auVar5._0_8_ = auVar22._8_8_;
    auVar22 = auVar5 << 0x40;
    if (*(long *)(param_1 + 0x20) == 0) goto LAB_07757e50;
    auVar23 = UnityEngine_Component__get_gameObject(*(long *)(param_1 + 0x20),0);
    auVar6._8_8_ = 0;
    auVar6._0_8_ = auVar23._8_8_;
    auVar22 = auVar6 << 0x40;
    if (auVar23._0_8_ == 0) goto LAB_07757e50;
    UnityEngine_GameObject__SetActive(auVar23._0_8_,1,0);
    auVar7._8_8_ = 0;
    auVar7._0_8_ = extraout_x1;
    auVar22 = auVar7 << 0x40;
    if (*(long *)(param_1 + 0x20) == 0) goto LAB_07757e50;
    UnityEngine_UI_Image__set_sprite(*(long *)(param_1 + 0x20),local_48,0);
  }
  else {
LAB_07757c5c:
    uVar21 = *(undefined8 *)(param_1 + 0x20);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    auVar22 = UnityEngine_Object__op_Inequality(uVar21,0,0);
    if (((uVar13 & 0xfffffffe) != 0x32) && ((auVar22._0_8_ & 1) != 0)) {
      auVar8._8_8_ = 0;
      auVar8._0_8_ = auVar22._8_8_;
      auVar22 = auVar8 << 0x40;
      if (*(long *)(param_1 + 0x20) == 0) goto LAB_07757e50;
      auVar23 = UnityEngine_Component__get_gameObject(*(long *)(param_1 + 0x20),0);
      auVar9._8_8_ = 0;
      auVar9._0_8_ = auVar23._8_8_;
      auVar22 = auVar9 << 0x40;
      if (auVar23._0_8_ == 0) goto LAB_07757e50;
      auVar22 = UnityEngine_GameObject__SetActive(auVar23._0_8_,0,0);
      if (*plVar17 == 0) goto LAB_07757e50;
      local_54 = *(int *)(*plVar17 + 0x10);
      uVar21 = FUN_03f5c42c(DAT_0918a450,&local_54);
      uVar21 = System_String__Format(DAT_09214140,uVar21,0);
      if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
        FUN_03f5c424(DAT_091835d0);
      }
      UnityEngine_Debug__LogWarning(uVar21,0);
    }
  }
  uVar21 = *(undefined8 *)(param_1 + 0x28);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  auVar22 = UnityEngine_Object__op_Inequality(uVar21,0,0);
  lVar20 = *(long *)(param_1 + 0x28);
  uVar12 = local_50;
  if ((uVar19 & auVar22._0_4_) != 1) {
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    auVar22 = UnityEngine_Object__op_Inequality(lVar20,0,0);
    if ((auVar22._0_8_ & 1) == 0) {
      return;
    }
    lVar16 = *plVar17;
    if (lVar16 == 0) goto LAB_07757e50;
    iVar1 = *(int *)(lVar16 + 0x14);
    lVar20 = *(long *)(param_1 + 0x28);
    if (*(int *)(lVar16 + 0x10) == 3) {
      if (*(int *)(DAT_09185080 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      auVar22 = _GAME_Utils_HelperTime__FormatTimePrettyShort(iVar1 * 0x3c,0);
      uVar12 = auVar22._0_8_;
    }
    else {
      local_54 = iVar1;
      if (iVar1 < 10) {
        uVar21 = FUN_03f5c42c(DAT_09535420,&local_54);
        puVar15 = &DAT_09225c90;
      }
      else {
        uVar21 = FUN_03f5c42c(DAT_09535420,&local_54);
        puVar15 = &DAT_09226038;
      }
      uVar12 = System_String__Format(*puVar15,uVar21,0);
      auVar22._8_8_ = uVar12;
      auVar22._0_8_ = uVar12;
    }
  }
  if (lVar20 != 0) {
    TMPro_TMP_Text__SetText(lVar20,uVar12,0);
    return;
  }
LAB_07757e50:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550(auVar22._0_8_,auVar22._8_8_);
}

