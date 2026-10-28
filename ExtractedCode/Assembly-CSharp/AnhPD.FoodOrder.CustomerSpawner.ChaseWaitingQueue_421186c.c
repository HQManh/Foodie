// rea decompile_all
// name: AnhPD.FoodOrder.CustomerSpawner$$ChaseWaitingQueue
// address: 0x421186c
// body: available
// range: 0x421186c-0x4211a73 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4211988 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4211a64 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4211a68 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4211a6c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4211a70 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_CustomerSpawner__ChaseWaitingQueue(long param_1)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  int iVar4;
  long lVar5;
  undefined8 local_88;
  undefined8 *puStack_80;
  long local_78;
  undefined8 local_70;
  undefined8 *puStack_68;
  long local_60;
  
  if ((DAT_09516c7a & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a5150);
    FUN_03f5c2a4(&DAT_091a5158);
    FUN_03f5c2a4(&DAT_091a5160);
    FUN_03f5c2a4(&DAT_091b2658);
    FUN_03f5c2a4(&DAT_091b2660);
    FUN_03f5c2a4(&DAT_091ac280);
    FUN_03f5c2a4(&DAT_091b2670);
    FUN_03f5c2a4(&DAT_091b2678);
    DAT_09516c7a = 1;
  }
  lVar2 = *(long *)(param_1 + 0x98);
  local_70 = 0;
  puStack_68 = (undefined8 *)0x0;
  local_60 = 0;
  if (lVar2 != 0) {
    if (*(int *)(lVar2 + 0x18) == 0) {
      return;
    }
    iVar4 = 0;
    do {
      if (*(int *)(lVar2 + 0x18) <= iVar4) {
        if (*(int *)(param_1 + 0x90) <= *(int *)(param_1 + 0x94)) {
          *(int *)(param_1 + 0x94) = *(int *)(param_1 + 0x94) + *(int *)(lVar2 + 0x18);
        }
        FUN_057e185c(&local_88,lVar2,DAT_091b2660);
        local_60 = local_78;
        puStack_68 = puStack_80;
        local_70 = local_88;
        local_88 = 0;
        puStack_80 = &local_70;
        while (uVar3 = FUN_071bd28c(&local_70,DAT_091a5158), lVar2 = local_60, (uVar3 & 1) != 0) {
          if (local_60 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          if (*(long *)(param_1 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          lVar5 = *(long *)(local_60 + 0x10);
          AnhPD_FoodOrder_CustomerLineLayout__EntryTargetWorldX();
          if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          AnhPD_FoodOrder_FCustomerLine__SetExitTargetX(lVar5);
          if (*(long *)(lVar2 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          AnhPD_FoodOrder_FCustomerLine__ChaseAway();
        }
        FUN_071bd288(&local_70,DAT_091a5150);
        lVar2 = *(long *)(param_1 + 0x98);
        if (lVar2 != 0) {
          iVar4 = *(int *)(lVar2 + 0x18);
          *(undefined4 *)(lVar2 + 0x18) = 0;
          *(int *)(lVar2 + 0x1c) = *(int *)(lVar2 + 0x1c) + 1;
          if (0 < iVar4) {
            System_Array__Clear(*(undefined8 *)(lVar2 + 0x10),0,iVar4,0);
          }
          AnhPD_FoodOrder_CustomerSpawner__RefreshPreviews(param_1);
          return;
        }
        break;
      }
      lVar5 = *(long *)(param_1 + 0x88);
      iVar1 = *(int *)(param_1 + 0x90);
      lVar2 = FUN_057e0998(lVar2,iVar4,DAT_091b2678);
      if ((lVar2 == 0) || (lVar5 == 0)) break;
      FUN_057e1b20(lVar5,iVar4 + iVar1,*(undefined8 *)(lVar2 + 0x18),DAT_091ac280);
      lVar2 = *(long *)(param_1 + 0x98);
      iVar4 = iVar4 + 1;
    } while (lVar2 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

