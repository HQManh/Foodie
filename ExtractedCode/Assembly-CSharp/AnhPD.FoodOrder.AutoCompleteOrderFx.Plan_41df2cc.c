// rea decompile_all
// name: AnhPD.FoodOrder.AutoCompleteOrderFx$$Plan
// address: 0x41df2cc
// body: available
// range: 0x41df2cc-0x41df823 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41df820 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long AnhPD_FoodOrder_AutoCompleteOrderFx__Plan
               (undefined8 param_1,undefined8 *param_2,undefined4 param_3,long param_4,long *param_5
               )

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  bool bVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  int iVar11;
  long *plVar12;
  long lVar13;
  int iVar14;
  undefined8 uVar15;
  long lVar16;
  undefined8 local_100;
  long local_f8;
  long lStack_f0;
  long local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  int local_c4;
  long local_c0;
  long local_b8;
  long local_b0;
  long lStack_a8;
  long local_a0;
  undefined8 local_98;
  undefined8 local_90;
  long local_80;
  long lStack_78;
  long local_70;
  
  if ((DAT_09516ad9 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09181918);
    FUN_03f5c2a4(&DAT_0919f9c8);
    FUN_03f5c2a4(&DAT_0919f978);
    FUN_03f5c2a4(&DAT_0919f9f0);
    FUN_03f5c2a4(&DAT_09176b28);
    FUN_03f5c2a4(&DAT_091b0570);
    FUN_03f5c2a4(&DAT_091b2100);
    FUN_03f5c2a4(&DAT_091b2108);
    FUN_03f5c2a4(&DAT_091b2110);
    FUN_03f5c2a4(&DAT_091881a0);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09189158);
    FUN_03f5c2a4(&DAT_091f5700);
    DAT_09516ad9 = 1;
  }
  local_c0 = 0;
  local_b8 = 0;
  local_80 = 0;
  lStack_78 = 0;
  local_70 = 0;
  uVar15 = **(undefined8 **)(DAT_091881a0 + 0xb8);
  local_90 = 0;
  lStack_a8 = 0;
  local_b0 = 0;
  local_98 = 0;
  local_a0 = 0;
  local_c4 = 0;
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar6 = UnityEngine_Object__op_Implicit(uVar15,0);
  local_100 = 0;
  lVar16 = **(long **)(DAT_091881a0 + 0xb8);
  if ((uVar6 & 1) != 0) {
    if (lVar16 == 0) goto LAB_041df820;
    local_100 = *(undefined8 *)(lVar16 + 0xd0);
  }
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar6 = UnityEngine_Object__op_Implicit(lVar16,0);
  lVar16 = 0;
  if ((uVar6 & 1) != 0) {
    if (**(long **)(DAT_091881a0 + 0xb8) == 0) {
LAB_041df820:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar16 = *(long *)(**(long **)(DAT_091881a0 + 0xb8) + 0x110);
    if (lVar16 == 0) {
      lVar16 = 0;
    }
    else {
      lVar16 = *(long *)(lVar16 + 0x18);
    }
  }
  if (*(int *)(DAT_09181918 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar15 = AnhPD_FoodOrder_AutoCompleteOrderFx__PieceCandidatesFor(param_1,param_3,lVar16,local_100)
  ;
  uStack_d8 = param_2[1];
  local_e0 = *param_2;
  local_d0 = param_2[2];
  lVar7 = AnhPD_FoodOrder_AutoCompleteOrderFx__BuildPlan(uVar15,&local_e0,param_5);
  if (*(int *)(DAT_09189158 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09189158);
  }
  if ((param_5[1] != 0 || *param_5 != 0) || param_5[2] != 0) {
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar6 = UnityEngine_Object__op_Implicit(local_100,0);
    if ((uVar6 & 1) != 0) {
      lVar8 = thunk_FUN_03f9944c(DAT_09176b28);
      FUN_06fc96ac(lVar8,DAT_0919f978);
      if (*(int *)(DAT_09189158 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      plVar12 = *(long **)(DAT_09189158 + 0xb8);
      lStack_a8 = param_5[2];
      local_b0 = param_5[1];
      local_a0 = *param_5;
      lStack_78 = plVar12[1];
      local_80 = *plVar12;
      local_70 = plVar12[2];
      local_98 = 0xffffffff00000000;
      local_90 = 0;
      while (uVar9 = AnhPD_FoodOrder_PieceSet_Enumerator__MoveNext(&local_b0), uVar6 = local_90,
            (uVar9 & 1) != 0) {
        iVar4 = local_90._4_4_;
        if (0 < local_90._4_4_) {
          iVar14 = 0;
          do {
            local_b8 = 0;
            if (lVar16 == 0) {
LAB_041df5e4:
              local_c0 = local_b8;
              if (*(int *)(DAT_09181918 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              uVar9 = AnhPD_FoodOrder_AutoCompleteOrderFx__TryGetRootOf
                                (local_100,uVar6 & 0xffffffff,&local_c0);
              if ((uVar9 & 1) != 0) {
                bVar5 = false;
                goto LAB_041df60c;
              }
LAB_041df790:
              if (*(int *)(DAT_09189158 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              AnhPD_FoodOrder_PieceSet__Add(&local_f8,&local_80,uVar6 & 0xffffffff,1);
              lStack_78 = lStack_f0;
              local_80 = local_f8;
              local_70 = local_e8;
            }
            else {
              uVar9 = AnhPD_FoodOrder_LevelPieceBook__TryGetForm
                                (lVar16,param_3,uVar6 & 0xffffffff,&local_b8,0);
              lVar10 = local_b8;
              local_c0 = local_b8;
              if ((uVar9 & 1) == 0) goto LAB_041df5e4;
              if (*(int *)(DAT_09181918 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              lVar10 = AnhPD_FoodOrder_AutoCompleteOrderFx__PickById(param_1,lVar10);
              bVar5 = lVar10 == 0;
LAB_041df60c:
              if (lVar8 == 0) goto LAB_041df820;
              lVar10 = DAT_091f5700;
              if (local_b8 != 0) {
                lVar10 = local_b8;
              }
              FUN_06fcbf70(lVar8,lVar10,&local_c4,DAT_0919f9c8);
              if (bVar5) {
                if (lVar16 == 0) goto LAB_041df820;
                uVar9 = AnhPD_FoodOrder_LevelPieceBook__CanBuildForm(lVar16,local_b8,local_c4,0);
                if ((uVar9 & 1) == 0) goto LAB_041df790;
              }
              lVar10 = local_c0;
              if (lVar7 == 0) goto LAB_041df820;
              iVar2 = *(int *)(lVar7 + 0x18);
              if (*(int *)(DAT_09181918 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              uVar9 = AnhPD_FoodOrder_AutoCompleteOrderFx__TryReserve
                                (local_100,lVar10,uVar6 & 0xffffffff,param_1,lVar7,0);
              if ((uVar9 & 1) == 0) {
                iVar11 = *(int *)(lVar7 + 0x18);
                iVar1 = iVar2;
                if (iVar2 < iVar11) {
                  do {
                    lVar10 = FUN_057e0998(lVar7,iVar1,DAT_091b2110);
                    if (lVar10 == 0) goto LAB_041df820;
                    iVar1 = iVar1 + 1;
                    *(int *)(lVar10 + 0x44) = *(int *)(lVar10 + 0x44) + 1;
                    iVar11 = *(int *)(lVar7 + 0x18);
                  } while (iVar1 < iVar11);
                }
                FUN_057e25b4(lVar7,iVar2,iVar11 - iVar2,DAT_091b2100);
                goto LAB_041df790;
              }
              if ((bVar5) &&
                 (FUN_06fca434(lVar8,local_b8,local_c4 + 1,DAT_0919f9f0), lVar10 = DAT_091b0570,
                 param_4 != 0)) {
                lVar13 = *(long *)(param_4 + 0x10);
                *(int *)(param_4 + 0x1c) = *(int *)(param_4 + 0x1c) + 1;
                if (lVar13 == 0) goto LAB_041df820;
                uVar3 = *(uint *)(param_4 + 0x18);
                if (uVar3 < *(uint *)(lVar13 + 0x18)) {
                  *(uint *)(param_4 + 0x18) = uVar3 + 1;
                  *(long *)(lVar13 + (long)(int)uVar3 * 8 + 0x20) = local_b8;
                  thunk_FUN_03f5d7b8();
                }
                else {
                  FUN_057e0c68(param_4,local_b8,
                               *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
                }
              }
            }
            iVar14 = iVar14 + 1;
          } while (iVar14 != iVar4);
        }
      }
      param_5[1] = lStack_78;
      *param_5 = local_80;
      param_5[2] = local_70;
    }
  }
  return lVar7;
}

