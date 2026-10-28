// rea decompile_all
// name: CakeOrder.InGame.CakeLevelRuntimeDataSoftCurrency$$get_AmountEarnAddedByMultiplier
// address: 0x4385e8c
// body: available
// range: 0x4385e8c-0x4385f7b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int CakeOrder_InGame_CakeLevelRuntimeDataSoftCurrency__get_AmountEarnAddedByMultiplier(long param_1)

{
  double dVar1;
  float fVar2;
  int iVar3;
  double __x;
  double local_28;
  
  fVar2 = *(float *)(param_1 + 0x20);
  iVar3 = *(int *)(param_1 + 0x18);
  if (DAT_09515cf4 == '\0') {
    FUN_03f5c2a4(&DAT_09187e80);
    DAT_09515cf4 = '\x01';
  }
  fVar2 = (fVar2 + -1.0) * (float)iVar3;
  if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  __x = (double)fVar2;
  dVar1 = modf(__x,&local_28);
  if (0.0 <= fVar2) {
    if (dVar1 != 0.5) {
      local_28 = (double)(long)(__x + 0.5);
      goto LAB_04385f54;
    }
    dVar1 = 1.0;
  }
  else {
    if (dVar1 != -0.5) {
      local_28 = (double)(long)(__x + -0.5);
      goto LAB_04385f54;
    }
    dVar1 = -1.0;
  }
  if (((long)local_28 & 1U) != 0) {
    local_28 = local_28 + dVar1;
  }
LAB_04385f54:
  iVar3 = -0x80000000;
  if (local_28 != INFINITY) {
    iVar3 = (int)local_28;
  }
  return iVar3;
}

