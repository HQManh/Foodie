// rea decompile_all
// name: AnhPD.FoodOrder.PieceSet.Enumerator$$MoveNext
// address: 0x41d4abc
// body: available
// range: 0x41d4abc-0x41d4b7b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool AnhPD_FoodOrder_PieceSet_Enumerator__MoveNext(long param_1)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 local_18;
  
  if ((DAT_09516ab9 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091bec98);
    DAT_09516ab9 = 1;
  }
  uVar4 = *(ulong *)(param_1 + 0x10);
  do {
    while (uVar3 = uVar4, uVar3 == 0) {
      iVar2 = *(int *)(param_1 + 0x18);
      iVar1 = iVar2 + 1;
      *(int *)(param_1 + 0x18) = iVar1;
      if (2 < iVar1) goto LAB_041d4b68;
      uVar4 = *(ulong *)(param_1 + (ulong)(iVar2 != 0) * 8);
      *(int *)(param_1 + 0x1c) = iVar1 * 0x10 + -1;
      *(ulong *)(param_1 + 0x10) = uVar4;
    }
    iVar1 = *(int *)(param_1 + 0x1c) + 1;
    *(ulong *)(param_1 + 0x10) = uVar3 >> 4;
    *(int *)(param_1 + 0x1c) = iVar1;
    uVar4 = uVar3 >> 4;
  } while ((uVar3 & 0xf) == 0);
  local_18 = 0;
  FUN_066c1fdc(&local_18,iVar1,(uint)uVar3 & 0xf,DAT_091bec98);
  *(undefined8 *)(param_1 + 0x20) = local_18;
LAB_041d4b68:
  return uVar3 != 0;
}

