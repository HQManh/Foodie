// rea decompile_all
// name: ChocDino.UIFX.ScreenRectFromMeshes$$End
// address: 0x43a55a8
// body: available
// range: 0x43a55a8-0x43a561b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void ChocDino_UIFX_ScreenRectFromMeshes__End(long param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  undefined8 uVar7;
  float fVar8;
  
  if ((DAT_09517abd & 1) == 0) {
    FUN_03f5c2a4(&DAT_09189c30);
    DAT_09517abd = 1;
  }
  uVar4 = *(undefined8 *)(param_1 + 0x14);
  uVar7 = *(undefined8 *)(param_1 + 0x20);
  if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  fVar3 = (float)uVar4;
  fVar6 = (float)uVar7;
  fVar5 = (float)((ulong)uVar4 >> 0x20);
  fVar8 = (float)((ulong)uVar7 >> 0x20);
  fVar1 = fVar3 - fVar6;
  fVar2 = fVar5 - fVar8;
  *(ulong *)(param_1 + 0x2c) = CONCAT44(fVar2,fVar1);
  *(ulong *)(param_1 + 0x34) = CONCAT44((fVar5 + fVar8) - fVar2,(fVar3 + fVar6) - fVar1);
  return;
}

