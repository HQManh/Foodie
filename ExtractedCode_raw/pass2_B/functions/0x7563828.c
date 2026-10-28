// rea decompile_all
// name: System.Buffers.Text.Utf8Parser$$TryParse
// address: 0x7563828
// body: available
// range: 0x7563828-0x7563a03 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7563a00 to 0x4d8b924 FUN_04d8b924 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
System_Buffers_Text_Utf8Parser__TryParse
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined4 *param_4,
          ushort param_5)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined4 uVar3;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  char local_34 [4];
  
  if ((DAT_095219cb & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188a78);
    FUN_03f5c2a4(&DAT_091db500);
    FUN_03f5c2a4(&DAT_0918c978);
    DAT_095219cb = 1;
  }
  uVar3 = 1;
  uVar2 = (ulong)(param_5 - 0x45);
  local_50 = 0;
  local_34[0] = '\0';
  uStack_68 = 0;
  local_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_78 = 0;
  local_80 = 0;
  if (param_5 - 0x45 < 0x23) {
    if ((1L << (uVar2 & 0x3f) & 0x500000005U) != 0) goto LAB_075638e4;
    if ((uVar2 == 1) || (uVar2 == 0x21)) {
      uVar3 = 0;
      goto LAB_075638e4;
    }
  }
  if (param_5 != 0) {
    uVar1 = FUN_04d8b924(param_3,param_4,DAT_091db500);
    return uVar1;
  }
LAB_075638e4:
  local_50 = 0;
  uStack_68 = 0;
  local_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_78 = 0;
  local_80 = 0;
  if (*(int *)(DAT_0918c978 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = System_Buffers_Text_Utf8Parser__TryParseNumber
                    (param_1,param_2,&local_80,param_4,uVar3,local_34);
  if ((uVar2 & 1) == 0) {
    *param_3 = 0;
    param_3[1] = 0;
  }
  else {
    if ((local_34[0] != '\0') || ((param_5 | 0x20) != 0x65)) {
      if ((DAT_095219d0 & 1) == 0) {
        FUN_03f5c2a4(&DAT_091ba8e8);
        DAT_095219d0 = 1;
      }
      if ((local_80._5_1_ == '\0') && ((int)local_80 == 0)) {
        local_80 = local_80 & 0xffffff0000000000;
      }
      *param_3 = 0;
      param_3[1] = 0;
      if (*(int *)(DAT_09188a78 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar2 = System_Buffers_Text_Number__NumberBufferToDecimal(&local_80,param_3);
      if ((uVar2 & 1) != 0) {
        return 1;
      }
    }
    *param_3 = 0;
    param_3[1] = 0;
    *param_4 = 0;
  }
  return 0;
}

