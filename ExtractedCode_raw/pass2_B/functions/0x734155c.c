// rea decompile_all
// name: Lean.Common.LeanPath$$TryGetClosest
// address: 0x734155c
// body: available
// range: 0x734155c-0x734170f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint Lean_Common_LeanPath__TryGetClosest
               (float param_1,undefined8 param_2,ulong *param_3,undefined8 *param_4,
               undefined4 param_5)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined8 local_90;
  float local_88;
  ulong local_80;
  ulong uStack_78;
  ulong local_70;
  undefined8 local_28;
  
  local_88 = 0.0;
  local_90 = 0;
  if (param_1 <= 0.0) {
    uStack_78 = param_3[1];
    local_80 = *param_3;
    local_70 = param_3[2];
    local_28 = 0;
    uVar1 = Lean_Common_LeanPath__TryGetClosest
                      (param_2,&local_80,param_4,(long)&local_28 + 4,&local_28,param_5);
  }
  else {
    local_90 = *param_4;
    local_88 = *(float *)(param_4 + 1);
    uStack_78 = param_3[1];
    local_80 = *param_3;
    local_70 = param_3[2];
    local_28 = 0;
    uVar2 = Lean_Common_LeanPath__TryGetClosest
                      (param_2,&local_80,&local_90,(long)&local_28 + 4,&local_28,param_5);
    fVar4 = local_88;
    uVar3 = local_90;
    uVar1 = 0;
    if ((uVar2 & 1) != 0) {
      fVar5 = *(float *)(param_4 + 1);
      uVar7 = *param_4;
      if (DAT_09517ea8 == '\0') {
        FUN_03f5c2a4(&DAT_09187e80);
        DAT_09517ea8 = '\x01';
      }
      fVar6 = (float)uVar7;
      fVar10 = (float)uVar3 - fVar6;
      fVar8 = (float)((ulong)uVar7 >> 0x20);
      fVar11 = (float)((ulong)uVar3 >> 0x20) - fVar8;
      fVar9 = fVar4 - fVar5;
      fVar12 = fVar9 * fVar9 + fVar10 * fVar10 + fVar11 * fVar11;
      if ((fVar12 != 0.0) && ((param_1 < 0.0 || (param_1 * param_1 < fVar12)))) {
        if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        fVar12 = SQRT(fVar12);
        uVar3 = CONCAT44(fVar8 + (fVar11 / fVar12) * param_1,fVar6 + (fVar10 / fVar12) * param_1);
        fVar4 = fVar5 + (fVar9 / fVar12) * param_1;
      }
      local_80 = local_80 & 0xffffffff00000000;
      local_28 = local_28 & 0xffffffff;
      uVar1 = Lean_Common_LeanPath__TryGetClosest
                        (uVar3,(int)((ulong)uVar3 >> 0x20),fVar4,param_2,param_4,&local_80,
                         (long)&local_28 + 4,param_5);
    }
  }
  return uVar1 & 1;
}

