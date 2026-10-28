// rea decompile_all
// name: System.TimeZoneInfo$$TZif_ParseOffsetString
// address: 0x7511688
// body: available
// range: 0x7511688-0x75118a3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x75118a0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] System_TimeZoneInfo__TZif_ParseOffsetString(long param_1)

{
  undefined1 auVar1 [16];
  short sVar2;
  short sVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_34;
  char local_30;
  undefined7 uStack_2f;
  undefined8 uStack_28;
  
  if ((DAT_095216e6 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182ff8);
    FUN_03f5c2a4(&DAT_091b74f8);
    FUN_03f5c2a4(&DAT_091b7510);
    FUN_03f5c2a4(&DAT_091b7518);
    FUN_03f5c2a4(&DAT_0918bd60);
    FUN_03f5c2a4(&DAT_0921bc38);
    DAT_095216e6 = 1;
  }
  local_30 = '\0';
  uStack_2f = 0;
  uStack_28 = 0;
  local_34 = 0;
  local_48 = 0;
  local_40 = 0;
  uVar4 = System_String__IsNullOrEmpty(param_1,0);
  if ((uVar4 & 1) != 0) goto LAB_0751188c;
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  sVar2 = System_String__get_Chars(param_1,0,0);
  if ((sVar2 == 0x2d) || (sVar3 = System_String__get_Chars(param_1,0,0), sVar3 == 0x2b)) {
    param_1 = System_String__Substring(param_1,1,0);
  }
  uVar4 = System_Int32__TryParse(param_1,&local_34,0);
  if ((uVar4 & 1) == 0) {
    if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar5 = System_Globalization_CultureInfo__get_InvariantCulture(0);
    if (*(int *)(DAT_0918bd60 + 0xe4) == 0) {
      FUN_03f5c424(DAT_0918bd60);
    }
    uVar4 = System_TimeSpan__TryParseExact(param_1,DAT_0921bc38,uVar5,&local_40,0);
    uVar5 = local_40;
    if ((uVar4 & 1) != 0) goto LAB_07511814;
  }
  else {
    local_50 = 0;
    System_TimeSpan___ctor(&local_50,local_34,0,0,0);
    uVar5 = local_50;
LAB_07511814:
    FUN_05c381f8(&local_30,uVar5,DAT_091b74f8);
  }
  if ((sVar2 == 0x2d) && (local_30 != '\0')) {
    local_48 = FUN_05c38210(&local_30,DAT_091b7518);
    if (*(int *)(DAT_0918bd60 + 0xe4) == 0) {
      FUN_03f5c424(DAT_0918bd60);
    }
    uVar5 = System_TimeSpan__Negate(&local_48,0);
    FUN_05c381f8(&local_30,uVar5,DAT_091b74f8);
  }
LAB_0751188c:
  auVar1._1_7_ = uStack_2f;
  auVar1[0] = local_30;
  auVar1._8_8_ = uStack_28;
  return auVar1;
}

