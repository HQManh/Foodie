// rea decompile_all
// name: CakeOrder.SaveProfile.PlayerNameRules$$GetMessage
// address: 0x4284434
// body: available
// range: 0x4284434-0x428463f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4284608 to 0x42dbe94 CakeOrder.Localization.CakeLocalization$$Tr (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x428462c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4284630 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x428463c to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 CakeOrder_SaveProfile_PlayerNameRules__GetMessage(int param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined4 local_18;
  undefined4 local_14;
  
  if ((DAT_09517127 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182278);
    FUN_03f5c2a4(&DAT_09180318);
    FUN_03f5c2a4(&DAT_09224058);
    FUN_03f5c2a4(&DAT_09224068);
    FUN_03f5c2a4(&DAT_09224060);
    DAT_09517127 = 1;
  }
  if (param_1 == 3) {
    if (*(int *)(DAT_09182278 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar4 = CakeOrder_Localization_CakeLocalization__Tr(DAT_09224058,0);
    return uVar4;
  }
  if (param_1 == 2) {
    plVar1 = (long *)FUN_03f5c394(DAT_09180318,1);
    local_18 = 0x10;
    lVar2 = FUN_03f5c42c(DAT_09535420,&local_18);
    if (plVar1 == (long *)0x0) goto LAB_0428462c;
    if ((lVar2 != 0) &&
       (lVar3 = thunk_FUN_03f99350(lVar2,*(undefined8 *)(*plVar1 + 0x40)), lVar3 == 0))
    goto LAB_04284634;
    if ((int)plVar1[3] == 0) goto LAB_04284630;
    plVar1[4] = lVar2;
    thunk_FUN_03f5d7b8(plVar1 + 4,lVar2);
    if (*(int *)(DAT_09182278 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    puVar5 = &DAT_09224060;
  }
  else {
    if (param_1 != 1) {
      return **(undefined8 **)(DAT_09535468 + 0xb8);
    }
    plVar1 = (long *)FUN_03f5c394(DAT_09180318,1);
    local_14 = 3;
    lVar2 = FUN_03f5c42c(DAT_09535420,&local_14);
    if (plVar1 == (long *)0x0) {
LAB_0428462c:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if ((lVar2 != 0) &&
       (lVar3 = thunk_FUN_03f99350(lVar2,*(undefined8 *)(*plVar1 + 0x40)), lVar3 == 0)) {
LAB_04284634:
      uVar4 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar4,0);
    }
    if ((int)plVar1[3] == 0) {
LAB_04284630:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
    plVar1[4] = lVar2;
    thunk_FUN_03f5d7b8(plVar1 + 4,lVar2);
    if (*(int *)(DAT_09182278 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    puVar5 = &DAT_09224068;
  }
  uVar4 = CakeOrder_Localization_CakeLocalization__TrFormat(*puVar5,plVar1,0);
  return uVar4;
}

