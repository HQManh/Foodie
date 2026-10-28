// rea decompile_all
// name: CakeOrder.DataSO.MapUpgradeConfig$$GetBoughtLookup
// address: 0x42fbcd0
// body: available
// range: 0x42fbcd0-0x42fbed7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42fbed0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42fbed4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 CakeOrder_DataSO_MapUpgradeConfig__GetBoughtLookup(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  if ((DAT_09517526 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a4598);
    FUN_03f5c2a4(&DAT_091a45a0);
    FUN_03f5c2a4(&DAT_091a45a8);
    FUN_03f5c2a4(&DAT_091a86b8);
    FUN_03f5c2a4(&DAT_091a86c0);
    FUN_03f5c2a4(&DAT_091b05a8);
    FUN_03f5c2a4(&DAT_09187db8);
    FUN_03f5c2a4(&DAT_091b4a58);
    FUN_03f5c2a4(&DAT_091b4a60);
    DAT_09517526 = 1;
  }
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  if (*(int *)(DAT_09187db8 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  if (**(long **)(DAT_09187db8 + 0xb8) != 0) {
    FUN_053ebbdc(**(long **)(DAT_09187db8 + 0xb8),DAT_091a86c0);
    uVar2 = FUN_05a8eda4(DAT_091b4a60);
    if (((uVar2 & 1) != 0) &&
       (uVar2 = System_String__IsNullOrEmpty(*(undefined8 *)(param_1 + 0x40),0), (uVar2 & 1) == 0))
    {
      lVar3 = *(long *)(DAT_091b4a58 + 0x20);
      if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_03f95a6c();
      }
      lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x10);
      if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_03f95a6c();
      }
      if (**(long **)(lVar3 + 0xb8) == 0) goto LAB_042fbed4;
      lVar3 = CakeOrder_SaveProfile_PlayerMapLevelProgressDataAccess__GetHomeBuildingItemsBought
                        (**(long **)(lVar3 + 0xb8),*(undefined8 *)(param_1 + 0x40),0);
      if (lVar3 != 0) {
        FUN_057e185c(&local_48,lVar3,DAT_091b05a8);
        while (uVar2 = FUN_071bd28c(&local_48,DAT_091a45a0), uVar1 = local_38, (uVar2 & 1) != 0) {
          if (*(int *)(DAT_09187db8 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          if (**(long **)(DAT_09187db8 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          FUN_053ec72c(**(long **)(DAT_09187db8 + 0xb8),uVar1,DAT_091a86b8);
        }
        FUN_071bd288(&local_48,DAT_091a4598);
      }
    }
    if (*(int *)(DAT_09187db8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    return **(undefined8 **)(DAT_09187db8 + 0xb8);
  }
LAB_042fbed4:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

