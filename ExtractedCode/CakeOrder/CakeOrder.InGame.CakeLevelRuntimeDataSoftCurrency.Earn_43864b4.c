// rea decompile_all
// name: CakeOrder.InGame.CakeLevelRuntimeDataSoftCurrency$$Earn
// address: 0x43864b4
// body: available
// range: 0x43864b4-0x43865f3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_InGame_CakeLevelRuntimeDataSoftCurrency__Earn(long param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  float fVar7;
  double local_28;
  
  lVar4 = *(long *)(param_1 + 0x28);
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + param_2;
  if (lVar4 == 0) {
    return;
  }
  iVar2 = CakeOrder_InGame_CakeLevelRuntimeDataSoftCurrency__get_AmountEarn();
  fVar7 = *(float *)(param_1 + 0x20);
  if (DAT_09515cf4 == '\0') {
    FUN_03f5c2a4(&DAT_09187e80);
    DAT_09515cf4 = '\x01';
  }
  fVar7 = fVar7 * (float)param_2;
  if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  dVar6 = (double)fVar7;
  dVar5 = modf(dVar6,&local_28);
  if (0.0 <= fVar7) {
    if (dVar5 != 0.5) {
      dVar5 = (double)(long)(dVar6 + 0.5);
      goto LAB_043865ac;
    }
    dVar6 = 1.0;
  }
  else {
    if (dVar5 != -0.5) {
      dVar5 = (double)(long)(dVar6 + -0.5);
      goto LAB_043865ac;
    }
    dVar6 = -1.0;
  }
  dVar5 = local_28;
  if (((long)local_28 & 1U) != 0) {
    dVar5 = local_28 + dVar6;
  }
LAB_043865ac:
  uVar3 = CakeOrder_InGame_CakeLevelRuntimeDataSoftCurrency__get_AmountEarn(param_1);
  iVar1 = -0x80000000;
  if (dVar5 != INFINITY) {
    iVar1 = (int)dVar5;
  }
                    /* WARNING: Could not recover jumptable at 0x043865f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar4 + 0x18))
            (*(undefined8 *)(lVar4 + 0x40),iVar2 - iVar1,uVar3,*(undefined8 *)(lVar4 + 0x28));
  return;
}

