// rea decompile_all
// name: CakeOrder.InGame.CakeLevelRuntimeDataSoftCurrency$$Spend
// address: 0x4386704
// body: available
// range: 0x4386704-0x4386813 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_InGame_CakeLevelRuntimeDataSoftCurrency__Spend(float param_1,long param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  double dVar4;
  double __x;
  double local_18;
  
  if (DAT_09515cf4 == '\0') {
    FUN_03f5c2a4(&DAT_09187e80);
    DAT_09515cf4 = '\x01';
  }
  if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  __x = (double)param_1;
  dVar4 = modf(__x,&local_18);
  if (0.0 <= param_1) {
    if (dVar4 != 0.5) {
      local_18 = (double)(long)(__x + 0.5);
      goto LAB_043867bc;
    }
    dVar4 = 1.0;
  }
  else {
    if (dVar4 != -0.5) {
      local_18 = (double)(long)(__x + -0.5);
      goto LAB_043867bc;
    }
    dVar4 = -1.0;
  }
  if (((long)local_18 & 1U) != 0) {
    local_18 = local_18 + dVar4;
  }
LAB_043867bc:
  iVar2 = *(int *)(param_2 + 0x1c);
  iVar1 = -0x80000000;
  if (local_18 != INFINITY) {
    iVar1 = (int)local_18;
  }
  lVar3 = *(long *)(param_2 + 0x28);
  iVar1 = iVar2 + iVar1;
  *(int *)(param_2 + 0x1c) = iVar1;
  if (lVar3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x04386800. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar3 + 0x18))
              (*(undefined8 *)(lVar3 + 0x40),iVar2,iVar1,*(undefined8 *)(lVar3 + 0x28));
    return;
  }
  return;
}

