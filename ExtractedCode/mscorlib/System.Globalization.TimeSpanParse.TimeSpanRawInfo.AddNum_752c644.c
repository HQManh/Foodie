// rea decompile_all
// name: System.Globalization.TimeSpanParse.TimeSpanRawInfo$$AddNum
// address: 0x752c644
// body: available
// range: 0x752c644-0x752c72f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
System_Globalization_TimeSpanParse_TimeSpanRawInfo__AddNum
          (long param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if ((DAT_0952183e & 1) == 0) {
    FUN_03f5c2a4(&DAT_0920dc98);
    DAT_0952183e = 1;
  }
  iVar1 = *(int *)(param_1 + 0xc);
  if ((4 < iVar1) || (10 < *(int *)(param_1 + 4))) {
    System_Globalization_TimeSpanParse_TimeSpanResult__SetFailure(param_3,2,DAT_0920dc98,0,0);
    return 0;
  }
  *(int *)(param_1 + 0xc) = iVar1 + 1;
  if (iVar1 < 2) {
    if (iVar1 == 0) {
      puVar2 = (undefined8 *)(param_1 + 0x78);
      goto LAB_0752c70c;
    }
    if (iVar1 == 1) {
      puVar2 = (undefined8 *)(param_1 + 0x98);
      goto LAB_0752c70c;
    }
  }
  else {
    if (iVar1 == 2) {
      puVar2 = (undefined8 *)(param_1 + 0xb8);
      goto LAB_0752c70c;
    }
    if (iVar1 == 3) {
      puVar2 = (undefined8 *)(param_1 + 0xd8);
      goto LAB_0752c70c;
    }
  }
  puVar2 = (undefined8 *)(param_1 + 0xf8);
LAB_0752c70c:
  uVar6 = param_2[1];
  uVar5 = *param_2;
  uVar4 = param_2[3];
  uVar3 = param_2[2];
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  puVar2[1] = uVar6;
  *puVar2 = uVar5;
  puVar2[3] = uVar4;
  puVar2[2] = uVar3;
  return 1;
}

