// rea decompile_all
// name: System.Globalization.Calendar$$GetWeekOfYear
// address: 0x752d55c
// body: available
// range: 0x752d55c-0x752d837 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x752d668 to 0x752d23c System.Globalization.Calendar$$GetWeekOfYearFullDays (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x752d834 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong System_Globalization_Calendar__GetWeekOfYear
                (long *param_1,undefined8 param_2,int param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined4 local_28;
  undefined4 local_24;
  
  if (6 < param_4) {
    uVar4 = thunk_FUN_03fc39d4(&DAT_09180318);
    uVar4 = FUN_03f5c394(uVar4,2);
    local_24 = 0;
    uVar5 = thunk_FUN_03fc39d4(&DAT_091835c8);
    uVar5 = FUN_03f5c42c(uVar5,&local_24);
    FUN_039b1d98(uVar4);
    FUN_039b0da0(uVar4,uVar5);
    FUN_039af17c(uVar4,0,uVar5);
    local_28 = 6;
    uVar5 = thunk_FUN_03fc39d4(&DAT_091835c8);
    uVar5 = FUN_03f5c42c(uVar5,&local_28);
    FUN_039b0da0(uVar4,uVar5);
    FUN_039af17c(uVar4,1,uVar5);
    uVar5 = thunk_FUN_03fc39d4(&DAT_09212b18);
    uVar4 = System_Environment__GetResourceString(uVar5,uVar4,0);
    thunk_FUN_03fc39d4(&DAT_09181558);
    uVar5 = thunk_FUN_03f9944c();
    puVar6 = (undefined8 *)&DAT_0921b710;
LAB_0752d808:
    uVar7 = thunk_FUN_03fc39d4(puVar6);
    System_ArgumentOutOfRangeException___ctor(uVar5,uVar7,uVar4,0);
    uVar4 = thunk_FUN_03fc39d4(&DAT_091c45c8);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar5,uVar4);
  }
  if (param_3 == 2) {
    uVar4 = 4;
  }
  else {
    if (param_3 != 1) {
      if (param_3 == 0) {
        iVar1 = (**(code **)(*param_1 + 0x208))(param_1,param_2,*(undefined8 *)(*param_1 + 0x210));
        iVar1 = iVar1 + -1;
        iVar2 = (**(code **)(*param_1 + 0x1f8))(param_1,param_2,*(undefined8 *)(*param_1 + 0x200));
        iVar2 = (iVar2 - (iVar1 + param_4)) + (iVar1 / 7) * 7 + 0xe;
        return (ulong)((iVar2 + iVar1 + (iVar2 / 7) * -7) / 7 + 1);
      }
      uVar4 = thunk_FUN_03fc39d4(&DAT_09180318);
      uVar4 = FUN_03f5c394(uVar4,2);
      local_24 = 0;
      uVar5 = thunk_FUN_03fc39d4(&DAT_091822a8);
      uVar5 = FUN_03f5c42c(uVar5,&local_24);
      FUN_039b1d98(uVar4);
      FUN_039b0da0(uVar4,uVar5);
      FUN_039af17c(uVar4,0,uVar5);
      local_28 = 2;
      uVar5 = thunk_FUN_03fc39d4(&DAT_091822a8);
      uVar5 = FUN_03f5c42c(uVar5,&local_28);
      FUN_039b0da0(uVar4,uVar5);
      FUN_039af17c(uVar4,1,uVar5);
      uVar5 = thunk_FUN_03fc39d4(&DAT_09212b18);
      uVar4 = System_Environment__GetResourceString(uVar5,uVar4,0);
      thunk_FUN_03fc39d4(&DAT_09181558);
      uVar5 = thunk_FUN_03f9944c();
      puVar6 = &DAT_09221db0;
      goto LAB_0752d808;
    }
    uVar4 = 7;
  }
  uVar3 = System_Globalization_Calendar__GetWeekOfYearFullDays(param_1,param_2,param_4,uVar4);
  return uVar3;
}

