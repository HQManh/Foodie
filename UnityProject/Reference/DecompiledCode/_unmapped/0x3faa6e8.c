// rea decompile_all
// name: FUN_03faa6e8
// address: 0x3faa6e8
// body: available
// range: 0x3faa6e8-0x3faa757 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_03faa6e8(long *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  code *UNRECOVERED_JUMPTABLE;
  
  if ((*(long *)(*param_1 + 0x70) != 0) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(*param_1 + 0x70) + 0x20),
     UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x03faa70c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar1 = (undefined8 *)(*UNRECOVERED_JUMPTABLE)(param_1);
    return puVar1;
  }
  puVar1 = malloc(0x40);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_08fa98a0;
    puVar1[1] = &PTR_LAB_08fa9928;
    puVar1[2] = 0;
    *(undefined4 *)(puVar1 + 6) = 0;
    puVar1[7] = 0;
    puVar1[3] = &PTR_LAB_08fa9980;
    puVar1[4] = &PTR_LAB_08fa99b8;
    puVar1[5] = param_1;
    return puVar1 + 3;
  }
  FUN_03fa5c84();
  if (DAT_095351f8 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)FUN_03f5da88(0x38,0);
    DAT_095351f8 = puVar1;
    uVar2 = thunk_FUN_03f9944c(DAT_095353e8);
    FUN_03f5ef9c(puVar1 + 3,uVar2);
  }
  return DAT_095351f8;
}

