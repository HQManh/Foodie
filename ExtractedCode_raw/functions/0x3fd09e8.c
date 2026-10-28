// rea decompile_all
// name: FUN_03fd09e8
// address: 0x3fd09e8
// body: available
// range: 0x3fd09e8-0x3fd0b77 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_03fd09e8(ulong param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  if (param_1 < 0x41) {
    param_1 = 0x40;
  }
  uVar3 = (DAT_09748110 + param_1 * 0x1000) - 1;
  if ((ulong)-DAT_09748110 <= param_1 << 0xc) {
    uVar3 = 0xffffffffffffffff;
  }
  uVar3 = uVar3 & -DAT_09748110;
  if ((DAT_09748600 != 0) && ((DAT_09748600 < uVar3 || (DAT_09748600 - uVar3 < DAT_09535be8)))) {
    return 0;
  }
  uVar1 = FUN_03fd70c8(uVar3);
  if (uVar1 == 0) {
    (*(code *)PTR_thunk_FUN_03fcb048_09515630)
              ("GC Warning: Failed to expand heap by %ld bytes\n",uVar3);
    return 0;
  }
  if (DAT_09535be0 != 0) {
    FUN_03fcb51c("Grow heap to %lu KiB after %lu bytes allocated\n",
                 uVar3 + DAT_09535be8 + 0x1ff >> 10,DAT_09535c28);
  }
  lVar2 = FUN_03fce858();
  if ((((long)uVar1 < 0) || (DAT_09535bf8 != 0)) && ((DAT_09535bf8 == 0 || (uVar1 <= DAT_09535bf8)))
     ) {
    uVar5 = uVar1 - (lVar2 + 0x4000000);
    if (uVar1 <= uVar5) goto LAB_03fd0b04;
    puVar4 = &DAT_09515698;
    uVar6 = DAT_09515698;
    if (uVar5 <= DAT_09515698) {
      uVar6 = uVar5;
    }
  }
  else {
    uVar5 = uVar3 + uVar1 + lVar2 + 0x4000000;
    if (uVar5 <= uVar1) goto LAB_03fd0b04;
    puVar4 = &DAT_097485f8;
    uVar6 = DAT_097485f8;
    if (DAT_097485f8 <= uVar5) {
      uVar6 = uVar5;
    }
  }
  *puVar4 = uVar6;
LAB_03fd0b04:
  DAT_09535c00 = DAT_09535bf8;
  DAT_09535bf8 = uVar1;
  FUN_03fd07c4(uVar1,uVar3);
  DAT_09515680 = DAT_09535be8 + lVar2 + 0x2000000U;
  if (CARRY8(DAT_09535be8,lVar2 + 0x2000000U)) {
    DAT_09515680 = -1;
  }
  if (DAT_097485c8 != (code *)0x0) {
    (*DAT_097485c8)();
  }
  return 1;
}

