// rea decompile_all
// name: CakeOrder.LiveOpsImplement.UIItemLoginDayReward$$Setup
// address: 0x42ecbc8
// body: available
// range: 0x42ecbc8-0x42ecd47 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42ecd34 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42ecd38 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42ecd44 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_LiveOpsImplement_UIItemLoginDayReward__Setup
               (long param_1,undefined8 param_2,int param_3,undefined8 param_4,undefined4 param_5)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  int local_44;
  
  if ((DAT_0951748d & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182278);
    FUN_03f5c2a4(&DAT_09180318);
    FUN_03f5c2a4(&DAT_0921a2c8);
    DAT_0951748d = 1;
  }
  *(undefined8 *)(param_1 + 0x70) = param_2;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x70),param_2);
  uVar4 = DAT_09180318;
  plVar5 = *(long **)(param_1 + 0x28);
  *(int *)(param_1 + 0xe4) = param_3;
  plVar1 = (long *)FUN_03f5c394(uVar4,1);
  local_44 = param_3 + 1;
  lVar2 = FUN_03f5c42c(DAT_09535420,&local_44);
  if (plVar1 != (long *)0x0) {
    if ((lVar2 != 0) &&
       (lVar3 = thunk_FUN_03f99350(lVar2,*(undefined8 *)(*plVar1 + 0x40)), lVar3 == 0)) {
      uVar4 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar4,0);
    }
    if ((int)plVar1[3] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
    plVar1[4] = lVar2;
    thunk_FUN_03f5d7b8(plVar1 + 4,lVar2);
    if (*(int *)(DAT_09182278 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar4 = CakeOrder_Localization_CakeLocalization__TrFormat(DAT_0921a2c8,plVar1);
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 0x558))(plVar5,uVar4,*(undefined8 *)(*plVar5 + 0x560));
      CakeOrder_LiveOpsImplement_UIItemLoginDayReward__BuildRewardViews(param_1,param_4);
      CakeOrder_LiveOpsImplement_UIItemLoginDayReward__AlignGlowToIcon(param_1);
      CakeOrder_LiveOpsImplement_UIItemLoginDayReward__SetState(param_1,param_5,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

