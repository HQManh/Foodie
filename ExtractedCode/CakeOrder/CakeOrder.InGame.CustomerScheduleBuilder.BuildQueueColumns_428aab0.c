// rea decompile_all
// name: CakeOrder.InGame.CustomerScheduleBuilder$$BuildQueueColumns
// address: 0x428aab0
// body: available
// range: 0x428aab0-0x428ae93 inclusive
// range: 0x428aec8-0x428af5f inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x428ae90 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x428af40 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x428af48 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x428af4c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x428af50 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x428af58 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x428af5c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0428adcc) */
/* WARNING: Removing unreachable block (ram,0x0428af44) */
/* WARNING: Removing unreachable block (ram,0x0428aef0) */

undefined8
CakeOrder_InGame_CustomerScheduleBuilder__BuildQueueColumns(undefined8 param_1,long param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  long lVar10;
  undefined8 local_100;
  undefined8 *puStack_f8;
  undefined8 local_f0;
  long local_e8;
  undefined8 *local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  long local_c8;
  undefined8 local_c0;
  undefined8 *puStack_b8;
  undefined8 local_b0;
  undefined8 local_a0;
  undefined8 uStack_98;
  long local_90;
  undefined8 local_80;
  undefined8 uStack_78;
  long local_70;
  
  if ((DAT_0951716e & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a3ec0);
    FUN_03f5c2a4(&DAT_091a3398);
    FUN_03f5c2a4(&DAT_091a33a0);
    FUN_03f5c2a4(&DAT_091a3ec8);
    FUN_03f5c2a4(&DAT_091a33a8);
    FUN_03f5c2a4(&DAT_091a3ed0);
    FUN_03f5c2a4(&DAT_091b0018);
    FUN_03f5c2a4(&DAT_091ad9b0);
    FUN_03f5c2a4(&DAT_091af4d0);
    FUN_03f5c2a4(&DAT_091ada70);
    FUN_03f5c2a4(&DAT_091ad9b8);
    FUN_03f5c2a4(&DAT_091b0020);
    FUN_03f5c2a4(&DAT_091b0010);
    FUN_03f5c2a4(&DAT_091ad9a8);
    FUN_03f5c2a4(&DAT_091ad9c0);
    FUN_03f5c2a4(&DAT_091b0028);
    FUN_03f5c2a4(&DAT_091af4d8);
    FUN_03f5c2a4(&DAT_091ada78);
    FUN_03f5c2a4(&DAT_0917c488);
    FUN_03f5c2a4(&DAT_0917cbe0);
    FUN_03f5c2a4(&DAT_0918ac88);
    DAT_0951716e = 1;
  }
  local_a0 = 0;
  uStack_98 = 0;
  local_90 = 0;
  local_c0 = 0;
  puStack_b8 = (undefined8 *)0x0;
  local_b0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_c8 = 0;
  if ((param_2 != 0) && (iVar1 = *(int *)(param_2 + 0x18), iVar1 != 0)) {
    lVar4 = thunk_FUN_03f9944c(DAT_0917cbe0);
    FUN_057e0478(lVar4,iVar1,DAT_091b0010);
    FUN_057e185c(&local_80,param_2,DAT_091ada70);
    uStack_98 = uStack_78;
    local_a0 = local_80;
    local_90 = local_70;
    local_e0 = &local_a0;
    local_e8 = 0;
LAB_0428ac88:
    uVar5 = FUN_071bd28c(&local_a0,DAT_091a33a0);
    lVar7 = local_90;
    lVar6 = local_e8;
    if ((uVar5 & 1) != 0) {
      if ((local_90 != 0) && (*(long *)(local_90 + 0x10) != 0)) {
        uVar2 = *(undefined4 *)(*(long *)(local_90 + 0x10) + 0x18);
        lVar6 = thunk_FUN_03f9944c(DAT_0917c488);
        FUN_05785f90(lVar6,uVar2,DAT_091ad9a8);
        if (*(long *)(lVar7 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        FUN_057e185c(&local_100,*(long *)(lVar7 + 0x10),DAT_091af4d0);
        local_c0 = local_100;
        local_100 = 0;
        puStack_b8 = puStack_f8;
        local_b0 = local_f0;
        puStack_f8 = &local_c0;
LAB_0428ad04:
        uVar5 = FUN_071bd28c(&local_c0,DAT_091a3ec8);
        if ((uVar5 & 1) != 0) {
          uVar5 = CakeOrder_InGame_CustomerScheduleBuilder__TryBuildQueueItem
                            (param_1,local_b0,&local_d8);
          lVar7 = DAT_091ad9b0;
          if ((uVar5 & 1) != 0) {
            if (lVar6 != 0) {
              lVar10 = *(long *)(lVar6 + 0x10);
              *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
              if (lVar10 != 0) {
                uVar3 = *(uint *)(lVar6 + 0x18);
                if (uVar3 < *(uint *)(lVar10 + 0x18)) {
                  lVar10 = lVar10 + (long)(int)uVar3 * 0x18;
                  *(uint *)(lVar6 + 0x18) = uVar3 + 1;
                  *(long *)(lVar10 + 0x30) = local_c8;
                  *(undefined8 *)(lVar10 + 0x28) = uStack_d0;
                  *(undefined8 *)(lVar10 + 0x20) = local_d8;
                  thunk_FUN_03f5d7b8(lVar10 + 0x28,0);
                }
                else {
                  uStack_78 = uStack_d0;
                  local_80 = local_d8;
                  local_70 = local_c8;
                  FUN_0578683c(lVar6,&local_80,
                               *(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
                }
                goto LAB_0428ad04;
              }
            }
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          goto LAB_0428ad04;
        }
        FUN_071bd288(&local_c0,DAT_091a3ec0);
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        if (0 < *(int *)(lVar6 + 0x18)) {
          lVar7 = thunk_FUN_03f9944c(DAT_0918ac88);
          CakeOrder_SingleIngredientQueueInLevel___ctor(lVar7,0);
          uVar8 = FUN_057887fc(lVar6,DAT_091ad9b8);
          if (lVar7 != 0) {
            *(undefined8 *)(lVar7 + 0x10) = uVar8;
            thunk_FUN_03f5d7b8();
            lVar6 = DAT_091b0018;
            if (lVar4 != 0) {
              lVar10 = *(long *)(lVar4 + 0x10);
              *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
              if (lVar10 != 0) {
                uVar3 = *(uint *)(lVar4 + 0x18);
                if (uVar3 < *(uint *)(lVar10 + 0x18)) {
                  *(uint *)(lVar4 + 0x18) = uVar3 + 1;
                  plVar9 = (long *)(lVar10 + (long)(int)uVar3 * 8 + 0x20);
                  *plVar9 = lVar7;
                  thunk_FUN_03f5d7b8(plVar9,lVar7);
                }
                else {
                  FUN_057e0c68(lVar4,lVar7,
                               *(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
                }
                goto LAB_0428ac88;
              }
            }
          }
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
      }
      goto LAB_0428ac88;
    }
    FUN_071bd288(local_e0,DAT_091a3398);
    if (lVar6 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c548(lVar6);
    }
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (0 < *(int *)(lVar4 + 0x18)) {
      uVar8 = FUN_057e28a4(lVar4,DAT_091b0020);
      return uVar8;
    }
  }
  return 0;
}

