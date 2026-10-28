// rea decompile_all
// name: System.TimeZoneInfo.AdjustmentRule$$get_HasDaylightSaving
// address: 0x7513ad8
// body: available
// range: 0x7513ad8-0x7513c3b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7513c38 to 0x7597b44 System.DateTime$$op_Inequality (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 System_TimeZoneInfo_AdjustmentRule__get_HasDaylightSaving(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  if ((DAT_09521722 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183548);
    FUN_03f5c2a4(&DAT_0918bd60);
    DAT_09521722 = 1;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  if (*(int *)(DAT_0918bd60 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = System_TimeSpan__op_Inequality(uVar3,**(undefined8 **)(DAT_0918bd60 + 0xb8),0);
  if ((uVar1 & 1) == 0) {
    uStack_48 = *(undefined8 *)(param_1 + 0x30);
    local_50 = *(undefined8 *)(param_1 + 0x28);
    local_40 = *(undefined8 *)(param_1 + 0x38);
    local_30 = 0;
    local_28 = 0;
    local_38 = 0;
    uVar1 = System_TimeZoneInfo_TransitionTime__Equals(&local_50,&local_38);
    if ((uVar1 & 1) == 0) {
      uVar3 = *(undefined8 *)(param_1 + 0x28);
      if (*(int *)(DAT_09183548 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar1 = System_DateTime__op_Inequality
                        (uVar3,*(undefined8 *)(*(long *)(DAT_09183548 + 0xb8) + 0x10),0);
      if ((uVar1 & 1) != 0) goto LAB_07513b4c;
    }
    uStack_68 = *(undefined8 *)(param_1 + 0x48);
    local_70 = *(undefined8 *)(param_1 + 0x40);
    local_60 = *(undefined8 *)(param_1 + 0x50);
    local_38 = 0;
    local_30 = 0;
    local_28 = 0;
    uVar1 = System_TimeZoneInfo_TransitionTime__Equals(&local_70,&local_38);
    if ((uVar1 & 1) == 0) {
      uVar3 = *(undefined8 *)(param_1 + 0x40);
      if (*(int *)(DAT_09183548 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar2 = System_DateTime__AddMilliseconds
                        (0x3ff0000000000000,*(long *)(DAT_09183548 + 0xb8) + 0x10,0);
      uVar3 = System_DateTime__op_Inequality(uVar3,uVar2,0);
      return uVar3;
    }
    uVar3 = 0;
  }
  else {
LAB_07513b4c:
    uVar3 = 1;
  }
  return uVar3;
}

