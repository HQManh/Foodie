// rea decompile_all
// name: System.Globalization.CompareInfo$$CompareOrdinalIgnoreCase
// address: 0x74fd2b4
// body: available
// range: 0x74fd2b4-0x74fd4a7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74fd4a4 to 0x74fe3b0 System.Globalization.CompareInfo$$CompareStringOrdinalIgnoreCase (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong System_Globalization_CompareInfo__CompareOrdinalIgnoreCase
                (undefined8 param_1,ulong param_2,undefined8 param_3,ulong param_4)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  ushort *puVar5;
  ushort *puVar6;
  ushort uVar7;
  uint uVar8;
  uint uVar9;
  ulong uVar10;
  ulong uVar11;
  
  if ((DAT_09521660 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091827f8);
    FUN_03f5c2a4(&DAT_09184c68);
    FUN_03f5c2a4(&DAT_09187e80);
    FUN_03f5c2a4(&DAT_091d3030);
    FUN_03f5c2a4(&DAT_091b9810);
    DAT_09521660 = 1;
  }
  if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  iVar4 = System_Math__Min(param_2 & 0xffffffff,param_4 & 0xffffffff,0);
  puVar5 = (ushort *)FUN_04c072b4(param_1,param_2,DAT_091d3030);
  puVar6 = (ushort *)FUN_04c072b4(param_3,param_4,DAT_091d3030);
  if (*(int *)(DAT_09184c68 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09184c68);
  }
  if (DAT_095216cd == '\0') {
    FUN_03f5c2a4(&DAT_09184c68);
    DAT_095216cd = '\x01';
  }
  if (*(int *)(DAT_09184c68 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar7 = 0x7f;
  if (**(char **)(DAT_09184c68 + 0xb8) != '\0') {
    uVar7 = 0xffff;
  }
  if (iVar4 != 0) {
    uVar11 = param_2 & 0xffffffff;
    uVar10 = param_4 & 0xffffffff;
    do {
      uVar1 = *puVar5;
      if (uVar7 < uVar1) {
LAB_074fd46c:
        if (*(int *)(DAT_091827f8 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar10 = System_Globalization_CompareInfo__CompareStringOrdinalIgnoreCase
                           (puVar5,uVar11,puVar6,uVar10);
        return uVar10;
      }
      uVar2 = *puVar6;
      if (uVar7 < uVar2) goto LAB_074fd46c;
      if (uVar1 != uVar2) {
        uVar8 = (uint)uVar1;
        uVar9 = (uint)uVar2;
        uVar3 = uVar8 - 0x20;
        if (0x19 < uVar8 - 0x61) {
          uVar3 = uVar8;
        }
        uVar8 = uVar9 - 0x20;
        if (0x19 < uVar9 - 0x61) {
          uVar8 = uVar9;
        }
        uVar3 = uVar3 - uVar8;
        if (uVar3 != 0) goto LAB_074fd458;
      }
      iVar4 = iVar4 + -1;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
      uVar10 = (ulong)((int)uVar10 - 1);
      uVar11 = (ulong)((int)uVar11 - 1);
    } while (iVar4 != 0);
  }
  uVar3 = (int)param_2 - (int)param_4;
LAB_074fd458:
  return (ulong)uVar3;
}

