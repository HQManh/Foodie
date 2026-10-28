// rea decompile_all
// name: KienUtilities.EventManager$$EmitEvent
// address: 0x424ece8
// body: available
// range: 0x424ece8-0x424f823 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x424f7f8 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x424f7fc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x424f800 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x424f804 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x424f808 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x424f80c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x424f810 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x424f814 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x424f818 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x424f820 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


void KienUtilities_EventManager__EmitEvent
               (undefined4 param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined1 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  undefined1 auVar14 [16];
  long local_d8;
  long *plStack_d0;
  long local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  long local_b0;
  undefined8 uStack_a8;
  long local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_80;
  undefined8 local_78;
  
  if ((DAT_09516ec0 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919fb70);
    FUN_03f5c2a4(&DAT_091a0318);
    FUN_03f5c2a4(&DAT_0919fb80);
    FUN_03f5c2a4(&DAT_091a0320);
    FUN_03f5c2a4(&DAT_091a0168);
    FUN_03f5c2a4(&DAT_091a0310);
    FUN_03f5c2a4(&DAT_091a0328);
    FUN_03f5c2a4(&DAT_091a0330);
    FUN_03f5c2a4(&DAT_0919fbc8);
    FUN_03f5c2a4(&DAT_09176cf8);
    FUN_03f5c2a4(&DAT_091a6960);
    FUN_03f5c2a4(&DAT_091a6968);
    FUN_03f5c2a4(&DAT_091a6970);
    FUN_03f5c2a4(&DAT_09184240);
    FUN_03f5c2a4(&DAT_091a9918);
    FUN_03f5c2a4(&DAT_091f6eb0);
    FUN_03f5c2a4(&DAT_09214950);
    FUN_03f5c2a4(&DAT_091f6f38);
    FUN_03f5c2a4(&DAT_0921e2a8);
    FUN_03f5c2a4(&DAT_091f6f10);
    FUN_03f5c2a4(&DAT_09223b90);
    FUN_03f5c2a4(&DAT_0921fa28);
    FUN_03f5c2a4(&DAT_091f5700);
    FUN_03f5c2a4(&DAT_091f8568);
    FUN_03f5c2a4(&DAT_091f6f20);
    DAT_09516ec0 = 1;
  }
  local_80 = 0;
  local_78 = 0;
  local_90 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  if (param_4 != 0) {
    if (*(int *)(DAT_09184240 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar5 = *(long *)(*(long *)(DAT_09184240 + 0xb8) + 8);
    if (lVar5 == 0) goto LAB_0424f7fc;
    uVar6 = FUN_06fd8648(lVar5,param_2,DAT_0919fb80);
    if ((uVar6 & 1) == 0) {
      if (*(int *)(DAT_09184240 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar5 = *(long *)(*(long *)(DAT_09184240 + 0xb8) + 8);
      if (lVar5 == 0) goto LAB_0424f7fc;
      FUN_06fd8454(lVar5,param_2,param_4,DAT_0919fb70);
    }
    else {
      if (*(int *)(DAT_09184240 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar5 = *(long *)(*(long *)(DAT_09184240 + 0xb8) + 8);
      if (lVar5 == 0) goto LAB_0424f7fc;
      FUN_06fd8440(lVar5,param_2,param_4,DAT_0919fbc8);
    }
  }
  if (param_3 != 0) {
    lVar5 = System_String__Split(param_3,0x3b,0,0);
    lVar7 = thunk_FUN_03f9944c(DAT_09176cf8);
    FUN_07004818(lVar7,DAT_091a0310);
    if (lVar5 != 0) {
      uVar2 = *(uint *)(lVar5 + 0x18);
      if (0 < (int)uVar2) {
        uVar3 = 0;
        do {
          if (uVar2 <= uVar3) {
LAB_0424f7f8:
                    /* WARNING: Subroutine does not return */
            FUN_03f5c558();
          }
          lVar8 = *(long *)(lVar5 + (long)(int)uVar3 * 8 + 0x20);
          if ((lVar8 == 0) || (lVar8 = System_String__Split(lVar8,0x3a,0,0), lVar8 == 0))
          goto LAB_0424f7fc;
          if (*(int *)(lVar8 + 0x18) == 0) goto LAB_0424f7f8;
          uVar6 = System_String__op_Equality(*(undefined8 *)(lVar8 + 0x20),DAT_0921fa28,0);
          if ((uVar6 & 1) != 0) {
            local_80 = 0;
            local_78 = 0;
            if ((*(uint *)(lVar8 + 0x18) & 0xfffffffe) == 0) goto LAB_0424f7f8;
            if (*(long *)(lVar8 + 0x28) == 0) goto LAB_0424f7fc;
            local_80 = System_String__Replace(*(long *)(lVar8 + 0x28),DAT_091f8568,DAT_091f5700,0);
            thunk_FUN_03f5d7b8(&local_80,local_80);
            if ((*(uint *)(lVar8 + 0x18) & 0xfffffffe) == 0) goto LAB_0424f7f8;
            if (*(long *)(lVar8 + 0x28) == 0) goto LAB_0424f7fc;
            uVar6 = System_String__StartsWith(*(long *)(lVar8 + 0x28),DAT_091f8568,0);
            uVar12 = DAT_0921fa28;
            if ((uVar6 & 1) == 0) {
              uVar1 = 0;
            }
            else {
              if ((*(uint *)(lVar8 + 0x18) & 0xfffffffe) == 0) goto LAB_0424f7f8;
              if (*(long *)(lVar8 + 0x28) == 0) goto LAB_0424f7fc;
              uVar1 = System_String__EndsWith(*(long *)(lVar8 + 0x28),DAT_091f8568,0);
            }
            local_78 = CONCAT53(local_78._3_5_,CONCAT12(uVar1,(undefined2)local_78)) &
                       0xffffffffff01ffff;
            if ((*(uint *)(lVar8 + 0x18) & 0xfffffffe) == 0) goto LAB_0424f7f8;
            if (*(long *)(lVar8 + 0x28) == 0) goto LAB_0424f7fc;
            uVar1 = System_String__EndsWith(*(long *)(lVar8 + 0x28),DAT_091f8568,0);
            local_78 = CONCAT71(local_78._1_7_,uVar1) & 0xffffffffffffff01;
            if ((*(uint *)(lVar8 + 0x18) & 0xfffffffe) == 0) goto LAB_0424f7f8;
            if (*(long *)(lVar8 + 0x28) == 0) goto LAB_0424f7fc;
            uVar1 = System_String__StartsWith(*(long *)(lVar8 + 0x28),DAT_091f8568,0);
            local_78 = CONCAT62(local_78._2_6_,CONCAT11(uVar1,(undefined1)local_78)) &
                       0xffffffffffff01ff;
            if ((*(uint *)(lVar8 + 0x18) & 0xfffffffe) == 0) goto LAB_0424f7f8;
            if (*(long *)(lVar8 + 0x28) == 0) goto LAB_0424f7fc;
            uVar1 = System_String__Contains(*(long *)(lVar8 + 0x28),DAT_091f8568,0);
            local_78 = (CONCAT44(local_78._4_4_,CONCAT13(uVar1,(undefined3)local_78)) ^ 0xff000000)
                       & 0xffffffff01ffffff;
            if (lVar7 == 0) goto LAB_0424f7fc;
            FUN_070055b0(lVar7,uVar12,local_80,local_78,DAT_091a0318);
          }
          if (*(int *)(lVar8 + 0x18) == 0) goto LAB_0424f7f8;
          uVar6 = System_String__op_Equality(*(undefined8 *)(lVar8 + 0x20),DAT_09223b90,0);
          if ((uVar6 & 1) != 0) {
            local_80 = 0;
            local_78 = 0;
            if ((*(uint *)(lVar8 + 0x18) & 0xfffffffe) == 0) goto LAB_0424f7f8;
            if (*(long *)(lVar8 + 0x28) == 0) goto LAB_0424f7fc;
            local_80 = System_String__Replace(*(long *)(lVar8 + 0x28),DAT_091f8568,DAT_091f5700,0);
            thunk_FUN_03f5d7b8(&local_80,local_80);
            if ((*(uint *)(lVar8 + 0x18) & 0xfffffffe) == 0) goto LAB_0424f7f8;
            if (*(long *)(lVar8 + 0x28) == 0) goto LAB_0424f7fc;
            uVar6 = System_String__StartsWith(*(long *)(lVar8 + 0x28),DAT_091f8568,0);
            uVar12 = DAT_09223b90;
            if ((uVar6 & 1) == 0) {
              uVar1 = 0;
            }
            else {
              if ((*(uint *)(lVar8 + 0x18) & 0xfffffffe) == 0) goto LAB_0424f7f8;
              if (*(long *)(lVar8 + 0x28) == 0) goto LAB_0424f7fc;
              uVar1 = System_String__EndsWith(*(long *)(lVar8 + 0x28),DAT_091f8568,0);
            }
            local_78 = CONCAT53(local_78._3_5_,CONCAT12(uVar1,(undefined2)local_78)) &
                       0xffffffffff01ffff;
            if ((*(uint *)(lVar8 + 0x18) & 0xfffffffe) == 0) goto LAB_0424f7f8;
            if (*(long *)(lVar8 + 0x28) == 0) goto LAB_0424f7fc;
            uVar1 = System_String__EndsWith(*(long *)(lVar8 + 0x28),DAT_091f8568,0);
            local_78 = CONCAT71(local_78._1_7_,uVar1) & 0xffffffffffffff01;
            if ((*(uint *)(lVar8 + 0x18) & 0xfffffffe) == 0) goto LAB_0424f7f8;
            if (*(long *)(lVar8 + 0x28) == 0) goto LAB_0424f7fc;
            uVar1 = System_String__StartsWith(*(long *)(lVar8 + 0x28),DAT_091f8568,0);
            local_78 = CONCAT62(local_78._2_6_,CONCAT11(uVar1,(undefined1)local_78)) &
                       0xffffffffffff01ff;
            if ((*(uint *)(lVar8 + 0x18) & 0xfffffffe) == 0) goto LAB_0424f7f8;
            if (*(long *)(lVar8 + 0x28) == 0) goto LAB_0424f7fc;
            uVar1 = System_String__Contains(*(long *)(lVar8 + 0x28),DAT_091f8568,0);
            local_78 = (CONCAT44(local_78._4_4_,CONCAT13(uVar1,(undefined3)local_78)) ^ 0xff000000)
                       & 0xffffffff01ffffff;
            if (lVar7 == 0) goto LAB_0424f7fc;
            FUN_070055b0(lVar7,uVar12,local_80,local_78,DAT_091a0318);
          }
          if (*(int *)(lVar8 + 0x18) == 0) goto LAB_0424f7f8;
          uVar6 = System_String__op_Equality(*(undefined8 *)(lVar8 + 0x20),DAT_0921e2a8,0);
          if ((uVar6 & 1) != 0) {
            local_80 = 0;
            local_78 = 0;
            if ((*(uint *)(lVar8 + 0x18) & 0xfffffffe) == 0) goto LAB_0424f7f8;
            if (*(long *)(lVar8 + 0x28) == 0) goto LAB_0424f7fc;
            local_80 = System_String__Replace(*(long *)(lVar8 + 0x28),DAT_091f8568,DAT_091f5700,0);
            thunk_FUN_03f5d7b8(&local_80,local_80);
            if ((*(uint *)(lVar8 + 0x18) & 0xfffffffe) == 0) goto LAB_0424f7f8;
            if (*(long *)(lVar8 + 0x28) == 0) goto LAB_0424f7fc;
            uVar6 = System_String__StartsWith(*(long *)(lVar8 + 0x28),DAT_091f8568,0);
            uVar12 = DAT_0921e2a8;
            if ((uVar6 & 1) == 0) {
              uVar1 = 0;
            }
            else {
              if ((*(uint *)(lVar8 + 0x18) & 0xfffffffe) == 0) goto LAB_0424f7f8;
              if (*(long *)(lVar8 + 0x28) == 0) goto LAB_0424f7fc;
              uVar1 = System_String__EndsWith(*(long *)(lVar8 + 0x28),DAT_091f8568,0);
            }
            local_78 = CONCAT53(local_78._3_5_,CONCAT12(uVar1,(undefined2)local_78)) &
                       0xffffffffff01ffff;
            if ((*(uint *)(lVar8 + 0x18) & 0xfffffffe) == 0) goto LAB_0424f7f8;
            if (*(long *)(lVar8 + 0x28) == 0) goto LAB_0424f7fc;
            uVar1 = System_String__EndsWith(*(long *)(lVar8 + 0x28),DAT_091f8568,0);
            local_78 = CONCAT71(local_78._1_7_,uVar1) & 0xffffffffffffff01;
            if ((*(uint *)(lVar8 + 0x18) & 0xfffffffe) == 0) goto LAB_0424f7f8;
            if (*(long *)(lVar8 + 0x28) == 0) goto LAB_0424f7fc;
            uVar1 = System_String__StartsWith(*(long *)(lVar8 + 0x28),DAT_091f8568,0);
            local_78 = CONCAT62(local_78._2_6_,CONCAT11(uVar1,(undefined1)local_78)) &
                       0xffffffffffff01ff;
            if ((*(uint *)(lVar8 + 0x18) & 0xfffffffe) == 0) goto LAB_0424f7f8;
            if (*(long *)(lVar8 + 0x28) == 0) goto LAB_0424f7fc;
            uVar1 = System_String__Contains(*(long *)(lVar8 + 0x28),DAT_091f8568,0);
            local_78 = (CONCAT44(local_78._4_4_,CONCAT13(uVar1,(undefined3)local_78)) ^ 0xff000000)
                       & 0xffffffff01ffffff;
            if (lVar7 == 0) goto LAB_0424f7fc;
            FUN_070055b0(lVar7,uVar12,local_80,local_78,DAT_091a0318);
          }
          uVar2 = *(uint *)(lVar5 + 0x18);
          uVar3 = uVar3 + 1;
        } while ((int)uVar3 < (int)uVar2);
      }
      if (lVar7 != 0) {
        uVar2 = FUN_07005264(lVar7,DAT_091a0328);
        if (*(int *)(DAT_09184240 + 0xe4) == 0) {
          FUN_03f5c424(DAT_09184240);
        }
        if (**(long **)(DAT_09184240 + 0xb8) != 0) {
          FUN_06fd8888(&local_d8,**(long **)(DAT_09184240 + 0xb8),DAT_091a0168);
          local_90 = local_b8;
          uStack_a8 = plStack_d0;
          local_b0 = local_d8;
          uStack_98 = uStack_c0;
          local_a0 = local_c8;
          local_d8 = 0;
          plStack_d0 = &local_b0;
          do {
            do {
              uVar6 = FUN_072753d4(&local_b0,DAT_091a6968);
              lVar8 = local_a0;
              lVar5 = local_d8;
              if ((uVar6 & 1) == 0) {
                FUN_072754f4(plStack_d0,DAT_091a6960);
                if (lVar5 != 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c548(lVar5);
                }
                return;
              }
              if (local_a0 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              uVar6 = System_String__Contains(local_a0,DAT_09214950,0);
            } while (((uVar6 & 1) == 0) ||
                    (uVar6 = System_String__StartsWith(lVar8,param_2,0), (uVar6 & 1) == 0));
            lVar5 = System_String__Split(lVar8,0x5f,0,0);
            if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            uVar3 = *(uint *)(lVar5 + 0x18);
            uVar12 = DAT_091f5700;
            uVar11 = DAT_091f5700;
            uVar10 = DAT_091f5700;
            if (0 < (int)uVar3) {
              uVar4 = 0;
              do {
                if (uVar3 <= uVar4) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c558();
                }
                lVar13 = *(long *)(lVar5 + (long)(int)uVar4 * 8 + 0x20);
                if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                uVar6 = System_String__Contains(lVar13,DAT_091f6f20,0);
                if ((uVar6 & 1) != 0) {
                  lVar9 = System_String__Replace(lVar13,DAT_091f6f20,DAT_091f5700,0);
                  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c550();
                  }
                  uVar10 = System_String__Replace(lVar9,DAT_091f6eb0,DAT_091f5700,0);
                }
                uVar6 = System_String__Contains(lVar13,DAT_091f6f38,0);
                if ((uVar6 & 1) != 0) {
                  lVar9 = System_String__Replace(lVar13,DAT_091f6f38,DAT_091f5700,0);
                  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c550();
                  }
                  uVar11 = System_String__Replace(lVar9,DAT_091f6eb0,DAT_091f5700,0);
                }
                uVar6 = System_String__Contains(lVar13,DAT_091f6f10,0);
                if ((uVar6 & 1) != 0) {
                  lVar13 = System_String__Replace(lVar13,DAT_091f6f10,DAT_091f5700,0);
                  if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c550();
                  }
                  uVar12 = System_String__Replace(lVar13,DAT_091f6eb0,DAT_091f5700,0);
                }
                uVar3 = *(uint *)(lVar5 + 0x18);
                uVar4 = uVar4 + 1;
              } while ((int)uVar4 < (int)uVar3);
            }
            uVar6 = FUN_070057b4(lVar7,DAT_0921fa28,DAT_091a0320);
            if (((uVar6 & 1) == 0) ||
               (uVar6 = System_String__op_Inequality(uVar10,DAT_091f5700,0), (uVar6 & 1) == 0)) {
              uVar3 = 0;
            }
            else {
              auVar14 = FUN_0700552c(lVar7,DAT_0921fa28,DAT_091a0330);
              if (*(int *)(DAT_09184240 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              uVar3 = KienUtilities_EventManager__FilterIsValidated
                                (uVar10,auVar14._0_8_,auVar14._8_8_);
              uVar3 = uVar3 & 1;
            }
            uVar6 = FUN_070057b4(lVar7,DAT_09223b90,DAT_091a0320);
            if (((uVar6 & 1) != 0) &&
               (uVar6 = System_String__op_Inequality(uVar11,DAT_091f5700,0), (uVar6 & 1) != 0)) {
              auVar14 = FUN_0700552c(lVar7,DAT_09223b90,DAT_091a0330);
              if (*(int *)(DAT_09184240 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              uVar4 = KienUtilities_EventManager__FilterIsValidated
                                (uVar11,auVar14._0_8_,auVar14._8_8_);
              uVar3 = uVar3 + (uVar4 & 1);
            }
            uVar6 = FUN_070057b4(lVar7,DAT_0921e2a8,DAT_091a0320);
            if (((uVar6 & 1) != 0) &&
               (uVar6 = System_String__op_Inequality(uVar12,DAT_091f5700,0), (uVar6 & 1) != 0)) {
              auVar14 = FUN_0700552c(lVar7,DAT_0921e2a8,DAT_091a0330);
              if (*(int *)(DAT_09184240 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              uVar4 = KienUtilities_EventManager__FilterIsValidated
                                (uVar12,auVar14._0_8_,auVar14._8_8_);
              uVar3 = uVar3 + (uVar4 & 1);
            }
            if (uVar3 == uVar2) {
              if (*(int *)(DAT_09184240 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              KienUtilities_EventManager__EmitEvent(param_1,lVar8);
            }
          } while( true );
        }
      }
    }
  }
LAB_0424f7fc:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

