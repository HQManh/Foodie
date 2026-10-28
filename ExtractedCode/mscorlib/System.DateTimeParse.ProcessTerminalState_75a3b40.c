// rea decompile_all
// name: System.DateTimeParse$$ProcessTerminalState
// address: 0x75a3b40
// body: available
// range: 0x75a3b40-0x75a3ebb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
System_DateTimeParse__ProcessTerminalState
          (int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,long param_5,
          undefined8 param_6)

{
  ulong uVar1;
  undefined8 uVar2;
  
  if ((DAT_09521c51 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091835a8);
    DAT_09521c51 = 1;
  }
  switch(param_1) {
  case 0x15:
    if (*(int *)(DAT_091835a8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar1 = System_DateTimeParse__GetDayOfNN(param_3,param_4,param_5,param_6);
    break;
  case 0x16:
    if (*(int *)(DAT_091835a8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar1 = System_DateTimeParse__GetDayOfNNN(param_3,param_5,param_6);
    break;
  case 0x17:
    if (*(int *)(DAT_091835a8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar1 = System_DateTimeParse__GetDayOfMN(param_3,param_4,param_5,param_6);
    break;
  case 0x18:
    if (*(int *)(DAT_091835a8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar1 = System_DateTimeParse__GetDayOfNM(param_3,param_4,param_5,param_6);
    break;
  case 0x19:
    if (*(int *)(DAT_091835a8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar1 = System_DateTimeParse__GetDayOfMNN(param_3,param_5,param_6);
    break;
  default:
    if (0x14 < param_1) goto LAB_075a3ea0;
    goto LAB_075a3ea4;
  case 0x1b:
    if (*(int *)(DAT_091835a8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar1 = System_DateTimeParse__GetDateOfDSN(param_3,param_5);
    break;
  case 0x1c:
    if (*(int *)(DAT_091835a8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar1 = System_DateTimeParse__GetDateOfNDS(param_3,param_5);
    break;
  case 0x1d:
    if (*(int *)(DAT_091835a8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar1 = System_DateTimeParse__GetDateOfNNDS(param_3,param_5,param_6);
    break;
  case 0x1e:
    if (*(int *)(DAT_091835a8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar1 = System_DateTimeParse__GetDayOfYNN(param_3,param_5,param_6);
    break;
  case 0x1f:
    if (*(int *)(DAT_091835a8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar1 = System_DateTimeParse__GetDayOfYMN(param_3,param_5);
    break;
  case 0x20:
    if (*(int *)(DAT_091835a8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar1 = System_DateTimeParse__GetDayOfYN(param_3,param_5);
    break;
  case 0x21:
    if (*(int *)(DAT_091835a8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar1 = System_DateTimeParse__GetDayOfYM(param_3,param_5);
    break;
  case 0x22:
    if (*(int *)(DAT_091835a8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar1 = System_DateTimeParse__GetTimeOfN(param_3,param_5);
    break;
  case 0x23:
    if (*(int *)(DAT_091835a8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar1 = System_DateTimeParse__GetTimeOfNN(param_3,param_5);
    break;
  case 0x24:
    if (*(int *)(DAT_091835a8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar1 = System_DateTimeParse__GetTimeOfNNN(param_3,param_5);
    break;
  case 0x26:
    if (*(int *)(DAT_091835a8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar1 = System_DateTimeParse__GetDayOfNNY(param_3,param_5,param_6);
  }
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
  }
  else {
LAB_075a3ea0:
    *(undefined4 *)(param_5 + 8) = 0;
LAB_075a3ea4:
    uVar2 = 1;
  }
  return uVar2;
}

