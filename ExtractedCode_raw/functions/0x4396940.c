// rea decompile_all
// name: CakeOrder.InGame.LevelPlayLoadAndSetupControl$$ShowInterOnLeaveLevel
// address: 0x4396940
// body: available
// range: 0x4396940-0x4396aeb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4396ae8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_InGame_LevelPlayLoadAndSetupControl__ShowInterOnLeaveLevel
               (long param_1,undefined4 param_2,ulong param_3,long param_4)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  
  if ((DAT_09517a60 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180fe0);
    FUN_03f5c2a4(&DAT_09180fe8);
    FUN_03f5c2a4(&DAT_091b4cf8);
    FUN_03f5c2a4(&DAT_091b4d00);
    FUN_03f5c2a4(&DAT_091b48b8);
    DAT_09517a60 = 1;
  }
  if ((((param_3 & 1) == 0) || (uVar1 = FUN_05a8f088(DAT_091b4d00), (uVar1 & 1) == 0)) ||
     (uVar1 = FUN_05a8eda4(DAT_091b48b8), (uVar1 & 1) == 0)) {
    if (param_4 == 0) {
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x04396a68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_4 + 0x18))(*(undefined8 *)(param_4 + 0x40),*(undefined8 *)(param_4 + 0x28));
    return;
  }
  lVar2 = thunk_FUN_03f9944c(DAT_09180fe8);
  IapAdsSystem_AdsRuntimeData___ctor(lVar2,0);
  local_48 = DAT_09180fe0;
  uStack_40 = 0xffffffffffffffff;
  local_38 = param_2;
  uVar3 = System_Enum__ToString(&local_48,0);
  if (lVar2 != 0) {
    *(undefined8 *)(lVar2 + 0x10) = uVar3;
    thunk_FUN_03f5d7b8((undefined8 *)(lVar2 + 0x10),uVar3);
    lVar5 = *(long *)(param_1 + 0x30);
    *(undefined4 *)(lVar2 + 0x28) = param_2;
    if (lVar5 == 0) {
      uVar3 = 0xffffffffffffffff;
    }
    else {
      uVar3 = *(undefined8 *)(lVar5 + 0x18);
    }
    *(undefined8 *)(lVar2 + 0x20) = uVar3;
    lVar5 = *(long *)(DAT_091b4cf8 + 0x20);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_03f95a6c();
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x10);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_03f95a6c();
    }
    plVar4 = (long *)**(long **)(lVar5 + 0xb8);
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 0x228))(plVar4,lVar2,param_4,param_4,*(undefined8 *)(*plVar4 + 0x230));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

