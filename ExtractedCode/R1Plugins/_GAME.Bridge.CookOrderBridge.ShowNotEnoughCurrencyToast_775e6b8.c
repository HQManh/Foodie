// rea decompile_all
// name: _GAME.Bridge.CookOrderBridge$$ShowNotEnoughCurrencyToast
// address: 0x775e6b8
// body: available
// range: 0x775e6b8-0x775e88b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x775e874 to 0x775e3a8 _GAME.Bridge.CookOrderBridge$$ShowToast (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x775e878 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x775e87c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x775e888 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_Bridge_CookOrderBridge__ShowNotEnoughCurrencyToast(long param_1)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  
  if ((DAT_09522c16 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182278);
    FUN_03f5c2a4(&DAT_091b4b60);
    FUN_03f5c2a4(&DAT_091b4b68);
    FUN_03f5c2a4(&DAT_09180318);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09224070);
    DAT_09522c16 = 1;
  }
  uVar1 = FUN_05a8f088(DAT_091b4b68);
  if ((uVar1 & 1) == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = *(long *)(DAT_091b4b60 + 0x20);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_03f95a6c();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_03f95a6c();
    }
    if (**(long **)(lVar2 + 0xb8) == 0) goto LAB_0775e878;
    lVar2 = CakeOrder_DataSO_CakeOrderDatabaseSO__GetCurrencyById
                      (**(long **)(lVar2 + 0xb8),param_1,0);
  }
  plVar3 = (long *)FUN_03f5c394(DAT_09180318,1);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09188ad0);
  }
  uVar1 = UnityEngine_Object__op_Inequality(lVar2,0,0);
  uVar4 = DAT_09224070;
  if ((uVar1 & 1) != 0) {
    if (lVar2 == 0) goto LAB_0775e878;
    param_1 = CakeOrder_DataSO_ScriptableObjectWithId__get_LocalizedName(lVar2,0);
  }
  if (plVar3 != (long *)0x0) {
    if ((param_1 != 0) &&
       (lVar2 = thunk_FUN_03f99350(param_1,*(undefined8 *)(*plVar3 + 0x40)), lVar2 == 0)) {
      uVar4 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar4,0);
    }
    if ((int)plVar3[3] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
    plVar3[4] = param_1;
    thunk_FUN_03f5d7b8(plVar3 + 4,param_1);
    if (*(int *)(DAT_09182278 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    CakeOrder_Localization_CakeLocalization__TrFormat(uVar4,plVar3,0);
    _GAME_Bridge_CookOrderBridge__ShowToast();
    return;
  }
LAB_0775e878:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

