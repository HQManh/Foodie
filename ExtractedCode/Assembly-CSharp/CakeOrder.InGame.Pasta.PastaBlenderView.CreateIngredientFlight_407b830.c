// rea decompile_all
// name: CakeOrder.InGame.Pasta.PastaBlenderView$$CreateIngredientFlight
// address: 0x407b830
// body: available
// range: 0x407b830-0x407c023 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x407c01c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x407c020 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
CakeOrder_InGame_Pasta_PastaBlenderView__CreateIngredientFlight
          (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
          long param_5,long param_6)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  uint uVar14;
  undefined4 uVar15;
  undefined8 local_98;
  undefined8 *puStack_90;
  long local_88;
  undefined8 local_80;
  undefined8 *puStack_78;
  long local_70;
  
  if ((DAT_09515c3e & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917fce8);
    FUN_03f5c2a4(&DAT_091c5860);
    FUN_03f5c2a4(&DAT_09183190);
    FUN_03f5c2a4(&DAT_091a56d8);
    FUN_03f5c2a4(&DAT_091a56e0);
    FUN_03f5c2a4(&DAT_091a56e8);
    FUN_03f5c2a4(&DAT_091cd6e0);
    FUN_03f5c2a4(&DAT_091cd6e8);
    FUN_03f5c2a4(&DAT_09184b68);
    FUN_03f5c2a4(&DAT_091b35d0);
    FUN_03f5c2a4(&DAT_091d4b28);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_0918c148);
    FUN_03f5c2a4(&DAT_091dbd50);
    FUN_03f5c2a4(&DAT_091dbe08);
    FUN_03f5c2a4(&DAT_091dbfd8);
    FUN_03f5c2a4(&DAT_091dc038);
    FUN_03f5c2a4(&DAT_091ee368);
    FUN_03f5c2a4(&DAT_091ee370);
    FUN_03f5c2a4(&DAT_091931f8);
    FUN_03f5c2a4(&DAT_091fcca0);
    DAT_09515c3e = 1;
  }
  local_80 = 0;
  puStack_78 = (undefined8 *)0x0;
  local_70 = 0;
  lVar2 = thunk_FUN_03f9944c(DAT_091931f8);
  uVar3 = System_Object___ctor(lVar2,0);
  if (lVar2 != 0) {
    plVar6 = (long *)(lVar2 + 0x30);
    *plVar6 = param_6;
    thunk_FUN_03f5d7b8(plVar6,param_6);
    *(long *)(lVar2 + 0x58) = param_5;
    thunk_FUN_03f5d7b8((long *)(lVar2 + 0x58),param_5);
    lVar9 = *plVar6;
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar3 = UnityEngine_Object__op_Implicit(lVar9,0);
    if ((uVar3 & 1) == 0) {
      return 0;
    }
    uVar3 = 0;
    if (*plVar6 != 0) {
      uVar3 = 0;
      if (*(long *)(param_5 + 0x90) != 0) {
        uVar7 = *(undefined8 *)(*plVar6 + 0x78);
        FUN_057e185c(&local_98,*(long *)(param_5 + 0x90),DAT_091b35d0);
        puStack_78 = puStack_90;
        local_80 = local_98;
        local_70 = local_88;
        local_98 = 0;
        puStack_90 = &local_80;
        do {
          uVar3 = FUN_071bd28c(&local_80,DAT_091a56e0);
          lVar9 = local_70;
          if ((uVar3 & 1) == 0) {
            FUN_071bd288(&local_80,DAT_091a56d8);
            return 0;
          }
        } while ((local_70 == 0) ||
                (uVar3 = System_String__op_Equality(*(undefined8 *)(local_70 + 0x10),uVar7,0),
                (uVar3 & 1) == 0));
        FUN_071bd288(&local_80,DAT_091a56d8);
        uVar7 = *(undefined8 *)(lVar9 + 0x18);
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar3 = UnityEngine_Object__op_Implicit(uVar7,0);
        if ((uVar3 & 1) != 0) {
          uVar7 = *(undefined8 *)(lVar9 + 0x20);
          if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar3 = UnityEngine_Object__op_Implicit(uVar7,0);
          if ((uVar3 & 1) != 0) {
            uVar7 = *(undefined8 *)(lVar9 + 0x28);
            if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar3 = UnityEngine_Object__op_Implicit(uVar7,0);
            if ((uVar3 & 1) != 0) {
              uVar7 = *(undefined8 *)(lVar9 + 0x30);
              if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              uVar3 = UnityEngine_Object__op_Implicit(uVar7,0);
              if ((uVar3 & 1) != 0) {
                plVar8 = (long *)(lVar2 + 0x18);
                *plVar8 = 0;
                thunk_FUN_03f5d7b8(plVar8,0);
                uVar3 = 0;
                if ((*(long *)(lVar2 + 0x30) != 0) &&
                   (uVar4 = FUN_04a6ac70(*(long *)(lVar2 + 0x30),1,DAT_091c5860), uVar3 = uVar4,
                   uVar4 != 0)) {
                  uVar1 = *(uint *)(uVar4 + 0x18);
                  if (0 < (int)uVar1) {
                    uVar14 = 0;
                    do {
                      if (uVar1 <= uVar14) {
                    /* WARNING: Subroutine does not return */
                        FUN_03f5c558();
                      }
                      lVar11 = *(long *)(uVar4 + (long)(int)uVar14 * 8 + 0x20);
                      if (lVar11 == 0) goto LAB_0407c01c;
                      uVar7 = UnityEngine_SpriteRenderer__get_sprite(lVar11,0);
                      uVar13 = *(undefined8 *)(lVar9 + 0x30);
                      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
                        FUN_03f5c424(DAT_09188ad0);
                      }
                      uVar3 = UnityEngine_Object__op_Equality(uVar7,uVar13,0);
                      if (((uVar3 & 1) != 0) &&
                         (uVar3 = UnityEngine_Renderer__get_enabled(lVar11,0), (uVar3 & 1) != 0)) {
                        lVar5 = UnityEngine_Component__get_gameObject(lVar11,0);
                        uVar3 = 0;
                        if (lVar5 == 0) goto LAB_0407c01c;
                        uVar3 = UnityEngine_GameObject__get_activeInHierarchy(lVar5,0);
                        if ((uVar3 & 1) != 0) {
                          *plVar8 = lVar11;
                          thunk_FUN_03f5d7b8(plVar8,lVar11);
                          break;
                        }
                      }
                      uVar1 = *(uint *)(uVar4 + 0x18);
                      uVar14 = uVar14 + 1;
                    } while ((int)uVar14 < (int)uVar1);
                  }
                  lVar11 = *plVar8;
                  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
                    FUN_03f5c424();
                  }
                  uVar3 = UnityEngine_Object__op_Implicit(lVar11,0);
                  if ((uVar3 & 1) == 0) {
                    return 0;
                  }
                  lVar11 = thunk_FUN_03f9944c(DAT_09184b68);
                  UnityEngine_GameObject___ctor(lVar11,DAT_091fcca0,0);
                  plVar10 = (long *)(lVar2 + 0x48);
                  *plVar10 = lVar11;
                  thunk_FUN_03f5d7b8(plVar10,lVar11);
                  uVar3 = 0;
                  if (*(long *)(lVar2 + 0x30) != 0) {
                    lVar5 = *plVar10;
                    lVar11 = UnityEngine_Component__get_gameObject(*(long *)(lVar2 + 0x30),0);
                    uVar3 = 0;
                    if ((lVar11 != 0) &&
                       (uVar3 = UnityEngine_GameObject__get_layer(lVar11,0), lVar5 != 0)) {
                      UnityEngine_GameObject__set_layer(lVar5,uVar3 & 0xffffffff,0);
                      uVar3 = 0;
                      if (*plVar10 != 0) {
                        uVar4 = UnityEngine_GameObject__get_transform(*plVar10,0);
                        uVar3 = uVar4;
                        if ((*plVar6 != 0) &&
                           (uVar3 = AnhPD_FoodOrder_DragItemBase__get_Tf(*plVar6,0), uVar4 != 0)) {
                          UnityEngine_Transform__SetParent(uVar4,uVar3,0,0);
                          uVar7 = *(undefined8 *)(lVar9 + 0x20);
                          if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
                            FUN_03f5c424();
                          }
                          uVar7 = FUN_04c350c8(uVar7,DAT_091d4b28);
                          puVar12 = (undefined8 *)(lVar2 + 0x50);
                          *puVar12 = uVar7;
                          thunk_FUN_03f5d7b8(puVar12,uVar7);
                          uVar3 = 0;
                          if (*(long *)(lVar2 + 0x48) != 0) {
                            lVar11 = FUN_04b7c294(*(long *)(lVar2 + 0x48),DAT_091cd6e0);
                            uVar3 = 0;
                            if (lVar11 != 0) {
                              UnityEngine_MeshFilter__set_sharedMesh(lVar11,*puVar12,0);
                              uVar3 = 0;
                              if (*plVar10 != 0) {
                                lVar11 = FUN_04b7c294(*plVar10,DAT_091cd6e8);
                                plVar10 = (long *)(lVar2 + 0x68);
                                *plVar10 = lVar11;
                                thunk_FUN_03f5d7b8(plVar10,lVar11);
                                uVar3 = 0;
                                if (*plVar10 != 0) {
                                  UnityEngine_Renderer__SetMaterial
                                            (*plVar10,*(undefined8 *)(lVar9 + 0x28),0);
                                  uVar3 = 0;
                                  if (*plVar8 != 0) {
                                    lVar11 = *plVar10;
                                    uVar3 = UnityEngine_Renderer__get_sortingLayerID(*plVar8,0);
                                    if (lVar11 != 0) {
                                      UnityEngine_Renderer__set_sortingLayerID
                                                (lVar11,uVar3 & 0xffffffff,0);
                                      uVar3 = 0;
                                      if (*plVar8 != 0) {
                                        lVar11 = *plVar10;
                                        uVar3 = UnityEngine_Renderer__get_sortingOrder(*plVar8,0);
                                        if (lVar11 != 0) {
                                          UnityEngine_Renderer__set_sortingOrder
                                                    (lVar11,uVar3 & 0xffffffff,0);
                                          uVar3 = 0;
                                          if (*plVar10 != 0) {
                                            UnityEngine_Renderer__set_enabled(*plVar10,0,0);
                                            uVar3 = 0;
                                            if (*plVar8 != 0) {
                                              uVar15 = UnityEngine_SpriteRenderer__get_color
                                                                 (*plVar8,0);
                                              *(undefined4 *)(lVar2 + 0x20) = uVar15;
                                              *(undefined4 *)(lVar2 + 0x24) = param_2;
                                              *(undefined4 *)(lVar2 + 0x28) = param_3;
                                              *(undefined4 *)(lVar2 + 0x2c) = param_4;
                                              uVar3 = 0;
                                              if (*(long *)(lVar2 + 0x30) != 0) {
                                                lVar11 = AnhPD_FoodOrder_DragItemBase__get_Tf
                                                                   (*(long *)(lVar2 + 0x30),0);
                                                uVar3 = 0;
                                                if (lVar11 != 0) {
                                                  uVar15 = UnityEngine_Transform__get_rotation
                                                                     (lVar11,0);
                                                  *(undefined4 *)(lVar2 + 0x38) = uVar15;
                                                  *(undefined4 *)(lVar2 + 0x3c) = param_2;
                                                  *(undefined4 *)(lVar2 + 0x40) = param_3;
                                                  *(undefined4 *)(lVar2 + 0x44) = param_4;
                                                  uVar3 = 0;
                                                  if (*(long *)(lVar2 + 0x50) != 0) {
                                                    lVar11 = UnityEngine_Mesh__get_colors32
                                                                       (*(long *)(lVar2 + 0x50),0);
                                                    plVar8 = (long *)(lVar2 + 0x70);
                                                    *plVar8 = lVar11;
                                                    uVar3 = thunk_FUN_03f5d7b8(plVar8,lVar11);
                                                    if (*plVar8 != 0) {
                                                      uVar7 = FUN_03f5c394(DAT_0917fce8,
                                                                           *(undefined4 *)
                                                                            (*plVar8 + 0x18));
                                                      *(undefined8 *)(lVar2 + 0x78) = uVar7;
                                                      thunk_FUN_03f5d7b8((undefined8 *)
                                                                         (lVar2 + 0x78),uVar7);
                                                      *(undefined1 *)(lVar2 + 0x10) = 0;
                                                      uVar3 = 0;
                                                      if (*(long *)(lVar2 + 0x30) != 0) {
                                                        uVar7 = 
                                                  AnhPD_FoodOrder_DragItem__JumpToMovingTargetTween
                                                            (0x3f000000,*(long *)(lVar2 + 0x30),
                                                             *(undefined8 *)(lVar9 + 0x18),0,1,1,0);
                                                  puVar12 = (undefined8 *)(lVar2 + 0x60);
                                                  *puVar12 = uVar7;
                                                  thunk_FUN_03f5d7b8(puVar12,uVar7);
                                                  uVar13 = *puVar12;
                                                  uVar7 = thunk_FUN_03f9944c(DAT_0918c148);
                                                  DG_Tweening_TweenCallback___ctor
                                                            (uVar7,lVar2,DAT_091ee368,0);
                                                  FUN_04d957f0(uVar13,uVar7,DAT_091dbe08);
                                                  uVar13 = *puVar12;
                                                  uVar7 = thunk_FUN_03f9944c(DAT_0918c148);
                                                  DG_Tweening_TweenCallback___ctor
                                                            (uVar7,lVar2,DAT_091ee370,0);
                                                  FUN_04d956e8(uVar13,uVar7,DAT_091dbd50);
                                                  if (*(int *)(DAT_09183190 + 0xe4) == 0) {
                                                    FUN_03f5c424();
                                                  }
                                                  uVar3 = DG_Tweening_DOTween__Sequence(0);
                                                  if (*plVar6 != 0) {
                                                    uVar7 = AnhPD_FoodOrder_DragItemBase__get_Tf
                                                                      (*plVar6,0);
                                                    uVar7 = FUN_04d9642c(uVar3,uVar7,DAT_091dbfd8);
                                                    uVar7 = FUN_04d96618(uVar7,1,DAT_091dc038);
                                                    uVar7 = 
                                                  DG_Tweening_TweenSettingsExtensions__Append
                                                            (uVar7,*(undefined8 *)(lVar2 + 0x60),0);
                                                  uVar13 = thunk_FUN_03f9944c(DAT_0918c148);
                                                  DG_Tweening_TweenCallback___ctor
                                                            (uVar13,lVar2,DAT_091ee370,0);
                                                  uVar7 = 
                                                  DG_Tweening_TweenSettingsExtensions__AppendCallback
                                                            (uVar7,uVar13,0);
                                                  return uVar7;
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
                  }
                }
                goto LAB_0407c01c;
              }
            }
          }
        }
        return 0;
      }
    }
  }
LAB_0407c01c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550(uVar3);
}

