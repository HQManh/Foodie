// rea decompile_all
// name: System.Reflection.Emit.OpCode$$get_Name
// address: 0x74f5d8c
// body: available
// range: 0x74f5d8c-0x74f5d8f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 System_Reflection_Emit_OpCode__get_Name(char *param_1)

{
  long lVar1;
  ulong uVar2;
  uint uVar3;
  
  if ((DAT_09521647 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188c38);
    DAT_09521647 = 1;
  }
  if (*param_1 == -1) {
    if (*(int *)(DAT_09188c38 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar1 = **(long **)(DAT_09188c38 + 0xb8);
    if (lVar1 == 0) goto LAB_074f5cd4;
    uVar2 = (ulong)(byte)param_1[1];
    uVar3 = *(uint *)(lVar1 + 0x18);
  }
  else {
    if (*(int *)(DAT_09188c38 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar1 = **(long **)(DAT_09188c38 + 0xb8);
    if (lVar1 == 0) {
LAB_074f5cd4:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar3 = *(uint *)(lVar1 + 0x18);
    uVar2 = (ulong)(byte)param_1[1] | 0x100;
  }
  if ((uint)uVar2 < uVar3) {
    return *(undefined8 *)(lVar1 + uVar2 * 8 + 0x20);
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c558();
}

