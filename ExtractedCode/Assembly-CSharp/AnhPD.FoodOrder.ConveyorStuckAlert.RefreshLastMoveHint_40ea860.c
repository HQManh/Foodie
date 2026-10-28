// rea decompile_all
// name: AnhPD.FoodOrder.ConveyorStuckAlert$$RefreshLastMoveHint
// address: 0x40ea860
// body: available
// range: 0x40ea860-0x40eae43 inclusive
// range: 0x40eaf40-0x40eaf47 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40eac28 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40eae28 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40eae2c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40eae30 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40eae34 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40eae38 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40eae3c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40eae40 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40eaf44 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x040eacac) */
/* WARNING: Removing unreachable block (ram,0x040eaf40) */

void AnhPD_FoodOrder_ConveyorStuckAlert__RefreshLastMoveHint(long param_1,long param_2)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  int *piVar10;
  long *plVar11;
  undefined8 uVar12;
  undefined4 uVar13;
  float fVar14;
  long *local_88;
  long **pplStack_80;
  long local_78;
  long *local_70;
  long **pplStack_68;
  long local_60;
  long *local_48;
  
  if ((DAT_095160aa & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a3308);
    FUN_03f5c2a4(&DAT_091a3310);
    FUN_03f5c2a4(&DAT_091a3318);
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_0917a3f0);
    FUN_03f5c2a4(&DAT_0917aa98);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_091ad970);
    FUN_03f5c2a4(&DAT_091ad968);
    FUN_03f5c2a4(&DAT_091ad978);
    FUN_03f5c2a4(&DAT_091ad980);
    FUN_03f5c2a4(&DAT_091ad988);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_095160aa = 1;
  }
  lVar8 = *(long *)(param_1 + 0x58);
  local_48 = (long *)0x0;
  local_70 = (long *)0x0;
  pplStack_68 = (long **)0x0;
  local_60 = 0;
  if (lVar8 == 0) goto LAB_040eae3c;
  iVar1 = *(int *)(lVar8 + 0x18);
  *(undefined4 *)(lVar8 + 0x18) = 0;
  *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
  if (0 < iVar1) {
    System_Array__Clear(*(undefined8 *)(lVar8 + 0x10),0,iVar1,0);
  }
  uVar4 = AnhPD_FoodOrder_ConveyorStuckAlert__FindOnlyMove(param_1,param_2);
  uVar12 = *(undefined8 *)(param_1 + 0x40);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09188ad0);
  }
  uVar5 = UnityEngine_Object__op_Inequality(uVar4,uVar12,0);
  if ((uVar5 & 1) != 0) {
    *(undefined8 *)(param_1 + 0x40) = uVar4;
    thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x40),uVar4);
    uVar13 = UnityEngine_Time__get_time(0);
    *(undefined4 *)(param_1 + 0x48) = uVar13;
  }
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar5 = UnityEngine_Object__op_Implicit(uVar4,0);
  if (((uVar5 & 1) != 0) &&
     (fVar14 = (float)UnityEngine_Time__get_time(0), 3.0 <= fVar14 - *(float *)(param_1 + 0x48))) {
    if ((param_2 != 0) && (plVar11 = *(long **)(param_2 + 0x20), plVar11 != (long *)0x0)) {
      lVar8 = *plVar11;
      uVar5 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar5 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == DAT_0917a3f0) {
            puVar6 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_040eaa68;
          }
          uVar5 = uVar5 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar5 != 0);
      }
      puVar6 = (undefined8 *)FUN_03f95da8(plVar11,DAT_0917a3f0,0);
LAB_040eaa68:
      plVar11 = (long *)(*(code *)*puVar6)(plVar11,puVar6[1]);
      pplStack_80 = &local_48;
      local_88 = (long *)0x0;
joined_r0x040eaa80:
      do {
        do {
          local_48 = plVar11;
          if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          lVar8 = *plVar11;
          uVar5 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar5 != 0) {
            piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == DAT_09185b10) {
                puVar6 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
                goto LAB_040eaaec;
              }
              uVar5 = uVar5 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar5 != 0);
          }
          puVar6 = (undefined8 *)FUN_03f95da8(plVar11,DAT_09185b10,0);
LAB_040eaaec:
          uVar5 = (*(code *)*puVar6)(plVar11,puVar6[1]);
          plVar11 = local_48;
          if ((uVar5 & 1) == 0) {
            if (local_48 == (long *)0x0) goto LAB_040eacb0;
            lVar8 = *local_48;
            uVar5 = (ulong)*(ushort *)(lVar8 + 0x12e);
            if (uVar5 == 0) goto LAB_040eac78;
            piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            goto LAB_040eac60;
          }
          if (local_48 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          lVar8 = *local_48;
          uVar5 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar5 != 0) {
            piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == DAT_0917aa98) {
                puVar6 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
                goto LAB_040eab50;
              }
              uVar5 = uVar5 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar5 != 0);
          }
          puVar6 = (undefined8 *)FUN_03f95da8(local_48,DAT_0917aa98,0);
LAB_040eab50:
          lVar8 = (*(code *)*puVar6)(plVar11,puVar6[1]);
          if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          uVar12 = *(undefined8 *)(lVar8 + 0x10);
          if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar5 = UnityEngine_Object__op_Implicit(uVar12,0);
          plVar11 = local_48;
        } while (((uVar5 & 1) == 0) ||
                (uVar5 = AnhPD_FoodOrder_ConveyorSlot__get_IsAtFrontRow(lVar8,0), plVar11 = local_48
                , (uVar5 & 1) == 0));
        uVar12 = *(undefined8 *)(lVar8 + 0x10);
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar5 = UnityEngine_Object__op_Inequality(uVar12,uVar4,0);
        lVar3 = DAT_091ad968;
        plVar11 = local_48;
      } while ((uVar5 & 1) == 0);
      lVar7 = *(long *)(param_1 + 0x58);
      if (lVar7 != 0) {
        lVar9 = *(long *)(lVar7 + 0x10);
        uVar12 = *(undefined8 *)(lVar8 + 0x10);
        *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
        if (lVar9 != 0) {
          uVar2 = *(uint *)(lVar7 + 0x18);
          if (uVar2 < *(uint *)(lVar9 + 0x18)) {
            *(uint *)(lVar7 + 0x18) = uVar2 + 1;
            puVar6 = (undefined8 *)(lVar9 + (long)(int)uVar2 * 8 + 0x20);
            *puVar6 = uVar12;
            thunk_FUN_03f5d7b8(puVar6);
            plVar11 = local_48;
          }
          else {
            FUN_057e0c68(lVar7,uVar12,
                         *(undefined8 *)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
            plVar11 = local_48;
          }
          goto joined_r0x040eaa80;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    goto LAB_040eae3c;
  }
  goto LAB_040eacb0;
  while( true ) {
    uVar5 = uVar5 - 1;
    piVar10 = piVar10 + 4;
    if (uVar5 == 0) break;
LAB_040eac60:
    if (*(long *)(piVar10 + -2) == DAT_09185a58) {
      puVar6 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
      goto LAB_040eac94;
    }
  }
LAB_040eac78:
  puVar6 = (undefined8 *)FUN_03f95da8(local_48,DAT_09185a58,0);
LAB_040eac94:
  (*(code *)*puVar6)(plVar11,puVar6[1]);
LAB_040eacb0:
  if (*(long *)(param_1 + 0x50) != 0) {
    FUN_057e185c(&local_88,*(long *)(param_1 + 0x50),DAT_091ad988);
    local_60 = local_78;
    pplStack_68 = pplStack_80;
    local_70 = local_88;
    local_88 = (long *)0x0;
    pplStack_80 = &local_70;
    while (uVar5 = FUN_071bd28c(&local_70,DAT_091a3310), lVar8 = local_60, (uVar5 & 1) != 0) {
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar5 = UnityEngine_Object__op_Implicit(lVar8,0);
      if ((uVar5 & 1) != 0) {
        if (*(long *)(param_1 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        uVar5 = FUN_057e1004(*(long *)(param_1 + 0x58),lVar8,DAT_091ad980);
        if ((uVar5 & 1) == 0) {
          if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          AnhPD_FoodOrder_IngredientConveyorItem__SetHintDim(lVar8,0);
        }
      }
    }
    FUN_071bd288(&local_70,DAT_091a3308);
    if (*(long *)(param_1 + 0x58) != 0) {
      FUN_057e185c(&local_88,*(long *)(param_1 + 0x58),DAT_091ad988);
      local_60 = local_78;
      pplStack_68 = pplStack_80;
      local_70 = local_88;
      local_88 = (long *)0x0;
      pplStack_80 = &local_70;
      while (uVar5 = FUN_071bd28c(&local_70,DAT_091a3310), (uVar5 & 1) != 0) {
        if (local_60 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        AnhPD_FoodOrder_IngredientConveyorItem__SetHintDim(local_60,1);
      }
      FUN_071bd288(&local_70,DAT_091a3308);
      lVar8 = *(long *)(param_1 + 0x50);
      if (lVar8 != 0) {
        iVar1 = *(int *)(lVar8 + 0x18);
        *(undefined4 *)(lVar8 + 0x18) = 0;
        *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
        if (0 < iVar1) {
          System_Array__Clear(*(undefined8 *)(lVar8 + 0x10),0,iVar1,0);
          lVar8 = *(long *)(param_1 + 0x50);
          if (lVar8 == 0) goto LAB_040eae3c;
        }
        FUN_057e0e78(lVar8,*(undefined8 *)(param_1 + 0x58),DAT_091ad970);
        return;
      }
    }
  }
LAB_040eae3c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

