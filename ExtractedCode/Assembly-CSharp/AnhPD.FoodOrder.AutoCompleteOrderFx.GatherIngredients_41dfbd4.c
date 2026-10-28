// rea decompile_all
// name: AnhPD.FoodOrder.AutoCompleteOrderFx$$GatherIngredients
// address: 0x41dfbd4
// body: available
// range: 0x41dfbd4-0x41e06c3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41e06a4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41e06a8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41e06ac to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41e06b0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41e06b4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41e06b8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41e06bc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41e06c0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long AnhPD_FoodOrder_AutoCompleteOrderFx__GatherIngredients
               (long param_1,long *param_2,undefined8 param_3,undefined4 param_4,undefined8 param_5)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  long *plVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 uVar15;
  long local_180;
  long lStack_178;
  long local_170;
  long local_168;
  long lStack_160;
  long local_158;
  undefined8 local_130;
  long *plStack_128;
  long local_120;
  long lStack_118;
  long local_110;
  long local_100;
  long lStack_f8;
  long local_f0;
  long local_e0;
  long lStack_d8;
  long local_d0;
  long local_c0;
  long lStack_b8;
  long local_b0;
  undefined1 local_a4 [4];
  long local_a0;
  long lStack_98;
  long local_90;
  long local_80;
  long lStack_78;
  long local_70;
  
  if ((DAT_09516ad6 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09181918);
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_0919d120);
    FUN_03f5c2a4(&DAT_091a4f70);
    FUN_03f5c2a4(&DAT_091a4f78);
    FUN_03f5c2a4(&DAT_091a4f80);
    FUN_03f5c2a4(&DAT_091ac690);
    FUN_03f5c2a4(&DAT_091b0570);
    FUN_03f5c2a4(&DAT_091b0588);
    FUN_03f5c2a4(&DAT_091b20f0);
    FUN_03f5c2a4(&DAT_091adad8);
    FUN_03f5c2a4(&DAT_091ac680);
    FUN_03f5c2a4(&DAT_091b20d0);
    FUN_03f5c2a4(&DAT_0917c4d0);
    FUN_03f5c2a4(&DAT_0917c0a8);
    FUN_03f5c2a4(&DAT_0917d198);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09189140);
    FUN_03f5c2a4(&DAT_09189158);
    FUN_03f5c2a4(&DAT_0918b348);
    FUN_03f5c2a4(&DAT_09217f28);
    FUN_03f5c2a4(&DAT_091f5a98);
    FUN_03f5c2a4(&DAT_09221428);
    FUN_03f5c2a4(&DAT_09213b30);
    FUN_03f5c2a4(&DAT_091fadd0);
    FUN_03f5c2a4(&DAT_09221430);
    FUN_03f5c2a4(&DAT_091f9f58);
    FUN_03f5c2a4(&DAT_0921c820);
    FUN_03f5c2a4(&DAT_09217f18);
    FUN_03f5c2a4(&DAT_091f9040);
    FUN_03f5c2a4(&DAT_091f5700);
    FUN_03f5c2a4(&DAT_091f60a8);
    FUN_03f5c2a4(&DAT_091f6ce0);
    FUN_03f5c2a4(&DAT_09222a08);
    FUN_03f5c2a4(&DAT_091f81f0);
    FUN_03f5c2a4(&DAT_09217c10);
    DAT_09516ad6 = 1;
  }
  local_80 = 0;
  lStack_78 = 0;
  local_70 = 0;
  local_a0 = 0;
  lStack_98 = 0;
  local_90 = 0;
  local_a4[0] = 0;
  lVar4 = thunk_FUN_03f9944c(DAT_0917d198);
  FUN_057e0400(lVar4,DAT_091b20d0);
  if (*(int *)(DAT_09189158 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  plVar12 = *(long **)(DAT_09189158 + 0xb8);
  lVar8 = *(long *)(param_1 + 0x78);
  lStack_78 = plVar12[1];
  local_80 = *plVar12;
  local_70 = plVar12[2];
  if (lVar8 == 0) goto LAB_041e06b8;
  iVar1 = *(int *)(lVar8 + 0x18);
  *(undefined4 *)(lVar8 + 0x18) = 0;
  *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
  if (0 < iVar1) {
    System_Array__Clear(*(undefined8 *)(lVar8 + 0x10),0,iVar1,0);
  }
  if ((param_2[1] != 0 || *param_2 != 0) || param_2[2] != 0) {
    uVar5 = AnhPD_FoodOrder_AutoCompleteOrderFx__CollectCandidates(param_1,param_4,param_5);
    lStack_b8 = param_2[1];
    local_c0 = *param_2;
    local_b0 = param_2[2];
    uVar13 = *(undefined8 *)(param_1 + 0x78);
    if (*(int *)(DAT_09181918 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lStack_d8 = lStack_b8;
    local_e0 = local_c0;
    local_d0 = local_b0;
    lVar4 = AnhPD_FoodOrder_AutoCompleteOrderFx__Plan(uVar5,&local_e0,param_4,uVar13,&local_80);
  }
  if (*(int *)(DAT_09189158 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  if ((lStack_78 != 0 || local_80 != 0) || local_70 != 0) {
    if (*(int *)(DAT_09181918 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lStack_f8 = lStack_78;
    local_100 = local_80;
    local_f0 = local_70;
    uVar5 = AnhPD_FoodOrder_AutoCompleteOrderFx__PieceNames(&local_100);
    uVar5 = System_String__Concat(DAT_09213b30,uVar5,DAT_091f9040,0);
    if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
      FUN_03f5c424(DAT_091835d0);
    }
    UnityEngine_Debug__LogError(uVar5,0);
    lVar4 = thunk_FUN_03f9944c(DAT_0917c0a8);
    FUN_057e0400(lVar4,DAT_091ac680);
    return lVar4;
  }
  lVar8 = thunk_FUN_03f9944c(DAT_0917c0a8);
  FUN_057e0400(lVar8,DAT_091ac680);
  uVar5 = thunk_FUN_03f9944c(DAT_0917c4d0);
  FUN_057e0400(uVar5,DAT_091adad8);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar6 = UnityEngine_Object__op_Implicit(param_3,0);
  lVar10 = DAT_091ac690;
  if ((uVar6 & 1) != 0) {
    if (lVar8 == 0) goto LAB_041e06b8;
    lVar9 = *(long *)(lVar8 + 0x10);
    *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
    if (lVar9 == 0) goto LAB_041e06b8;
    uVar3 = *(uint *)(lVar8 + 0x18);
    if (uVar3 < *(uint *)(lVar9 + 0x18)) {
      *(uint *)(lVar8 + 0x18) = uVar3 + 1;
      puVar7 = (undefined8 *)(lVar9 + (long)(int)uVar3 * 8 + 0x20);
      *puVar7 = param_3;
      thunk_FUN_03f5d7b8(puVar7,param_3);
    }
    else {
      FUN_057e0c68(lVar8,param_3,*(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70))
      ;
    }
  }
  lVar10 = *(long *)(param_1 + 0x80);
  if (lVar10 != 0) {
    iVar1 = *(int *)(lVar10 + 0x18);
    *(undefined4 *)(lVar10 + 0x18) = 0;
    *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
    if (0 < iVar1) {
      System_Array__Clear(*(undefined8 *)(lVar10 + 0x10),0,iVar1,0);
    }
    lVar10 = thunk_FUN_03f9944c(DAT_0918b348);
    System_Text_StringBuilder___ctor(lVar10,DAT_09217c10,0);
    lStack_b8 = param_2[1];
    local_c0 = *param_2;
    local_b0 = param_2[2];
    if (*(int *)(DAT_09181918 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lStack_118 = lStack_b8;
    local_120 = local_c0;
    local_110 = local_b0;
    uVar13 = AnhPD_FoodOrder_AutoCompleteOrderFx__PieceNames(&local_120);
    if (lVar10 != 0) {
      lVar10 = System_Text_StringBuilder__Append(lVar10,uVar13,0);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09188ad0);
      }
      uVar6 = UnityEngine_Object__op_Implicit(param_3,0);
      uVar13 = DAT_091f5700;
      if ((uVar6 & 1) != 0) {
        if (*(int *)(DAT_09189140 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar13 = AnhPD_FoodOrder_PieceLedger__Describe(param_3,0);
        uVar13 = System_String__Concat(DAT_091f60a8,uVar13,0);
      }
      if (((lVar10 != 0) &&
          (lVar10 = System_Text_StringBuilder__Append(lVar10,uVar13,0), lVar10 != 0)) &&
         (plVar12 = (long *)System_Text_StringBuilder__Append(lVar10,DAT_091f6ce0,0), lVar4 != 0)) {
        FUN_057e185c(&local_c0,lVar4,DAT_091b20f0);
        local_90 = local_b0;
        plStack_128 = &local_a0;
        local_130 = 0;
        lStack_98 = lStack_b8;
        local_a0 = local_c0;
LAB_041e020c:
        uVar6 = FUN_071bd28c(&local_a0,DAT_091a4f78);
        lVar10 = local_90;
        if ((uVar6 & 1) != 0) {
          if (local_90 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          if (*(long *)(local_90 + 0x28) == 0) {
            if (*(long *)(local_90 + 0x30) != 0) {
              cVar2 = *(char *)(local_90 + 0x40);
              puVar11 = &DAT_09221430;
              puVar7 = (undefined8 *)&DAT_09221428;
              goto LAB_041e0268;
            }
            uVar13 = *(undefined8 *)(local_90 + 0x18);
            if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar6 = UnityEngine_Object__op_Implicit(uVar13,0);
            puVar7 = (undefined8 *)&DAT_09222a08;
            if ((uVar6 & 1) == 0) {
              puVar7 = &DAT_0921c820;
            }
          }
          else {
            cVar2 = *(char *)(local_90 + 0x40);
            puVar11 = &DAT_09217f28;
            puVar7 = &DAT_09217f18;
LAB_041e0268:
            if (cVar2 != '\0') {
              puVar7 = puVar11;
            }
          }
          uVar13 = *puVar7;
          lVar9 = AnhPD_FoodOrder_AutoCompleteOrderFx_Candidate__get_SourceId(lVar10,0);
          if (lVar9 == 0) {
            uVar15 = *(undefined8 *)(lVar10 + 0x20);
            if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar6 = UnityEngine_Object__op_Implicit(uVar15,0);
            if ((uVar6 & 1) == 0) {
              uVar15 = *(undefined8 *)(lVar10 + 0x18);
              if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              uVar6 = UnityEngine_Object__op_Implicit(uVar15,0);
              lVar9 = DAT_091fadd0;
              if ((uVar6 & 1) != 0) {
                if (*(long *)(lVar10 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                uVar15 = *(undefined8 *)(*(long *)(lVar10 + 0x18) + 0xa8);
                if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
                  FUN_03f5c424();
                }
                uVar6 = UnityEngine_Object__op_Implicit(uVar15,0);
                lVar9 = DAT_091fadd0;
                if ((uVar6 & 1) != 0) {
                  if (*(long *)(lVar10 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c550();
                  }
                  uVar15 = *(undefined8 *)(*(long *)(lVar10 + 0x18) + 0xa8);
                  if (*(int *)(DAT_09189140 + 0xe4) == 0) {
                    FUN_03f5c424();
                  }
                  lVar9 = AnhPD_FoodOrder_PieceLedger__Describe(uVar15,0);
                }
              }
            }
            else {
              uVar15 = *(undefined8 *)(lVar10 + 0x20);
              if (*(int *)(DAT_09189140 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              lVar9 = AnhPD_FoodOrder_PieceLedger__Describe(uVar15,0);
            }
          }
          uVar15 = System_String__Concat(DAT_091f5a98,uVar13,DAT_091f9f58,lVar9,0);
          if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550(uVar15,uVar15);
          }
          System_Text_StringBuilder__Append(plVar12,uVar15,0);
          uVar15 = AnhPD_FoodOrder_AutoCompleteOrderFx__TakeCandidate(param_1,lVar10,uVar5,local_a4)
          ;
          if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar6 = UnityEngine_Object__op_Implicit(uVar15,0);
          lVar14 = DAT_091ac690;
          if ((uVar6 & 1) != 0) {
            if (lVar8 != 0) {
              lVar9 = *(long *)(lVar8 + 0x10);
              *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
              if (lVar9 != 0) {
                uVar3 = *(uint *)(lVar8 + 0x18);
                if (uVar3 < *(uint *)(lVar9 + 0x18)) {
                  *(uint *)(lVar8 + 0x18) = uVar3 + 1;
                  puVar7 = (undefined8 *)(lVar9 + (long)(int)uVar3 * 8 + 0x20);
                  *puVar7 = uVar15;
                  thunk_FUN_03f5d7b8(puVar7,uVar15);
                }
                else {
                  FUN_057e0c68(lVar8,uVar15,
                               *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
                }
                lVar10 = *(long *)(lVar10 + 0x10);
                if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                lStack_b8 = *(long *)(lVar10 + 0x18);
                local_c0 = *(long *)(lVar10 + 0x10);
                local_b0 = *(long *)(lVar10 + 0x20);
                if (*(int *)(DAT_09189158 + 0xe4) == 0) {
                  FUN_03f5c424();
                }
                lStack_178 = lStack_b8;
                local_180 = local_c0;
                local_170 = local_b0;
                AnhPD_FoodOrder_PieceSet__Subtract(&local_168,param_2,&local_180);
                param_2[1] = lStack_160;
                *param_2 = local_168;
                param_2[2] = local_158;
                goto LAB_041e020c;
              }
            }
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          System_Text_StringBuilder__Append(plVar12,DAT_091f81f0,0);
          lVar14 = *(long *)(param_1 + 0x80);
          uVar13 = System_String__Concat(uVar13,DAT_091f9f58,lVar9,0);
          lVar10 = DAT_091b0570;
          if (lVar14 == 0) {
LAB_041e06a4:
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          lVar9 = *(long *)(lVar14 + 0x10);
          *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
          if (lVar9 == 0) goto LAB_041e06a4;
          uVar3 = *(uint *)(lVar14 + 0x18);
          if (uVar3 < *(uint *)(lVar9 + 0x18)) {
            *(uint *)(lVar14 + 0x18) = uVar3 + 1;
            *(undefined8 *)(lVar9 + (long)(int)uVar3 * 8 + 0x20) = uVar13;
            thunk_FUN_03f5d7b8();
          }
          else {
            FUN_057e0c68(lVar14,uVar13,
                         *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
          }
          goto LAB_041e020c;
        }
        FUN_071bd288(&local_a0,DAT_091a4f70);
        if (plVar12 != (long *)0x0) {
          uVar13 = (**(code **)(*plVar12 + 0x168))(plVar12,*(undefined8 *)(*plVar12 + 0x170));
          if (*(int *)(DAT_09189140 + 0xe4) == 0) {
            FUN_03f5c424(DAT_09189140);
          }
          AnhPD_FoodOrder_PieceLedger__Note(uVar13,0);
          if (*(long *)(param_1 + 0x98) != 0) {
            FUN_06ff422c(*(long *)(param_1 + 0x98),DAT_0919d120);
            if (*(int *)(DAT_09181918 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            AnhPD_FoodOrder_AutoCompleteOrderFx__ReturnUnspentBeltCopies(lVar4,uVar5);
            AnhPD_FoodOrder_AutoCompleteOrderFx__FlushLeftovers(param_1,uVar5,1);
            uVar5 = *(undefined8 *)(param_1 + 0x18);
            if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar6 = UnityEngine_Object__op_Implicit(uVar5,0);
            if ((uVar6 & 1) != 0) {
              if (*(long *)(param_1 + 0x18) == 0) goto LAB_041e06b8;
              AnhPD_FoodOrder_GridIngController__RefreshCellDishes(*(long *)(param_1 + 0x18),0);
            }
            return lVar8;
          }
        }
      }
    }
  }
LAB_041e06b8:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

