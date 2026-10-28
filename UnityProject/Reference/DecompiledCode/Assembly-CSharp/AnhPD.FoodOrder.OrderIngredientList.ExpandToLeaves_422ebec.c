// rea decompile_all
// name: AnhPD.FoodOrder.OrderIngredientList$$ExpandToLeaves
// address: 0x422ebec
// body: available
// range: 0x422ebec-0x422f167 inclusive
// range: 0x422f16c-0x422f16f inclusive
// range: 0x422f1c0-0x422f257 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x422f164 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x422f16c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x422f254 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_OrderIngredientList__ExpandToLeaves
               (long param_1,long param_2,long param_3,long param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined8 **ppuVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  int iVar14;
  undefined8 **local_f8;
  undefined8 **ppuStack_f0;
  undefined8 **local_e8;
  undefined8 **local_e0;
  undefined8 **ppuStack_d8;
  undefined8 **local_d0;
  undefined8 **local_c0;
  undefined8 **ppuStack_b8;
  undefined8 **local_b0;
  undefined8 local_a0;
  undefined8 **ppuStack_98;
  undefined8 **local_90;
  undefined8 **local_88;
  undefined8 **local_80;
  undefined8 **ppuStack_78;
  undefined8 **local_70;
  
  if ((DAT_09516db0 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a4598);
    FUN_03f5c2a4(&DAT_091a45a0);
    FUN_03f5c2a4(&DAT_091a45a8);
    FUN_03f5c2a4(&DAT_091b0578);
    FUN_03f5c2a4(&DAT_091af048);
    FUN_03f5c2a4(&DAT_091ad850);
    FUN_03f5c2a4(&DAT_091af040);
    FUN_03f5c2a4(&DAT_091b0570);
    FUN_03f5c2a4(&DAT_091af050);
    FUN_03f5c2a4(&DAT_091b0588);
    FUN_03f5c2a4(&DAT_091b05a8);
    FUN_03f5c2a4(&DAT_091b0568);
    FUN_03f5c2a4(&DAT_091af038);
    FUN_03f5c2a4(&DAT_091b0558);
    FUN_03f5c2a4(&DAT_091b0608);
    FUN_03f5c2a4(&DAT_091b0610);
    FUN_03f5c2a4(&DAT_091af060);
    FUN_03f5c2a4(&DAT_0917c8f0);
    FUN_03f5c2a4(&DAT_0917cce8);
    DAT_09516db0 = 1;
  }
  local_e0 = (undefined8 ***)0x0;
  ppuStack_d8 = (undefined8 ***)0x0;
  local_d0 = (undefined8 ***)0x0;
  if (param_2 != 0) {
    uVar2 = *(undefined4 *)(param_2 + 0x18);
    lVar6 = thunk_FUN_03f9944c(DAT_0917cce8);
    FUN_057e0478(lVar6,uVar2,DAT_091b0568);
    uVar2 = *(undefined4 *)(param_2 + 0x18);
    lVar7 = thunk_FUN_03f9944c(DAT_0917c8f0);
    FUN_057f74ac(lVar7,uVar2,DAT_091af038);
    lVar8 = thunk_FUN_03f9944c(DAT_0917cce8);
    FUN_057e0400(lVar8,DAT_091b0558);
    if (*(int *)(param_2 + 0x18) < 1) {
      *(undefined4 *)(param_2 + 0x18) = 0;
      *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + 1;
    }
    else {
      if (lVar8 == 0) goto LAB_0422f254;
      iVar14 = 0;
      do {
        iVar1 = *(int *)(lVar8 + 0x18);
        *(undefined4 *)(lVar8 + 0x18) = 0;
        *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
        if (0 < iVar1) {
          System_Array__Clear(*(undefined8 *)(lVar8 + 0x10),0,iVar1,0);
        }
        uVar9 = FUN_057e0998(param_2,iVar14,DAT_091b0610);
        if (param_1 == 0) goto LAB_0422f254;
        uVar10 = AnhPD_FoodOrder_LevelInfo__TryCollectLeafInputs(param_1,uVar9,lVar8,0);
        if ((uVar10 & 1) == 0) {
          uVar9 = FUN_057e0998(param_2,iVar14,DAT_091b0610);
          lVar12 = DAT_091b0570;
          if (lVar6 == 0) goto LAB_0422f254;
          lVar13 = *(long *)(lVar6 + 0x10);
          *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
          if (lVar13 == 0) goto LAB_0422f254;
          uVar4 = *(uint *)(lVar6 + 0x18);
          if (uVar4 < *(uint *)(lVar13 + 0x18)) {
            *(uint *)(lVar6 + 0x18) = uVar4 + 1;
            *(undefined8 *)(lVar13 + (long)(int)uVar4 * 8 + 0x20) = uVar9;
            thunk_FUN_03f5d7b8();
          }
          else {
            FUN_057e0c68(lVar6,uVar9,
                         *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
          }
          if ((param_3 == 0) ||
             (FUN_057f79cc(&local_c0,param_3,iVar14,DAT_091af060), lVar12 = DAT_091af040, lVar7 == 0
             )) goto LAB_0422f254;
          lVar13 = *(long *)(lVar7 + 0x10);
          *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
          if (lVar13 == 0) goto LAB_0422f254;
          uVar4 = *(uint *)(lVar7 + 0x18);
          if (uVar4 < *(uint *)(lVar13 + 0x18)) {
            lVar13 = lVar13 + (long)(int)uVar4 * 0x18;
            *(uint *)(lVar7 + 0x18) = uVar4 + 1;
            *(undefined8 ***)(lVar13 + 0x30) = local_b0;
            *(undefined8 ***)(lVar13 + 0x28) = ppuStack_b8;
            *(undefined8 ***)(lVar13 + 0x20) = local_c0;
          }
          else {
            ppuStack_98 = ppuStack_b8;
            local_a0 = (undefined8 ***)local_c0;
            local_90 = local_b0;
            FUN_057f7d3c(lVar7,&local_a0,
                         *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
          }
        }
        else {
          if ((lVar6 == 0) || (param_3 == 0)) goto LAB_0422f254;
          uVar2 = *(undefined4 *)(lVar6 + 0x18);
          uVar3 = *(undefined4 *)(lVar8 + 0x18);
          FUN_057f79cc(&local_f8,param_3,iVar14,DAT_091af060);
          if (param_4 == 0) goto LAB_0422f254;
          lVar12 = *(long *)(param_4 + 0x10);
          ppuStack_b8 = ppuStack_f0;
          local_c0 = local_f8;
          local_b0 = local_e8;
          *(int *)(param_4 + 0x1c) = *(int *)(param_4 + 0x1c) + 1;
          if (lVar12 == 0) goto LAB_0422f254;
          uVar4 = *(uint *)(param_4 + 0x18);
          if (uVar4 < *(uint *)(lVar12 + 0x18)) {
            lVar12 = lVar12 + (long)(int)uVar4 * 0x20;
            *(uint *)(param_4 + 0x18) = uVar4 + 1;
            *(undefined4 *)(lVar12 + 0x20) = uVar2;
            *(undefined4 *)(lVar12 + 0x24) = uVar3;
            *(undefined8 ***)(lVar12 + 0x30) = ppuStack_f0;
            *(undefined8 ***)(lVar12 + 0x28) = local_f8;
            *(undefined8 ***)(lVar12 + 0x38) = local_e8;
          }
          else {
            local_a0 = (undefined8 ***)CONCAT44(uVar3,uVar2);
            local_90 = ppuStack_f0;
            ppuStack_98 = local_f8;
            local_88 = local_e8;
            FUN_057811a8(param_4,&local_a0,
                         *(undefined8 *)(*(long *)(*(long *)(DAT_091ad850 + 0x20) + 0xc0) + 0x70));
          }
          FUN_057e185c(&local_a0,lVar8,DAT_091b05a8);
          local_d0 = local_90;
          ppuStack_b8 = &local_e0;
          ppuStack_d8 = ppuStack_98;
          local_e0 = local_a0;
          local_c0 = (undefined8 ***)0x0;
          while (uVar10 = FUN_071bd28c(&local_e0,DAT_091a45a0), ppuVar5 = local_d0,
                lVar12 = DAT_091b0570, (uVar10 & 1) != 0) {
            lVar13 = *(long *)(lVar6 + 0x10);
            *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
            if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            uVar4 = *(uint *)(lVar6 + 0x18);
            if (uVar4 < *(uint *)(lVar13 + 0x18)) {
              *(uint *)(lVar6 + 0x18) = uVar4 + 1;
              plVar11 = (long *)(lVar13 + (long)(int)uVar4 * 8 + 0x20);
              *plVar11 = (long)local_d0;
              thunk_FUN_03f5d7b8(plVar11,local_d0);
            }
            else {
              FUN_057e0c68(lVar6,local_d0,
                           *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
            }
            AnhPD_FoodOrder_PieceLookup__PiecesOfAnyRole(&local_a0,ppuVar5,0);
            lVar12 = DAT_091af040;
            if (lVar7 == 0) {
LAB_0422f164:
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            lVar13 = *(long *)(lVar7 + 0x10);
            *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
            if (lVar13 == 0) goto LAB_0422f164;
            uVar4 = *(uint *)(lVar7 + 0x18);
            if (uVar4 < *(uint *)(lVar13 + 0x18)) {
              lVar13 = lVar13 + (long)(int)uVar4 * 0x18;
              *(uint *)(lVar7 + 0x18) = uVar4 + 1;
              *(undefined8 ***)(lVar13 + 0x28) = ppuStack_98;
              *(undefined8 ****)(lVar13 + 0x20) = local_a0;
              *(undefined8 ***)(lVar13 + 0x30) = local_90;
            }
            else {
              ppuStack_78 = ppuStack_98;
              local_80 = local_a0;
              local_70 = local_90;
              FUN_057f7d3c(lVar7,&local_80,
                           *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
            }
          }
          FUN_071bd288(&local_e0,DAT_091a4598);
        }
        iVar1 = *(int *)(param_2 + 0x18);
        iVar14 = iVar14 + 1;
      } while (iVar14 < iVar1);
      *(undefined4 *)(param_2 + 0x18) = 0;
      *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + 1;
      if (0 < iVar1) {
        System_Array__Clear(*(undefined8 *)(param_2 + 0x10),0,iVar1,0);
      }
    }
    FUN_057e0e78(param_2,lVar6,DAT_091b0578);
    uVar9 = DAT_091af048;
    if (param_3 != 0) {
      *(undefined4 *)(param_3 + 0x18) = 0;
      *(int *)(param_3 + 0x1c) = *(int *)(param_3 + 0x1c) + 1;
      FUN_057f7f98(param_3,lVar7,uVar9);
      return;
    }
  }
LAB_0422f254:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

