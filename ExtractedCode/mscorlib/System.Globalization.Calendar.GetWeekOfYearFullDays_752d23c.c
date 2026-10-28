// rea decompile_all
// name: System.Globalization.Calendar$$GetWeekOfYearFullDays
// address: 0x752d23c
// body: available
// range: 0x752d23c-0x752d3fb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong System_Globalization_Calendar__GetWeekOfYearFullDays
                (long *param_1,undefined8 param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 local_50;
  undefined8 local_48;
  
  local_48 = param_2;
  if ((DAT_09521848 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183548);
    DAT_09521848 = 1;
  }
  local_50 = 0;
  iVar2 = (**(code **)(*param_1 + 0x208))(param_1,param_2,*(undefined8 *)(*param_1 + 0x210));
  iVar1 = iVar2 + -1;
  iVar3 = (**(code **)(*param_1 + 0x1f8))(param_1,param_2,*(undefined8 *)(*param_1 + 0x200));
  iVar3 = (((param_3 + iVar1 + (iVar1 / 7) * -7) - iVar3) + 0xe) % 7;
  if (param_4 <= iVar3 && iVar3 != 0) {
    iVar3 = iVar3 + -7;
  }
  if (iVar1 - iVar3 < 0) {
    local_50 = (**(code **)(*param_1 + 0x188))(param_1,*(undefined8 *)(*param_1 + 400));
    if (*(int *)(DAT_09183548 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09183548);
    }
    uVar5 = System_DateTime__AddDays((double)iVar1,&local_50,0);
    uVar4 = System_DateTime__op_LessThanOrEqual(param_2,uVar5,0);
    if ((uVar4 & 1) == 0) {
      if (*(int *)(DAT_09183548 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar5 = System_DateTime__AddDays((double)-iVar2,&local_48,0);
      uVar4 = System_Globalization_Calendar__GetWeekOfYearFullDays(param_1,uVar5,param_3,param_4);
    }
    else {
      uVar4 = System_Globalization_Calendar__GetWeekOfYearOfMinSupportedDateTime
                        (param_1,param_3,param_4);
    }
  }
  else {
    uVar4 = (ulong)((uint)(iVar1 - iVar3) / 7 + 1);
  }
  return uVar4;
}

