// rea decompile_all
// name: CookOrder.Cooking.Implement.CookingGameplayPresentation$$AnimateClean
// address: 0x44a938c
// body: available
// range: 0x44a938c-0x44aa2e3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x44a9f20 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44aa2dc to 0x44aa50c CookOrder.Cooking.Implement.CookingGameplayPresentation$$HoldEffect (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x44aa2e0 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CookOrder_Cooking_Implement_CookingGameplayPresentation__AnimateClean
               (undefined1 param_1 [16],undefined1 param_2 [16],float param_3,long param_4,
               ulong param_5)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  long *plVar12;
  ulong uVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  undefined8 uVar17;
  long *plVar18;
  undefined8 uVar19;
  uint uVar20;
  float fVar21;
  undefined4 uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined8 uVar26;
  float fVar27;
  undefined4 uVar28;
  float fVar29;
  
  if ((DAT_0951821d & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919d648);
    FUN_03f5c2a4(&DAT_091c95b0);
    FUN_03f5c2a4(&DAT_091c9c78);
    FUN_03f5c2a4(&DAT_091caed8);
    FUN_03f5c2a4(&DAT_091cb5c0);
    FUN_03f5c2a4(&DAT_09179160);
    FUN_03f5c2a4(&DAT_09179158);
    FUN_03f5c2a4(&DAT_09178670);
    FUN_03f5c2a4(&DAT_091cd6c8);
    FUN_03f5c2a4(&DAT_091cdb08);
    FUN_03f5c2a4(&DAT_09184b68);
    FUN_03f5c2a4(&DAT_091ae320);
    FUN_03f5c2a4(&DAT_091b1088);
    FUN_03f5c2a4(&DAT_091ae318);
    FUN_03f5c2a4(&DAT_091b10a8);
    FUN_03f5c2a4(&DAT_091ae340);
    FUN_03f5c2a4(&DAT_0917c658);
    FUN_03f5c2a4(&DAT_09187e28);
    FUN_03f5c2a4(&DAT_091d4bc0);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_0917f008);
    FUN_03f5c2a4(&DAT_0918c148);
    FUN_03f5c2a4(&DAT_091dbd18);
    FUN_03f5c2a4(&DAT_091dbd10);
    FUN_03f5c2a4(&DAT_091dbdf8);
    FUN_03f5c2a4(&DAT_091dbeb8);
    FUN_03f5c2a4(&DAT_091dbea8);
    FUN_03f5c2a4(&DAT_091dbed8);
    FUN_03f5c2a4(&DAT_091e6e40);
    FUN_03f5c2a4(&DAT_091e6e48);
    FUN_03f5c2a4(&DAT_091e6e50);
    FUN_03f5c2a4(&DAT_091e70c8);
    FUN_03f5c2a4(&DAT_0918f110);
    FUN_03f5c2a4(&DAT_091e70d0);
    FUN_03f5c2a4(&DAT_091e70d8);
    FUN_03f5c2a4(&DAT_0918f118);
    FUN_03f5c2a4(&DAT_091e70e0);
    FUN_03f5c2a4(&DAT_091e70e8);
    FUN_03f5c2a4(&DAT_0918f120);
    FUN_03f5c2a4(&DAT_091e70f0);
    FUN_03f5c2a4(&DAT_091e70f8);
    FUN_03f5c2a4(&DAT_0918f128);
    FUN_03f5c2a4(&DAT_0918f030);
    FUN_03f5c2a4(&DAT_091fe9c8);
    FUN_03f5c2a4(&DAT_0920d810);
    DAT_0951821d = 1;
  }
  lVar3 = thunk_FUN_03f9944c(DAT_0918f110);
  CookOrder_Cooking_Implement_CookingGameplayPresentation_<>c__DisplayClass39_0___ctor(lVar3,0);
  if (lVar3 != 0) {
    *(long *)(lVar3 + 0x10) = param_4;
    thunk_FUN_03f5d7b8((long *)(lVar3 + 0x10),param_4);
    lVar14 = *(long *)(param_4 + 0x28);
    if (lVar14 != 0) {
      if (*(int *)(lVar14 + 0x18) == 0) {
        return;
      }
      if (*(int *)(DAT_0918f030 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      puVar10 = *(undefined8 **)(DAT_0918f030 + 0xb8);
      lVar16 = puVar10[7];
      if (lVar16 == 0) {
        if (*(int *)(DAT_0918f030 + 0xe4) == 0) {
          FUN_03f5c424();
          puVar10 = *(undefined8 **)(DAT_0918f030 + 0xb8);
        }
        uVar19 = *puVar10;
        lVar16 = thunk_FUN_03f9944c(DAT_09179158);
        FUN_05322d94(lVar16,uVar19,DAT_091e6e40,0);
        plVar4 = (long *)(*(long *)(DAT_0918f030 + 0xb8) + 0x38);
        *plVar4 = lVar16;
        thunk_FUN_03f5d7b8(plVar4,lVar16);
      }
      uVar19 = FUN_04b0cafc(lVar14,lVar16,DAT_091cb5c0);
      lVar14 = FUN_04b049e4(uVar19,DAT_091caed8);
      plVar4 = (long *)(lVar3 + 0x18);
      *plVar4 = lVar14;
      thunk_FUN_03f5d7b8(plVar4,lVar14);
      lVar14 = *(long *)(param_4 + 0x28);
      if (lVar14 != 0) {
        iVar1 = *(int *)(lVar14 + 0x18);
        *(undefined4 *)(lVar14 + 0x18) = 0;
        *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
        if (0 < iVar1) {
          System_Array__Clear(*(undefined8 *)(lVar14 + 0x10),0,iVar1,0);
        }
        if (*plVar4 != 0) {
          if (*(long *)(*plVar4 + 0x18) == 0) {
            return;
          }
          uVar19 = CookOrder_Cooking_Implement_CookingGameplayPresentation__EffectSequence(param_4);
          if ((param_5 & 1) != 0) {
            uVar15 = *(undefined8 *)(param_4 + 0x208);
            if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar5 = UnityEngine_Object__op_Implicit(uVar15,0);
            if ((uVar5 & 1) != 0) {
              lVar14 = thunk_FUN_03f9944c(DAT_0918f118);
              CookOrder_Cooking_Implement_CookingGameplayPresentation_<>c__DisplayClass39_1___ctor
                        (lVar14,0);
              if (lVar14 != 0) {
                plVar4 = (long *)(lVar14 + 0x20);
                *plVar4 = lVar3;
                thunk_FUN_03f5d7b8(plVar4,lVar3);
                uVar17 = *(undefined8 *)(param_4 + 0x208);
                uVar15 = UnityEngine_Component__get_transform(param_4,0);
                if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
                  FUN_03f5c424(DAT_09188ad0);
                }
                lVar3 = FUN_04c35338(uVar17,uVar15,DAT_091d4bc0);
                plVar18 = (long *)(lVar14 + 0x18);
                *plVar18 = lVar3;
                thunk_FUN_03f5d7b8(plVar18,lVar3);
                if (*plVar18 != 0) {
                  UnityEngine_GameObject__SetActive(*plVar18,1,0);
                  uVar5 = UnityEngine_Object__op_Implicit(*(undefined8 *)(param_4 + 0x1e0),0);
                  fVar23 = 6.0;
                  if ((uVar5 & 1) != 0) {
                    lVar3 = *(long *)(param_4 + 0x1e0);
                    if ((lVar3 == 0) ||
                       (lVar16 = UnityEngine_Component__get_transform(lVar3,0), lVar16 == 0))
                    goto LAB_044a9f20;
                    UnityEngine_Transform__get_position(lVar16,0);
                    fVar23 = 1.0;
                    UnityEngine_Camera__ViewportToWorldPoint
                              (0x3f000000,0x3f800000,ABS(param_3),lVar3,0);
                    fVar23 = fVar23 + -0.5;
                  }
                  if (*plVar4 != 0) {
                    uVar15 = *(undefined8 *)(*plVar4 + 0x18);
                    if (*(int *)(DAT_0918f030 + 0xe4) == 0) {
                      FUN_03f5c424();
                    }
                    puVar10 = *(undefined8 **)(DAT_0918f030 + 0xb8);
                    lVar3 = puVar10[8];
                    if (lVar3 == 0) {
                      if (*(int *)(DAT_0918f030 + 0xe4) == 0) {
                        FUN_03f5c424();
                        puVar10 = *(undefined8 **)(DAT_0918f030 + 0xb8);
                      }
                      uVar17 = *puVar10;
                      lVar3 = thunk_FUN_03f9944c(DAT_09179160);
                      FUN_05324834(lVar3,uVar17,DAT_091e6e48,0);
                      plVar6 = (long *)(*(long *)(DAT_0918f030 + 0xb8) + 0x40);
                      *plVar6 = lVar3;
                      thunk_FUN_03f5d7b8(plVar6,lVar3);
                    }
                    fVar21 = (float)FUN_04ab7c50(uVar15,lVar3,DAT_091c95b0);
                    if (*plVar18 != 0) {
                      lVar3 = UnityEngine_GameObject__get_transform(*plVar18,0);
                      if (DAT_09515faa == '\0') {
                        FUN_03f5c2a4(&DAT_0918cbd0);
                        DAT_09515faa = '\x01';
                      }
                      if (lVar3 != 0) {
                        lVar16 = *(long *)(DAT_0918cbd0 + 0xb8);
                        UnityEngine_Transform__set_position
                                  (fVar21 + *(float *)(lVar16 + 0x18) + *(float *)(lVar16 + 0x18),
                                   fVar23 + *(float *)(lVar16 + 0x1c) + *(float *)(lVar16 + 0x1c),
                                   *(float *)(lVar16 + 0x20) + *(float *)(lVar16 + 0x20) + 0.0,lVar3
                                   ,0);
                        if ((*(long *)(param_4 + 0x2e8) != 0) && (*plVar18 != 0)) {
                          lVar3 = *(long *)(*(long *)(param_4 + 0x2e8) + 0x38);
                          uVar15 = UnityEngine_GameObject__get_transform(*plVar18,0);
                          if (lVar3 != 0) {
                            uVar26 = 0;
                            fVar24 = fVar23;
                            uVar15 = DG_Tweening_ShortcutExtensions__DOMove
                                               (fVar21,fVar23,0,*(undefined4 *)(lVar3 + 0x10),uVar15
                                                ,0,0);
                            uVar15 = FUN_04d95dc4(uVar15,*(undefined8 *)(lVar3 + 0x38),DAT_091dbea8)
                            ;
                            uVar15 = DG_Tweening_TweenSettingsExtensions__Append(uVar19,uVar15,0);
                            DG_Tweening_TweenSettingsExtensions__AppendInterval
                                      (*(undefined4 *)(lVar3 + 0x14),uVar15,0);
                            uVar17 = *(undefined8 *)(lVar14 + 0x20);
                            uVar15 = thunk_FUN_03f9944c(DAT_0918c148);
                            DG_Tweening_TweenCallback___ctor(uVar15,uVar17,DAT_091e70c8,0);
                            DG_Tweening_TweenSettingsExtensions__AppendCallback(uVar19,uVar15,0);
                            lVar16 = thunk_FUN_03f9944c(DAT_0917c658);
                            FUN_057e0400(lVar16,DAT_091ae318);
                            plVar6 = (long *)(lVar14 + 0x10);
                            *plVar6 = lVar16;
                            thunk_FUN_03f5d7b8(plVar6,lVar16);
                            if ((*(long *)(lVar14 + 0x20) != 0) &&
                               (lVar16 = *(long *)(*(long *)(lVar14 + 0x20) + 0x18), lVar16 != 0)) {
                              uVar2 = *(uint *)(lVar16 + 0x18);
                              if (0 < (int)uVar2) {
                                uVar20 = 0;
                                do {
                                  if (uVar2 <= uVar20) goto LAB_044aa2e0;
                                  uVar15 = *(undefined8 *)(param_4 + 0x210);
                                  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
                                    FUN_03f5c424();
                                  }
                                  uVar5 = UnityEngine_Object__op_Implicit(uVar15,0);
                                  if ((uVar5 & 1) == 0) {
                                    lVar7 = thunk_FUN_03f9944c(DAT_09184b68);
                                    UnityEngine_GameObject___ctor(lVar7,DAT_091fe9c8,0);
                                  }
                                  else {
                                    if (*plVar18 == 0) goto LAB_044a9f20;
                                    uVar17 = *(undefined8 *)(param_4 + 0x210);
                                    uVar15 = UnityEngine_GameObject__get_transform(*plVar18,0);
                                    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
                                      FUN_03f5c424(DAT_09188ad0);
                                    }
                                    lVar7 = FUN_04c35338(uVar17,uVar15,DAT_091d4bc0);
                                  }
                                  if (lVar7 == 0) goto LAB_044a9f20;
                                  lVar8 = UnityEngine_GameObject__get_transform(lVar7,0);
                                  if ((*plVar18 == 0) ||
                                     (uVar15 = UnityEngine_GameObject__get_transform(*plVar18,0),
                                     lVar8 == 0)) goto LAB_044a9f20;
                                  UnityEngine_Transform__SetParent(lVar8,uVar15,0);
                                  UnityEngine_GameObject__SetActive(lVar7,1,0);
                                  lVar8 = FUN_04b7c6fc(lVar7,1,DAT_091cdb08);
                                  if ((lVar8 == 0) &&
                                     (lVar8 = FUN_04b7c294(lVar7,DAT_091cd6c8), lVar8 == 0))
                                  goto LAB_044a9f20;
                                  UnityEngine_LineRenderer__set_useWorldSpace(lVar8,1,0);
                                  UnityEngine_LineRenderer__set_positionCount(lVar8,2,0);
                                  uVar15 = UnityEngine_Renderer__GetSharedMaterial(lVar8,0);
                                  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
                                    FUN_03f5c424(DAT_09188ad0);
                                  }
                                  uVar5 = UnityEngine_Object__op_Implicit(uVar15,0);
                                  if ((uVar5 & 1) == 0) {
                                    uVar15 = UnityEngine_Shader__Find(DAT_0920d810,0);
                                    uVar17 = thunk_FUN_03f9944c(DAT_09187e28);
                                    UnityEngine_Material___ctor(uVar17,uVar15,0);
                                    UnityEngine_Renderer__SetMaterial(lVar8,uVar17,0);
                                  }
                                  UnityEngine_LineRenderer__set_endWidth(0x3ccccccd,lVar8,0);
                                  UnityEngine_LineRenderer__set_startWidth(0x3ccccccd,lVar8,0);
                                  UnityEngine_Renderer__set_enabled(lVar8,0,0);
                                  lVar7 = DAT_091ae320;
                                  lVar9 = *plVar6;
                                  if (lVar9 == 0) goto LAB_044a9f20;
                                  lVar11 = *(long *)(lVar9 + 0x10);
                                  *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
                                  if (lVar11 == 0) goto LAB_044a9f20;
                                  uVar2 = *(uint *)(lVar9 + 0x18);
                                  if (uVar2 < *(uint *)(lVar11 + 0x18)) {
                                    *(uint *)(lVar9 + 0x18) = uVar2 + 1;
                                    plVar12 = (long *)(lVar11 + (long)(int)uVar2 * 8 + 0x20);
                                    *plVar12 = lVar8;
                                    thunk_FUN_03f5d7b8(plVar12,lVar8);
                                  }
                                  else {
                                    FUN_057e0c68(lVar9,lVar8,
                                                 *(undefined8 *)
                                                  (*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70)
                                                );
                                  }
                                  uVar2 = *(uint *)(lVar16 + 0x18);
                                  uVar20 = uVar20 + 1;
                                } while ((int)uVar20 < (int)uVar2);
                              }
                              lVar16 = *plVar4;
                              if (lVar16 != 0) {
                                uVar5 = 0;
                                while( true ) {
                                  uVar28 = (undefined4)uVar26;
                                  if (*(long *)(lVar16 + 0x18) == 0) break;
                                  if ((long)*(int *)(*(long *)(lVar16 + 0x18) + 0x18) <= (long)uVar5
                                     ) {
                                    uVar15 = thunk_FUN_03f9944c(DAT_0918c148);
                                    DG_Tweening_TweenCallback___ctor(uVar15,lVar14,DAT_091e70d0,0);
                                    DG_Tweening_TweenSettingsExtensions__AppendCallback
                                              (uVar19,uVar15,0);
                                    if (*(long *)(lVar14 + 0x18) != 0) {
                                      uVar15 = UnityEngine_GameObject__get_transform
                                                         (*(long *)(lVar14 + 0x18),0);
                                      uVar15 = DG_Tweening_ShortcutExtensions__DOMoveY
                                                         (fVar23 + 4.0,*(undefined4 *)(lVar3 + 0x24)
                                                          ,uVar15,0,0);
                                      uVar15 = FUN_04d95dc4(uVar15,*(undefined8 *)(lVar3 + 0x50),
                                                            DAT_091dbea8);
                                      DG_Tweening_TweenSettingsExtensions__Append(uVar19,uVar15,0);
                                      uVar15 = thunk_FUN_03f9944c(DAT_0918c148);
                                      DG_Tweening_TweenCallback___ctor(uVar15,lVar14,DAT_091e70d8,0)
                                      ;
                                      FUN_04d956bc(uVar19,uVar15,DAT_091dbd18);
                                      goto LAB_044aa2ac;
                                    }
                                    break;
                                  }
                                  lVar16 = thunk_FUN_03f9944c(DAT_0918f120);
                                  CookOrder_Cooking_Implement_CookingGameplayPresentation_<>c__DisplayClass39_2___ctor
                                            (lVar16,0);
                                  if ((*plVar4 == 0) ||
                                     (lVar7 = *(long *)(*plVar4 + 0x18), lVar7 == 0)) break;
                                  if (*(uint *)(lVar7 + 0x18) <= uVar5) goto LAB_044aa2e0;
                                  if (lVar16 == 0) break;
                                  *(undefined8 *)(lVar16 + 0x30) =
                                       *(undefined8 *)(lVar7 + uVar5 * 8 + 0x20);
                                  thunk_FUN_03f5d7b8();
                                  if (*plVar6 == 0) break;
                                  uVar15 = FUN_057e0998(*plVar6,uVar5 & 0xffffffff,DAT_091ae340);
                                  *(undefined8 *)(lVar16 + 0x10) = uVar15;
                                  thunk_FUN_03f5d7b8((undefined8 *)(lVar16 + 0x10),uVar15);
                                  *(float *)(lVar16 + 0x18) = fVar21;
                                  *(float *)(lVar16 + 0x1c) = fVar23;
                                  *(undefined4 *)(lVar16 + 0x20) = 0;
                                  if (*(long *)(lVar16 + 0x30) == 0) break;
                                  uVar22 = UnityEngine_Transform__get_position
                                                     (*(long *)(lVar16 + 0x30),0);
                                  *(undefined4 *)(lVar16 + 0x24) = uVar22;
                                  *(float *)(lVar16 + 0x28) = fVar24;
                                  *(undefined4 *)(lVar16 + 0x2c) = uVar28;
                                  fVar24 = *(float *)(lVar3 + 0x10);
                                  fVar25 = *(float *)(lVar3 + 0x14);
                                  fVar27 = *(float *)(lVar3 + 0x18);
                                  uVar28 = *(undefined4 *)(lVar3 + 0x1c);
                                  uVar15 = thunk_FUN_03f9944c(DAT_0917f008);
                                  FUN_063be1d4(uVar15,lVar16,DAT_091e70e0,0);
                                  uVar15 = DG_Tweening_DOVirtual__Float
                                                     (0,0x3f800000,uVar28,uVar15,0);
                                  uVar15 = FUN_04d95dc4(uVar15,*(undefined8 *)(lVar3 + 0x40),
                                                        DAT_091dbed8);
                                  DG_Tweening_TweenSettingsExtensions__Insert
                                            (fVar24 + fVar25 + fVar27 * (float)(int)uVar5,uVar19,
                                             uVar15,0);
                                  if ((*plVar4 == 0) ||
                                     (lVar7 = *(long *)(*plVar4 + 0x18), lVar7 == 0)) break;
                                  uVar26 = 0;
                                  fVar25 = *(float *)(lVar3 + 0x10);
                                  fVar27 = *(float *)(lVar3 + 0x14);
                                  fVar24 = *(float *)(lVar3 + 0x18);
                                  fVar29 = *(float *)(lVar3 + 0x1c);
                                  uVar15 = DG_Tweening_ShortcutExtensions__DOMove
                                                     (fVar21,fVar23,0,*(undefined4 *)(lVar3 + 0x20),
                                                      *(undefined8 *)(lVar16 + 0x30),0,0);
                                  uVar15 = FUN_04d95dc4(uVar15,*(undefined8 *)(lVar3 + 0x48),
                                                        DAT_091dbea8);
                                  uVar17 = thunk_FUN_03f9944c(DAT_0918c148);
                                  DG_Tweening_TweenCallback___ctor(uVar17,lVar16,DAT_091e70e8,0);
                                  uVar15 = FUN_04d957f0(uVar15,uVar17,DAT_091dbdf8);
                                  fVar24 = fVar24 * (float)(*(int *)(lVar7 + 0x18) + -1);
                                  DG_Tweening_TweenSettingsExtensions__Insert
                                            (fVar25 + fVar27 + fVar29 + fVar24,uVar19,uVar15,0);
                                  lVar16 = *plVar4;
                                  uVar5 = uVar5 + 1;
                                  if (lVar16 == 0) break;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
              goto LAB_044a9f20;
            }
          }
          if (*(long *)(param_4 + 0x308) != 0) {
            uVar15 = FUN_06ef0310(*(long *)(param_4 + 0x308),DAT_0919d648);
            if (*(int *)(DAT_0918f030 + 0xe4) == 0) {
              FUN_03f5c424(DAT_0918f030);
            }
            puVar10 = *(undefined8 **)(DAT_0918f030 + 0xb8);
            lVar3 = puVar10[9];
            if (lVar3 == 0) {
              if (*(int *)(DAT_0918f030 + 0xe4) == 0) {
                FUN_03f5c424(DAT_0918f030);
                puVar10 = *(undefined8 **)(DAT_0918f030 + 0xb8);
              }
              uVar17 = *puVar10;
              lVar3 = thunk_FUN_03f9944c(DAT_09178670);
              FUN_05322d94(lVar3,uVar17,DAT_091e6e50,0);
              plVar18 = (long *)(*(long *)(DAT_0918f030 + 0xb8) + 0x48);
              *plVar18 = lVar3;
              thunk_FUN_03f5d7b8(plVar18,lVar3);
            }
            lVar3 = FUN_04ae5fd0(uVar15,lVar3,DAT_091c9c78);
            lVar14 = *plVar4;
            if (lVar14 != 0) {
              if (0 < (int)*(ulong *)(lVar14 + 0x18)) {
                uVar5 = 0;
                uVar13 = *(ulong *)(lVar14 + 0x18) & 0xffffffff;
                do {
                  if (uVar13 <= uVar5) {
LAB_044aa2e0:
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c558();
                  }
                  uVar15 = *(undefined8 *)(lVar14 + 0x20 + uVar5 * 8);
                  lVar16 = thunk_FUN_03f9944c(DAT_0918f128);
                  CookOrder_Cooking_Implement_CookingGameplayPresentation_<>c__DisplayClass39_3___ctor
                            (lVar16,0);
                  if (lVar16 == 0) goto LAB_044a9f20;
                  puVar10 = (undefined8 *)(lVar16 + 0x10);
                  *puVar10 = uVar15;
                  thunk_FUN_03f5d7b8(puVar10,uVar15);
                  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
                    FUN_03f5c424();
                  }
                  uVar13 = UnityEngine_Object__op_Implicit(lVar3,0);
                  uVar15 = *puVar10;
                  if ((uVar13 & 1) == 0) {
                    if ((*(long *)(param_4 + 0x2e8) == 0) ||
                       (lVar7 = *(long *)(*(long *)(param_4 + 0x2e8) + 0x38), lVar7 == 0))
                    goto LAB_044a9f20;
                    uVar15 = DG_Tweening_ShortcutExtensions__DOScale
                                       (0,*(undefined4 *)(lVar7 + 0x30),uVar15,0);
                    if ((*(long *)(param_4 + 0x2e8) == 0) ||
                       (lVar7 = *(long *)(*(long *)(param_4 + 0x2e8) + 0x38), lVar7 == 0))
                    goto LAB_044a9f20;
                    uVar15 = FUN_04d95dc4(uVar15,*(undefined8 *)(lVar7 + 0x58),DAT_091dbea8);
                    uVar17 = thunk_FUN_03f9944c(DAT_0918c148);
                    DG_Tweening_TweenCallback___ctor(uVar17,lVar16,DAT_091e70f8,0);
                    puVar10 = &DAT_091dbd10;
                  }
                  else {
                    if ((lVar3 == 0) || (*(long *)(lVar3 + 0x20) == 0)) goto LAB_044a9f20;
                    UnityEngine_Transform__get_position(*(long *)(lVar3 + 0x20),0);
                    if ((*(long *)(param_4 + 0x2e8) == 0) ||
                       (*(long *)(*(long *)(param_4 + 0x2e8) + 0x38) == 0)) goto LAB_044a9f20;
                    uVar15 = DG_Tweening_ShortcutExtensions__DOJump(uVar15,1,0,0);
                    if ((*(long *)(param_4 + 0x2e8) == 0) ||
                       (lVar7 = *(long *)(*(long *)(param_4 + 0x2e8) + 0x38), lVar7 == 0))
                    goto LAB_044a9f20;
                    uVar15 = FUN_04d95dc4(uVar15,*(undefined8 *)(lVar7 + 0x58),DAT_091dbeb8);
                    uVar17 = thunk_FUN_03f9944c(DAT_0918c148);
                    DG_Tweening_TweenCallback___ctor(uVar17,lVar16,DAT_091e70f0,0);
                    puVar10 = &DAT_091dbd18;
                  }
                  uVar15 = FUN_04d956bc(uVar15,uVar17,*puVar10);
                  DG_Tweening_TweenSettingsExtensions__Join(uVar19,uVar15,0);
                  uVar13 = (ulong)*(uint *)(lVar14 + 0x18);
                  uVar5 = uVar5 + 1;
                } while ((long)uVar5 < (long)(int)*(uint *)(lVar14 + 0x18));
              }
LAB_044aa2ac:
              CookOrder_Cooking_Implement_CookingGameplayPresentation__HoldEffect(param_4,uVar19);
              return;
            }
          }
        }
      }
    }
  }
LAB_044a9f20:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

