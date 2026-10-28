// rea decompile_all
// name: CakeOrder.Home.HomeRestaurantsBuildingControl$$OnCameraMoveComplete
// address: 0x431b914
// body: available
// range: 0x431b914-0x431ba23 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x431ba10 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_Home_HomeRestaurantsBuildingControl__OnCameraMoveComplete(ulong param_1)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  int iVar4;
  undefined8 uVar5;
  
  uVar1 = param_1;
  if ((DAT_0951762c & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188ad0);
    uVar1 = FUN_03f5c2a4(&DAT_091ba200);
    DAT_0951762c = 1;
  }
  lVar3 = *(long *)(param_1 + 0x90);
  *(undefined1 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0xffffffff;
  if (lVar3 != 0) {
    iVar4 = 0;
    while (*(long *)(lVar3 + 0x58) != 0) {
      if (*(int *)(*(long *)(lVar3 + 0x58) + 0x18) <= iVar4) {
        return;
      }
      uVar1 = CakeOrder_Home_HomeSelectionControl__CanShowMap(uVar1,iVar4);
      if ((uVar1 & 1) != 0) {
        uVar1 = *(ulong *)(param_1 + 0x90);
        if (uVar1 == 0) break;
        if ((iVar4 != *(int *)(uVar1 + 0x28)) &&
           (lVar3 = CakeOrder_Home_HomeSelectionControl__GetMapSectionLoadData(uVar1,iVar4),
           uVar1 = 0, lVar3 != 0)) {
          if (*(long *)(lVar3 + 0x48) == 0) break;
          uVar5 = *(undefined8 *)(*(long *)(lVar3 + 0x48) + 0x60);
          if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar1 = UnityEngine_Object__op_Inequality(uVar5,0,0);
          if ((uVar1 & 1) != 0) {
            if ((*(long *)(lVar3 + 0x48) == 0) ||
               (plVar2 = *(long **)(*(long *)(lVar3 + 0x48) + 0x60), plVar2 == (long *)0x0)) break;
            uVar1 = (**(code **)(*plVar2 + 0x228))(plVar2,*(undefined8 *)(*plVar2 + 0x230));
          }
        }
      }
      lVar3 = *(long *)(param_1 + 0x90);
      iVar4 = iVar4 + 1;
      if (lVar3 == 0) break;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

