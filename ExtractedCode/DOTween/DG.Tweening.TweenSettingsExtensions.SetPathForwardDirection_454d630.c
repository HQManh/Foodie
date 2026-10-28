// rea decompile_all
// name: DG.Tweening.TweenSettingsExtensions$$SetPathForwardDirection
// address: 0x454d630
// body: available
// range: 0x454d630-0x454d927 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void DG_Tweening_TweenSettingsExtensions__SetPathForwardDirection
               (long param_1,ulong param_2,undefined8 param_3,ulong param_4,undefined8 param_5)

{
  undefined4 uVar1;
  bool bVar2;
  float *pfVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  undefined4 in_s3;
  undefined4 uVar11;
  ulong local_b8;
  undefined8 uStack_b0;
  ulong local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  float local_90;
  undefined4 local_8c;
  undefined4 uStack_88;
  float local_84;
  
  local_b8 = param_4;
  uStack_b0 = param_5;
  local_a8 = param_2;
  uStack_a0 = param_3;
  if ((DAT_09518775 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b7640);
    FUN_03f5c2a4(&DAT_091b7638);
    FUN_03f5c2a4(&DAT_091b7648);
    FUN_03f5c2a4(&DAT_091b7650);
    DAT_09518775 = 1;
  }
  if (param_1 == 0) {
    return;
  }
  if (*(char *)(param_1 + 0xe8) == '\0') {
    return;
  }
  fVar9 = (float)(param_2 >> 0x20);
  fVar6 = (float)((ulong)param_3 >> 0x20);
  if ((param_2 & 0xff) == 0) {
LAB_0454d748:
    if ((param_4 & 0xff) == 0) {
      *(undefined1 *)(param_1 + 0x16c) = 0;
      return;
    }
    if (DAT_09515ce6 == '\0') {
      FUN_03f5c2a4(&DAT_0918cbd0);
      DAT_09515ce6 = '\x01';
    }
    pfVar3 = *(float **)(DAT_0918cbd0 + 0xb8);
    fVar5 = (float)((ulong)param_5 >> 0x20) - pfVar3[2];
    fVar7 = (float)(param_4 >> 0x20) - *pfVar3;
    fVar10 = (float)param_5 - pfVar3[1];
    uVar8 = 0x2edbe6fe;
    bVar2 = fVar5 * fVar5 + fVar7 * fVar7 + fVar10 * fVar10 < 9.9999994e-11;
    *(bool *)(param_1 + 0x16c) = !bVar2;
    if (bVar2) {
      return;
    }
    if ((param_2 & 0xff) != 0) goto LAB_0454d7d0;
LAB_0454d86c:
    if (DAT_09517b1f == '\0') {
      FUN_03f5c2a4(&DAT_0918cbd0);
      DAT_09517b1f = '\x01';
    }
    lVar4 = *(long *)(DAT_0918cbd0 + 0xb8);
    uVar11 = *(undefined4 *)(lVar4 + 0x48);
    uVar1 = *(undefined4 *)(lVar4 + 0x4c);
    fVar9 = *(float *)(lVar4 + 0x50);
  }
  else {
    if (DAT_09515ce6 == '\0') {
      FUN_03f5c2a4(&DAT_0918cbd0);
      DAT_09515ce6 = '\x01';
    }
    pfVar3 = *(float **)(DAT_0918cbd0 + 0xb8);
    fVar10 = fVar6 - pfVar3[2];
    fVar5 = fVar9 - *pfVar3;
    fVar7 = (float)param_3 - pfVar3[1];
    if (fVar10 * fVar10 + fVar5 * fVar5 + fVar7 * fVar7 < 9.9999994e-11) goto LAB_0454d748;
    *(undefined1 *)(param_1 + 0x16c) = 1;
LAB_0454d7d0:
    fVar5 = fVar6 - pfVar3[2];
    fVar9 = fVar9 - *pfVar3;
    fVar6 = (float)param_3 - pfVar3[1];
    uVar8 = 0x2edbe6fe;
    if (fVar5 * fVar5 + fVar6 * fVar6 + fVar9 * fVar9 < 9.9999994e-11) {
      FUN_043b2ed4(0);
      FUN_05c3a618(&local_a8,DAT_091b7638);
      if ((char)local_a8 == '\0') goto LAB_0454d86c;
    }
    uVar11 = FUN_05c3a634(&local_a8,DAT_091b7650);
    uVar1 = uVar8;
    fVar9 = fVar5;
  }
  if ((param_4 & 0xff) == 0) {
    if (DAT_09515faa == '\0') {
      FUN_03f5c2a4(&DAT_0918cbd0);
      DAT_09515faa = '\x01';
    }
    lVar4 = *(long *)(DAT_0918cbd0 + 0xb8);
    local_98 = *(undefined4 *)(lVar4 + 0x18);
    uVar8 = *(undefined4 *)(lVar4 + 0x1c);
    fVar5 = *(float *)(lVar4 + 0x20);
  }
  else {
    local_98 = FUN_05c3a634(&local_b8,DAT_091b7650);
  }
  uStack_94 = uVar8;
  local_90 = fVar5;
  local_8c = uVar11;
  uStack_88 = uVar1;
  local_84 = fVar9;
  uVar11 = UnityEngine_Quaternion__Internal_LookRotation(&local_8c,&local_98,0);
  *(undefined4 *)(param_1 + 0x170) = uVar11;
  *(undefined4 *)(param_1 + 0x174) = uVar8;
  *(float *)(param_1 + 0x178) = fVar5;
  *(undefined4 *)(param_1 + 0x17c) = in_s3;
  return;
}

