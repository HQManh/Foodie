// rea decompile_all
// name: CakeOrder.UI.UIHeartCounter$$OnDestroy
// address: 0x42b9eb4
// body: available
// range: 0x42b9eb4-0x42ba17b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42ba178 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_UI_UIHeartCounter__OnDestroy(long param_1)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  int *piVar6;
  undefined8 local_68;
  undefined8 uStack_60;
  long *local_58;
  
  if ((DAT_095172e4 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180e78);
    FUN_03f5c2a4(&DAT_091a3020);
    FUN_03f5c2a4(&DAT_091a3028);
    FUN_03f5c2a4(&DAT_091a3030);
    FUN_03f5c2a4(&DAT_09185f10);
    FUN_03f5c2a4(&DAT_091ad428);
    FUN_03f5c2a4(&DAT_091b4970);
    FUN_03f5c2a4(&DAT_091b4978);
    FUN_03f5c2a4(&DAT_09191518);
    FUN_03f5c2a4(&DAT_091dc9c8);
    FUN_03f5c2a4(&DAT_091dc9d0);
    DAT_095172e4 = 1;
  }
  local_68 = 0;
  uStack_60 = 0;
  local_58 = (long *)0x0;
  uVar2 = FUN_05a8eda4(DAT_091b4978);
  if ((uVar2 & 1) == 0) {
LAB_042ba07c:
    if (*(long *)(param_1 + 0x88) != 0) {
      FUN_057e185c(&local_68,*(long *)(param_1 + 0x88),DAT_091ad428);
      while (uVar2 = FUN_071bd28c(&local_68,DAT_091a3028), plVar1 = local_58, (uVar2 & 1) != 0) {
        if (local_58 != (long *)0x0) {
          uVar4 = thunk_FUN_03f9944c(DAT_09191518);
          CakeOrder_DataSO_IItemCurrencyHoldingSource_OnAmountChangedDelegate___ctor
                    (uVar4,param_1,DAT_091dc9c8,0);
          lVar3 = *plVar1;
          uVar2 = (ulong)*(ushort *)(lVar3 + 0x12e);
          if (uVar2 != 0) {
            piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
            do {
              if (*(long *)(piVar6 + -2) == DAT_09185f10) {
                puVar5 = (undefined8 *)(lVar3 + (long)(*piVar6 + 3) * 0x10 + 0x138);
                goto LAB_042ba13c;
              }
              uVar2 = uVar2 - 1;
              piVar6 = piVar6 + 4;
            } while (uVar2 != 0);
          }
          puVar5 = (undefined8 *)FUN_03f95da8(plVar1,DAT_09185f10,3);
LAB_042ba13c:
          (*(code *)*puVar5)(plVar1,uVar4,puVar5[1]);
        }
      }
      FUN_071bd288(&local_68,DAT_091a3020);
    }
    return;
  }
  lVar3 = *(long *)(DAT_091b4970 + 0x20);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_03f95a6c();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x10);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_03f95a6c();
  }
  lVar3 = **(long **)(lVar3 + 0xb8);
  uVar4 = thunk_FUN_03f9944c(DAT_09180e78);
  System_Action___ctor(uVar4,param_1,DAT_091dc9d0,0);
  if (lVar3 != 0) {
    CakeOrder_HeartSystem_HeartSystemController__remove_onUnlimitedHeartActivated(lVar3,uVar4,0);
    lVar3 = *(long *)(DAT_091b4970 + 0x20);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_03f95a6c();
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x10);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_03f95a6c();
    }
    lVar3 = **(long **)(lVar3 + 0xb8);
    uVar4 = thunk_FUN_03f9944c(DAT_09191518);
    CakeOrder_DataSO_IItemCurrencyHoldingSource_OnAmountChangedDelegate___ctor
              (uVar4,param_1,DAT_091dc9c8,0);
    if (lVar3 != 0) {
      CakeOrder_HeartSystem_HeartSystemController__remove_onAmountChanged(lVar3,uVar4,0);
      goto LAB_042ba07c;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

