// rea decompile_all
// name: CookingGraph.CookingLevelSimulation$$PlanBooster
// address: 0x443a7dc
// body: available
// range: 0x443a7dc-0x443aef3 inclusive
// range: 0x443af48-0x443b3ef inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x443aee8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x443aeec to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x443aef0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x443b3d0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x443b3d4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x443b3d8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x443b3dc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x443b3e0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x443b3e4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x443b3ec to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0443b3e8) */

undefined8
CookingGraph_CookingLevelSimulation__PlanBooster(long param_1,int param_2,uint param_3,uint param_4)

{
  uint uVar1;
  undefined4 uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  undefined8 uVar9;
  ulong extraout_x1;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  int *piVar13;
  ulong uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long lVar17;
  int iVar18;
  undefined8 uVar19;
  int iVar20;
  int iVar21;
  ulong local_c8;
  long *local_b8;
  long **pplStack_b0;
  ulong local_a8;
  ulong uStack_a0;
  long *local_98;
  long *local_90;
  long **pplStack_88;
  undefined8 local_80;
  ulong local_78;
  undefined8 local_68;
  
  local_c8 = (ulong)param_4;
  uVar14 = (ulong)param_3;
  if ((DAT_09517fe9 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182cb8);
    FUN_03f5c2a4(&DAT_091c6708);
    FUN_03f5c2a4(&DAT_091c6710);
    FUN_03f5c2a4(&DAT_091c6718);
    FUN_03f5c2a4(&DAT_09182e20);
    FUN_03f5c2a4(&DAT_091c9ad0);
    FUN_03f5c2a4(&DAT_091ca0b0);
    FUN_03f5c2a4(&DAT_091ca988);
    FUN_03f5c2a4(&DAT_091ca8b8);
    FUN_03f5c2a4(&DAT_091ca3b8);
    FUN_03f5c2a4(&DAT_091ca260);
    FUN_03f5c2a4(&DAT_091cac88);
    FUN_03f5c2a4(&DAT_091cb610);
    FUN_03f5c2a4(&DAT_091a20c8);
    FUN_03f5c2a4(&DAT_091a20d0);
    FUN_03f5c2a4(&DAT_091a20d8);
    FUN_03f5c2a4(&DAT_091782a8);
    FUN_03f5c2a4(&DAT_09179390);
    FUN_03f5c2a4(&DAT_091793a0);
    FUN_03f5c2a4(&DAT_09178370);
    FUN_03f5c2a4(&DAT_09178778);
    FUN_03f5c2a4(&DAT_091793a8);
    FUN_03f5c2a4(&DAT_09178b60);
    FUN_03f5c2a4(&DAT_09179560);
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_0917a828);
    FUN_03f5c2a4(&DAT_0917af28);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_091add58);
    FUN_03f5c2a4(&DAT_091add50);
    FUN_03f5c2a4(&DAT_091ac008);
    FUN_03f5c2a4(&DAT_091aac38);
    FUN_03f5c2a4(&DAT_091add38);
    FUN_03f5c2a4(&DAT_091abff8);
    FUN_03f5c2a4(&DAT_0917bf58);
    FUN_03f5c2a4(&DAT_0917c528);
    FUN_03f5c2a4(&DAT_091e7768);
    FUN_03f5c2a4(&DAT_091e7770);
    FUN_03f5c2a4(&DAT_091e7778);
    FUN_03f5c2a4(&DAT_091e7780);
    FUN_03f5c2a4(&DAT_091e7788);
    FUN_03f5c2a4(&DAT_0918f298);
    DAT_09517fe9 = 1;
  }
  local_68 = 0;
  local_98 = (long *)0x0;
  local_b8 = (long *)0x0;
  pplStack_88 = (long **)0x0;
  local_90 = (long *)0x0;
  local_78 = 0;
  local_80 = 0;
  uVar4 = CookingGraph_CookingLevelSimulation__CanUseBooster(param_1,param_2,&local_b8);
  if ((uVar4 & 1) == 0) {
    return 0;
  }
  lVar5 = thunk_FUN_03f9944c(DAT_0917c528);
  FUN_0579bb80(lVar5,DAT_091add38);
  lVar6 = thunk_FUN_03f9944c(DAT_0917bf58);
  FUN_057e0400(lVar6,DAT_091abff8);
  if (param_2 == 0) {
    uVar16 = CookingGraph_CookingLevelSimulation__CleanTableCells(param_1,0);
    uVar19 = thunk_FUN_03f9944c(DAT_09178b60);
    FUN_0531612c(uVar19,param_1,DAT_091c6708,0);
    uVar16 = FUN_04afa860(uVar16,uVar19,DAT_091ca988);
    if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
      FUN_03f5c424(DAT_0918f298);
    }
    puVar10 = *(undefined8 **)(DAT_0918f298 + 0xb8);
    lVar17 = puVar10[2];
    if (lVar17 == 0) {
      if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
        FUN_03f5c424(DAT_0918f298);
        puVar10 = *(undefined8 **)(DAT_0918f298 + 0xb8);
      }
      uVar19 = *puVar10;
      lVar17 = thunk_FUN_03f9944c(DAT_09178778);
      FUN_05313f40(lVar17,uVar19,DAT_091e7768,0);
      plVar7 = (long *)(*(long *)(DAT_0918f298 + 0xb8) + 0x10);
      *plVar7 = lVar17;
      thunk_FUN_03f5d7b8(plVar7,lVar17);
    }
    uVar16 = FUN_04af142c(uVar16,lVar17,DAT_091ca3b8);
    if (lVar5 == 0) goto LAB_0443b3e4;
    FUN_0579c618(lVar5,uVar16,DAT_091add58);
LAB_0443aed4:
    iVar21 = -1;
    iVar18 = -1;
  }
  else {
    if (param_2 == 1) {
      lVar17 = CookingGraph_CookingLevelSimulation__ShiftUpMoves(param_1);
      if (lVar17 == 0) goto LAB_0443b3e4;
      FUN_056cfb68(&local_b8,lVar17,DAT_091aac38);
      pplStack_88 = pplStack_b0;
      local_90 = local_b8;
      local_78 = uStack_a0;
      local_80 = local_a8;
      pplStack_b0 = &local_90;
      local_b8 = (long *)0x0;
      while (uVar8 = FUN_0718a218(&local_90,DAT_091a20d0), uVar3 = local_78, uVar4 = local_80,
            (uVar8 & 1) != 0) {
        uVar2 = local_80._4_4_;
        lVar12 = CookingGraph_CookingLevelSimulation__At
                           (param_1,local_80 & 0xffffffff,local_80._4_4_);
        lVar17 = DAT_091add50;
        if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        if (lVar5 == 0) {
LAB_0443aee8:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar11 = *(long *)(lVar5 + 0x10);
        uVar16 = *(undefined8 *)(lVar12 + 0x10);
        *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
        if (lVar11 == 0) goto LAB_0443aee8;
        uVar1 = *(uint *)(lVar5 + 0x18);
        if (uVar1 < *(uint *)(lVar11 + 0x18)) {
          *(uint *)(lVar5 + 0x18) = uVar1 + 1;
          *(undefined8 *)(lVar11 + (long)(int)uVar1 * 8 + 0x20) = uVar16;
        }
        else {
          FUN_0579c40c(lVar5,uVar16,
                       *(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
        }
        uVar19 = thunk_FUN_03f9944c(DAT_09182e20);
        CookingGraph_CookingQueueMove___ctor
                  (uVar19,uVar16,uVar4 & 0xffffffff,uVar2,uVar3 & 0xffffffff,0);
        lVar17 = DAT_091ac008;
        if (lVar6 == 0) {
LAB_0443aeec:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar12 = *(long *)(lVar6 + 0x10);
        *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
        if (lVar12 == 0) goto LAB_0443aeec;
        uVar1 = *(uint *)(lVar6 + 0x18);
        if (uVar1 < *(uint *)(lVar12 + 0x18)) {
          *(uint *)(lVar6 + 0x18) = uVar1 + 1;
          puVar10 = (undefined8 *)(lVar12 + (long)(int)uVar1 * 8 + 0x20);
          *puVar10 = uVar19;
          thunk_FUN_03f5d7b8(puVar10,uVar19);
        }
        else {
          FUN_057e0c68(lVar6,uVar19,
                       *(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
        }
      }
      FUN_0718a214(&local_90,DAT_091a20c8);
      goto LAB_0443aed4;
    }
    if (param_2 == 2) {
      if ((int)(param_4 & param_3) < 0) {
        uVar16 = *(undefined8 *)(param_1 + 0x80);
        if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        puVar10 = *(undefined8 **)(DAT_0918f298 + 0xb8);
        lVar17 = puVar10[1];
        if (lVar17 == 0) {
          if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
            FUN_03f5c424();
            puVar10 = *(undefined8 **)(DAT_0918f298 + 0xb8);
          }
          uVar19 = *puVar10;
          lVar17 = thunk_FUN_03f9944c(DAT_09179560);
          FUN_05330e2c(lVar17,uVar19,DAT_091e7770,0);
          plVar7 = (long *)(*(long *)(DAT_0918f298 + 0xb8) + 8);
          *plVar7 = lVar17;
          thunk_FUN_03f5d7b8(plVar7,lVar17);
        }
        uVar16 = FUN_04afaa90(uVar16,lVar17,DAT_091ca8b8);
        uVar19 = thunk_FUN_03f9944c(DAT_09178370);
        FUN_05310b64(uVar19,param_1,DAT_091c6718,0);
        FUN_04ae2448(uVar16,uVar19,DAT_091c9ad0);
        local_c8 = extraout_x1 >> 0x20;
        uVar14 = extraout_x1;
      }
      if (((int)local_c8 < 1) ||
         (lVar17 = CookingGraph_CookingLevelSimulation__PlanPick
                             (param_1,uVar14 & 0xffffffff,local_c8,1,&local_68,0), lVar17 == 0)) {
        return 0;
      }
      uVar19 = *(undefined8 *)(lVar17 + 0x10);
      uVar16 = thunk_FUN_03f9944c(DAT_091782a8);
      FUN_0530d640(uVar16,param_1,DAT_091c6710,0);
      uVar16 = FUN_04aeeae8(uVar19,uVar16,DAT_091ca260);
      if (lVar5 == 0) goto LAB_0443b3e4;
      FUN_0579c618(lVar5,uVar16,DAT_091add58);
      goto LAB_0443aed4;
    }
    uVar16 = *(undefined8 *)(param_1 + 0x98);
    if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    puVar10 = *(undefined8 **)(DAT_0918f298 + 0xb8);
    lVar17 = puVar10[3];
    if (lVar17 == 0) {
      if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
        FUN_03f5c424();
        puVar10 = *(undefined8 **)(DAT_0918f298 + 0xb8);
      }
      uVar19 = *puVar10;
      lVar17 = thunk_FUN_03f9944c(DAT_09179390);
      FUN_05322d94(lVar17,uVar19,DAT_091e7778,0);
      plVar7 = (long *)(*(long *)(DAT_0918f298 + 0xb8) + 0x18);
      *plVar7 = lVar17;
      thunk_FUN_03f5d7b8(plVar7,lVar17);
    }
    uVar16 = FUN_04b0cafc(uVar16,lVar17,DAT_091cb610);
    if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
      FUN_03f5c424(DAT_0918f298);
    }
    puVar10 = *(undefined8 **)(DAT_0918f298 + 0xb8);
    lVar17 = puVar10[4];
    if (lVar17 == 0) {
      if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
        FUN_03f5c424(DAT_0918f298);
        puVar10 = *(undefined8 **)(DAT_0918f298 + 0xb8);
      }
      uVar19 = *puVar10;
      lVar17 = thunk_FUN_03f9944c(DAT_091793a0);
      FUN_05323790(lVar17,uVar19,DAT_091e7780,0);
      plVar7 = (long *)(*(long *)(DAT_0918f298 + 0xb8) + 0x20);
      *plVar7 = lVar17;
      thunk_FUN_03f5d7b8(plVar7,lVar17);
    }
    uVar16 = FUN_04aeaae4(uVar16,lVar17,DAT_091ca0b0);
    if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
      FUN_03f5c424(DAT_0918f298);
    }
    puVar10 = *(undefined8 **)(DAT_0918f298 + 0xb8);
    lVar17 = puVar10[5];
    if (lVar17 == 0) {
      if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
        FUN_03f5c424(DAT_0918f298);
        puVar10 = *(undefined8 **)(DAT_0918f298 + 0xb8);
      }
      uVar19 = *puVar10;
      lVar17 = thunk_FUN_03f9944c(DAT_091793a8);
      FUN_053239c8(lVar17,uVar19,DAT_091e7788,0);
      plVar7 = (long *)(*(long *)(DAT_0918f298 + 0xb8) + 0x28);
      *plVar7 = lVar17;
      thunk_FUN_03f5d7b8(plVar7,lVar17);
    }
    plVar7 = (long *)FUN_04b038e4(uVar16,lVar17,DAT_091cac88);
    if (plVar7 == (long *)0x0) goto LAB_0443b3e4;
    lVar17 = *plVar7;
    uVar4 = (ulong)*(ushort *)(lVar17 + 0x12e);
    if (uVar4 != 0) {
      piVar13 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == DAT_0917a828) {
          puVar10 = (undefined8 *)(lVar17 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_0443b17c;
        }
        uVar4 = uVar4 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar4 != 0);
    }
    puVar10 = (undefined8 *)FUN_03f95da8(plVar7,DAT_0917a828,0);
LAB_0443b17c:
    local_98 = (long *)(*(code *)*puVar10)(plVar7,puVar10[1]);
    pplStack_b0 = &local_98;
    iVar21 = -1;
    iVar18 = -1;
    local_b8 = (long *)0x0;
    do {
      plVar7 = local_98;
      if (local_98 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar17 = *local_98;
      uVar4 = (ulong)*(ushort *)(lVar17 + 0x12e);
      if (uVar4 != 0) {
        piVar13 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == DAT_09185b10) {
            puVar10 = (undefined8 *)(lVar17 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_0443b200;
          }
          uVar4 = uVar4 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar4 != 0);
      }
      puVar10 = (undefined8 *)FUN_03f95da8(local_98,DAT_09185b10,0);
LAB_0443b200:
      uVar4 = (*(code *)*puVar10)(plVar7,puVar10[1]);
      plVar7 = local_98;
      if ((uVar4 & 1) == 0) break;
      if (local_98 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar17 = *local_98;
      uVar4 = (ulong)*(ushort *)(lVar17 + 0x12e);
      if (uVar4 != 0) {
        piVar13 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == DAT_0917af28) {
            puVar10 = (undefined8 *)(lVar17 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_0443b264;
          }
          uVar4 = uVar4 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar4 != 0);
      }
      puVar10 = (undefined8 *)FUN_03f95da8(local_98,DAT_0917af28,0);
LAB_0443b264:
      lVar17 = (*(code *)*puVar10)(plVar7,puVar10[1]);
      if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar12 = *(long *)(lVar17 + 0x50);
      if (lVar12 == 0) {
LAB_0443b3d0:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      iVar20 = 0;
      while (iVar20 < *(int *)(lVar12 + 0x18)) {
        lVar12 = CookingGraph_CookingLevelSimulation__Assembly(param_1,lVar17,iVar20);
        if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        uVar4 = CookingGraph_Execution_CookingAssemblySnapshot__get_Complete(lVar12,0);
        if (((uVar4 & 1) == 0) &&
           (uVar4 = CookingGraph_CookingLevelSimulation__AutoCompleteDish
                              (param_1,lVar17,iVar20,0,lVar5), (uVar4 & 1) != 0)) {
          iVar18 = *(int *)(lVar17 + 0x10);
          iVar21 = iVar20;
          break;
        }
        lVar12 = *(long *)(lVar17 + 0x50);
        iVar20 = iVar20 + 1;
        if (lVar12 == 0) goto LAB_0443b3d0;
      }
    } while (iVar18 < 0);
    plVar7 = local_98;
    if (local_98 != (long *)0x0) {
      lVar17 = *local_98;
      uVar4 = (ulong)*(ushort *)(lVar17 + 0x12e);
      if (uVar4 != 0) {
        piVar13 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == DAT_09185a58) {
            puVar10 = (undefined8 *)(lVar17 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_0443b34c;
          }
          uVar4 = uVar4 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar4 != 0);
      }
      puVar10 = (undefined8 *)FUN_03f95da8(local_98,DAT_09185a58,0);
LAB_0443b34c:
      (*(code *)*puVar10)(plVar7,puVar10[1]);
    }
  }
  lVar17 = *(long *)(param_1 + 0x178);
  if (lVar17 != 0) {
    uVar16 = *(undefined8 *)(lVar17 + 0x70);
    uVar19 = *(undefined8 *)(lVar17 + 0x78);
    uVar15 = *(undefined8 *)(param_1 + 400);
    uVar9 = thunk_FUN_03f9944c(DAT_09182cb8);
    CookingGraph_CookingBoosterPlan___ctor
              (uVar9,uVar16,uVar19,uVar15,param_2,uVar14 & 0xffffffff,local_c8,iVar18,iVar21,lVar5,
               lVar6,0);
    return uVar9;
  }
LAB_0443b3e4:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

