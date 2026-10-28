// rea decompile_all
// name: System.DateTimeFormat$$FormatCustomizedTimeZone
// address: 0x759f9e4
// body: available
// range: 0x759f9e4-0x759fdb3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x759fdb0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_DateTimeFormat__FormatCustomizedTimeZone
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               int param_5,uint param_6,long param_7)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined4 local_54;
  undefined8 local_50;
  undefined8 local_48;
  
  local_50 = param_2;
  local_48 = param_1;
  if ((DAT_09521c21 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182ff8);
    FUN_03f5c2a4(&DAT_09183568);
    FUN_03f5c2a4(&DAT_09183548);
    FUN_03f5c2a4(&DAT_0918bd60);
    FUN_03f5c2a4(&DAT_0918bdc0);
    FUN_03f5c2a4(&DAT_091fa088);
    FUN_03f5c2a4(&DAT_09225fa0);
    FUN_03f5c2a4(&DAT_09225fb0);
    DAT_09521c21 = 1;
  }
  if (*(int *)(DAT_09183568 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar5 = **(undefined8 **)(DAT_09183568 + 0xb8);
  if (*(int *)(DAT_0918bd60 + 0xe4) == 0) {
    FUN_03f5c424(DAT_0918bd60);
  }
  uVar2 = System_TimeSpan__op_Equality(param_2,uVar5,0);
  if ((uVar2 & 1) != 0) {
    if ((param_6 & 1) == 0) {
LAB_0759fb14:
      if (*(int *)(DAT_09183548 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      iVar1 = System_DateTime__get_Kind(&local_48);
      if (iVar1 == 1) {
        if (*(int *)(DAT_0918bd60 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        param_2 = **(undefined8 **)(DAT_0918bd60 + 0xb8);
        local_50 = param_2;
        goto LAB_0759fbc4;
      }
      iVar1 = *(int *)(DAT_0918bdc0 + 0xe4);
    }
    else {
      if (*(int *)(DAT_09183548 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar2 = System_DateTime__get_Ticks(&local_48);
      if (863999999999 < uVar2) goto LAB_0759fb14;
      if (*(int *)(DAT_09183548 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      param_1 = System_DateTime__get_Now();
      iVar1 = *(int *)(DAT_0918bdc0 + 0xe4);
    }
    if (iVar1 == 0) {
      FUN_03f5c424(DAT_0918bdc0);
    }
    param_2 = System_TimeZoneInfo__GetLocalUtcOffset(param_1,2,0);
    local_50 = param_2;
  }
LAB_0759fbc4:
  if (*(int *)(DAT_0918bd60 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = System_TimeSpan__op_GreaterThanOrEqual(param_2,**(undefined8 **)(DAT_0918bd60 + 0xb8),0);
  if ((uVar2 & 1) == 0) {
    if (param_7 == 0) goto LAB_0759fdb0;
    System_Text_StringBuilder__Append(param_7,0x2d,0);
    if (*(int *)(DAT_0918bd60 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    local_50 = System_TimeSpan__Negate(&local_50,0);
  }
  else {
    if (param_7 == 0) {
LAB_0759fdb0:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    System_Text_StringBuilder__Append(param_7,0x2b,0);
  }
  if (param_5 < 2) {
    if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar5 = System_Globalization_CultureInfo__get_InvariantCulture(0);
    if (*(int *)(DAT_0918bd60 + 0xe4) == 0) {
      FUN_03f5c424(DAT_0918bd60);
    }
    local_54 = System_TimeSpan__get_Hours(&local_50,0);
    uVar3 = FUN_03f5c42c(DAT_09535420,&local_54);
    puVar4 = &DAT_09225fb0;
  }
  else {
    if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar5 = System_Globalization_CultureInfo__get_InvariantCulture(0);
    if (*(int *)(DAT_0918bd60 + 0xe4) == 0) {
      FUN_03f5c424(DAT_0918bd60);
    }
    local_54 = System_TimeSpan__get_Hours(&local_50,0);
    uVar3 = FUN_03f5c42c(DAT_09535420,&local_54);
    System_Text_StringBuilder__AppendFormat(param_7,uVar5,DAT_09225fa0,uVar3,0);
    if (param_5 == 2) {
      return;
    }
    if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar5 = System_Globalization_CultureInfo__get_InvariantCulture(0);
    if (*(int *)(DAT_0918bd60 + 0xe4) == 0) {
      FUN_03f5c424(DAT_0918bd60);
    }
    local_54 = System_TimeSpan__get_Minutes(&local_50,0);
    uVar3 = FUN_03f5c42c(DAT_09535420,&local_54);
    puVar4 = &DAT_091fa088;
  }
  System_Text_StringBuilder__AppendFormat(param_7,uVar5,*puVar4,uVar3,0);
  return;
}

