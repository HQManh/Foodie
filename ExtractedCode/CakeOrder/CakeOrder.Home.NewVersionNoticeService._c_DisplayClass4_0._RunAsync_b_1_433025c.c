// rea decompile_all
// name: CakeOrder.Home.NewVersionNoticeService.<>c__DisplayClass4_0$$<RunAsync>b__1
// address: 0x433025c
// body: available
// range: 0x433025c-0x4330457 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x433044c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4330450 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4330454 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_Home_NewVersionNoticeService_<>c__DisplayClass4_0__<RunAsync>b__1(long param_1)

{
  undefined8 uVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 local_78;
  undefined8 *puStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 *puStack_58;
  undefined8 local_50;
  
  if ((DAT_095176d1 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919f9d8);
    FUN_03f5c2a4(&DAT_091a4598);
    FUN_03f5c2a4(&DAT_091a45a0);
    FUN_03f5c2a4(&DAT_091a45a8);
    FUN_03f5c2a4(&DAT_091b05a8);
    FUN_03f5c2a4(&DAT_091b0608);
    FUN_03f5c2a4(&DAT_091b4b48);
    FUN_03f5c2a4(&DAT_0921fce0);
    DAT_095176d1 = 1;
  }
  local_60 = 0;
  puStack_58 = (undefined8 *)0x0;
  local_50 = 0;
  if (*(long *)(param_1 + 0x10) != 0) {
    iVar2 = CakeOrder_SaveProfile_PlayerMapLevelProgressDataAccess__get_NewVersionNoticeOrder
                      (*(long *)(param_1 + 0x10),0);
    if (*(int *)(param_1 + 0x18) <= iVar2) {
      return;
    }
    lVar4 = *(long *)(DAT_091b4b48 + 0x20);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_03f95a6c();
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x10);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_03f95a6c();
    }
    if (*(long *)(param_1 + 0x20) != 0) {
      lVar4 = **(long **)(lVar4 + 0xb8);
      FUN_057e185c(&local_78,*(long *)(param_1 + 0x20),DAT_091b05a8);
      puStack_58 = puStack_70;
      local_60 = local_78;
      puStack_70 = &local_60;
      local_50 = local_68;
      local_78 = 0;
      while (uVar5 = FUN_071bd28c(&local_60,DAT_091a45a0), uVar1 = local_50, (uVar5 & 1) != 0) {
        if (*(long *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        uVar3 = FUN_06fca3c8(*(long *)(param_1 + 0x28),local_50,DAT_0919f9d8);
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        CakeOrder_SaveProfile_CakeItemCurrencyDataAccess__ChangeItemAmount
                  (lVar4,uVar1,uVar3,DAT_0921fce0,0,0);
      }
      FUN_071bd288(&local_60,DAT_091a4598);
      if (*(long *)(param_1 + 0x20) != 0) {
        if (0 < *(int *)(*(long *)(param_1 + 0x20) + 0x18)) {
          if (lVar4 == 0) goto LAB_04330454;
          CakeOrder_SaveProfile_CakeItemCurrencyDataAccess__SaveData(lVar4,0);
        }
        if (*(long *)(param_1 + 0x10) != 0) {
          CakeOrder_SaveProfile_PlayerMapLevelProgressDataAccess__SetNewVersionNoticeOrder
                    (*(long *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x18),0);
          return;
        }
      }
    }
  }
LAB_04330454:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

