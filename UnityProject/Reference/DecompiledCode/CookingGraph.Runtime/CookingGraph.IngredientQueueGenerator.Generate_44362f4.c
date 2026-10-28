// rea decompile_all
// name: CookingGraph.IngredientQueueGenerator$$Generate
// address: 0x44362f4
// body: available
// range: 0x44362f4-0x4436c83 inclusive
// range: 0x4436c88-0x4436c8b inclusive
// range: 0x4436c90-0x4436c93 inclusive
// range: 0x4436c98-0x4436c9b inclusive
// range: 0x4436ca0-0x4436ca3 inclusive
// range: 0x4436ca8-0x4436cab inclusive
// range: 0x4436d04-0x4436dd7 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4436c80 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4436c88 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4436c90 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4436c98 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4436ca0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4436ca8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4436d44 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4436d48 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4436d4c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4436d54 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4436d58 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4436d5c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verifi
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x04436c00) */
/* WARNING: Removing unreachable block (ram,0x04436d50) */
/* WARNING: Removing unreachable block (ram,0x04436dd0) */

long CookingGraph_IngredientQueueGenerator__Generate
               (long param_1,long param_2,undefined4 param_3,long param_4,long param_5)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  int *piVar13;
  long *plVar14;
  undefined8 uVar15;
  int iVar16;
  long lVar17;
  undefined8 uVar18;
  long local_e0;
  undefined8 local_b8;
  undefined8 *puStack_b0;
  long local_a8;
  undefined8 local_a0;
  undefined8 *puStack_98;
  long local_90;
  undefined8 local_80;
  undefined8 *puStack_78;
  long local_70;
  
  if ((DAT_09517fc9 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091ca528);
    FUN_03f5c2a4(&DAT_091cb098);
    FUN_03f5c2a4(&DAT_091a1de0);
    FUN_03f5c2a4(&DAT_091a3380);
    FUN_03f5c2a4(&DAT_091a3388);
    FUN_03f5c2a4(&DAT_091a1de8);
    FUN_03f5c2a4(&DAT_091a1df0);
    FUN_03f5c2a4(&DAT_091a3390);
    FUN_03f5c2a4(&DAT_09177b40);
    FUN_03f5c2a4(&DAT_09178b70);
    FUN_03f5c2a4(&DAT_09178bd0);
    FUN_03f5c2a4(&DAT_09184bb0);
    FUN_03f5c2a4(&DAT_0917b358);
    FUN_03f5c2a4(&DAT_0917b4f0);
    FUN_03f5c2a4(&DAT_09186c10);
    FUN_03f5c2a4(&DAT_09186c18);
    FUN_03f5c2a4(&DAT_091cfe08);
    FUN_03f5c2a4(&DAT_091ada68);
    FUN_03f5c2a4(&DAT_091ada00);
    FUN_03f5c2a4(&DAT_091af4c8);
    FUN_03f5c2a4(&DAT_091aa660);
    FUN_03f5c2a4(&DAT_091ada18);
    FUN_03f5c2a4(&DAT_091ada20);
    FUN_03f5c2a4(&DAT_091ada38);
    FUN_03f5c2a4(&DAT_091aa668);
    FUN_03f5c2a4(&DAT_09187e80);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09189918);
    FUN_03f5c2a4(&DAT_091eb998);
    FUN_03f5c2a4(&DAT_091eb9a0);
    FUN_03f5c2a4(&DAT_091eb9b8);
    FUN_03f5c2a4(&DAT_091917a0);
    FUN_03f5c2a4(&DAT_091eb9c0);
    FUN_03f5c2a4(&DAT_091917a8);
    FUN_03f5c2a4(&DAT_09191798);
    DAT_09517fc9 = 1;
  }
  local_80 = 0;
  puStack_78 = (undefined8 *)0x0;
  local_70 = 0;
  local_a0 = 0;
  puStack_98 = (undefined8 *)0x0;
  local_90 = 0;
  lVar5 = thunk_FUN_03f9944c(DAT_091917a0);
  System_Object___ctor(lVar5,0);
  if (lVar5 != 0) {
    plVar14 = (long *)(lVar5 + 0x10);
    *plVar14 = param_4;
    thunk_FUN_03f5d7b8(plVar14,param_4);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar6 = UnityEngine_Object__op_Equality(param_1,0,0);
    if ((uVar6 & 1) == 0) {
      if (param_2 != 0) {
        local_e0 = param_5;
        if (param_5 == 0) {
          if (*(int *)(DAT_09191798 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          puVar9 = *(undefined8 **)(DAT_09191798 + 0xb8);
          local_e0 = puVar9[1];
          if (local_e0 == 0) {
            if (*(int *)(DAT_09191798 + 0xe4) == 0) {
              FUN_03f5c424();
              puVar9 = *(undefined8 **)(DAT_09191798 + 0xb8);
            }
            uVar15 = *puVar9;
            local_e0 = thunk_FUN_03f9944c(DAT_09177b40);
            FUN_05301018(local_e0,uVar15,DAT_091eb998,0);
            plVar7 = (long *)(*(long *)(DAT_09191798 + 0xb8) + 8);
            *plVar7 = local_e0;
            thunk_FUN_03f5d7b8(plVar7,local_e0);
          }
        }
        if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        iVar2 = System_Math__Max(1,param_3,0);
        uVar15 = System_Linq_Enumerable__Range(0,iVar2,0);
        if (*(int *)(DAT_09191798 + 0xe4) == 0) {
          FUN_03f5c424(DAT_09191798);
        }
        puVar9 = *(undefined8 **)(DAT_09191798 + 0xb8);
        lVar17 = puVar9[2];
        if (lVar17 == 0) {
          if (*(int *)(DAT_09191798 + 0xe4) == 0) {
            FUN_03f5c424(DAT_09191798);
            puVar9 = *(undefined8 **)(DAT_09191798 + 0xb8);
          }
          uVar18 = *puVar9;
          lVar17 = thunk_FUN_03f9944c(DAT_09178b70);
          FUN_0531612c(lVar17,uVar18,DAT_091eb9a0,0);
          plVar7 = (long *)(*(long *)(DAT_09191798 + 0xb8) + 0x10);
          *plVar7 = lVar17;
          thunk_FUN_03f5d7b8(plVar7,lVar17);
        }
        uVar15 = FUN_04af36b8(uVar15,lVar17,DAT_091ca528);
        lVar17 = FUN_04b08b78(uVar15,DAT_091cb098);
        plVar7 = (long *)CookingGraph_IngredientQueueGenerator__PickupSequence(param_1,param_2);
        if (plVar7 != (long *)0x0) {
          iVar16 = 0;
LAB_04436710:
          lVar10 = *plVar7;
          uVar6 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar6 != 0) {
            piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == DAT_0917b358) {
                puVar9 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
                goto LAB_0443675c;
              }
              uVar6 = uVar6 - 1;
              piVar13 = piVar13 + 4;
            } while (uVar6 != 0);
          }
          puVar9 = (undefined8 *)FUN_03f95da8(plVar7,DAT_0917b358,0);
LAB_0443675c:
          iVar3 = (*(code *)*puVar9)(plVar7,puVar9[1]);
          if (iVar16 < iVar3) {
            lVar10 = *plVar7;
            uVar6 = (ulong)*(ushort *)(lVar10 + 0x12e);
            if (uVar6 != 0) {
              piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
              do {
                if (*(long *)(piVar13 + -2) == DAT_0917b4f0) {
                  puVar9 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
                  goto LAB_044367bc;
                }
                uVar6 = uVar6 - 1;
                piVar13 = piVar13 + 4;
              } while (uVar6 != 0);
            }
            puVar9 = (undefined8 *)FUN_03f95da8(plVar7,DAT_0917b4f0,0);
LAB_044367bc:
            uVar15 = (*(code *)*puVar9)(plVar7,iVar16,puVar9[1]);
            if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
              FUN_03f5c424(DAT_09188ad0);
            }
            uVar6 = UnityEngine_Object__op_Inequality(uVar15,0,0);
            if ((uVar6 & 1) != 0) {
              if (((param_1 == 0) || (*(long *)(param_1 + 0x30) == 0)) ||
                 (lVar10 = *(long *)(*(long *)(param_1 + 0x30) + 0x10), lVar10 == 0))
              goto LAB_04436d44;
              iVar3 = FUN_057e1a08(lVar10,uVar15,DAT_091ada20);
              if (-1 < iVar3) {
                if (lVar17 == 0) goto LAB_04436d44;
                iVar3 = 0;
                if (iVar2 != 0) {
                  iVar3 = iVar16 / iVar2;
                }
                lVar8 = FUN_057e0998(lVar17,iVar16 - iVar3 * iVar2,DAT_091aa668);
                lVar10 = DAT_091ada00;
                if (lVar8 == 0) goto LAB_04436d44;
                lVar11 = *(long *)(lVar8 + 0x10);
                *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
                if (lVar11 == 0) goto LAB_04436d44;
                uVar1 = *(uint *)(lVar8 + 0x18);
                if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                  *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                  puVar9 = (undefined8 *)(lVar11 + (long)(int)uVar1 * 8 + 0x20);
                  *puVar9 = uVar15;
                  thunk_FUN_03f5d7b8(puVar9,uVar15);
                }
                else {
                  FUN_057e0c68(lVar8,uVar15,
                               *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
                }
              }
            }
            iVar16 = iVar16 + 1;
            goto LAB_04436710;
          }
          if (lVar17 == 0) goto LAB_04436d44;
          FUN_057e185c(&local_b8,lVar17,DAT_091aa660);
          local_70 = local_a8;
          puStack_78 = puStack_b0;
          local_80 = local_b8;
          local_b8 = 0;
          puStack_b0 = &local_80;
          while (uVar6 = FUN_071bd28c(&local_80,DAT_091a1de8), lVar10 = local_70, (uVar6 & 1) != 0)
          {
            lVar8 = *plVar14;
            if (lVar8 != 0) {
              if (*(int *)(lVar8 + 0x10) == 0) {
                if (0 < *(int *)(lVar8 + 0x14)) {
                  lVar8 = *(long *)(lVar5 + 0x18);
                  if (lVar8 == 0) {
                    lVar8 = thunk_FUN_03f9944c(DAT_09178bd0);
                    FUN_05315cf4(lVar8,lVar5,DAT_091eb9b8,0);
                    *(long *)(lVar5 + 0x18) = lVar8;
                    thunk_FUN_03f5d7b8(lVar5 + 0x18,lVar8);
                  }
                  FUN_04bb65b4(lVar10,lVar8,local_e0,DAT_091cfe08);
                }
              }
              else {
                lVar8 = thunk_FUN_03f9944c(DAT_091917a8);
                System_Object___ctor(lVar8,0);
                if (*plVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                lVar11 = *(long *)(*plVar14 + 0x18);
                if (lVar11 == 0) {
                  lVar11 = thunk_FUN_03f9944c(DAT_09184bb0);
                  CookingGraph_GenerationCurve___ctor();
                }
                if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                *(long *)(lVar8 + 0x10) = lVar11;
                thunk_FUN_03f5d7b8((long *)(lVar8 + 0x10),lVar11);
                uVar15 = DAT_09178bd0;
                if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                *(int *)(lVar8 + 0x18) = *(int *)(lVar10 + 0x18) + -1;
                uVar15 = thunk_FUN_03f9944c(uVar15);
                FUN_05315cf4(uVar15,lVar8,DAT_091eb9c0,0);
                FUN_04bb65b4(lVar10,uVar15,local_e0,DAT_091cfe08);
              }
            }
          }
          FUN_071bd288(&local_80,DAT_091a1de0);
          lVar5 = thunk_FUN_03f9944c(DAT_09186c18);
          CookingGraph_IngredientQueueData___ctor();
          FUN_057e185c(&local_b8,lVar17,DAT_091aa660);
          local_70 = local_a8;
          puStack_78 = puStack_b0;
          local_80 = local_b8;
          do {
            uVar6 = FUN_071bd28c(&local_80,DAT_091a1de8);
            lVar17 = local_70;
            if ((uVar6 & 1) == 0) {
              FUN_071bd288(&local_80,DAT_091a1de0);
              return lVar5;
            }
            lVar10 = thunk_FUN_03f9944c(DAT_09186c10);
            CookingGraph_IngredientQueueColumnData___ctor();
            if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            FUN_057e185c(&local_b8,lVar17,DAT_091ada18);
            local_a0 = local_b8;
            local_b8 = 0;
            puStack_98 = puStack_b0;
            local_90 = local_a8;
            puStack_b0 = &local_a0;
            while (uVar6 = FUN_071bd28c(&local_a0,DAT_091a3388), lVar17 = local_90, (uVar6 & 1) != 0
                  ) {
              if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              if (*(long *)(param_1 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              lVar8 = *(long *)(*(long *)(param_1 + 0x30) + 0x10);
              if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              uVar4 = FUN_057e1a08(lVar8,local_90,DAT_091ada20);
              if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              lVar11 = *(long *)(lVar10 + 0x10);
              lVar8 = thunk_FUN_03f9944c(DAT_09189918);
              CookingGraph_QueueItemData___ctor();
              if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              *(long *)(lVar8 + 0x20) = lVar17;
              *(undefined4 *)(lVar8 + 0x10) = 0;
              *(undefined4 *)(lVar8 + 0x14) = uVar4;
              *(undefined4 *)(lVar8 + 0x1c) = uVar4;
              thunk_FUN_03f5d7b8((long *)(lVar8 + 0x20),lVar17);
              lVar17 = DAT_091af4c8;
              if (lVar11 == 0) {
LAB_04436c80:
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              lVar12 = *(long *)(lVar11 + 0x10);
              *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
              if (lVar12 == 0) goto LAB_04436c80;
              uVar1 = *(uint *)(lVar11 + 0x18);
              if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                plVar14 = (long *)(lVar12 + (long)(int)uVar1 * 8 + 0x20);
                *plVar14 = lVar8;
                thunk_FUN_03f5d7b8(plVar14,lVar8);
              }
              else {
                FUN_057e0c68(lVar11,lVar8,
                             *(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
              }
            }
            FUN_071bd288(&local_a0,DAT_091a3380);
            lVar17 = DAT_091ada68;
            if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            lVar8 = *(long *)(lVar5 + 0x10);
            if (lVar8 == 0) {
LAB_04436d48:
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            lVar11 = *(long *)(lVar8 + 0x10);
            *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
            if (lVar11 == 0) goto LAB_04436d48;
            uVar1 = *(uint *)(lVar8 + 0x18);
            if (uVar1 < *(uint *)(lVar11 + 0x18)) {
              *(uint *)(lVar8 + 0x18) = uVar1 + 1;
              plVar14 = (long *)(lVar11 + (long)(int)uVar1 * 8 + 0x20);
              *plVar14 = lVar10;
              thunk_FUN_03f5d7b8(plVar14,lVar10);
            }
            else {
              FUN_057e0c68(lVar8,lVar10,
                           *(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
            }
          } while( true );
        }
        goto LAB_04436d44;
      }
      thunk_FUN_03fc39d4(&DAT_09181550);
      uVar15 = thunk_FUN_03f9944c();
      puVar9 = (undefined8 *)&DAT_0921a088;
    }
    else {
      thunk_FUN_03fc39d4(&DAT_09181550);
      uVar15 = thunk_FUN_03f9944c();
      puVar9 = &DAT_0921c7b8;
    }
    uVar18 = thunk_FUN_03fc39d4(puVar9);
    System_ArgumentNullException___ctor(uVar15,uVar18,0);
    uVar18 = thunk_FUN_03fc39d4(&DAT_091cfe10);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar15,uVar18);
  }
LAB_04436d44:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

