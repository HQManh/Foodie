// rea decompile_all
// name: AnhPD.FoodOrder.IngredientSpawnerController$$CreateSlotItem
// address: 0x40f45cc
// body: available
// range: 0x40f45cc-0x40f4f57 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40f4f44 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40f4f48 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40f4f54 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long AnhPD_FoodOrder_IngredientSpawnerController__CreateSlotItem
               (undefined1 param_1 [16],uint param_2,undefined4 param_3,long param_4,
               undefined8 param_5,undefined4 param_6,long param_7,int param_8,int param_9)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined4 *puVar8;
  ulong uVar9;
  long lVar10;
  undefined8 *puVar11;
  ulong uVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  undefined8 uVar16;
  long lVar17;
  ulong uVar18;
  undefined4 uVar19;
  float fVar20;
  undefined8 uVar21;
  undefined4 local_78;
  int local_74;
  
  if ((DAT_09516108 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09174798);
    FUN_03f5c2a4(&DAT_091c0228);
    FUN_03f5c2a4(&DAT_091c6268);
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_09186c30);
    FUN_03f5c2a4(&DAT_091affa0);
    FUN_03f5c2a4(&DAT_091b19b8);
    FUN_03f5c2a4(&DAT_091b0298);
    FUN_03f5c2a4(&DAT_091b19c8);
    FUN_03f5c2a4(&DAT_091affb0);
    FUN_03f5c2a4(&DAT_091b02a8);
    FUN_03f5c2a4(&DAT_091881a0);
    FUN_03f5c2a4(&DAT_091b4c88);
    FUN_03f5c2a4(&DAT_091d4fb0);
    FUN_03f5c2a4(&DAT_09180318);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09213d98);
    FUN_03f5c2a4(&DAT_09213db0);
    FUN_03f5c2a4(&DAT_092066d0);
    FUN_03f5c2a4(&DAT_09213da0);
    DAT_09516108 = 1;
  }
  if (param_7 == 0) {
    return 0;
  }
  if (*(int *)(param_7 + 0x1c) == 0) {
    if (*(long *)(param_7 + 0x10) == 0) {
      return 0;
    }
    if (*(long *)(*(long *)(param_7 + 0x10) + 0x18) == 0) {
      return 0;
    }
    if (param_8 < 2) {
      lVar13 = *(long *)(param_4 + 0x100);
      if ((lVar13 == 0) || (*(long *)(lVar13 + 0x18) == 0)) {
        if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        UnityEngine_Debug__LogError(DAT_09213d98,param_4,0);
        return 0;
      }
      uVar3 = param_9 - 1;
      uVar4 = (int)*(long *)(lVar13 + 0x18) - 1;
      uVar2 = uVar3;
      if ((int)uVar4 <= (int)uVar3) {
        uVar2 = uVar4;
      }
      uVar4 = 0;
      if (-1 < (int)uVar3) {
        uVar4 = uVar2;
      }
      if ((int)uVar4 < (int)uVar3) {
        lVar13 = FUN_03f5c394(DAT_09180318,2);
        local_74 = param_9;
        uVar14 = FUN_03f5c42c(DAT_09535420,&local_74);
        if (lVar13 == 0) goto LAB_040f4f44;
        FUN_039b0da0(lVar13,uVar14);
        FUN_039af17c(lVar13,0,uVar14);
        if (*(long *)(param_4 + 0x100) == 0) goto LAB_040f4f44;
        local_78 = (undefined4)*(undefined8 *)(*(long *)(param_4 + 0x100) + 0x18);
        uVar14 = FUN_03f5c42c(DAT_09535420,&local_78);
        FUN_039b0da0(lVar13,uVar14);
        FUN_039af17c(lVar13,1,uVar14);
        if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        UnityEngine_Debug__LogWarningFormat(DAT_092066d0,lVar13,0);
        lVar13 = *(long *)(param_4 + 0x100);
        if (lVar13 == 0) goto LAB_040f4f44;
      }
      if (*(uint *)(lVar13 + 0x18) <= uVar4) goto LAB_040f4f48;
      uVar14 = *(undefined8 *)(lVar13 + (long)(int)uVar4 * 8 + 0x20);
    }
    else {
      uVar14 = AnhPD_FoodOrder_IngredientSpawnerController__CrossPrefab(param_4,param_8);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09188ad0);
      }
      uVar12 = UnityEngine_Object__op_Implicit(uVar14,0);
      if ((uVar12 & 1) == 0) {
        plVar7 = (long *)FUN_03f5c394(DAT_09180318,1);
        local_74 = param_8;
        uVar14 = FUN_03f5c42c(DAT_09535420,&local_74);
        if (plVar7 != (long *)0x0) {
          FUN_039b0da0(plVar7,uVar14);
          FUN_039af17c(plVar7,0,uVar14);
          if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          puVar11 = &DAT_09213db0;
          goto LAB_040f4e10;
        }
        goto LAB_040f4f44;
      }
    }
  }
  else {
    lVar13 = *(long *)(param_4 + 0x110);
    if ((lVar13 != 0) && (0 < (int)*(ulong *)(lVar13 + 0x18))) {
      uVar12 = *(ulong *)(lVar13 + 0x18) & 0xffffffff;
      puVar11 = (undefined8 *)(lVar13 + 0x28);
      do {
        if (*(int *)(param_7 + 0x1c) == *(int *)(puVar11 + -1)) {
          uVar14 = *puVar11;
          goto LAB_040f4750;
        }
        uVar12 = uVar12 - 1;
        puVar11 = puVar11 + 2;
      } while (uVar12 != 0);
    }
    uVar14 = 0;
LAB_040f4750:
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar12 = UnityEngine_Object__op_Implicit(uVar14,0);
    if ((uVar12 & 1) == 0) {
      plVar7 = (long *)FUN_03f5c394(DAT_09180318,1);
      local_74 = *(int *)(param_7 + 0x1c);
      lVar13 = FUN_03f5c42c(DAT_09186c30,&local_74);
      if (plVar7 == (long *)0x0) goto LAB_040f4f44;
      if ((lVar13 != 0) &&
         (lVar5 = thunk_FUN_03f99350(lVar13,*(undefined8 *)(*plVar7 + 0x40)), lVar5 == 0)) {
        uVar14 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
        FUN_03f5c414(uVar14,0);
      }
      if ((int)plVar7[3] != 0) {
        plVar7[4] = lVar13;
        thunk_FUN_03f5d7b8(plVar7 + 4,lVar13);
        if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        puVar11 = &DAT_09213da0;
LAB_040f4e10:
        UnityEngine_Debug__LogErrorFormat(param_4,*puVar11,plVar7,0);
        return 0;
      }
LAB_040f4f48:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
  }
  lVar13 = *(long *)(DAT_091b4c88 + 0x20);
  if ((*(ushort *)(lVar13 + 0x135) & 1) == 0) {
    lVar13 = FUN_03f95a6c();
  }
  lVar13 = *(long *)(*(long *)(lVar13 + 0xc0) + 0x10);
  if ((*(ushort *)(lVar13 + 0x135) & 1) == 0) {
    lVar13 = FUN_03f95a6c();
  }
  iVar1 = *(int *)(param_4 + 0xb4);
  lVar13 = **(long **)(lVar13 + 0xb8);
  if (iVar1 < 2) {
    iVar1 = 1;
  }
  uVar19 = AnhPD_FoodOrder_IngredientSpawnerController__CellPosition(param_4,param_6,iVar1 + -1);
  if (DAT_09515ed5 == '\0') {
    FUN_03f5c2a4(&DAT_091898c0);
    DAT_09515ed5 = '\x01';
  }
  if (lVar13 != 0) {
    uVar12 = (ulong)param_2;
    puVar8 = *(undefined4 **)(DAT_091898c0 + 0xb8);
    lVar13 = FUN_04c37c04(uVar19,uVar12,param_3,*puVar8,puVar8[1],puVar8[2],puVar8[3],lVar13,uVar14,
                          0,DAT_091d4fb0);
    if ((lVar13 != 0) && (lVar5 = UnityEngine_Component__get_gameObject(lVar13,0), lVar5 != 0)) {
      UnityEngine_GameObject__SetActive(lVar5,1,0);
      lVar5 = UnityEngine_Component__get_transform(lVar13,0);
      uVar14 = AnhPD_FoodOrder_IngredientSpawnerController__get_ItemRoot(param_4);
      if (lVar5 != 0) {
        UnityEngine_Transform__SetParent(lVar5,uVar14,0);
        lVar5 = DAT_091c0228;
        lVar15 = *(long *)(param_7 + 0x10);
        if (lVar15 == 0) {
          lVar15 = *(long *)(DAT_091c0228 + 0x38);
          if (lVar15 == 0) {
            FUN_03f95ac8(DAT_091c0228);
            lVar15 = *(long *)(lVar5 + 0x38);
          }
          lVar15 = *(long *)(lVar15 + 0x10);
          if ((*(ushort *)(lVar15 + 0x135) & 1) == 0) {
            lVar15 = FUN_03f95a6c();
          }
          if (*(int *)(lVar15 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          lVar5 = *(long *)(*(long *)(lVar5 + 0x38) + 0x10);
          if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
            lVar5 = FUN_03f95a6c();
          }
          lVar15 = **(long **)(lVar5 + 0xb8);
        }
        lVar5 = *(long *)(param_4 + 0x1e0);
        if (lVar5 != 0) {
          iVar1 = *(int *)(lVar5 + 0x18);
          *(undefined4 *)(lVar5 + 0x18) = 0;
          *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
          if (0 < iVar1) {
            System_Array__Clear(*(undefined8 *)(lVar5 + 0x10),0,iVar1,0);
          }
          lVar5 = *(long *)(param_4 + 0x1e8);
          if (lVar5 != 0) {
            *(undefined4 *)(lVar5 + 0x18) = 0;
            *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
            lVar5 = *(long *)(param_4 + 0x1f0);
            if (lVar5 != 0) {
              *(undefined4 *)(lVar5 + 0x18) = 0;
              *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
              if (lVar15 != 0) {
                if (0 < (int)*(ulong *)(lVar15 + 0x18)) {
                  uVar18 = 0;
                  uVar9 = *(ulong *)(lVar15 + 0x18) & 0xffffffff;
                  do {
                    if (uVar9 <= uVar18) goto LAB_040f4f48;
                    if (**(long **)(DAT_091881a0 + 0xb8) == 0) goto LAB_040f4f44;
                    lVar5 = *(long *)(lVar15 + 0x20 + uVar18 * 8);
                    if (lVar5 == 0) {
                      uVar14 = 0;
                    }
                    else {
                      uVar14 = *(undefined8 *)(lVar5 + 0x10);
                    }
                    lVar6 = *(long *)(**(long **)(DAT_091881a0 + 0xb8) + 0x110);
                    if (lVar6 == 0) goto LAB_040f4f44;
                    lVar17 = *(long *)(param_4 + 0x1e0);
                    uVar14 = AnhPD_FoodOrder_LevelInfo__GetIngredientSprite(lVar6,uVar14,0);
                    lVar6 = DAT_091b0298;
                    if (lVar17 == 0) goto LAB_040f4f44;
                    lVar10 = *(long *)(lVar17 + 0x10);
                    *(int *)(lVar17 + 0x1c) = *(int *)(lVar17 + 0x1c) + 1;
                    if (lVar10 == 0) goto LAB_040f4f44;
                    uVar2 = *(uint *)(lVar17 + 0x18);
                    if (uVar2 < *(uint *)(lVar10 + 0x18)) {
                      *(uint *)(lVar17 + 0x18) = uVar2 + 1;
                      *(undefined8 *)(lVar10 + (long)(int)uVar2 * 8 + 0x20) = uVar14;
                      thunk_FUN_03f5d7b8();
                    }
                    else {
                      FUN_057e0c68(lVar17,uVar14,
                                   *(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70)
                                  );
                    }
                    if (**(long **)(DAT_091881a0 + 0xb8) == 0) goto LAB_040f4f44;
                    if (lVar5 == 0) {
                      uVar14 = 0;
                    }
                    else {
                      uVar14 = *(undefined8 *)(lVar5 + 0x10);
                    }
                    lVar6 = *(long *)(**(long **)(DAT_091881a0 + 0xb8) + 0x110);
                    if (lVar6 == 0) goto LAB_040f4f44;
                    lVar17 = *(long *)(param_4 + 0x1e8);
                    uVar19 = AnhPD_FoodOrder_LevelInfo__GetIngredientDisplayScale(lVar6,uVar14,0);
                    lVar6 = DAT_091affa0;
                    if (lVar17 == 0) goto LAB_040f4f44;
                    lVar10 = *(long *)(lVar17 + 0x10);
                    *(int *)(lVar17 + 0x1c) = *(int *)(lVar17 + 0x1c) + 1;
                    if (lVar10 == 0) goto LAB_040f4f44;
                    uVar2 = *(uint *)(lVar17 + 0x18);
                    if (uVar2 < *(uint *)(lVar10 + 0x18)) {
                      *(uint *)(lVar17 + 0x18) = uVar2 + 1;
                      *(undefined4 *)(lVar10 + (long)(int)uVar2 * 4 + 0x20) = uVar19;
                    }
                    else {
                      FUN_05863604(lVar17,*(undefined8 *)
                                           (*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
                    }
                    if (**(long **)(DAT_091881a0 + 0xb8) == 0) goto LAB_040f4f44;
                    if (lVar5 == 0) {
                      uVar14 = 0;
                    }
                    else {
                      uVar14 = *(undefined8 *)(lVar5 + 0x10);
                    }
                    lVar5 = *(long *)(**(long **)(DAT_091881a0 + 0xb8) + 0x110);
                    if (lVar5 == 0) goto LAB_040f4f44;
                    lVar6 = *(long *)(param_4 + 0x1f0);
                    uVar19 = AnhPD_FoodOrder_LevelInfo__GetIngredientDisplayOffset(lVar5,uVar14,0);
                    lVar5 = DAT_091b19b8;
                    if (lVar6 == 0) goto LAB_040f4f44;
                    lVar17 = *(long *)(lVar6 + 0x10);
                    *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
                    if (lVar17 == 0) goto LAB_040f4f44;
                    uVar2 = *(uint *)(lVar6 + 0x18);
                    if (uVar2 < *(uint *)(lVar17 + 0x18)) {
                      lVar17 = lVar17 + (long)(int)uVar2 * 8;
                      *(uint *)(lVar6 + 0x18) = uVar2 + 1;
                      *(undefined4 *)(lVar17 + 0x20) = uVar19;
                      *(int *)(lVar17 + 0x24) = (int)uVar12;
                    }
                    else {
                      FUN_058ac614(lVar6,*(undefined8 *)
                                          (*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
                    }
                    uVar9 = (ulong)*(uint *)(lVar15 + 0x18);
                    uVar18 = uVar18 + 1;
                  } while ((long)uVar18 < (long)(int)*(uint *)(lVar15 + 0x18));
                }
                uVar14 = *(undefined8 *)(param_4 + 0xe0);
                uVar21 = *(undefined8 *)(param_4 + 0xf8);
                uVar16 = *(undefined8 *)(param_4 + 0xf0);
                *(undefined8 *)(lVar13 + 0x70) = *(undefined8 *)(param_4 + 0xe8);
                *(undefined8 *)(lVar13 + 0x68) = uVar14;
                *(undefined8 *)(lVar13 + 0x80) = uVar21;
                *(undefined8 *)(lVar13 + 0x78) = uVar16;
                AnhPD_FoodOrder_IngredientConveyorItem__RefreshTapTint(lVar13);
                fVar20 = 0.0;
                if (0.0 <= *(float *)(param_4 + 0xdc)) {
                  fVar20 = *(float *)(param_4 + 0xdc);
                }
                *(float *)(lVar13 + 0x184) = fVar20;
                AnhPD_FoodOrder_IngredientConveyorItem__Init
                          (*(undefined4 *)(param_4 + 0xd8),lVar13,lVar15,
                           *(undefined8 *)(param_4 + 0x1e0),*(undefined8 *)(param_4 + 0x1e8),
                           *(undefined8 *)(param_4 + 0x1f0));
                uVar16 = *(undefined8 *)(param_4 + 0x1b8);
                uVar14 = thunk_FUN_03f9944c(DAT_09174798);
                FUN_070a8c30(uVar14,uVar16,DAT_091c6268,0);
                *(undefined8 *)(lVar13 + 200) = uVar14;
                thunk_FUN_03f5d7b8((undefined8 *)(lVar13 + 200),uVar14);
                AnhPD_FoodOrder_IngredientConveyorItem__SetMaskInteraction
                          (lVar13,0 < *(int *)(param_4 + 0x158));
                *(undefined8 *)(lVar13 + 0xb8) = param_5;
                thunk_FUN_03f5d7b8((undefined8 *)(lVar13 + 0xb8));
                if (param_8 < 2) {
                  param_8 = 1;
                }
                if (param_9 < 2) {
                  param_9 = 1;
                }
                *(int *)(lVar13 + 0xb0) = param_8;
                *(int *)(lVar13 + 0xb4) = param_9;
                if (*(int *)(param_7 + 0x18) == 1) {
                  if (*(long *)(param_4 + 0x1c0) == 0) goto LAB_040f4f44;
                  AnhPD_FoodOrder_ConveyorFreeze__ApplyFreeze
                            (*(long *)(param_4 + 0x1c0),lVar13,*(undefined4 *)(param_7 + 0x30),0);
                }
                AnhPD_FoodOrder_IngredientConveyorItem__SetHidden
                          (lVar13,*(undefined1 *)(param_7 + 0x34));
                AnhPD_FoodOrder_IngredientConveyorItem__SetKey
                          (lVar13,*(undefined4 *)(param_7 + 0x38));
                return lVar13;
              }
            }
          }
        }
      }
    }
  }
LAB_040f4f44:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

