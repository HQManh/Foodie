// rea decompile_all
// name: Datpt.Cook_Order.LevelControlCookOrder$$AddCustomerNum
// address: 0x41a4fd0
// body: available
// range: 0x41a4fd0-0x41a5123 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41a5110 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41a5114 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41a5120 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Datpt_Cook_Order_LevelControlCookOrder__AddCustomerNum(long param_1,int param_2)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined4 local_34;
  
  if ((DAT_09516905 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091835f0);
    FUN_03f5c2a4(&DAT_09180318);
    FUN_03f5c2a4(&DAT_091ffa68);
    DAT_09516905 = 1;
  }
  uVar2 = DAT_09180318;
  *(int *)(param_1 + 0x198) = *(int *)(param_1 + 0x198) + param_2;
  plVar1 = (long *)FUN_03f5c394(uVar2,1);
  local_34 = *(undefined4 *)(param_1 + 0x198);
  uVar2 = FUN_03f5c42c(DAT_09535420,&local_34);
  lVar3 = System_String__Format(DAT_091ffa68,uVar2,0);
  if (plVar1 != (long *)0x0) {
    if ((lVar3 != 0) &&
       (lVar4 = thunk_FUN_03f99350(lVar3,*(undefined8 *)(*plVar1 + 0x40)), lVar4 == 0)) {
      uVar2 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar2,0);
    }
    if ((int)plVar1[3] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
    plVar1[4] = lVar3;
    thunk_FUN_03f5d7b8(plVar1 + 4,lVar3);
    if (*(int *)(DAT_091835f0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    Datpt_DebugCustom__LogColor(plVar1,0);
    if (*(int *)(param_1 + 0x198) < 0) {
      if (*(long *)(param_1 + 0x180) == 0) goto LAB_041a5110;
      UnityEngine_GameObject__SetActive(*(long *)(param_1 + 0x180),1,0);
    }
    Datpt_Cook_Order_LevelControlCookOrder__UpdateCustomerLeftTxt(param_1);
    return;
  }
LAB_041a5110:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

