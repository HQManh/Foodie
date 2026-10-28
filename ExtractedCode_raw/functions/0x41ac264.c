// rea decompile_all
// name: Datpt.Cook_Order.ItemMovingBase$$Editor
// address: 0x41ac264
// body: available
// range: 0x41ac264-0x41ac267 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Datpt_Cook_Order_ItemMovingBase__Editor(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  
  if ((DAT_095168d5 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c5320);
    FUN_03f5c2a4(&DAT_091c54d0);
    FUN_03f5c2a4(&DAT_091cd5e8);
    FUN_03f5c2a4(&DAT_091cd7a0);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_095168d5 = 1;
  }
  uVar1 = FUN_04a6a14c(param_1,DAT_091c54d0);
  puVar4 = (undefined8 *)(param_1 + 0x50);
  *puVar4 = uVar1;
  thunk_FUN_03f5d7b8(puVar4,uVar1);
  uVar1 = *puVar4;
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = UnityEngine_Object__op_Equality(uVar1,0,0);
  if ((uVar2 & 1) != 0) {
    lVar3 = UnityEngine_Component__get_gameObject(param_1,0);
    if (lVar3 == 0) goto LAB_041ac3dc;
    uVar1 = FUN_04b7c294(lVar3,DAT_091cd7a0);
    *puVar4 = uVar1;
    thunk_FUN_03f5d7b8(puVar4,uVar1);
  }
  uVar1 = FUN_04a6a14c(param_1,DAT_091c5320);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09188ad0);
  }
  uVar2 = UnityEngine_Object__op_Equality(uVar1,0,0);
  if ((uVar2 & 1) == 0) {
    uVar1 = FUN_04a6a14c(param_1,DAT_091c5320);
  }
  else {
    lVar3 = UnityEngine_Component__get_gameObject(param_1,0);
    if (lVar3 == 0) {
LAB_041ac3dc:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar1 = FUN_04b7c294(lVar3,DAT_091cd5e8);
  }
  *(undefined8 *)(param_1 + 0x48) = uVar1;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x48),uVar1);
  return;
}

