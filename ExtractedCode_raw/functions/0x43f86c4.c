// rea decompile_all
// name: Coffee.UIEffects.TmpProxy$$ModifyMesh
// address: 0x43f86c4
// body: available
// range: 0x43f86c4-0x43f90ff inclusive
// range: 0x43f9104-0x43f9107 inclusive
// range: 0x43f910c-0x43f910f inclusive
// range: 0x43f91d8-0x43f925f inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x43f90fc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x43f9104 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x43f910c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x43f9258 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x43f925c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Coffee_UIEffects_TmpProxy__ModifyMesh(long param_1)

{
  long *plVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 local_c0;
  undefined8 *puStack_b8;
  long *local_b0;
  long local_a8;
  undefined8 local_a0;
  undefined8 *puStack_98;
  long *local_90;
  long *local_80;
  long local_78;
  long local_70;
  long local_68;
  
  if ((DAT_09517e20 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c59f0);
    FUN_03f5c2a4(&DAT_091c5778);
    FUN_03f5c2a4(&DAT_091c59b0);
    FUN_03f5c2a4(&DAT_091c59b8);
    FUN_03f5c2a4(&DAT_091a3038);
    FUN_03f5c2a4(&DAT_091a3040);
    FUN_03f5c2a4(&DAT_091a3048);
    FUN_03f5c2a4(&DAT_091cd818);
    FUN_03f5c2a4(&DAT_09186070);
    FUN_03f5c2a4(&DAT_091a90e0);
    FUN_03f5c2a4(&DAT_091a90c0);
    FUN_03f5c2a4(&DAT_091a90e8);
    FUN_03f5c2a4(&DAT_091a90c8);
    FUN_03f5c2a4(&DAT_091ad480);
    FUN_03f5c2a4(&DAT_091b0ab0);
    FUN_03f5c2a4(&DAT_09188068);
    FUN_03f5c2a4(&DAT_09188058);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_0918be78);
    FUN_03f5c2a4(&DAT_091f0ea0);
    FUN_03f5c2a4(&DAT_09195140);
    FUN_03f5c2a4(&DAT_0918c370);
    FUN_03f5c2a4(&DAT_0918c390);
    FUN_03f5c2a4(&DAT_0918c368);
    FUN_03f5c2a4(&DAT_0918c678);
    DAT_09517e20 = 1;
  }
  local_70 = 0;
  local_68 = 0;
  local_80 = (long *)0x0;
  local_78 = 0;
  local_a0 = 0;
  puStack_98 = (undefined8 *)0x0;
  local_90 = (long *)0x0;
  local_a8 = 0;
  if (*(int *)(DAT_0918be78 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar8 = *(undefined8 *)(*(long *)(DAT_0918be78 + 0xb8) + 0x18);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09188ad0);
  }
  uVar2 = UnityEngine_Object__op_Implicit(uVar8,0);
  if ((uVar2 & 1) == 0) {
    uVar8 = thunk_FUN_03f9944c(DAT_09188058);
    UnityEngine_Mesh___ctor(uVar8,0);
    if (*(int *)(DAT_0918be78 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    puVar3 = (undefined8 *)(*(long *)(DAT_0918be78 + 0xb8) + 0x18);
    *puVar3 = uVar8;
    thunk_FUN_03f5d7b8(puVar3,uVar8);
    lVar4 = *(long *)(*(long *)(DAT_0918be78 + 0xb8) + 0x18);
    if (lVar4 == 0) goto LAB_043f9258;
    UnityEngine_Mesh__MarkDynamic(lVar4,0);
  }
  lVar4 = FUN_055656f4(DAT_091a90e0);
  local_68 = lVar4;
  lVar5 = FUN_055656f4(DAT_091a90c0);
  local_70 = lVar5;
  local_78 = FUN_055656f4(DAT_091a90c0);
  if (param_1 != 0) {
    FUN_04a6b048(param_1,&local_80,DAT_091c59b0);
    FUN_04a6b580(param_1,lVar4,1,DAT_091c59f0);
    FUN_04a6ab1c(param_1,lVar5,DAT_091c5778);
    lVar4 = TMPro_TMP_Text__get_textInfo(param_1,0);
    if (lVar4 != 0) {
      uVar2 = 0;
      while (*(long *)(lVar4 + 0x60) != 0) {
        if ((long)*(int *)(*(long *)(lVar4 + 0x60) + 0x18) <= (long)uVar2) goto LAB_043f91d8;
        lVar4 = TMPro_TMP_Text__get_textInfo(param_1,0);
        if ((lVar4 == 0) || (lVar4 = *(long *)(lVar4 + 0x60), lVar4 == 0)) break;
        if (*(uint *)(lVar4 + 0x18) <= uVar2) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        lVar4 = lVar4 + uVar2 * 0x50;
        uVar8 = *(undefined8 *)(lVar4 + 0x68);
        if (*(int *)(lVar4 + 0x28) == 0) {
          if (*(int *)(DAT_0918be78 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          lVar4 = *(long *)(*(long *)(DAT_0918be78 + 0xb8) + 0x18);
          if (lVar4 == 0) break;
          UnityEngine_Mesh__Clear(lVar4,0,0);
          lVar4 = local_68;
          if (uVar2 == 0) {
            lVar4 = TMPro_TextMeshProUGUI__get_canvasRenderer(param_1,0);
LAB_043f8efc:
            if (*(int *)(DAT_0918be78 + 0xe4) == 0) {
              FUN_03f5c424(DAT_0918be78);
            }
            if (lVar4 != 0) goto LAB_043f90cc;
            break;
          }
          if (*(int *)(DAT_0918be78 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          lVar4 = Coffee_UIEffects_TmpProxy__GetSubMeshUI(lVar4,uVar8,(int)uVar2 + -1);
          if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
            FUN_03f5c424(DAT_09188ad0);
          }
          uVar6 = UnityEngine_Object__op_Implicit(lVar4,0);
          if ((uVar6 & 1) != 0) {
            if (lVar4 != 0) {
              lVar4 = UnityEngine_UI_Graphic__get_canvasRenderer(lVar4,0);
              goto LAB_043f8efc;
            }
            break;
          }
        }
        else {
          uVar10 = *(undefined8 *)(lVar4 + 0x20);
          if (*(int *)(DAT_0918be78 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          lVar4 = *(long *)(*(long *)(DAT_0918be78 + 0xb8) + 0x20);
          if (lVar4 == 0) break;
          UnityEngine_UI_VertexHelper__Clear(lVar4,0);
          uVar11 = *(undefined8 *)(*(long *)(DAT_0918be78 + 0xb8) + 0x20);
          if (*(int *)(DAT_09188068 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          Coffee_UIEffectInternal_MeshExtensions__CopyTo(uVar10,uVar11,0);
          if (uVar2 != 0) {
            if (local_68 != 0) {
              if ((long)uVar2 <= (long)*(int *)(local_68 + 0x18)) {
                lVar4 = thunk_FUN_03f9944c(DAT_09195140);
                System_Object___ctor(lVar4,0);
                if (local_70 == 0) break;
                FUN_057e185c(&local_c0,local_70,DAT_091ad480);
                local_90 = local_b0;
                puStack_98 = puStack_b8;
                local_a0 = local_c0;
                local_c0 = 0;
                puStack_b8 = &local_a0;
LAB_043f8aac:
                uVar6 = FUN_071bd28c(&local_a0,DAT_091a3040);
                plVar9 = local_90;
                if ((uVar6 & 1) != 0) {
                  if (local_90 != (long *)0x0) goto code_r0x043f8ac4;
                  goto LAB_043f8af0;
                }
                FUN_071bd288(&local_a0,DAT_091a3038);
                lVar5 = local_68;
                if (*(int *)(DAT_0918be78 + 0xe4) == 0) {
                  FUN_03f5c424();
                }
                lVar5 = Coffee_UIEffects_TmpProxy__GetSubMeshUI(lVar5,uVar8,(int)uVar2 + -1);
                if (lVar4 == 0) break;
                plVar9 = (long *)(lVar4 + 0x10);
                *plVar9 = lVar5;
                thunk_FUN_03f5d7b8(plVar9,lVar5);
                lVar5 = *plVar9;
                if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
                  FUN_03f5c424();
                }
                uVar6 = UnityEngine_Object__op_Implicit(lVar5,0);
                if ((uVar6 & 1) != 0) {
                  if (*plVar9 == 0) break;
                  uVar6 = FUN_04a6b048(*plVar9,&local_a8,DAT_091c59b8);
                  if ((uVar6 & 1) == 0) {
                    if ((*plVar9 == 0) ||
                       (lVar5 = UnityEngine_Component__get_gameObject(*plVar9,0), lVar5 == 0))
                    break;
                    local_a8 = FUN_04b7c294(lVar5,DAT_091cd818);
                    uVar8 = thunk_FUN_03f9944c(DAT_0918c678);
                    UnityEngine_Events_UnityAction___ctor(uVar8,lVar4,DAT_091f0ea0,0);
                    UnityEngine_UI_Graphic__RegisterDirtyMaterialCallback(param_1,uVar8,0);
                  }
                  plVar1 = local_80;
                  if (local_80 == (long *)0x0) {
LAB_043f8f60:
                    if (local_a8 == 0) break;
                    Coffee_UIEffects_UIEffectReplica__set_target(local_a8,0,0);
LAB_043f8f74:
                    if (local_a8 == 0) break;
                    lVar4 = 0;
                  }
                  else {
                    if ((*(byte *)(DAT_0918c368 + 0x130) <= *(byte *)(*local_80 + 0x130)) &&
                       (*(long *)(*(long *)(*local_80 + 200) +
                                  (ulong)*(byte *)(DAT_0918c368 + 0x130) * 8 + -8) == DAT_0918c368))
                    {
                      uVar6 = UnityEngine_Behaviour__get_isActiveAndEnabled(local_80,0);
                      if ((uVar6 & 1) == 0) {
                        if (local_80 == (long *)0x0) goto LAB_043f8f60;
                        goto LAB_043f8cb4;
                      }
                      if ((local_a8 != 0) &&
                         (Coffee_UIEffects_UIEffectReplica__set_target(local_a8,plVar1,0),
                         local_a8 != 0)) {
                        Coffee_UIEffects_UIEffectReplica__set_useTargetTransform(local_a8,1,0);
                        goto LAB_043f8f74;
                      }
                      break;
                    }
LAB_043f8cb4:
                    plVar1 = local_80;
                    if (((*(byte *)(*local_80 + 0x130) < *(byte *)(DAT_0918c390 + 0x130)) ||
                        (*(long *)(*(long *)(*local_80 + 200) +
                                   (ulong)*(byte *)(DAT_0918c390 + 0x130) * 8 + -8) != DAT_0918c390)
                        ) || (uVar6 = UnityEngine_Behaviour__get_isActiveAndEnabled(local_80,0),
                             (uVar6 & 1) == 0)) goto LAB_043f8f60;
                    if (((local_a8 == 0) ||
                        (Coffee_UIEffects_UIEffectReplica__set_target(local_a8,plVar1[0x14],0),
                        local_a8 == 0)) ||
                       ((Coffee_UIEffects_UIEffectReplica__set_preset(local_a8,plVar1[0x15],0),
                        local_a8 == 0 ||
                        (Coffee_UIEffects_UIEffectReplica__set_useTargetTransform
                                   (local_a8,(char)plVar1[0x16],0), local_a8 == 0)))) break;
                    lVar4 = plVar1[0x18];
                  }
                  Coffee_UIEffects_UIEffectReplica__set_customRoot(local_a8,lVar4,0);
                  lVar4 = local_78;
                  if ((*plVar9 != 0) && (FUN_04a6ab1c(*plVar9,local_78,DAT_091c5778), lVar4 != 0)) {
                    FUN_057e185c(&local_c0,lVar4,DAT_091ad480);
                    local_90 = local_b0;
                    puStack_98 = puStack_b8;
                    local_a0 = local_c0;
                    local_c0 = 0;
                    puStack_b8 = &local_a0;
                    while (uVar6 = FUN_071bd28c(&local_a0,DAT_091a3040), plVar1 = local_90,
                          (uVar6 & 1) != 0) {
                      if (*(int *)(DAT_0918be78 + 0xe4) == 0) {
                        FUN_03f5c424();
                      }
                      if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                        FUN_03f5c550();
                      }
                      lVar4 = *plVar1;
                      uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
                      uVar8 = *(undefined8 *)(*(long *)(DAT_0918be78 + 0xb8) + 0x20);
                      if (uVar6 != 0) {
                        piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar7 + -2) == DAT_09186070) {
                            puVar3 = (undefined8 *)(lVar4 + (long)(*piVar7 + 1) * 0x10 + 0x138);
                            goto LAB_043f9060;
                          }
                          uVar6 = uVar6 - 1;
                          piVar7 = piVar7 + 4;
                        } while (uVar6 != 0);
                      }
                      puVar3 = (undefined8 *)FUN_03f95da8(plVar1,DAT_09186070,1);
LAB_043f9060:
                      (*(code *)*puVar3)(plVar1,uVar8,puVar3[1]);
                    }
                    FUN_071bd288(&local_a0,DAT_091a3038);
                    if (*(int *)(DAT_0918be78 + 0xe4) == 0) {
                      FUN_03f5c424();
                    }
                    lVar4 = *(long *)(*(long *)(DAT_0918be78 + 0xb8) + 0x20);
                    if (lVar4 != 0) {
                      UnityEngine_UI_VertexHelper__FillMesh
                                (lVar4,*(undefined8 *)(*(long *)(DAT_0918be78 + 0xb8) + 0x18),0);
                      if (*plVar9 != 0) {
                        lVar4 = UnityEngine_UI_Graphic__get_canvasRenderer(*plVar9,0);
                        goto LAB_043f90c4;
                      }
                    }
                  }
                  break;
                }
              }
LAB_043f91d8:
              FUN_05565758(&local_68,DAT_091a90e8);
              FUN_05565758(&local_70,DAT_091a90c8);
              FUN_05565758(&local_78,DAT_091a90c8);
              if (*(int *)(DAT_0918be78 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              lVar4 = *(long *)(*(long *)(DAT_0918be78 + 0xb8) + 0x18);
              if (lVar4 != 0) {
                UnityEngine_Mesh__Clear(lVar4,0,0);
                return;
              }
            }
            break;
          }
          if (local_70 == 0) break;
          FUN_057e185c(&local_c0,local_70,DAT_091ad480);
          local_90 = local_b0;
          puStack_98 = puStack_b8;
          local_a0 = local_c0;
          local_c0 = 0;
          puStack_b8 = &local_a0;
          while (uVar6 = FUN_071bd28c(&local_a0,DAT_091a3040), plVar9 = local_90, (uVar6 & 1) != 0)
          {
            if (*(int *)(DAT_0918be78 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            lVar4 = *plVar9;
            uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
            uVar8 = *(undefined8 *)(*(long *)(DAT_0918be78 + 0xb8) + 0x20);
            if (uVar6 != 0) {
              piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
              do {
                if (*(long *)(piVar7 + -2) == DAT_09186070) {
                  puVar3 = (undefined8 *)(lVar4 + (long)(*piVar7 + 1) * 0x10 + 0x138);
                  goto LAB_043f8e8c;
                }
                uVar6 = uVar6 - 1;
                piVar7 = piVar7 + 4;
              } while (uVar6 != 0);
            }
            puVar3 = (undefined8 *)FUN_03f95da8(plVar9,DAT_09186070,1);
LAB_043f8e8c:
            (*(code *)*puVar3)(plVar9,uVar8,puVar3[1]);
          }
          FUN_071bd288(&local_a0,DAT_091a3038);
          if (*(int *)(DAT_0918be78 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          lVar4 = *(long *)(*(long *)(DAT_0918be78 + 0xb8) + 0x20);
          if (lVar4 == 0) break;
          UnityEngine_UI_VertexHelper__FillMesh
                    (lVar4,*(undefined8 *)(*(long *)(DAT_0918be78 + 0xb8) + 0x18),0);
          lVar4 = TMPro_TextMeshProUGUI__get_canvasRenderer(param_1,0);
LAB_043f90c4:
          if (lVar4 == 0) break;
LAB_043f90cc:
          UnityEngine_CanvasRenderer__SetMesh
                    (lVar4,*(undefined8 *)(*(long *)(DAT_0918be78 + 0xb8) + 0x18),0);
        }
        uVar2 = uVar2 + 1;
        lVar4 = TMPro_TMP_Text__get_textInfo(param_1,0);
        if (lVar4 == 0) break;
      }
    }
  }
LAB_043f9258:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
code_r0x043f8ac4:
  if ((*(byte *)(*local_90 + 0x130) < *(byte *)(DAT_0918c370 + 0x130)) ||
     (*(long *)(*(long *)(*local_90 + 200) + (ulong)*(byte *)(DAT_0918c370 + 0x130) * 8 + -8) !=
      DAT_0918c370)) {
LAB_043f8af0:
    if (*(int *)(DAT_0918be78 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar5 = *plVar9;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    uVar10 = *(undefined8 *)(*(long *)(DAT_0918be78 + 0xb8) + 0x20);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == DAT_09186070) {
          puVar3 = (undefined8 *)(lVar5 + (long)(*piVar7 + 1) * 0x10 + 0x138);
          goto LAB_043f8b60;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_03f95da8(plVar9,DAT_09186070,1);
LAB_043f8b60:
    (*(code *)*puVar3)(plVar9,uVar10,puVar3[1]);
  }
  goto LAB_043f8aac;
}

