// rea decompile_all
// name: CakeOrder.InGame.BackgroundColorGradingControl$$Update
// address: 0x437f7b4
// body: available
// range: 0x437f7b4-0x437f953 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_InGame_BackgroundColorGradingControl__Update(long param_1)

{
  int iVar1;
  ulong uVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  
  if ((DAT_09517963 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091819c0);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09517963 = 1;
  }
  if (*(char *)(param_1 + 0x65) == '\0') {
    return;
  }
  fVar9 = *(float *)(param_1 + 0x5c);
  fVar5 = (float)UnityEngine_Time__get_unscaledDeltaTime(0);
  fVar9 = fVar9 + fVar5;
  *(float *)(param_1 + 0x5c) = fVar9;
  fVar5 = 1.0;
  if (0.0 < *(float *)(param_1 + 0x60)) {
    fVar9 = fVar9 / *(float *)(param_1 + 0x60);
    fVar8 = 1.0;
    if (fVar9 <= 1.0) {
      fVar8 = fVar9;
    }
    fVar5 = 0.0;
    if (0.0 <= fVar9) {
      fVar5 = fVar8;
    }
  }
  uVar4 = *(undefined8 *)(param_1 + 0x40);
  fVar9 = 0.0;
  if (0.0 <= fVar5) {
    fVar9 = fVar5;
  }
  iVar1 = *(int *)(DAT_091819c0 + 0xe4);
  fVar8 = fVar9 * fVar9 * 3.0 - fVar9 * fVar9 * (fVar9 + fVar9);
  fVar8 = fVar8 + (1.0 - fVar8) * 0.0;
  fVar9 = 1.0;
  if (fVar8 <= 1.0) {
    fVar9 = fVar8;
  }
  fVar6 = 0.0;
  if (0.0 <= fVar8) {
    fVar6 = fVar9;
  }
  fVar9 = *(float *)(param_1 + 0x54) +
          (*(float *)(param_1 + 0x58) - *(float *)(param_1 + 0x54)) * fVar6;
  *(float *)(param_1 + 0x50) = fVar9;
  if (iVar1 == 0) {
    FUN_03f5c424();
  }
  CakeOrder_InGame_BackgroundColorGradingControl__Push(fVar9,uVar4);
  if (fVar5 < 1.0) {
    return;
  }
  if (*(char *)(param_1 + 100) != '\0') {
    uVar4 = *(undefined8 *)(param_1 + 0x48);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar2 = UnityEngine_Object__op_Implicit(uVar4,0);
    if ((uVar2 & 1) != 0) {
      *(undefined1 *)(param_1 + 100) = 0;
      *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_1 + 0x48);
      thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x40));
      uVar7 = CakeOrder_InGame_BackgroundColorGradingControl__get_TargetStrength(param_1);
      *(undefined4 *)(param_1 + 0x5c) = 0;
      uVar3 = 1;
      *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_1 + 0x50);
      *(undefined4 *)(param_1 + 0x58) = uVar7;
      goto LAB_0437f93c;
    }
  }
  uVar3 = 0;
  *(undefined1 *)(param_1 + 100) = 0;
LAB_0437f93c:
  *(undefined1 *)(param_1 + 0x65) = uVar3;
  return;
}

