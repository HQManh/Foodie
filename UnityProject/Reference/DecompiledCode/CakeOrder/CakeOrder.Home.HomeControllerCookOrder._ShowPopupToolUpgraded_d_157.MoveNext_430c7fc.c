// rea decompile_all
// name: CakeOrder.Home.HomeControllerCookOrder.<ShowPopupToolUpgraded>d__157$$MoveNext
// address: 0x430c7fc
// body: available
// range: 0x430c7fc-0x430ca17 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x430ca08 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x430ca0c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x430ca10 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x430ca14 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_Home_HomeControllerCookOrder_<ShowPopupToolUpgraded>d__157__MoveNext(int *param_1)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined8 local_38;
  
  if ((DAT_095175aa & 1) == 0) {
    FUN_03f5c2a4(&DAT_09198488);
    FUN_03f5c2a4(&DAT_091985d0);
    FUN_03f5c2a4(&DAT_091751c8);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091d8578);
    FUN_03f5c2a4(&DAT_091bc528);
    FUN_03f5c2a4(&DAT_091bc530);
    FUN_03f5c2a4(&DAT_091bcdb0);
    DAT_095175aa = 1;
  }
  lVar5 = *(long *)(param_1 + 8);
  local_38 = 0;
  if (*param_1 == 0) {
    local_38 = *(undefined8 *)(param_1 + 0x14);
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    *param_1 = -1;
  }
  else {
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar3 = FUN_04d44390(lVar5,*(undefined8 *)(lVar5 + 0x168),0,0,DAT_091d8578);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    local_38 = FUN_062ee710(lVar3,DAT_091bcdb0);
    uVar4 = FUN_06209cac(&local_38,DAT_091bc530);
    if ((uVar4 & 1) == 0) {
      *param_1 = 0;
      *(undefined8 *)(param_1 + 0x14) = local_38;
      thunk_FUN_03f5d7b8(param_1 + 0x14,0);
      if (*(int *)(DAT_091751c8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      FUN_045d6190(param_1 + 2,&local_38,param_1,DAT_09198488);
      return;
    }
  }
  lVar3 = FUN_06209cec(&local_38,DAT_091bc528);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = UnityEngine_Object__op_Implicit(lVar3,0);
  if ((uVar2 & 1) != 0) {
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    CakeOrder_UI_UIPopupToolUpgraded__SetData
              (lVar3,*(undefined8 *)(param_1 + 10),*(undefined8 *)(param_1 + 0xc),(char)param_1[0xe]
               ,0);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    CakeOrder_BaseUI_SceneMainUI__ShowPopupInStack
              (lVar5,lVar3,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x12),0);
  }
  iVar1 = *(int *)(DAT_091751c8 + 0xe4);
  *param_1 = -2;
  if (iVar1 == 0) {
    FUN_03f5c424();
  }
  FUN_069f2e3c(param_1 + 2,uVar2 & 1,DAT_091985d0);
  return;
}

