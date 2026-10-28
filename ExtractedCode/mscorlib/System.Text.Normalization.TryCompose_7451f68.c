// rea decompile_all
// name: System.Text.Normalization$$TryCompose
// address: 0x7451f68
// body: available
// range: 0x7451f68-0x745207f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 System_Text_Normalization__TryCompose(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = DAT_091888e0;
  if ((DAT_095210f8 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091888e0);
    DAT_095210f8 = 1;
    lVar3 = DAT_091888e0;
  }
  while( true ) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      FUN_03f5c424();
      lVar3 = DAT_091888e0;
    }
    lVar4 = *(long *)(*(long *)(lVar3 + 0xb8) + 8);
    if (*(int *)(lVar4 + (long)param_1 * 4) != param_2) break;
    if (*(int *)(lVar3 + 0xe4) == 0) {
      FUN_03f5c424();
      lVar4 = *(long *)(*(long *)(DAT_091888e0 + 0xb8) + 8);
      lVar3 = DAT_091888e0;
    }
    if (*(int *)(lVar4 + (long)(param_1 + 1) * 4) == param_3) {
      if (*(int *)(lVar3 + 0xe4) == 0) {
        FUN_03f5c424();
        lVar4 = *(long *)(*(long *)(DAT_091888e0 + 0xb8) + 8);
        lVar3 = DAT_091888e0;
      }
      if (*(int *)(lVar4 + (long)(param_1 + 2) * 4) == 0) {
        if (*(int *)(lVar3 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar1 = System_Text_Normalization__GetPrimaryCompositeFromMapIndex(param_1);
        uVar2 = System_Text_Normalization__PropValue();
        lVar3 = DAT_091888e0;
        if ((uVar2 >> 6 & 1) == 0) {
          return uVar1;
        }
      }
    }
    do {
      if (*(int *)(lVar3 + 0xe4) == 0) {
        FUN_03f5c424();
        lVar3 = DAT_091888e0;
      }
      lVar4 = (long)param_1;
      param_1 = param_1 + 1;
    } while (*(int *)(*(long *)(*(long *)(lVar3 + 0xb8) + 8) + lVar4 * 4) != 0);
  }
  return 0;
}

