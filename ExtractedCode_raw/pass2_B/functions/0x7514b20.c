// rea decompile_all
// name: System.TimeZoneInfo.AdjustmentRule$$Equals
// address: 0x7514b20
// body: available
// range: 0x7514b20-0x7514c83 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint System_TimeZoneInfo_AdjustmentRule__Equals(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  if ((DAT_09521723 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183548);
    FUN_03f5c2a4(&DAT_0918bd60);
    DAT_09521723 = 1;
  }
  if (param_2 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    uVar4 = *(undefined8 *)(param_2 + 0x10);
    if (*(int *)(DAT_09183548 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar2 = System_DateTime__op_Equality(uVar3,uVar4,0);
    if ((uVar2 & 1) != 0) {
      uVar3 = *(undefined8 *)(param_1 + 0x18);
      uVar4 = *(undefined8 *)(param_2 + 0x18);
      if (*(int *)(DAT_09183548 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar2 = System_DateTime__op_Equality(uVar3,uVar4,0);
      if ((uVar2 & 1) != 0) {
        uVar3 = *(undefined8 *)(param_1 + 0x20);
        uVar4 = *(undefined8 *)(param_2 + 0x20);
        if (*(int *)(DAT_0918bd60 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar2 = System_TimeSpan__op_Equality(uVar3,uVar4,0);
        if ((uVar2 & 1) != 0) {
          uVar3 = *(undefined8 *)(param_1 + 0x58);
          uVar4 = *(undefined8 *)(param_2 + 0x58);
          if (*(int *)(DAT_0918bd60 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar2 = System_TimeSpan__op_Equality(uVar3,uVar4,0);
          if ((uVar2 & 1) != 0) {
            uStack_48 = *(undefined8 *)(param_2 + 0x48);
            local_50 = *(undefined8 *)(param_2 + 0x40);
            local_40 = *(undefined8 *)(param_2 + 0x50);
            uVar2 = System_TimeZoneInfo_TransitionTime__Equals(param_1 + 0x40,&local_50);
            if ((uVar2 & 1) != 0) {
              uStack_68 = *(undefined8 *)(param_2 + 0x30);
              local_70 = *(undefined8 *)(param_2 + 0x28);
              local_60 = *(undefined8 *)(param_2 + 0x38);
              uVar1 = System_TimeZoneInfo_TransitionTime__Equals(param_1 + 0x28,&local_70);
              goto LAB_07514c6c;
            }
          }
        }
      }
    }
  }
  uVar1 = 0;
LAB_07514c6c:
  return uVar1 & 1;
}

