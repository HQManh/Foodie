// rea decompile_all
// name: DG.Tweening.DOTweenAnimation$$CreateTween
// address: 0x455d75c
// body: available
// range: 0x455d75c-0x455eca3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x455db60 to 0x85f7650 UnityEngine.Debug$$LogWarning (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x455eb44 to 0x8674f54 UnityEngine.Events.UnityEvent$$Invoke (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x455ec94 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x455ec98 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x455eca0 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void DG_Tweening_DOTweenAnimation__CreateTween
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4,
               ulong param_5,ulong param_6)

{
  undefined1 uVar1;
  undefined1 uVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined8 *puVar8;
  long *plVar9;
  long *plVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  
  if ((DAT_09518812 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091822e8);
    FUN_03f5c2a4(&DAT_09182380);
    FUN_03f5c2a4(&DAT_091c71c8);
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_09184e28);
    FUN_03f5c2a4(&DAT_09186ac0);
    FUN_03f5c2a4(&DAT_09187880);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09189c98);
    FUN_03f5c2a4(&DAT_0918a028);
    FUN_03f5c2a4(&DAT_0918a2f8);
    FUN_03f5c2a4(&DAT_0918a2f0);
    FUN_03f5c2a4(&DAT_0918af70);
    FUN_03f5c2a4(&DAT_0918ba50);
    FUN_03f5c2a4(&DAT_0918c010);
    FUN_03f5c2a4(&DAT_0918c148);
    FUN_03f5c2a4(&DAT_091dbc80);
    FUN_03f5c2a4(&DAT_091dbcc8);
    FUN_03f5c2a4(&DAT_091dbcd8);
    FUN_03f5c2a4(&DAT_091dbd20);
    FUN_03f5c2a4(&DAT_091dbd50);
    FUN_03f5c2a4(&DAT_091dbd70);
    FUN_03f5c2a4(&DAT_091dbd80);
    FUN_03f5c2a4(&DAT_091dbda0);
    FUN_03f5c2a4(&DAT_091dbdc0);
    FUN_03f5c2a4(&DAT_091dbe08);
    FUN_03f5c2a4(&DAT_091dbe20);
    FUN_03f5c2a4(&DAT_091dbe58);
    FUN_03f5c2a4(&DAT_091dbec8);
    FUN_03f5c2a4(&DAT_091dbed0);
    FUN_03f5c2a4(&DAT_091dbef0);
    FUN_03f5c2a4(&DAT_091dbf40);
    FUN_03f5c2a4(&DAT_091dbf58);
    FUN_03f5c2a4(&DAT_091dbf68);
    FUN_03f5c2a4(&DAT_091dbfe0);
    FUN_03f5c2a4(&DAT_091dc040);
    FUN_03f5c2a4(&DAT_0918c168);
    FUN_03f5c2a4(&DAT_091ddc60);
    FUN_03f5c2a4(&DAT_092260f8);
    FUN_03f5c2a4(&DAT_092260e8);
    FUN_03f5c2a4(&DAT_092260d8);
    FUN_03f5c2a4(&DAT_092260e0);
    FUN_03f5c2a4(&DAT_092260f0);
    FUN_03f5c2a4(&DAT_09226100);
    DAT_09518812 = 1;
  }
  if (*(char *)(param_4 + 0xae) == '\0') {
    if ((param_5 & 1) == 0) {
      return;
    }
    lVar4 = UnityEngine_Component__get_gameObject(param_4,0);
    if (lVar4 != 0) {
      uVar11 = UnityEngine_Object__GetName(lVar4,0);
      puVar8 = &DAT_092260d8;
      goto LAB_0455daf4;
    }
    goto LAB_0455ec94;
  }
  plVar10 = (long *)(param_4 + 0x68);
  lVar4 = *plVar10;
  if (lVar4 != 0) {
    if (*(char *)(lVar4 + 0xe8) != '\0') {
      if ((param_5 & 1) == 0) {
        return;
      }
      DG_Tweening_TweenExtensions__Kill(lVar4,0,0);
    }
    *plVar10 = 0;
    thunk_FUN_03f5d7b8(plVar10,0);
  }
  if (*(char *)(param_4 + 0x70) == '\0') {
    lVar4 = *(long *)(param_4 + 0x78);
  }
  else {
    lVar4 = UnityEngine_Component__get_gameObject(param_4,0);
  }
  uVar11 = *(undefined8 *)(param_4 + 0xb0);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar5 = UnityEngine_Object__op_Equality(uVar11,0,0);
  if ((uVar5 & 1) != 0) {
LAB_0455da80:
    if (*(char *)(param_4 + 0x70) != '\0') {
      uVar11 = *(undefined8 *)(param_4 + 0xb0);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar5 = UnityEngine_Object__op_Equality(uVar11,0,0);
      if ((uVar5 & 1) != 0) {
        lVar4 = UnityEngine_Component__get_gameObject(param_4,0);
        if (lVar4 != 0) {
          uVar11 = UnityEngine_Object__GetName(lVar4,0);
          puVar8 = &DAT_092260e0;
          goto LAB_0455daf4;
        }
        goto LAB_0455ec94;
      }
    }
    lVar4 = UnityEngine_Component__get_gameObject(param_4,0);
    if (lVar4 != 0) {
      uVar11 = UnityEngine_Object__GetName(lVar4,0);
      puVar8 = &DAT_092260e8;
LAB_0455daf4:
      uVar11 = System_String__Format(*puVar8,uVar11,0);
      uVar6 = UnityEngine_Component__get_gameObject(param_4,0);
      if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
        FUN_03f5c424(DAT_091835d0);
      }
      UnityEngine_Debug__LogWarning(uVar11,uVar6,0);
      return;
    }
LAB_0455ec94:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar5 = UnityEngine_Object__op_Equality(lVar4,0,0);
  if ((uVar5 & 1) != 0) goto LAB_0455da80;
  iVar3 = *(int *)(param_4 + 0xc0);
  if (iVar3 == 0) {
    iVar3 = *(int *)(param_4 + 0xbc);
    if (iVar3 == 0) {
      if (*(long *)(param_4 + 0xb0) == 0) goto LAB_0455ec94;
      System_Object__GetType(*(long *)(param_4 + 0xb0),0);
      iVar3 = DG_Tweening_DOTweenAnimation__TypeToDOTargetType();
      goto LAB_0455db6c;
    }
  }
  else {
LAB_0455db6c:
    *(int *)(param_4 + 0xbc) = iVar3;
  }
  lVar12 = DAT_09188ad0;
  switch(*(undefined4 *)(param_4 + 0xb8)) {
  case 1:
    if (*(char *)(param_4 + 0xc5) != '\0') {
      uVar11 = *(undefined8 *)(param_4 + 0x108);
      *(undefined1 *)(param_4 + 0xa8) = 0;
      if (*(int *)(lVar12 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar5 = UnityEngine_Object__op_Equality(uVar11,0,0);
      if ((uVar5 & 1) == 0) {
        plVar7 = *(long **)(param_4 + 0x108);
        if (*(int *)(param_4 + 0xbc) == 5) {
          if (plVar7 == (long *)0x0) {
            plVar7 = (long *)0x0;
          }
          else if (*plVar7 != DAT_09189c98) {
            plVar7 = (long *)0x0;
          }
          if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar5 = UnityEngine_Object__op_Equality(plVar7,0,0);
          if ((uVar5 & 1) == 0) {
            plVar9 = *(long **)(param_4 + 0xb0);
            if (plVar9 == (long *)0x0) {
              plVar9 = (long *)0x0;
            }
            else if (*plVar9 != DAT_09189c98) {
              plVar9 = (long *)0x0;
            }
            if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar5 = UnityEngine_Object__op_Equality(plVar9,0,0);
            if ((uVar5 & 1) == 0) {
              uVar15 = DG_Tweening_DOTweenModuleUI_Utils__SwitchToRectTransform(plVar7,plVar9,0);
              *(undefined4 *)(param_4 + 0xd4) = 0;
              *(undefined4 *)(param_4 + 0xcc) = uVar15;
              *(undefined4 *)(param_4 + 0xd0) = param_2;
            }
            else {
              lVar4 = UnityEngine_Component__get_gameObject(param_4,0);
              if (lVar4 == 0) goto LAB_0455ec94;
              uVar11 = UnityEngine_Object__GetName(lVar4,0);
              uVar11 = System_String__Format(DAT_09226100,uVar11,0);
              uVar6 = UnityEngine_Component__get_gameObject(param_4,0);
              if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
                FUN_03f5c424(DAT_091835d0);
              }
              UnityEngine_Debug__LogWarning(uVar11,uVar6,0);
            }
            goto LAB_0455e4b0;
          }
          lVar4 = UnityEngine_Component__get_gameObject(param_4,0);
          if (lVar4 == 0) goto LAB_0455ec94;
          uVar11 = UnityEngine_Object__GetName(lVar4,0);
          puVar8 = &DAT_092260f8;
          goto LAB_0455dbf8;
        }
        if (plVar7 == (long *)0x0) goto LAB_0455ec94;
        uVar15 = UnityEngine_Transform__get_position(plVar7,0);
      }
      else {
        lVar4 = UnityEngine_Component__get_gameObject(param_4,0);
        if (lVar4 == 0) goto LAB_0455ec94;
        uVar11 = UnityEngine_Object__GetName(lVar4,0);
        puVar8 = &DAT_092260f0;
LAB_0455dbf8:
        uVar11 = System_String__Format(*puVar8,uVar11,0);
        uVar6 = UnityEngine_Component__get_gameObject(param_4,0);
        if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
          FUN_03f5c424(DAT_091835d0);
        }
        UnityEngine_Debug__LogWarning(uVar11,uVar6,0);
        uVar15 = FUN_043b2d5c(0);
      }
      *(undefined4 *)(param_4 + 0xcc) = uVar15;
      *(undefined4 *)(param_4 + 0xd0) = param_2;
      *(undefined4 *)(param_4 + 0xd4) = param_3;
    }
LAB_0455e4b0:
    iVar3 = *(int *)(param_4 + 0xbc);
    if (iVar3 < 9) {
      if (iVar3 == 5) {
        plVar7 = *(long **)(param_4 + 0xb0);
        if ((plVar7 != (long *)0x0) && (*plVar7 != DAT_09189c98)) goto LAB_0455ec98;
        lVar4 = DG_Tweening_DOTweenModuleUI__DOAnchorPos3D
                          (*(undefined4 *)(param_4 + 0xcc),*(undefined4 *)(param_4 + 0xd0),
                           *(undefined4 *)(param_4 + 0xd4),*(undefined4 *)(param_4 + 0x88),plVar7,
                           *(char *)(param_4 + 0x110) != '\0',0);
      }
      else {
        if (iVar3 != 8) goto switchD_0455dba0_default;
        uVar15 = *(undefined4 *)(param_4 + 0xcc);
        uVar17 = *(undefined4 *)(param_4 + 0xd0);
        uVar14 = *(undefined4 *)(param_4 + 0xd4);
        uVar16 = *(undefined4 *)(param_4 + 0x88);
        uVar1 = *(undefined1 *)(param_4 + 0x110);
        uVar11 = FUN_039bb5f0(*(undefined8 *)(param_4 + 0xb0),DAT_0918a2f0);
        lVar4 = DG_Tweening_DOTweenModulePhysics__DOMove(uVar15,uVar17,uVar14,uVar16,uVar11,uVar1,0)
        ;
      }
    }
    else if (iVar3 == 9) {
      plVar7 = *(long **)(param_4 + 0xb0);
      if ((plVar7 != (long *)0x0) && (*plVar7 != DAT_0918a2f8)) goto LAB_0455ec98;
      lVar4 = DG_Tweening_DOTweenModulePhysics2D__DOMove
                        (*(undefined4 *)(param_4 + 0xcc),*(undefined4 *)(param_4 + 0xd0),
                         *(undefined4 *)(param_4 + 0x88),plVar7,*(char *)(param_4 + 0x110) != '\0',0
                        );
    }
    else {
      if (iVar3 != 0xb) goto switchD_0455dba0_default;
      uVar15 = *(undefined4 *)(param_4 + 0xcc);
      uVar17 = *(undefined4 *)(param_4 + 0xd0);
      uVar14 = *(undefined4 *)(param_4 + 0xd4);
      uVar16 = *(undefined4 *)(param_4 + 0x88);
      uVar1 = *(undefined1 *)(param_4 + 0x110);
      uVar11 = FUN_039bb5f0(*(undefined8 *)(param_4 + 0xb0),DAT_0918c010);
      lVar4 = DG_Tweening_ShortcutExtensions__DOMove(uVar15,uVar17,uVar14,uVar16,uVar11,uVar1,0);
    }
    break;
  case 2:
    if (lVar4 == 0) goto LAB_0455ec94;
    uVar11 = UnityEngine_GameObject__get_transform(lVar4,0);
    lVar4 = DG_Tweening_ShortcutExtensions__DOLocalMove
                      (*(undefined4 *)(param_4 + 0xcc),*(undefined4 *)(param_4 + 0xd0),
                       *(undefined4 *)(param_4 + 0xd4),*(undefined4 *)(param_4 + 0x88),uVar11,
                       *(undefined1 *)(param_4 + 0x110),0);
    break;
  case 3:
    if (iVar3 == 8) {
      uVar17 = *(undefined4 *)(param_4 + 0xcc);
      uVar14 = *(undefined4 *)(param_4 + 0xd0);
      uVar16 = *(undefined4 *)(param_4 + 0xd4);
      uVar18 = *(undefined4 *)(param_4 + 0x88);
      uVar15 = *(undefined4 *)(param_4 + 0x11c);
      uVar11 = FUN_039bb5f0(*(undefined8 *)(param_4 + 0xb0),DAT_0918a2f0);
      lVar4 = DG_Tweening_DOTweenModulePhysics__DORotate
                        (uVar17,uVar14,uVar16,uVar18,uVar11,uVar15,0);
    }
    else if (iVar3 == 9) {
      plVar7 = *(long **)(param_4 + 0xb0);
      if ((plVar7 != (long *)0x0) && (*plVar7 != DAT_0918a2f8)) goto LAB_0455ec98;
      lVar4 = DG_Tweening_DOTweenModulePhysics2D__DORotate
                        (*(undefined4 *)(param_4 + 200),*(undefined4 *)(param_4 + 0x88),plVar7,0);
    }
    else {
      if (iVar3 != 0xb) goto switchD_0455dba0_default;
      uVar17 = *(undefined4 *)(param_4 + 0xcc);
      uVar14 = *(undefined4 *)(param_4 + 0xd0);
      uVar16 = *(undefined4 *)(param_4 + 0xd4);
      uVar18 = *(undefined4 *)(param_4 + 0x88);
      uVar15 = *(undefined4 *)(param_4 + 0x11c);
      uVar11 = FUN_039bb5f0(*(undefined8 *)(param_4 + 0xb0),DAT_0918c010);
      lVar4 = DG_Tweening_ShortcutExtensions__DORotate(uVar17,uVar14,uVar16,uVar18,uVar11,uVar15,0);
    }
    break;
  case 4:
    if (lVar4 == 0) goto LAB_0455ec94;
    uVar11 = UnityEngine_GameObject__get_transform(lVar4,0);
    lVar4 = DG_Tweening_ShortcutExtensions__DOLocalRotate
                      (*(undefined4 *)(param_4 + 0xcc),*(undefined4 *)(param_4 + 0xd0),
                       *(undefined4 *)(param_4 + 0xd4),*(undefined4 *)(param_4 + 0x88),uVar11,
                       *(undefined4 *)(param_4 + 0x11c),0);
    break;
  case 5:
    if (lVar4 == 0) goto LAB_0455ec94;
    uVar11 = UnityEngine_GameObject__get_transform(lVar4,0);
    if (*(char *)(param_4 + 0x110) == '\0') {
      uVar14 = *(undefined4 *)(param_4 + 0xcc);
      uVar15 = *(undefined4 *)(param_4 + 0xd0);
      uVar17 = *(undefined4 *)(param_4 + 0xd4);
    }
    else {
      uVar14 = *(undefined4 *)(param_4 + 200);
      uVar15 = uVar14;
      uVar17 = uVar14;
    }
    lVar4 = DG_Tweening_ShortcutExtensions__DOScale
                      (uVar14,uVar15,uVar17,*(undefined4 *)(param_4 + 0x88),uVar11,0);
    break;
  case 6:
    *(undefined1 *)(param_4 + 0xa8) = 0;
    if (iVar3 < 6) {
      if (iVar3 == 3) {
        uVar15 = *(undefined4 *)(param_4 + 0xe0);
        uVar17 = *(undefined4 *)(param_4 + 0xe4);
        uVar14 = *(undefined4 *)(param_4 + 0xe8);
        uVar16 = *(undefined4 *)(param_4 + 0xec);
        uVar18 = *(undefined4 *)(param_4 + 0x88);
        uVar11 = FUN_039bb5f0(*(undefined8 *)(param_4 + 0xb0),DAT_09184e28);
        lVar4 = DG_Tweening_DOTweenModuleUI__DOColor(uVar15,uVar17,uVar14,uVar16,uVar18,uVar11,0);
      }
      else {
        if (iVar3 != 4) goto switchD_0455dba0_default;
        plVar7 = *(long **)(param_4 + 0xb0);
        if ((plVar7 != (long *)0x0) && (*plVar7 != DAT_09187880)) goto LAB_0455ec98;
        lVar4 = DG_Tweening_ShortcutExtensions__DOColor
                          (*(undefined4 *)(param_4 + 0xe0),*(undefined4 *)(param_4 + 0xe4),
                           *(undefined4 *)(param_4 + 0xe8),*(undefined4 *)(param_4 + 0xec),
                           *(undefined4 *)(param_4 + 0x88),plVar7,0);
      }
    }
    else if (iVar3 == 10) {
      uVar15 = *(undefined4 *)(param_4 + 0xe0);
      uVar17 = *(undefined4 *)(param_4 + 0xe4);
      uVar14 = *(undefined4 *)(param_4 + 0xe8);
      uVar16 = *(undefined4 *)(param_4 + 0xec);
      uVar18 = *(undefined4 *)(param_4 + 0x88);
      uVar11 = FUN_039bb5f0(*(undefined8 *)(param_4 + 0xb0),DAT_0918ba50);
      lVar4 = DG_Tweening_DOTweenModuleUI__DOColor(uVar15,uVar17,uVar14,uVar16,uVar18,uVar11,0);
    }
    else if (iVar3 == 7) {
      plVar7 = *(long **)(param_4 + 0xb0);
      if ((plVar7 != (long *)0x0) && (*plVar7 != DAT_0918af70)) goto LAB_0455ec98;
      lVar4 = DG_Tweening_DOTweenModuleSprite__DOColor
                        (*(undefined4 *)(param_4 + 0xe0),*(undefined4 *)(param_4 + 0xe4),
                         *(undefined4 *)(param_4 + 0xe8),*(undefined4 *)(param_4 + 0xec),
                         *(undefined4 *)(param_4 + 0x88),plVar7,0);
    }
    else {
      if (iVar3 != 6) goto switchD_0455dba0_default;
      uVar11 = *(undefined8 *)(param_4 + 0xb0);
      lVar4 = FUN_039bb5f0(uVar11,DAT_0918a028);
      if (lVar4 == 0) goto LAB_0455ec94;
      uVar11 = FUN_039bb5f0(uVar11,DAT_0918a028);
      uVar11 = UnityEngine_Renderer__GetMaterial(uVar11,0);
      lVar4 = DG_Tweening_ShortcutExtensions__DOColor
                        (*(undefined4 *)(param_4 + 0xe0),*(undefined4 *)(param_4 + 0xe4),
                         *(undefined4 *)(param_4 + 0xe8),*(undefined4 *)(param_4 + 0xec),
                         *(undefined4 *)(param_4 + 0x88),uVar11,0);
    }
    break;
  case 7:
    *(undefined1 *)(param_4 + 0xa8) = 0;
    if (iVar3 < 6) {
      if (iVar3 == 2) {
        plVar7 = *(long **)(param_4 + 0xb0);
        if ((plVar7 != (long *)0x0) && (*plVar7 != DAT_09182380)) goto LAB_0455ec98;
        lVar4 = DG_Tweening_DOTweenModuleUI__DOFade
                          (*(undefined4 *)(param_4 + 200),*(undefined4 *)(param_4 + 0x88),plVar7,0);
      }
      else if (iVar3 == 3) {
        uVar15 = *(undefined4 *)(param_4 + 200);
        uVar17 = *(undefined4 *)(param_4 + 0x88);
        uVar11 = FUN_039bb5f0(*(undefined8 *)(param_4 + 0xb0),DAT_09184e28);
        lVar4 = DG_Tweening_DOTweenModuleUI__DOFade(uVar15,uVar17,uVar11,0);
      }
      else {
        if (iVar3 != 4) goto switchD_0455dba0_default;
        plVar7 = *(long **)(param_4 + 0xb0);
        if ((plVar7 != (long *)0x0) && (*plVar7 != DAT_09187880)) goto LAB_0455ec98;
        lVar4 = DG_Tweening_ShortcutExtensions__DOIntensity
                          (*(undefined4 *)(param_4 + 200),*(undefined4 *)(param_4 + 0x88),plVar7,0);
      }
    }
    else if (iVar3 == 10) {
      uVar15 = *(undefined4 *)(param_4 + 200);
      uVar17 = *(undefined4 *)(param_4 + 0x88);
      uVar11 = FUN_039bb5f0(*(undefined8 *)(param_4 + 0xb0),DAT_0918ba50);
      lVar4 = DG_Tweening_DOTweenModuleUI__DOFade(uVar15,uVar17,uVar11,0);
    }
    else if (iVar3 == 7) {
      plVar7 = *(long **)(param_4 + 0xb0);
      if ((plVar7 != (long *)0x0) && (*plVar7 != DAT_0918af70)) goto LAB_0455ec98;
      lVar4 = DG_Tweening_DOTweenModuleSprite__DOFade
                        (*(undefined4 *)(param_4 + 200),*(undefined4 *)(param_4 + 0x88),plVar7,0);
    }
    else {
      if (iVar3 != 6) goto switchD_0455dba0_default;
      uVar11 = *(undefined8 *)(param_4 + 0xb0);
      lVar4 = FUN_039bb5f0(uVar11,DAT_0918a028);
      if (lVar4 == 0) goto LAB_0455ec94;
      uVar11 = FUN_039bb5f0(uVar11,DAT_0918a028);
      uVar11 = UnityEngine_Renderer__GetMaterial(uVar11,0);
      lVar4 = DG_Tweening_ShortcutExtensions__DOFade
                        (*(undefined4 *)(param_4 + 200),*(undefined4 *)(param_4 + 0x88),uVar11,0);
    }
    break;
  case 8:
    if (iVar3 == 10) {
      uVar6 = *(undefined8 *)(param_4 + 0xf0);
      uVar17 = *(undefined4 *)(param_4 + 0x88);
      uVar1 = *(undefined1 *)(param_4 + 0x110);
      uVar15 = *(undefined4 *)(param_4 + 0x120);
      uVar13 = *(undefined8 *)(param_4 + 0x128);
      uVar11 = FUN_039bb5f0(*(undefined8 *)(param_4 + 0xb0),DAT_0918ba50);
      lVar4 = DG_Tweening_DOTweenModuleUI__DOText(uVar17,uVar11,uVar6,uVar1,uVar15,uVar13,0);
      break;
    }
    goto switchD_0455dba0_default;
  case 9:
    if (iVar3 == 5) {
      uVar15 = *(undefined4 *)(param_4 + 0xcc);
      uVar17 = *(undefined4 *)(param_4 + 0xd0);
      plVar7 = *(long **)(param_4 + 0xb0);
      uVar14 = *(undefined4 *)(param_4 + 0x88);
      uVar16 = *(undefined4 *)(param_4 + 0x114);
      if ((plVar7 != (long *)0x0) && (*plVar7 != DAT_09189c98)) {
LAB_0455ec9c:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c8d0(uVar15,uVar17,uVar14,uVar16,plVar7,DAT_09189c98);
      }
      lVar4 = DG_Tweening_DOTweenModuleUI__DOPunchAnchorPos
                        (plVar7,*(undefined4 *)(param_4 + 0x118),*(char *)(param_4 + 0x110) != '\0',
                         0);
    }
    else {
      if (iVar3 != 0xb) goto switchD_0455dba0_default;
      uVar17 = *(undefined4 *)(param_4 + 0xcc);
      uVar14 = *(undefined4 *)(param_4 + 0xd0);
      uVar16 = *(undefined4 *)(param_4 + 0xd4);
      uVar18 = *(undefined4 *)(param_4 + 0x88);
      uVar15 = *(undefined4 *)(param_4 + 0x118);
      uVar19 = *(undefined4 *)(param_4 + 0x114);
      uVar1 = *(undefined1 *)(param_4 + 0x110);
      uVar11 = FUN_039bb5f0(*(undefined8 *)(param_4 + 0xb0),DAT_0918c010);
      lVar4 = DG_Tweening_ShortcutExtensions__DOPunchPosition
                        (uVar17,uVar14,uVar16,uVar18,uVar19,uVar11,uVar15,uVar1,0);
    }
    break;
  case 10:
    if (lVar4 == 0) goto LAB_0455ec94;
    uVar11 = UnityEngine_GameObject__get_transform(lVar4,0);
    lVar4 = DG_Tweening_ShortcutExtensions__DOPunchRotation
                      (*(undefined4 *)(param_4 + 0xcc),*(undefined4 *)(param_4 + 0xd0),
                       *(undefined4 *)(param_4 + 0xd4),*(undefined4 *)(param_4 + 0x88),
                       *(undefined4 *)(param_4 + 0x114),uVar11,*(undefined4 *)(param_4 + 0x118),0);
    break;
  case 0xb:
    if (lVar4 == 0) goto LAB_0455ec94;
    uVar11 = UnityEngine_GameObject__get_transform(lVar4,0);
    lVar4 = DG_Tweening_ShortcutExtensions__DOPunchScale
                      (*(undefined4 *)(param_4 + 0xcc),*(undefined4 *)(param_4 + 0xd0),
                       *(undefined4 *)(param_4 + 0xd4),*(undefined4 *)(param_4 + 0x88),
                       *(undefined4 *)(param_4 + 0x114),uVar11,*(undefined4 *)(param_4 + 0x118),0);
    break;
  case 0xc:
    if (iVar3 == 5) {
      uVar17 = *(undefined4 *)(param_4 + 0xcc);
      uVar14 = *(undefined4 *)(param_4 + 0xd0);
      plVar7 = *(long **)(param_4 + 0xb0);
      uVar15 = *(undefined4 *)(param_4 + 0x88);
      uVar16 = *(undefined4 *)(param_4 + 0x114);
      if ((plVar7 != (long *)0x0) && (*plVar7 != DAT_09189c98)) goto LAB_0455ec9c;
      lVar4 = DG_Tweening_DOTweenModuleUI__DOShakeAnchorPos
                        (uVar15,uVar17,uVar14,uVar16,plVar7,*(undefined4 *)(param_4 + 0x118),
                         *(char *)(param_4 + 0x110) != '\0',*(char *)(param_4 + 0x111) != '\0',
                         *(undefined4 *)(param_4 + 0x124),0);
    }
    else {
      if (iVar3 != 0xb) goto switchD_0455dba0_default;
      uVar14 = *(undefined4 *)(param_4 + 0x88);
      uVar16 = *(undefined4 *)(param_4 + 0xcc);
      uVar18 = *(undefined4 *)(param_4 + 0xd0);
      uVar19 = *(undefined4 *)(param_4 + 0xd4);
      uVar15 = *(undefined4 *)(param_4 + 0x118);
      uVar20 = *(undefined4 *)(param_4 + 0x114);
      uVar1 = *(undefined1 *)(param_4 + 0x110);
      uVar2 = *(undefined1 *)(param_4 + 0x111);
      uVar17 = *(undefined4 *)(param_4 + 0x124);
      uVar11 = FUN_039bb5f0(*(undefined8 *)(param_4 + 0xb0),DAT_0918c010);
      lVar4 = DG_Tweening_ShortcutExtensions__DOShakePosition
                        (uVar14,uVar16,uVar18,uVar19,uVar20,uVar11,uVar15,uVar1,uVar2,uVar17,0);
    }
    break;
  case 0xd:
    if (lVar4 == 0) goto LAB_0455ec94;
    uVar11 = UnityEngine_GameObject__get_transform(lVar4,0);
    lVar4 = DG_Tweening_ShortcutExtensions__DOShakeRotation
                      (*(undefined4 *)(param_4 + 0x88),*(undefined4 *)(param_4 + 0xcc),
                       *(undefined4 *)(param_4 + 0xd0),*(undefined4 *)(param_4 + 0xd4),
                       *(undefined4 *)(param_4 + 0x114),uVar11,*(undefined4 *)(param_4 + 0x118),
                       *(undefined1 *)(param_4 + 0x111),*(undefined4 *)(param_4 + 0x124),0);
    break;
  case 0xe:
    if (lVar4 == 0) goto LAB_0455ec94;
    uVar11 = UnityEngine_GameObject__get_transform(lVar4,0);
    lVar4 = DG_Tweening_ShortcutExtensions__DOShakeScale
                      (*(undefined4 *)(param_4 + 0x88),*(undefined4 *)(param_4 + 0xcc),
                       *(undefined4 *)(param_4 + 0xd0),*(undefined4 *)(param_4 + 0xd4),
                       *(undefined4 *)(param_4 + 0x114),uVar11,*(undefined4 *)(param_4 + 0x118),
                       *(undefined1 *)(param_4 + 0x111),*(undefined4 *)(param_4 + 0x124),0);
    break;
  case 0xf:
    plVar7 = *(long **)(param_4 + 0xb0);
    if ((plVar7 != (long *)0x0) && (*plVar7 != DAT_091822e8)) goto LAB_0455ec98;
    lVar4 = DG_Tweening_ShortcutExtensions__DOAspect
                      (*(undefined4 *)(param_4 + 200),*(undefined4 *)(param_4 + 0x88),plVar7,0);
    break;
  case 0x10:
    plVar7 = *(long **)(param_4 + 0xb0);
    if ((plVar7 != (long *)0x0) && (*plVar7 != DAT_091822e8)) goto LAB_0455ec98;
    lVar4 = DG_Tweening_ShortcutExtensions__DOColor
                      (*(undefined4 *)(param_4 + 0xe0),*(undefined4 *)(param_4 + 0xe4),
                       *(undefined4 *)(param_4 + 0xe8),*(undefined4 *)(param_4 + 0xec),
                       *(undefined4 *)(param_4 + 0x88),plVar7,0);
    break;
  case 0x11:
    plVar7 = *(long **)(param_4 + 0xb0);
    if ((plVar7 != (long *)0x0) && (*plVar7 != DAT_091822e8)) goto LAB_0455ec98;
    lVar4 = DG_Tweening_ShortcutExtensions__DOFieldOfView
                      (*(undefined4 *)(param_4 + 200),*(undefined4 *)(param_4 + 0x88),plVar7,0);
    break;
  case 0x12:
    plVar7 = *(long **)(param_4 + 0xb0);
    if ((plVar7 != (long *)0x0) && (*plVar7 != DAT_091822e8)) goto LAB_0455ec98;
    lVar4 = DG_Tweening_ShortcutExtensions__DOOrthoSize
                      (*(undefined4 *)(param_4 + 200),*(undefined4 *)(param_4 + 0x88),plVar7,0);
    break;
  case 0x13:
    plVar7 = *(long **)(param_4 + 0xb0);
    if ((plVar7 != (long *)0x0) && (*plVar7 != DAT_091822e8)) goto LAB_0455ec98;
    lVar4 = DG_Tweening_ShortcutExtensions__DOPixelRect
                      (*(undefined4 *)(param_4 + 0xf8),*(undefined4 *)(param_4 + 0xfc),
                       *(undefined4 *)(param_4 + 0x100),*(undefined4 *)(param_4 + 0x104),
                       *(undefined4 *)(param_4 + 0x88),plVar7,0);
    break;
  case 0x14:
    plVar7 = *(long **)(param_4 + 0xb0);
    if ((plVar7 != (long *)0x0) && (*plVar7 != DAT_091822e8)) goto LAB_0455ec98;
    lVar4 = DG_Tweening_ShortcutExtensions__DORect
                      (*(undefined4 *)(param_4 + 0xf8),*(undefined4 *)(param_4 + 0xfc),
                       *(undefined4 *)(param_4 + 0x100),*(undefined4 *)(param_4 + 0x104),
                       *(undefined4 *)(param_4 + 0x88),plVar7,0);
    break;
  case 0x15:
    plVar7 = *(long **)(param_4 + 0xb0);
    if (*(char *)(param_4 + 0x110) == '\0') {
      if ((plVar7 != (long *)0x0) && (*plVar7 != DAT_09189c98)) goto LAB_0455ec98;
      uVar17 = *(undefined4 *)(param_4 + 0xd8);
      uVar15 = *(undefined4 *)(param_4 + 0xdc);
    }
    else {
      if ((plVar7 != (long *)0x0) && (*plVar7 != DAT_09189c98)) goto LAB_0455ec98;
      uVar17 = *(undefined4 *)(param_4 + 200);
      uVar15 = uVar17;
    }
    lVar4 = DG_Tweening_DOTweenModuleUI__DOSizeDelta
                      (uVar17,uVar15,*(undefined4 *)(param_4 + 0x88),plVar7,0,0);
    break;
  case 0x16:
    uVar15 = *(undefined4 *)(param_4 + 200);
    uVar17 = *(undefined4 *)(param_4 + 0x88);
    uVar11 = FUN_039bb5f0(*(undefined8 *)(param_4 + 0xb0),DAT_09186ac0);
    lVar4 = DG_Tweening_DOTweenModuleUI__DOFillAmount(uVar15,uVar17,uVar11,0);
    break;
  default:
    goto switchD_0455dba0_default;
  }
  *plVar10 = lVar4;
  thunk_FUN_03f5d7b8(plVar10,lVar4);
switchD_0455dba0_default:
  plVar7 = (long *)*plVar10;
  if (plVar7 != (long *)0x0) {
    if (*(char *)(param_4 + 0xa9) == '\0') {
      FUN_04d963b0(plVar7,*(char *)(param_4 + 0xa8) != '\0',DAT_091dbf58);
    }
    else {
      if ((*(byte *)(*plVar7 + 0x130) < *(byte *)(DAT_0918c168 + 0x130)) ||
         (*(long *)(*(long *)(*plVar7 + 200) + (ulong)*(byte *)(DAT_0918c168 + 0x130) * 8 + -8) !=
          DAT_0918c168)) {
LAB_0455ec98:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c8d0();
      }
      FUN_04d95454(plVar7,*(char *)(param_4 + 0xa8) != '\0',DAT_091dbcd8);
    }
    if ((*(char *)(param_4 + 0x70) == '\0') && (*(char *)(param_4 + 0x80) != '\0')) {
      uVar11 = *(undefined8 *)(param_4 + 0x78);
    }
    else {
      uVar11 = UnityEngine_Component__get_gameObject(param_4,0);
    }
    uVar11 = FUN_04d9642c(*(undefined8 *)(param_4 + 0x68),uVar11,DAT_091dbfe0);
    uVar11 = FUN_04d95c7c(*(undefined4 *)(param_4 + 0x84),uVar11,DAT_091dbe58);
    uVar11 = FUN_04d962f4(uVar11,*(undefined4 *)(param_4 + 0x9c),*(undefined4 *)(param_4 + 0x98),
                          DAT_091dbf40);
    uVar11 = FUN_04d95c58(uVar11,*(undefined1 *)(param_4 + 0xab),DAT_091dbe20);
    uVar6 = thunk_FUN_03f9944c(DAT_0918c148);
    DG_Tweening_TweenCallback___ctor(uVar6,param_4,DAT_091c71c8,0);
    FUN_04d956e8(uVar11,uVar6,DAT_091dbd50);
    if (*(char *)(param_4 + 0x24) != '\0') {
      FUN_04d963e4(*plVar10,DAT_091dbf68);
    }
    if (*(int *)(param_4 + 0x8c) == 0x25) {
      FUN_04d95dc4(*(undefined8 *)(param_4 + 0x68),*(undefined8 *)(param_4 + 0x90),DAT_091dbec8);
    }
    else {
      FUN_04d95e8c(*(undefined8 *)(param_4 + 0x68),*(int *)(param_4 + 0x8c),DAT_091dbed0);
    }
    uVar5 = System_String__IsNullOrEmpty(*(undefined8 *)(param_4 + 0xa0),0);
    if ((uVar5 & 1) == 0) {
      FUN_04d96054(*(undefined8 *)(param_4 + 0x68),*(undefined8 *)(param_4 + 0xa0),DAT_091dbef0);
    }
    FUN_04d9656c(*(undefined8 *)(param_4 + 0x68),*(undefined1 *)(param_4 + 0xaa),DAT_091dc040);
    if (*(char *)(param_4 + 0x25) == '\0') {
      *(undefined8 *)(param_4 + 0x30) = 0;
      thunk_FUN_03f5d7b8(param_4 + 0x30,0);
    }
    else {
      lVar4 = *(long *)(param_4 + 0x30);
      if (lVar4 != 0) {
        lVar12 = *plVar10;
        uVar11 = thunk_FUN_03f9944c(DAT_0918c148);
        DG_Tweening_TweenCallback___ctor(uVar11,lVar4,DAT_091ddc60,0);
        FUN_04d95798(lVar12,uVar11,DAT_091dbda0);
      }
    }
    if (*(char *)(param_4 + 0x26) == '\0') {
      *(undefined8 *)(param_4 + 0x38) = 0;
      thunk_FUN_03f5d7b8(param_4 + 0x38,0);
    }
    else {
      lVar4 = *(long *)(param_4 + 0x38);
      if (lVar4 != 0) {
        lVar12 = *plVar10;
        uVar11 = thunk_FUN_03f9944c(DAT_0918c148);
        DG_Tweening_TweenCallback___ctor(uVar11,lVar4,DAT_091ddc60,0);
        FUN_04d95740(lVar12,uVar11,DAT_091dbd70);
      }
    }
    if (*(char *)(param_4 + 0x27) == '\0') {
      *(undefined8 *)(param_4 + 0x40) = 0;
      thunk_FUN_03f5d7b8(param_4 + 0x40,0);
    }
    else {
      lVar4 = *(long *)(param_4 + 0x40);
      if (lVar4 != 0) {
        lVar12 = *plVar10;
        uVar11 = thunk_FUN_03f9944c(DAT_0918c148);
        DG_Tweening_TweenCallback___ctor(uVar11,lVar4,DAT_091ddc60,0);
        FUN_04d957f0(lVar12,uVar11,DAT_091dbe08);
      }
    }
    if (*(char *)(param_4 + 0x28) == '\0') {
      *(undefined8 *)(param_4 + 0x48) = 0;
      thunk_FUN_03f5d7b8(param_4 + 0x48,0);
    }
    else {
      lVar4 = *(long *)(param_4 + 0x48);
      if (lVar4 != 0) {
        lVar12 = *plVar10;
        uVar11 = thunk_FUN_03f9944c(DAT_0918c148);
        DG_Tweening_TweenCallback___ctor(uVar11,lVar4,DAT_091ddc60,0);
        FUN_04d957c4(lVar12,uVar11,DAT_091dbdc0);
      }
    }
    if (*(char *)(param_4 + 0x29) == '\0') {
      *(undefined8 *)(param_4 + 0x50) = 0;
      thunk_FUN_03f5d7b8(param_4 + 0x50,0);
    }
    else {
      lVar4 = *(long *)(param_4 + 0x50);
      if (lVar4 != 0) {
        lVar12 = *plVar10;
        uVar11 = thunk_FUN_03f9944c(DAT_0918c148);
        DG_Tweening_TweenCallback___ctor(uVar11,lVar4,DAT_091ddc60,0);
        FUN_04d956bc(lVar12,uVar11,DAT_091dbd20);
      }
    }
    if (*(char *)(param_4 + 0x2b) == '\0') {
      *(undefined8 *)(param_4 + 0x60) = 0;
      thunk_FUN_03f5d7b8(param_4 + 0x60,0);
    }
    else {
      lVar4 = *(long *)(param_4 + 0x60);
      if (lVar4 != 0) {
        lVar12 = *plVar10;
        uVar11 = thunk_FUN_03f9944c(DAT_0918c148);
        DG_Tweening_TweenCallback___ctor(uVar11,lVar4,DAT_091ddc60,0);
        FUN_04d9576c(lVar12,uVar11,DAT_091dbd80);
      }
    }
    if ((param_6 & 1) == 0) {
      FUN_04d8dc1c(*plVar10,DAT_091dbc80);
    }
    else {
      FUN_04d8dd74(*plVar10,DAT_091dbcc8);
    }
    if ((*(char *)(param_4 + 0x2a) != '\0') && (*(long *)(param_4 + 0x58) != 0)) {
      UnityEngine_Events_UnityEvent__Invoke(*(long *)(param_4 + 0x58),0);
      return;
    }
  }
  return;
}

