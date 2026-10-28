// rea decompile_all
// name: AnhPD.FoodOrder.SpiderCleanerFx$$Play
// address: 0x423f2e8
// body: available
// range: 0x423f2e8-0x423f9af inclusive
// range: 0x423f9f8-0x423f9ff inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x423f630 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x423f99c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x423f9a0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x423f9a4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x423f9a8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x423f9ac to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x423f9fc to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0423f9f8) */

void AnhPD_FoodOrder_SpiderCleanerFx__Play
               (undefined1 param_1 [16],undefined1 param_2 [16],float param_3,long param_4,
               long *param_5,undefined8 param_6,undefined8 param_7)

{
  int iVar1;
  uint uVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  long *local_88;
  long **pplStack_80;
  long local_78;
  long *local_70;
  long **pplStack_68;
  long local_60;
  long *local_58;
  
  if ((DAT_09516e6c & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183190);
    FUN_03f5c2a4(&DAT_091a2a68);
    FUN_03f5c2a4(&DAT_091a2a70);
    FUN_03f5c2a4(&DAT_091a2a78);
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_0917a4b0);
    FUN_03f5c2a4(&DAT_0917ab60);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_091ac6e0);
    FUN_03f5c2a4(&DAT_091ac6e8);
    FUN_03f5c2a4(&DAT_091ac6f0);
    FUN_03f5c2a4(&DAT_091ac6f8);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091d9738);
    FUN_03f5c2a4(&DAT_0918c148);
    FUN_03f5c2a4(&DAT_091dbd18);
    FUN_03f5c2a4(&DAT_091dbeb0);
    DAT_09516e6c = 1;
  }
  local_60 = 0;
  local_58 = (long *)0x0;
  local_70 = (long *)0x0;
  pplStack_68 = (long **)0x0;
  *(undefined8 *)(param_4 + 0x68) = param_6;
  thunk_FUN_03f5d7b8((undefined8 *)(param_4 + 0x68),param_6);
  *(undefined8 *)(param_4 + 0x70) = param_7;
  thunk_FUN_03f5d7b8((undefined8 *)(param_4 + 0x70),param_7);
  lVar8 = *(long *)(param_4 + 0x60);
  if (lVar8 == 0) goto LAB_0423f9ac;
  iVar1 = *(int *)(lVar8 + 0x18);
  *(undefined4 *)(lVar8 + 0x18) = 0;
  *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
  if (0 < iVar1) {
    System_Array__Clear(*(undefined8 *)(lVar8 + 0x10),0,iVar1,0);
  }
  if (param_5 != (long *)0x0) {
    lVar8 = *param_5;
    uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == DAT_0917a4b0) {
          puVar3 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_0423f4ac;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar3 = (undefined8 *)FUN_03f95da8(param_5,DAT_0917a4b0,0);
LAB_0423f4ac:
    plVar4 = (long *)(*(code *)*puVar3)(param_5,puVar3[1]);
    pplStack_80 = &local_58;
    local_88 = (long *)0x0;
joined_r0x0423f4c4:
    do {
      local_58 = plVar4;
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar8 = *plVar4;
      uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == DAT_09185b10) {
            puVar3 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_0423f530;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar3 = (undefined8 *)FUN_03f95da8(plVar4,DAT_09185b10,0);
LAB_0423f530:
      uVar10 = (*(code *)*puVar3)(plVar4,puVar3[1]);
      plVar4 = local_58;
      if ((uVar10 & 1) == 0) {
        if (local_58 == (long *)0x0) goto LAB_0423f6a8;
        lVar8 = *local_58;
        uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar10 == 0) goto LAB_0423f67c;
        piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        goto LAB_0423f664;
      }
      if (local_58 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar8 = *local_58;
      uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == DAT_0917ab60) {
            puVar3 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_0423f594;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar3 = (undefined8 *)FUN_03f95da8(local_58,DAT_0917ab60,0);
LAB_0423f594:
      uVar5 = (*(code *)*puVar3)(plVar4,puVar3[1]);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar10 = UnityEngine_Object__op_Implicit(uVar5,0);
      lVar8 = DAT_091ac6e0;
      plVar4 = local_58;
    } while ((uVar10 & 1) == 0);
    lVar6 = *(long *)(param_4 + 0x60);
    if (lVar6 != 0) {
      lVar9 = *(long *)(lVar6 + 0x10);
      *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
      if (lVar9 != 0) {
        uVar2 = *(uint *)(lVar6 + 0x18);
        if (uVar2 < *(uint *)(lVar9 + 0x18)) {
          *(uint *)(lVar6 + 0x18) = uVar2 + 1;
          puVar3 = (undefined8 *)(lVar9 + (long)(int)uVar2 * 8 + 0x20);
          *puVar3 = uVar5;
          thunk_FUN_03f5d7b8(puVar3,uVar5);
          plVar4 = local_58;
        }
        else {
          FUN_057e0c68(lVar6,uVar5,*(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70)
                      );
          plVar4 = local_58;
        }
        goto joined_r0x0423f4c4;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  goto LAB_0423f6a8;
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar11 = piVar11 + 4;
    if (uVar10 == 0) break;
LAB_0423f664:
    if (*(long *)(piVar11 + -2) == DAT_09185a58) {
      puVar3 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
      goto LAB_0423f698;
    }
  }
LAB_0423f67c:
  puVar3 = (undefined8 *)FUN_03f95da8(local_58,DAT_09185a58,0);
LAB_0423f698:
  (*(code *)*puVar3)(plVar4,puVar3[1]);
LAB_0423f6a8:
  if (*(long *)(param_4 + 0x60) != 0) {
    if (*(int *)(*(long *)(param_4 + 0x60) + 0x18) != 0) {
      uVar5 = *(undefined8 *)(param_4 + 0x28);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar10 = UnityEngine_Object__op_Implicit(uVar5,0);
      if ((uVar10 & 1) != 0) {
        uVar5 = AnhPD_FoodOrder_SpiderCleanerFx__get_Cam(param_4);
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424(DAT_09188ad0);
        }
        uVar10 = UnityEngine_Object__op_Equality(uVar5,0,0);
        if ((uVar10 & 1) == 0) {
          lVar8 = AnhPD_FoodOrder_SpiderCleanerFx__get_Cam(param_4);
          if ((lVar8 != 0) && (lVar8 = UnityEngine_Component__get_transform(lVar8,0), lVar8 != 0)) {
            UnityEngine_Transform__get_position(lVar8,0);
            lVar8 = AnhPD_FoodOrder_SpiderCleanerFx__get_Cam(param_4);
            if (lVar8 != 0) {
              param_3 = ABS(param_3);
              fVar13 = 1.0;
              UnityEngine_Camera__ViewportToWorldPoint(0x3f000000,0x3f800000,param_3,lVar8,0);
              if (*(long *)(param_4 + 0x60) != 0) {
                fVar13 = fVar13 - *(float *)(param_4 + 0x3c);
                FUN_057e185c(&local_88,*(long *)(param_4 + 0x60),DAT_091ac6f0);
                fVar14 = 0.0;
                pplStack_68 = pplStack_80;
                local_70 = local_88;
                local_60 = local_78;
                local_88 = (long *)0x0;
                pplStack_80 = &local_70;
                while (uVar10 = FUN_071bd28c(&local_70,DAT_091a2a70), (uVar10 & 1) != 0) {
                  if (local_60 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c550();
                  }
                  lVar8 = AnhPD_FoodOrder_DragItemBase__get_Tf(local_60,0);
                  if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c550();
                  }
                  fVar12 = (float)UnityEngine_Transform__get_position(lVar8,0);
                  fVar14 = fVar14 + fVar12;
                }
                FUN_071bd288(&local_70,DAT_091a2a68);
                if (*(long *)(param_4 + 0x60) != 0) {
                  iVar1 = *(int *)(*(long *)(param_4 + 0x60) + 0x18);
                  lVar8 = UnityEngine_Component__get_transform(param_4,0);
                  if (lVar8 != 0) {
                    UnityEngine_Transform__get_position(lVar8,0);
                    lVar8 = UnityEngine_Component__get_transform(param_4,0);
                    if (DAT_09515faa == '\0') {
                      FUN_03f5c2a4(&DAT_0918cbd0);
                      DAT_09515faa = '\x01';
                    }
                    if (lVar8 != 0) {
                      fVar12 = *(float *)(param_4 + 0x38);
                      fVar14 = fVar14 / (float)iVar1;
                      lVar6 = *(long *)(DAT_0918cbd0 + 0xb8);
                      UnityEngine_Transform__set_position
                                (fVar14 + fVar12 * *(float *)(lVar6 + 0x18),
                                 fVar13 + fVar12 * *(float *)(lVar6 + 0x1c),
                                 param_3 + *(float *)(lVar6 + 0x20) * fVar12,lVar8,0);
                      AnhPD_FoodOrder_SpiderCleanerFx__SpawnWebs(param_4);
                      AnhPD_FoodOrder_SpiderCleanerFx__KillSeq(param_4);
                      if (*(int *)(DAT_09183190 + 0xe4) == 0) {
                        FUN_03f5c424();
                      }
                      uVar5 = DG_Tweening_DOTween__Sequence(0);
                      uVar7 = UnityEngine_Component__get_transform(param_4,0);
                      uVar7 = DG_Tweening_ShortcutExtensions__DOMove
                                        (fVar14,fVar13,param_3,*(undefined4 *)(param_4 + 0x40),uVar7
                                         ,0,0);
                      uVar7 = FUN_04d95e8c(uVar7,6,DAT_091dbeb0);
                      uVar5 = DG_Tweening_TweenSettingsExtensions__Append(uVar5,uVar7,0);
                      uVar5 = DG_Tweening_TweenSettingsExtensions__AppendInterval
                                        (*(undefined4 *)(param_4 + 0x44),uVar5,0);
                      uVar7 = thunk_FUN_03f9944c(DAT_0918c148);
                      DG_Tweening_TweenCallback___ctor(uVar7,param_4,DAT_091d9738,0);
                      uVar5 = FUN_04d956bc(uVar5,uVar7,DAT_091dbd18);
                      *(undefined8 *)(param_4 + 0x78) = uVar5;
                      thunk_FUN_03f5d7b8((undefined8 *)(param_4 + 0x78),uVar5);
                      return;
                    }
                  }
                }
              }
            }
          }
          goto LAB_0423f9ac;
        }
      }
    }
    AnhPD_FoodOrder_SpiderCleanerFx__Finish(param_4);
    return;
  }
LAB_0423f9ac:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

