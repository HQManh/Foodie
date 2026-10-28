// rea decompile_all
// name: CakeOrder.UI.UIListUpgradeBuildingOptionCards$$GetUpgradableItems
// address: 0x42c9d48
// body: available
// range: 0x42c9d48-0x42c9f33 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42c9f24 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42c9f28 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42c9f2c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42c9f30 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long CakeOrder_UI_UIListUpgradeBuildingOptionCards__GetUpgradableItems(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined8 local_80;
  undefined8 *puStack_78;
  long lStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  long local_50;
  undefined8 uStack_48;
  undefined8 local_38;
  
  if ((DAT_09517366 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a00a8);
    FUN_03f5c2a4(&DAT_091a1d50);
    FUN_03f5c2a4(&DAT_091a1d58);
    FUN_03f5c2a4(&DAT_091a1d60);
    FUN_03f5c2a4(&DAT_091a9308);
    FUN_03f5c2a4(&DAT_091b14d8);
    FUN_03f5c2a4(&DAT_091aa580);
    FUN_03f5c2a4(&DAT_091b14d0);
    FUN_03f5c2a4(&DAT_0917cf78);
    DAT_09517366 = 1;
  }
  local_38 = 0;
  uStack_58 = 0;
  local_60 = 0;
  uStack_48 = 0;
  local_50 = 0;
  lVar2 = thunk_FUN_03f9944c(DAT_0917cf78);
  FUN_057e0400(lVar2,DAT_091b14d0);
  if ((*(long *)(param_1 + 0x120) == 0) ||
     (lVar3 = CakeOrder_DataSO_MapUpgradeConfig__GetUpgradableParts(*(long *)(param_1 + 0x120),0),
     lVar3 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  FUN_05668c84(&local_80,lVar3,DAT_091aa580);
  local_60 = local_80;
  local_80 = 0;
  uStack_58 = puStack_78;
  uStack_48 = uStack_68;
  local_50 = lStack_70;
  puStack_78 = &local_60;
  while( true ) {
    do {
      uVar4 = FUN_07181930(&local_60,DAT_091a1d58);
      if ((uVar4 & 1) == 0) {
        FUN_0718192c(&local_60,DAT_091a1d50);
        return lVar2;
      }
      if (local_50 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      if (*(long *)(param_1 + 0xf8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar4 = FUN_06fd9fbc(*(long *)(param_1 + 0xf8),*(undefined8 *)(local_50 + 0x18),&local_38,
                           DAT_091a00a8);
      lVar3 = DAT_091b14d8;
    } while ((uVar4 & 1) == 0);
    if (lVar2 == 0) break;
    lVar5 = *(long *)(lVar2 + 0x10);
    *(int *)(lVar2 + 0x1c) = *(int *)(lVar2 + 0x1c) + 1;
    if (lVar5 == 0) break;
    uVar1 = *(uint *)(lVar2 + 0x18);
    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
      *(uint *)(lVar2 + 0x18) = uVar1 + 1;
      *(undefined8 *)(lVar5 + (long)(int)uVar1 * 8 + 0x20) = local_38;
      thunk_FUN_03f5d7b8();
    }
    else {
      FUN_057e0c68(lVar2,local_38,*(undefined8 *)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70))
      ;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

