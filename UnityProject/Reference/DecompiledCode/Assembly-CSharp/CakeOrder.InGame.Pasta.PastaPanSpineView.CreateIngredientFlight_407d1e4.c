// rea decompile_all
// name: CakeOrder.InGame.Pasta.PastaPanSpineView$$CreateIngredientFlight
// address: 0x407d1e4
// body: available
// range: 0x407d1e4-0x407d8bb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x407d890 to 0x454cccc DG.Tweening.TweenSettingsExtensions$$AppendCallback (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x407d8b4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x407d8b8 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
CakeOrder_InGame_Pasta_PastaPanSpineView__CreateIngredientFlight
          (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
          long param_5,long param_6)

{
  uint uVar1;
  undefined4 uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  uint uVar14;
  
  if ((DAT_09515c4a & 1) == 0) {
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
    FUN_03f5c2a4(&DAT_091ee398);
    FUN_03f5c2a4(&DAT_091ee3a0);
    FUN_03f5c2a4(&DAT_09193210);
    FUN_03f5c2a4(&DAT_0920a3a8);
    DAT_09515c4a = 1;
  }
  lVar3 = thunk_FUN_03f9944c(DAT_09193210);
  System_Object___ctor(lVar3,0);
  if (lVar3 == 0) {
LAB_0407d8b4:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  plVar7 = (long *)(lVar3 + 0x30);
  *plVar7 = param_6;
  thunk_FUN_03f5d7b8(plVar7,param_6);
  *(long *)(lVar3 + 0x58) = param_5;
  thunk_FUN_03f5d7b8((long *)(lVar3 + 0x58),param_5);
  uVar8 = *(undefined8 *)(param_5 + 0xb0);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar4 = UnityEngine_Object__op_Implicit(uVar8,0);
  if ((uVar4 & 1) != 0) {
    uVar8 = *(undefined8 *)(param_5 + 0xb8);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar4 = UnityEngine_Object__op_Implicit(uVar8,0);
    if ((uVar4 & 1) != 0) {
      uVar8 = *(undefined8 *)(param_5 + 0xc0);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar4 = UnityEngine_Object__op_Implicit(uVar8,0);
      if ((uVar4 & 1) != 0) {
        uVar8 = *(undefined8 *)(param_5 + 200);
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar4 = UnityEngine_Object__op_Implicit(uVar8,0);
        if ((uVar4 & 1) != 0) {
          plVar9 = (long *)(lVar3 + 0x18);
          *plVar9 = 0;
          thunk_FUN_03f5d7b8(plVar9,0);
          if ((*(long *)(lVar3 + 0x30) != 0) &&
             (lVar5 = FUN_04a6ac70(*(long *)(lVar3 + 0x30),1,DAT_091c5860), lVar5 != 0)) {
            uVar1 = *(uint *)(lVar5 + 0x18);
            if (0 < (int)uVar1) {
              uVar14 = 0;
              do {
                if (uVar1 <= uVar14) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c558();
                }
                lVar11 = *(long *)(lVar5 + (long)(int)uVar14 * 8 + 0x20);
                if (lVar11 == 0) goto LAB_0407d8b4;
                uVar8 = UnityEngine_SpriteRenderer__get_sprite(lVar11,0);
                uVar13 = *(undefined8 *)(param_5 + 200);
                if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
                  FUN_03f5c424(DAT_09188ad0);
                }
                uVar4 = UnityEngine_Object__op_Equality(uVar8,uVar13,0);
                if (((uVar4 & 1) != 0) &&
                   (uVar4 = UnityEngine_Renderer__get_enabled(lVar11,0), (uVar4 & 1) != 0)) {
                  lVar6 = UnityEngine_Component__get_gameObject(lVar11,0);
                  if (lVar6 == 0) goto LAB_0407d8b4;
                  uVar4 = UnityEngine_GameObject__get_activeInHierarchy(lVar6,0);
                  if ((uVar4 & 1) != 0) {
                    *plVar9 = lVar11;
                    thunk_FUN_03f5d7b8(plVar9,lVar11);
                    break;
                  }
                }
                uVar1 = *(uint *)(lVar5 + 0x18);
                uVar14 = uVar14 + 1;
              } while ((int)uVar14 < (int)uVar1);
            }
            lVar5 = *plVar9;
            if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar4 = UnityEngine_Object__op_Implicit(lVar5,0);
            if ((uVar4 & 1) == 0) {
              return 0;
            }
            lVar5 = thunk_FUN_03f9944c(DAT_09184b68);
            UnityEngine_GameObject___ctor(lVar5,DAT_0920a3a8,0);
            plVar10 = (long *)(lVar3 + 0x48);
            *plVar10 = lVar5;
            thunk_FUN_03f5d7b8(plVar10,lVar5);
            if (*(long *)(lVar3 + 0x30) != 0) {
              lVar11 = *plVar10;
              lVar5 = UnityEngine_Component__get_gameObject(*(long *)(lVar3 + 0x30),0);
              if ((lVar5 != 0) && (uVar2 = UnityEngine_GameObject__get_layer(lVar5,0), lVar11 != 0))
              {
                UnityEngine_GameObject__set_layer(lVar11,uVar2,0);
                if (*plVar10 != 0) {
                  lVar5 = UnityEngine_GameObject__get_transform(*plVar10,0);
                  if ((*plVar7 != 0) &&
                     (uVar8 = AnhPD_FoodOrder_DragItemBase__get_Tf(*plVar7,0), lVar5 != 0)) {
                    UnityEngine_Transform__SetParent(lVar5,uVar8,0,0);
                    uVar8 = *(undefined8 *)(param_5 + 0xb8);
                    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
                      FUN_03f5c424();
                    }
                    uVar8 = FUN_04c350c8(uVar8,DAT_091d4b28);
                    puVar12 = (undefined8 *)(lVar3 + 0x50);
                    *puVar12 = uVar8;
                    thunk_FUN_03f5d7b8(puVar12,uVar8);
                    if ((*(long *)(lVar3 + 0x48) != 0) &&
                       (lVar5 = FUN_04b7c294(*(long *)(lVar3 + 0x48),DAT_091cd6e0), lVar5 != 0)) {
                      UnityEngine_MeshFilter__set_sharedMesh(lVar5,*puVar12,0);
                      if (*plVar10 != 0) {
                        lVar5 = FUN_04b7c294(*plVar10,DAT_091cd6e8);
                        plVar10 = (long *)(lVar3 + 0x68);
                        *plVar10 = lVar5;
                        thunk_FUN_03f5d7b8(plVar10,lVar5);
                        if (*plVar10 != 0) {
                          UnityEngine_Renderer__SetMaterial
                                    (*plVar10,*(undefined8 *)(param_5 + 0xc0),0);
                          if (*plVar9 != 0) {
                            lVar5 = *plVar10;
                            uVar2 = UnityEngine_Renderer__get_sortingLayerID(*plVar9,0);
                            if (lVar5 != 0) {
                              UnityEngine_Renderer__set_sortingLayerID(lVar5,uVar2,0);
                              if (*plVar9 != 0) {
                                lVar5 = *plVar10;
                                uVar2 = UnityEngine_Renderer__get_sortingOrder(*plVar9,0);
                                if (lVar5 != 0) {
                                  UnityEngine_Renderer__set_sortingOrder(lVar5,uVar2,0);
                                  if (*plVar10 != 0) {
                                    UnityEngine_Renderer__set_enabled(*plVar10,0,0);
                                    if (*plVar9 != 0) {
                                      uVar2 = UnityEngine_SpriteRenderer__get_color(*plVar9,0);
                                      *(undefined4 *)(lVar3 + 0x20) = uVar2;
                                      *(undefined4 *)(lVar3 + 0x24) = param_2;
                                      *(undefined4 *)(lVar3 + 0x28) = param_3;
                                      *(undefined4 *)(lVar3 + 0x2c) = param_4;
                                      if ((*(long *)(lVar3 + 0x30) != 0) &&
                                         (lVar5 = AnhPD_FoodOrder_DragItemBase__get_Tf
                                                            (*(long *)(lVar3 + 0x30),0), lVar5 != 0)
                                         ) {
                                        uVar2 = UnityEngine_Transform__get_rotation(lVar5,0);
                                        *(undefined4 *)(lVar3 + 0x38) = uVar2;
                                        *(undefined4 *)(lVar3 + 0x3c) = param_2;
                                        *(undefined4 *)(lVar3 + 0x40) = param_3;
                                        *(undefined4 *)(lVar3 + 0x44) = param_4;
                                        if (*(long *)(lVar3 + 0x50) != 0) {
                                          lVar5 = UnityEngine_Mesh__get_colors32
                                                            (*(long *)(lVar3 + 0x50),0);
                                          plVar9 = (long *)(lVar3 + 0x70);
                                          *plVar9 = lVar5;
                                          thunk_FUN_03f5d7b8(plVar9,lVar5);
                                          if (*plVar9 != 0) {
                                            uVar8 = FUN_03f5c394(DAT_0917fce8,
                                                                 *(undefined4 *)(*plVar9 + 0x18));
                                            *(undefined8 *)(lVar3 + 0x78) = uVar8;
                                            thunk_FUN_03f5d7b8((undefined8 *)(lVar3 + 0x78),uVar8);
                                            *(undefined1 *)(lVar3 + 0x10) = 0;
                                            if (*(long *)(lVar3 + 0x30) != 0) {
                                              uVar8 = 
                                                  AnhPD_FoodOrder_DragItem__JumpToMovingTargetTween
                                                            (0x3f000000,*(long *)(lVar3 + 0x30),
                                                             *(undefined8 *)(param_5 + 0xb0),0,1,1,0
                                                            );
                                              puVar12 = (undefined8 *)(lVar3 + 0x60);
                                              *puVar12 = uVar8;
                                              thunk_FUN_03f5d7b8(puVar12,uVar8);
                                              uVar13 = *puVar12;
                                              uVar8 = thunk_FUN_03f9944c(DAT_0918c148);
                                              DG_Tweening_TweenCallback___ctor
                                                        (uVar8,lVar3,DAT_091ee398,0);
                                              FUN_04d957f0(uVar13,uVar8,DAT_091dbe08);
                                              uVar13 = *puVar12;
                                              uVar8 = thunk_FUN_03f9944c(DAT_0918c148);
                                              DG_Tweening_TweenCallback___ctor
                                                        (uVar8,lVar3,DAT_091ee3a0,0);
                                              FUN_04d956e8(uVar13,uVar8,DAT_091dbd50);
                                              if (*(int *)(DAT_09183190 + 0xe4) == 0) {
                                                FUN_03f5c424();
                                              }
                                              uVar8 = DG_Tweening_DOTween__Sequence(0);
                                              if (*plVar7 != 0) {
                                                uVar13 = AnhPD_FoodOrder_DragItemBase__get_Tf
                                                                   (*plVar7,0);
                                                uVar8 = FUN_04d9642c(uVar8,uVar13,DAT_091dbfd8);
                                                uVar8 = FUN_04d96618(uVar8,1,DAT_091dc038);
                                                uVar8 = DG_Tweening_TweenSettingsExtensions__Append
                                                                  (uVar8,*(undefined8 *)
                                                                          (lVar3 + 0x60),0);
                                                uVar13 = thunk_FUN_03f9944c(DAT_0918c148);
                                                DG_Tweening_TweenCallback___ctor
                                                          (uVar13,lVar3,DAT_091ee3a0,0);
                                                uVar8 = 
                                                  DG_Tweening_TweenSettingsExtensions__AppendCallback
                                                            (uVar8,uVar13,0);
                                                return uVar8;
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
          goto LAB_0407d8b4;
        }
      }
    }
  }
  return 0;
}

