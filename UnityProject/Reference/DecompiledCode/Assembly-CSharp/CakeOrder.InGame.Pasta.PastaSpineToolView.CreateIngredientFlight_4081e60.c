// rea decompile_all
// name: CakeOrder.InGame.Pasta.PastaSpineToolView$$CreateIngredientFlight
// address: 0x4081e60
// body: available
// range: 0x4081e60-0x4082577 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x408254c to 0x454cccc DG.Tweening.TweenSettingsExtensions$$AppendCallback (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x4082570 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4082574 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
CakeOrder_InGame_Pasta_PastaSpineToolView__CreateIngredientFlight
          (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
          undefined8 param_5,long param_6)

{
  uint uVar1;
  undefined4 uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  uint uVar15;
  
  if ((DAT_09515c71 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917fce8);
    FUN_03f5c2a4(&DAT_091c5860);
    FUN_03f5c2a4(&DAT_09183190);
    FUN_03f5c2a4(&DAT_091cd6e0);
    FUN_03f5c2a4(&DAT_091cd6e8);
    FUN_03f5c2a4(&DAT_09184b68);
    FUN_03f5c2a4(&DAT_091d4b28);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_0918c148);
    FUN_03f5c2a4(&DAT_091dbd50);
    FUN_03f5c2a4(&DAT_091dbe08);
    FUN_03f5c2a4(&DAT_091dbfd8);
    FUN_03f5c2a4(&DAT_091dc038);
    FUN_03f5c2a4(&DAT_091ee3c8);
    FUN_03f5c2a4(&DAT_091ee3d0);
    FUN_03f5c2a4(&DAT_09193230);
    FUN_03f5c2a4(&DAT_0920d718);
    DAT_09515c71 = 1;
  }
  lVar3 = thunk_FUN_03f9944c(DAT_09193230);
  System_Object___ctor(lVar3,0);
  if (lVar3 != 0) {
    plVar7 = (long *)(lVar3 + 0x30);
    *plVar7 = param_6;
    thunk_FUN_03f5d7b8(plVar7,param_6);
    *(undefined8 *)(lVar3 + 0x58) = param_5;
    thunk_FUN_03f5d7b8((undefined8 *)(lVar3 + 0x58),param_5);
    lVar8 = *plVar7;
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar4 = UnityEngine_Object__op_Implicit(lVar8,0);
    if ((uVar4 & 1) != 0) {
      if (*plVar7 == 0) goto LAB_04082570;
      lVar8 = CakeOrder_InGame_Pasta_PastaSpineToolView__FindIngredient
                        (param_5,*(undefined8 *)(*plVar7 + 0x78));
      if (lVar8 != 0) {
        uVar9 = *(undefined8 *)(lVar8 + 0x38);
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar4 = UnityEngine_Object__op_Implicit(uVar9,0);
        if ((uVar4 & 1) != 0) {
          uVar9 = *(undefined8 *)(lVar8 + 0x40);
          if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar4 = UnityEngine_Object__op_Implicit(uVar9,0);
          if ((uVar4 & 1) != 0) {
            uVar9 = *(undefined8 *)(lVar8 + 0x48);
            if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar4 = UnityEngine_Object__op_Implicit(uVar9,0);
            if ((uVar4 & 1) != 0) {
              uVar9 = *(undefined8 *)(lVar8 + 0x50);
              if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              uVar4 = UnityEngine_Object__op_Implicit(uVar9,0);
              if ((uVar4 & 1) != 0) {
                plVar10 = (long *)(lVar3 + 0x18);
                *plVar10 = 0;
                thunk_FUN_03f5d7b8(plVar10,0);
                if ((*(long *)(lVar3 + 0x30) != 0) &&
                   (lVar5 = FUN_04a6ac70(*(long *)(lVar3 + 0x30),1,DAT_091c5860), lVar5 != 0)) {
                  uVar1 = *(uint *)(lVar5 + 0x18);
                  if (0 < (int)uVar1) {
                    uVar15 = 0;
                    do {
                      if (uVar1 <= uVar15) {
                    /* WARNING: Subroutine does not return */
                        FUN_03f5c558();
                      }
                      lVar12 = *(long *)(lVar5 + (long)(int)uVar15 * 8 + 0x20);
                      if (lVar12 == 0) goto LAB_04082570;
                      uVar9 = UnityEngine_SpriteRenderer__get_sprite(lVar12,0);
                      uVar14 = *(undefined8 *)(lVar8 + 0x50);
                      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
                        FUN_03f5c424(DAT_09188ad0);
                      }
                      uVar4 = UnityEngine_Object__op_Equality(uVar9,uVar14,0);
                      if (((uVar4 & 1) != 0) &&
                         (uVar4 = UnityEngine_Renderer__get_enabled(lVar12,0), (uVar4 & 1) != 0)) {
                        lVar6 = UnityEngine_Component__get_gameObject(lVar12,0);
                        if (lVar6 == 0) goto LAB_04082570;
                        uVar4 = UnityEngine_GameObject__get_activeInHierarchy(lVar6,0);
                        if ((uVar4 & 1) != 0) {
                          *plVar10 = lVar12;
                          thunk_FUN_03f5d7b8(plVar10,lVar12);
                          break;
                        }
                      }
                      uVar1 = *(uint *)(lVar5 + 0x18);
                      uVar15 = uVar15 + 1;
                    } while ((int)uVar15 < (int)uVar1);
                  }
                  lVar5 = *plVar10;
                  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
                    FUN_03f5c424();
                  }
                  uVar4 = UnityEngine_Object__op_Implicit(lVar5,0);
                  if ((uVar4 & 1) == 0) {
                    return 0;
                  }
                  lVar5 = thunk_FUN_03f9944c(DAT_09184b68);
                  UnityEngine_GameObject___ctor(lVar5,DAT_0920d718,0);
                  plVar11 = (long *)(lVar3 + 0x48);
                  *plVar11 = lVar5;
                  thunk_FUN_03f5d7b8(plVar11,lVar5);
                  if (*(long *)(lVar3 + 0x30) != 0) {
                    lVar12 = *plVar11;
                    lVar5 = UnityEngine_Component__get_gameObject(*(long *)(lVar3 + 0x30),0);
                    if ((lVar5 != 0) &&
                       (uVar2 = UnityEngine_GameObject__get_layer(lVar5,0), lVar12 != 0)) {
                      UnityEngine_GameObject__set_layer(lVar12,uVar2,0);
                      if (*plVar11 != 0) {
                        lVar5 = UnityEngine_GameObject__get_transform(*plVar11,0);
                        if ((*plVar7 != 0) &&
                           (uVar9 = AnhPD_FoodOrder_DragItemBase__get_Tf(*plVar7,0), lVar5 != 0)) {
                          UnityEngine_Transform__SetParent(lVar5,uVar9,0,0);
                          uVar9 = *(undefined8 *)(lVar8 + 0x40);
                          if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
                            FUN_03f5c424();
                          }
                          uVar9 = FUN_04c350c8(uVar9,DAT_091d4b28);
                          puVar13 = (undefined8 *)(lVar3 + 0x50);
                          *puVar13 = uVar9;
                          thunk_FUN_03f5d7b8(puVar13,uVar9);
                          if ((*(long *)(lVar3 + 0x48) != 0) &&
                             (lVar5 = FUN_04b7c294(*(long *)(lVar3 + 0x48),DAT_091cd6e0), lVar5 != 0
                             )) {
                            UnityEngine_MeshFilter__set_sharedMesh(lVar5,*puVar13,0);
                            if (*plVar11 != 0) {
                              lVar5 = FUN_04b7c294(*plVar11,DAT_091cd6e8);
                              plVar11 = (long *)(lVar3 + 0x68);
                              *plVar11 = lVar5;
                              thunk_FUN_03f5d7b8(plVar11,lVar5);
                              if (*plVar11 != 0) {
                                UnityEngine_Renderer__SetMaterial
                                          (*plVar11,*(undefined8 *)(lVar8 + 0x48),0);
                                if (*plVar10 != 0) {
                                  lVar5 = *plVar11;
                                  uVar2 = UnityEngine_Renderer__get_sortingLayerID(*plVar10,0);
                                  if (lVar5 != 0) {
                                    UnityEngine_Renderer__set_sortingLayerID(lVar5,uVar2,0);
                                    if (*plVar10 != 0) {
                                      lVar5 = *plVar11;
                                      uVar2 = UnityEngine_Renderer__get_sortingOrder(*plVar10,0);
                                      if (lVar5 != 0) {
                                        UnityEngine_Renderer__set_sortingOrder(lVar5,uVar2,0);
                                        if (*plVar11 != 0) {
                                          UnityEngine_Renderer__set_enabled(*plVar11,0,0);
                                          if (*plVar10 != 0) {
                                            uVar2 = UnityEngine_SpriteRenderer__get_color
                                                              (*plVar10,0);
                                            *(undefined4 *)(lVar3 + 0x20) = uVar2;
                                            *(undefined4 *)(lVar3 + 0x24) = param_2;
                                            *(undefined4 *)(lVar3 + 0x28) = param_3;
                                            *(undefined4 *)(lVar3 + 0x2c) = param_4;
                                            if ((*(long *)(lVar3 + 0x30) != 0) &&
                                               (lVar5 = AnhPD_FoodOrder_DragItemBase__get_Tf
                                                                  (*(long *)(lVar3 + 0x30),0),
                                               lVar5 != 0)) {
                                              uVar2 = UnityEngine_Transform__get_rotation(lVar5,0);
                                              *(undefined4 *)(lVar3 + 0x38) = uVar2;
                                              *(undefined4 *)(lVar3 + 0x3c) = param_2;
                                              *(undefined4 *)(lVar3 + 0x40) = param_3;
                                              *(undefined4 *)(lVar3 + 0x44) = param_4;
                                              if (*(long *)(lVar3 + 0x50) != 0) {
                                                lVar5 = UnityEngine_Mesh__get_colors32
                                                                  (*(long *)(lVar3 + 0x50),0);
                                                plVar10 = (long *)(lVar3 + 0x70);
                                                *plVar10 = lVar5;
                                                thunk_FUN_03f5d7b8(plVar10,lVar5);
                                                if (*plVar10 != 0) {
                                                  uVar9 = FUN_03f5c394(DAT_0917fce8,
                                                                       *(undefined4 *)
                                                                        (*plVar10 + 0x18));
                                                  *(undefined8 *)(lVar3 + 0x78) = uVar9;
                                                  thunk_FUN_03f5d7b8((undefined8 *)(lVar3 + 0x78),
                                                                     uVar9);
                                                  *(undefined1 *)(lVar3 + 0x10) = 0;
                                                  if (*(long *)(lVar3 + 0x30) != 0) {
                                                    uVar9 = 
                                                  AnhPD_FoodOrder_DragItem__JumpToMovingTargetTween
                                                            (0x3f000000,*(long *)(lVar3 + 0x30),
                                                             *(undefined8 *)(lVar8 + 0x38),0,1,1,0);
                                                  puVar13 = (undefined8 *)(lVar3 + 0x60);
                                                  *puVar13 = uVar9;
                                                  thunk_FUN_03f5d7b8(puVar13,uVar9);
                                                  uVar14 = *puVar13;
                                                  uVar9 = thunk_FUN_03f9944c(DAT_0918c148);
                                                  DG_Tweening_TweenCallback___ctor
                                                            (uVar9,lVar3,DAT_091ee3c8,0);
                                                  FUN_04d957f0(uVar14,uVar9,DAT_091dbe08);
                                                  uVar14 = *puVar13;
                                                  uVar9 = thunk_FUN_03f9944c(DAT_0918c148);
                                                  DG_Tweening_TweenCallback___ctor
                                                            (uVar9,lVar3,DAT_091ee3d0,0);
                                                  FUN_04d956e8(uVar14,uVar9,DAT_091dbd50);
                                                  if (*(int *)(DAT_09183190 + 0xe4) == 0) {
                                                    FUN_03f5c424();
                                                  }
                                                  uVar9 = DG_Tweening_DOTween__Sequence(0);
                                                  if (*plVar7 != 0) {
                                                    uVar14 = AnhPD_FoodOrder_DragItemBase__get_Tf
                                                                       (*plVar7,0);
                                                    uVar9 = FUN_04d9642c(uVar9,uVar14,DAT_091dbfd8);
                                                    uVar9 = FUN_04d96618(uVar9,1,DAT_091dc038);
                                                    uVar9 = 
                                                  DG_Tweening_TweenSettingsExtensions__Append
                                                            (uVar9,*(undefined8 *)(lVar3 + 0x60),0);
                                                  uVar14 = thunk_FUN_03f9944c(DAT_0918c148);
                                                  DG_Tweening_TweenCallback___ctor
                                                            (uVar14,lVar3,DAT_091ee3d0,0);
                                                  uVar9 = 
                                                  DG_Tweening_TweenSettingsExtensions__AppendCallback
                                                            (uVar9,uVar14,0);
                                                  return uVar9;
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
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
                goto LAB_04082570;
              }
            }
          }
        }
      }
    }
    return 0;
  }
LAB_04082570:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

