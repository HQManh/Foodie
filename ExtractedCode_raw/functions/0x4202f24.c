// rea decompile_all
// name: AnhPD.FoodOrder.CustomerLineController$$.ctor
// address: 0x4202f24
// body: available
// range: 0x4202f24-0x4203137 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42030c8 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4203130 to 0x4217d08 AnhPD.FoodOrder.CustomerLoader$$add_onLeaving (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x4203134 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_CustomerLineController___ctor(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  
  if ((DAT_09516bfc & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180e78);
    FUN_03f5c2a4(&DAT_091c6f20);
    FUN_03f5c2a4(&DAT_091c6f28);
    FUN_03f5c2a4(&DAT_091c6ed8);
    FUN_03f5c2a4(&DAT_09178bf0);
    FUN_03f5c2a4(&DAT_091adc70);
    FUN_03f5c2a4(&DAT_0917c520);
    DAT_09516bfc = 1;
  }
  uVar1 = thunk_FUN_03f9944c(DAT_0917c520);
  FUN_05796918(uVar1,DAT_091adc70);
  *(undefined8 *)(param_1 + 0x78) = uVar1;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x78),uVar1);
  System_Object___ctor(param_1,0);
  *(undefined8 *)(param_1 + 0x10) = param_2;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x10),param_2);
  plVar3 = (long *)(param_1 + 0x18);
  *plVar3 = param_3;
  thunk_FUN_03f5d7b8(plVar3,param_3);
  uVar1 = thunk_FUN_03f9944c(DAT_09178bf0);
  FUN_05315da8(uVar1,param_1,DAT_091c6f20,0);
  *(undefined8 *)(param_1 + 0x68) = uVar1;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x68),uVar1);
  if ((*plVar3 != 0) && (lVar4 = *(long *)(*plVar3 + 0x28), lVar4 != 0)) {
    plVar5 = (long *)(lVar4 + 0x50);
    lVar4 = *plVar5;
    uVar1 = thunk_FUN_03f9944c(DAT_09180e78);
    System_Action___ctor(uVar1,param_1,DAT_091c6f28,0);
    plVar2 = (long *)System_Delegate__Combine(lVar4,uVar1,0);
    lVar4 = DAT_09180e78;
    if (plVar2 == (long *)0x0) {
      *plVar5 = 0;
    }
    else if ((*plVar2 != DAT_09180e78) || (*plVar5 = (long)plVar2, *plVar2 != lVar4)) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c8d0(plVar2);
    }
    thunk_FUN_03f5d7b8(plVar5,plVar2);
    if (*plVar3 != 0) {
      lVar4 = *(long *)(*plVar3 + 0x20);
      uVar1 = thunk_FUN_03f9944c(DAT_09180e78);
      System_Action___ctor(uVar1,param_1,DAT_091c6ed8,0);
      if (lVar4 != 0) {
        AnhPD_FoodOrder_CustomerLoader__add_onLeaving(lVar4,uVar1,0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

