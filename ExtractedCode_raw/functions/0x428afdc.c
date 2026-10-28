// rea decompile_all
// name: CakeOrder.InGame.CustomerScheduleBuilder$$BuildSlotGroups
// address: 0x428afdc
// body: available
// range: 0x428afdc-0x428b377 inclusive
// range: 0x428b3a8-0x428b463 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x428b374 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x428b420 to 0x57e28a4 FUN_057e28a4 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x428b444 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x428b44c to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x428b450 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x428b454 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x428b458 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x428b460 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0428b2b0) */
/* WARNING: Removing unreachable block (ram,0x0428b448) */
/* WARNING: Removing unreachable block (ram,0x0428b45c) */

void CakeOrder_InGame_CustomerScheduleBuilder__BuildSlotGroups(long param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 local_b8;
  undefined8 *puStack_b0;
  long local_a8;
  undefined8 local_a0;
  undefined8 *puStack_98;
  long local_90;
  undefined8 local_80;
  undefined8 *puStack_78;
  long local_70;
  
  if ((DAT_09517171 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a3ea8);
    FUN_03f5c2a4(&DAT_091a3e90);
    FUN_03f5c2a4(&DAT_091a3e98);
    FUN_03f5c2a4(&DAT_091a3eb0);
    FUN_03f5c2a4(&DAT_091a3ea0);
    FUN_03f5c2a4(&DAT_091a3eb8);
    FUN_03f5c2a4(&DAT_09186c28);
    FUN_03f5c2a4(&DAT_091ada88);
    FUN_03f5c2a4(&DAT_091b1a08);
    FUN_03f5c2a4(&DAT_091af4a8);
    FUN_03f5c2a4(&DAT_091af488);
    FUN_03f5c2a4(&DAT_091b1a20);
    FUN_03f5c2a4(&DAT_091ada90);
    FUN_03f5c2a4(&DAT_091ada80);
    FUN_03f5c2a4(&DAT_091b1a00);
    FUN_03f5c2a4(&DAT_091af490);
    FUN_03f5c2a4(&DAT_091b1a28);
    FUN_03f5c2a4(&DAT_0917d058);
    FUN_03f5c2a4(&DAT_0917c4b8);
    DAT_09517171 = 1;
  }
  local_80 = 0;
  puStack_78 = (undefined8 *)0x0;
  local_70 = 0;
  local_a0 = 0;
  puStack_98 = (undefined8 *)0x0;
  local_90 = 0;
  lVar5 = thunk_FUN_03f9944c(DAT_0917c4b8);
  FUN_057e0400(lVar5,DAT_091ada80);
  if (param_1 == 0) {
    if (lVar5 != 0) {
      FUN_057e28a4(lVar5,DAT_091ada90);
      return;
    }
  }
  else {
    FUN_057e185c(&local_b8,param_1,DAT_091af4a8);
    local_70 = local_a8;
    puStack_78 = puStack_b0;
    local_80 = local_b8;
LAB_0428b18c:
    uVar6 = FUN_071bd28c(&local_80,DAT_091a3eb0);
    lVar8 = local_70;
    if ((uVar6 & 1) != 0) {
      if (((local_70 != 0) && (*(int *)(local_70 + 0x10) == param_2)) &&
         (*(long *)(local_70 + 0x18) != 0)) {
        uVar1 = *(undefined4 *)(*(long *)(local_70 + 0x18) + 0x18);
        lVar7 = thunk_FUN_03f9944c(DAT_0917d058);
        FUN_058ae790(lVar7,uVar1,DAT_091b1a00);
        if (*(long *)(lVar8 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        FUN_057e185c(&local_b8,*(long *)(lVar8 + 0x18),DAT_091af488);
        local_a0 = local_b8;
        local_b8 = 0;
        puStack_98 = puStack_b0;
        local_90 = local_a8;
        puStack_b0 = &local_a0;
LAB_0428b20c:
        uVar6 = FUN_071bd28c(&local_a0,DAT_091a3e98);
        lVar8 = DAT_091b1a08;
        if ((uVar6 & 1) != 0) {
          if (((local_90 != 0) && (iVar2 = *(int *)(local_90 + 0x10), -1 < iVar2)) &&
             (iVar3 = *(int *)(local_90 + 0x14), -1 < iVar3)) {
            if (lVar7 != 0) {
              lVar11 = *(long *)(lVar7 + 0x10);
              *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
              if (lVar11 != 0) {
                uVar4 = *(uint *)(lVar7 + 0x18);
                uVar10 = CONCAT44(iVar3,iVar2);
                if (uVar4 < *(uint *)(lVar11 + 0x18)) {
                  *(uint *)(lVar7 + 0x18) = uVar4 + 1;
                  *(undefined8 *)(lVar11 + (long)(int)uVar4 * 8 + 0x20) = uVar10;
                }
                else {
                  FUN_058aefa4(lVar7,uVar10,
                               *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
                }
                goto LAB_0428b20c;
              }
            }
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          goto LAB_0428b20c;
        }
        FUN_071bd288(&local_a0,DAT_091a3e90);
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        if (0 < *(int *)(lVar7 + 0x18)) {
          lVar8 = thunk_FUN_03f9944c(DAT_09186c28);
          CakeOrder_IngredientSlotGroup___ctor(lVar8,0);
          uVar10 = FUN_058b0b44(lVar7,DAT_091b1a20);
          if (lVar8 != 0) {
            *(undefined8 *)(lVar8 + 0x10) = uVar10;
            thunk_FUN_03f5d7b8();
            lVar7 = DAT_091ada88;
            if (lVar5 != 0) {
              lVar11 = *(long *)(lVar5 + 0x10);
              *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
              if (lVar11 != 0) {
                uVar4 = *(uint *)(lVar5 + 0x18);
                if (uVar4 < *(uint *)(lVar11 + 0x18)) {
                  *(uint *)(lVar5 + 0x18) = uVar4 + 1;
                  plVar9 = (long *)(lVar11 + (long)(int)uVar4 * 8 + 0x20);
                  *plVar9 = lVar8;
                  thunk_FUN_03f5d7b8(plVar9,lVar8);
                }
                else {
                  FUN_057e0c68(lVar5,lVar8,
                               *(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
                }
                goto LAB_0428b18c;
              }
            }
          }
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
      }
      goto LAB_0428b18c;
    }
    FUN_071bd288(&local_80,DAT_091a3ea8);
    if (lVar5 != 0) {
      FUN_057e28a4(lVar5,DAT_091ada90);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

