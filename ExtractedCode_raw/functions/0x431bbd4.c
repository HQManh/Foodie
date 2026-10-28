// rea decompile_all
// name: CakeOrder.Home.HomeRestaurantsBuildingControl$$OnSelectedLevelChanged
// address: 0x431bbd4
// body: available
// range: 0x431bbd4-0x431bceb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x431bcd4 to 0x7da3494 Cysharp.Threading.Tasks.UniTaskExtensions$$Forget (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x431bce8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_Home_HomeRestaurantsBuildingControl__OnSelectedLevelChanged(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined1 auVar5 [16];
  
  if ((DAT_0951762e & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091ba230);
    FUN_03f5c2a4(&DAT_091ba200);
    DAT_0951762e = 1;
  }
  if (*(long *)(param_1 + 0x90) != 0) {
    lVar3 = *(long *)(*(long *)(param_1 + 0x90) + 0x30);
    if (lVar3 != 0) {
      if ((*(long *)(lVar3 + 0x48) == 0) || (*(long *)(lVar3 + 0x28) == 0)) goto LAB_0431bce8;
      lVar4 = *(long *)(*(long *)(lVar3 + 0x48) + 0x60);
      lVar3 = *(long *)(*(long *)(lVar3 + 0x28) + 0x60);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar1 = UnityEngine_Object__op_Implicit(lVar4,0);
      if ((uVar1 & 1) != 0) {
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar1 = UnityEngine_Object__op_Implicit(lVar3,0);
        if ((uVar1 & 1) != 0) {
          if ((*(long *)(param_1 + 0x90) != 0) && (lVar3 != 0)) {
            uVar2 = CakeOrder_MapLevelMetadataConfig__GetLevelConfig
                              (lVar3,*(undefined4 *)(*(long *)(param_1 + 0x90) + 0x2c),0);
            if ((*(long *)(param_1 + 0x90) != 0) && (lVar4 != 0)) {
              auVar5 = CakeOrder_Home_HomeMapBuildingBase__SetLevelConfig
                                 (lVar4,uVar2,*(undefined4 *)(*(long *)(param_1 + 0x90) + 0x2c));
              Cysharp_Threading_Tasks_UniTaskExtensions__Forget(auVar5._0_8_,auVar5._8_8_,0);
              return;
            }
          }
          goto LAB_0431bce8;
        }
      }
    }
    return;
  }
LAB_0431bce8:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

