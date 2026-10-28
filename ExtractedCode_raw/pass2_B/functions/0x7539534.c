// rea decompile_all
// name: System.Globalization.TextInfo$$ChangeCase
// address: 0x7539534
// body: available
// range: 0x7539534-0x7539673 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Globalization_TextInfo__ChangeCase
               (long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,uint param_6)

{
  undefined2 uVar1;
  ulong uVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  int iVar5;
  undefined8 local_50;
  undefined8 local_48;
  
  local_50 = param_2;
  local_48 = param_3;
  if ((DAT_095218b3 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091d3038);
    FUN_03f5c2a4(&DAT_091d3030);
    FUN_03f5c2a4(&DAT_091b9808);
    FUN_03f5c2a4(&DAT_091b9810);
    DAT_095218b3 = 1;
  }
  uVar2 = FUN_05ff6f60(&local_50,DAT_091b9808);
  if ((uVar2 & 1) == 0) {
    puVar3 = (undefined2 *)FUN_04c072b4(local_50,local_48,DAT_091d3030);
    puVar4 = (undefined2 *)FUN_04c072b8(param_4,param_5,DAT_091d3038);
    if ((param_6 & 1) == 0) {
      if (0 < (int)local_48) {
        iVar5 = 0;
        do {
          uVar1 = (**(code **)(*param_1 + 0x1a8))(param_1,*puVar3,*(undefined8 *)(*param_1 + 0x1b0))
          ;
          iVar5 = iVar5 + 1;
          *puVar4 = uVar1;
          puVar3 = puVar3 + 1;
          puVar4 = puVar4 + 1;
        } while (iVar5 < (int)local_48);
      }
    }
    else if (0 < (int)local_48) {
      iVar5 = 0;
      do {
        uVar1 = (**(code **)(*param_1 + 0x1c8))(param_1,*puVar3,*(undefined8 *)(*param_1 + 0x1d0));
        iVar5 = iVar5 + 1;
        *puVar4 = uVar1;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      } while (iVar5 < (int)local_48);
    }
  }
  return;
}

