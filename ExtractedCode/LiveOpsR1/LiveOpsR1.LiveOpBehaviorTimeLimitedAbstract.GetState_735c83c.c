// rea decompile_all
// name: LiveOpsR1.LiveOpBehaviorTimeLimitedAbstract$$GetState
// address: 0x735c83c
// body: available
// range: 0x735c83c-0x735c967 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 LiveOpsR1_LiveOpBehaviorTimeLimitedAbstract__GetState(long *param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined8 local_28;
  
  if ((DAT_0952080d & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183548);
    FUN_03f5c2a4(&DAT_09188c20);
    DAT_0952080d = 1;
  }
  local_28 = 0;
  uVar1 = (**(code **)(*param_1 + 0x1c8))(param_1,*(undefined8 *)(*param_1 + 0x1d0));
  if ((uVar1 & 1) == 0) {
    uVar4 = 0;
  }
  else {
    if (*(int *)(DAT_09188c20 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    local_28 = EssentialSystemR1_OnlineTimeCheck__get_Now(0);
    if (*(int *)(DAT_09183548 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09183548);
    }
    uVar2 = System_DateTime__get_Date(&local_28,0);
    uVar3 = (**(code **)(*param_1 + 0x1a8))(param_1,*(undefined8 *)(*param_1 + 0x1b0));
    uVar1 = System_DateTime__op_LessThan(uVar2,uVar3,0);
    if ((uVar1 & 1) == 0) {
      uVar3 = (**(code **)(*param_1 + 0x1b8))(param_1,*(undefined8 *)(*param_1 + 0x1c0));
      if (*(int *)(DAT_09183548 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09183548);
      }
      uVar1 = System_DateTime__op_GreaterThan(uVar2,uVar3,0);
      uVar4 = 3;
      if ((uVar1 & 1) != 0) {
        uVar4 = 4;
      }
    }
    else {
      uVar4 = 1;
    }
  }
  return uVar4;
}

