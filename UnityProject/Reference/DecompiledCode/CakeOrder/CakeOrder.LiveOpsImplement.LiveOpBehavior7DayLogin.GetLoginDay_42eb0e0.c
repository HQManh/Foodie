// rea decompile_all
// name: CakeOrder.LiveOpsImplement.LiveOpBehavior7DayLogin$$GetLoginDay
// address: 0x42eb0e0
// body: available
// range: 0x42eb0e0-0x42eb22b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42eb228 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int CakeOrder_LiveOpsImplement_LiveOpBehavior7DayLogin__GetLoginDay(long param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  ulong uVar4;
  long lVar5;
  
  if ((DAT_09517481 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b4900);
    FUN_03f5c2a4(&DAT_0921a2b8);
    DAT_09517481 = 1;
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    uVar4 = LiveOpsR1_LiveOpsDataAccessWrapper__HasInt(*(long *)(param_1 + 0x28),DAT_0921a2b8,0);
    if ((uVar4 & 1) == 0) {
      lVar5 = *(long *)(DAT_091b4900 + 0x20);
      if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_03f95a6c();
      }
      lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x10);
      if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_03f95a6c();
      }
      if (**(long **)(lVar5 + 0xb8) != 0) {
        uVar3 = CakeOrder_SaveProfile_CookOrderSystemInfoDataAccess__get_CountOpenDay
                          (**(long **)(lVar5 + 0xb8),0);
        if (*(long *)(param_1 + 0x28) != 0) {
          LiveOpsR1_LiveOpsDataAccessWrapper__SetInt(*(long *)(param_1 + 0x28),DAT_0921a2b8,uVar3,0)
          ;
          return 0;
        }
      }
    }
    else if (*(long *)(param_1 + 0x28) != 0) {
      iVar1 = LiveOpsR1_LiveOpsDataAccessWrapper__GetInt(*(long *)(param_1 + 0x28),DAT_0921a2b8,0,0)
      ;
      lVar5 = *(long *)(DAT_091b4900 + 0x20);
      if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_03f95a6c(lVar5);
      }
      lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x10);
      if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_03f95a6c();
      }
      if (**(long **)(lVar5 + 0xb8) != 0) {
        iVar2 = CakeOrder_SaveProfile_CookOrderSystemInfoDataAccess__get_CountOpenDay
                          (**(long **)(lVar5 + 0xb8),0);
        return iVar2 - iVar1;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

