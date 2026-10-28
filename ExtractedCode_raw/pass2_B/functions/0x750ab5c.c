// rea decompile_all
// name: System.Globalization.TimeSpanParse$$ProcessTerminalState
// address: 0x750ab5c
// body: available
// range: 0x750ab5c-0x750aca3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint System_Globalization_TimeSpanParse__ProcessTerminalState
               (char *param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if ((DAT_095216c5 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0920dc98);
    DAT_095216c5 = 1;
  }
  uStack_48 = 0;
  local_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  if (*param_1 == '\x02') {
    uStack_48 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
    local_50 = 3;
    uVar3 = System_Globalization_TimeSpanParse_TimeSpanRawInfo__ProcessToken
                      (param_1,&local_50,param_3,0);
    if ((uVar3 & 1) != 0) goto LAB_0750abd0;
  }
  else {
LAB_0750abd0:
    iVar1 = *(int *)(param_1 + 0xc);
    if (iVar1 < 3) {
      if (iVar1 == 1) {
        uVar2 = System_Globalization_TimeSpanParse__ProcessTerminal_D(param_1,param_2,param_3);
        goto LAB_0750ac8c;
      }
      if (iVar1 == 2) {
        uVar2 = System_Globalization_TimeSpanParse__ProcessTerminal_HM(param_1,param_2,param_3);
        goto LAB_0750ac8c;
      }
    }
    else {
      if (iVar1 == 3) {
        uVar2 = System_Globalization_TimeSpanParse__ProcessTerminal_HM_S_D(param_1,param_2,param_3);
        goto LAB_0750ac8c;
      }
      if (iVar1 == 4) {
        uVar2 = System_Globalization_TimeSpanParse__ProcessTerminal_HMS_F_D(param_1,param_2,param_3)
        ;
        goto LAB_0750ac8c;
      }
      if (iVar1 == 5) {
        uVar2 = System_Globalization_TimeSpanParse__ProcessTerminal_DHMSF(param_1,param_2,param_3);
        goto LAB_0750ac8c;
      }
    }
  }
  uVar2 = System_Globalization_TimeSpanParse_TimeSpanResult__SetFailure
                    (param_3,2,DAT_0920dc98,0,0,0);
LAB_0750ac8c:
  return uVar2 & 1;
}

