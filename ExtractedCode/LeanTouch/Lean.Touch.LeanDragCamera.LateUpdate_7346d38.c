// rea decompile_all
// name: Lean.Touch.LeanDragCamera$$LateUpdate
// address: 0x7346d38
// body: available
// range: 0x7346d38-0x734708b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7347088 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Lean_Touch_LeanDragCamera__LateUpdate
               (undefined1 param_1 [16],float param_2,float param_3,long param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined4 uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined8 uVar18;
  float fVar19;
  float fVar20;
  undefined8 local_68;
  
  if ((DAT_095206e6 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183140);
    FUN_03f5c2a4(&DAT_091876f0);
    FUN_03f5c2a4(&DAT_091ae180);
    DAT_095206e6 = 1;
  }
  if (DAT_09515ce6 == '\0') {
    FUN_03f5c2a4(&DAT_0918cbd0);
    DAT_09515ce6 = '\x01';
  }
  if (*(long *)(param_4 + 0x28) == 0) {
LAB_07347088:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  lVar4 = Lean_Touch_LeanFingerFilter__UpdateAndGetFingers(*(long *)(param_4 + 0x28),0);
  lVar5 = UnityEngine_Component__get_transform(param_4,0);
  if (lVar5 == 0) goto LAB_07347088;
  fVar7 = (float)UnityEngine_Transform__get_localPosition(lVar5,0);
  fVar12 = param_3;
  fVar11 = param_2;
  if (*(char *)(param_4 + 0x20) != '\0') {
    local_68 = 0;
    Lean_Touch_LeanGesture__TryGetLastScreenCenter(lVar4,&local_68);
    uVar2 = local_68;
    uVar10 = (undefined4)local_68;
    uVar1 = local_68 >> 0x20;
    local_68 = 0;
    Lean_Touch_LeanGesture__TryGetScreenCenter(lVar4,&local_68);
    uVar3 = local_68;
    uVar14 = local_68._4_4_;
    uVar6 = UnityEngine_Component__get_gameObject(param_4,0);
    if (*(int *)(DAT_091876f0 + 0xe4) == 0) {
      FUN_03f5c424(DAT_091876f0);
    }
    fVar15 = (float)(uVar2 >> 0x20);
    fVar16 = (float)uVar3;
    fVar8 = (float)Lean_Touch_LeanScreenDepth__ConvertDelta
                             (uVar10,uVar1,uVar3 & 0xffffffff,uVar14,param_4 + 0x30,uVar6,0);
    fVar17 = *(float *)(param_4 + 0x54);
    fVar19 = *(float *)(param_4 + 0x58);
    fVar20 = *(float *)(param_4 + 0x5c);
    fVar11 = fVar15;
    fVar12 = fVar16;
    lVar5 = UnityEngine_Component__get_transform(param_4,0);
    if (lVar5 == 0) goto LAB_07347088;
    fVar9 = (float)UnityEngine_Transform__get_position(lVar5,0);
    fVar13 = *(float *)(param_4 + 0x50);
    fVar11 = fVar11 - fVar15 * fVar19 * fVar13;
    fVar12 = fVar12 - fVar16 * fVar20 * fVar13;
    UnityEngine_Transform__set_position(fVar9 - fVar17 * fVar8 * fVar13,lVar5,0);
  }
  fVar8 = *(float *)(param_4 + 0x74);
  fVar15 = *(float *)(param_4 + 0x78);
  fVar16 = *(float *)(param_4 + 0x7c);
  lVar5 = UnityEngine_Component__get_transform(param_4,0);
  if (lVar5 == 0) goto LAB_07347088;
  fVar17 = (float)UnityEngine_Transform__get_localPosition(lVar5,0);
  uVar14 = *(undefined4 *)(param_4 + 0x60);
  *(float *)(param_4 + 0x7c) = fVar16 + (fVar12 - param_3);
  *(float *)(param_4 + 0x74) = fVar8 + (fVar17 - fVar7);
  *(float *)(param_4 + 0x78) = fVar15 + (fVar11 - param_2);
  uVar10 = UnityEngine_Time__get_deltaTime(0);
  if (*(int *)(DAT_09183140 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  fVar11 = (float)CW_Common_CwHelper__DampenFactor(uVar14,uVar10,0);
  uVar6 = *(undefined8 *)(param_4 + 0x74);
  fVar12 = *(float *)(param_4 + 0x7c);
  if (DAT_09515ce6 == '\0') {
    FUN_03f5c2a4(&DAT_0918cbd0);
    DAT_09515ce6 = '\x01';
  }
  fVar8 = 1.0;
  if (fVar11 <= 1.0) {
    fVar8 = fVar11;
  }
  fVar16 = *(float *)(*(undefined8 **)(DAT_0918cbd0 + 0xb8) + 1);
  uVar18 = **(undefined8 **)(DAT_0918cbd0 + 0xb8);
  fVar15 = 0.0;
  if (0.0 <= fVar11) {
    fVar15 = fVar8;
  }
  lVar5 = UnityEngine_Component__get_transform(param_4,0);
  if (lVar5 == 0) goto LAB_07347088;
  fVar11 = (float)uVar6;
  fVar8 = (float)((ulong)uVar6 >> 0x20);
  fVar11 = fVar11 + ((float)uVar18 - fVar11) * fVar15;
  fVar8 = fVar8 + ((float)((ulong)uVar18 >> 0x20) - fVar8) * fVar15;
  uVar6 = CONCAT44(fVar8,fVar11);
  fVar12 = fVar12 + fVar15 * (fVar16 - fVar12);
  UnityEngine_Transform__set_localPosition
            ((fVar7 + (float)*(undefined8 *)(param_4 + 0x74)) - fVar11,
             (param_2 + (float)((ulong)*(undefined8 *)(param_4 + 0x74) >> 0x20)) - fVar8,
             (param_3 + *(float *)(param_4 + 0x7c)) - fVar12,lVar5,0);
  if (*(char *)(param_4 + 0x20) != '\0') {
    if (lVar4 == 0) goto LAB_07347088;
    if (*(int *)(lVar4 + 0x18) != 0) goto LAB_0734705c;
  }
  fVar7 = *(float *)(param_4 + 100);
  if ((0.0 < fVar7) && (0.0 < *(float *)(param_4 + 0x60))) {
    fVar15 = 1.0;
    if (fVar7 <= 1.0) {
      fVar15 = fVar7;
    }
    fVar16 = 0.0;
    if (0.0 <= fVar7) {
      fVar16 = fVar15;
    }
    uVar6 = CONCAT44(fVar8 + ((float)((ulong)*(undefined8 *)(param_4 + 0x74) >> 0x20) - fVar8) *
                             fVar16,
                     fVar11 + ((float)*(undefined8 *)(param_4 + 0x74) - fVar11) * fVar16);
    fVar12 = fVar12 + fVar16 * (*(float *)(param_4 + 0x7c) - fVar12);
  }
LAB_0734705c:
  *(undefined8 *)(param_4 + 0x74) = uVar6;
  *(float *)(param_4 + 0x7c) = fVar12;
  return;
}

