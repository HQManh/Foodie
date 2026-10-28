// rea decompile_all
// name: Lean.Touch.LeanSwipeBase$$HandleFingerSwipe
// address: 0x734a5d8
// body: available
// range: 0x734a5d8-0x734aa13 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Lean_Touch_LeanSwipeBase__HandleFingerSwipe
               (float param_1,float param_2,float param_3,float param_4,long param_5,
               undefined8 param_6)

{
  ulong *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined8 local_28;
  
  if ((DAT_0952076d & 1) == 0) {
    FUN_03f5c2a4(&DAT_091876f0);
    FUN_03f5c2a4(&DAT_09187728);
    FUN_03f5c2a4(&DAT_091be158);
    FUN_03f5c2a4(&DAT_091be070);
    FUN_03f5c2a4(&DAT_091be0e8);
    FUN_03f5c2a4(&DAT_091be168);
    FUN_03f5c2a4(&DAT_091be1e8);
    DAT_0952076d = 1;
  }
  fVar8 = param_4 - param_2;
  fVar5 = param_3 - param_1;
  local_28 = CONCAT44(fVar8,fVar5);
  fVar7 = fVar8;
  uVar2 = Lean_Touch_LeanSwipeBase__AngleIsValid(param_5);
  if ((uVar2 & 1) == 0) {
    return;
  }
  if (*(long *)(param_5 + 0x28) != 0) {
    FUN_0647fad4(*(long *)(param_5 + 0x28),param_6,DAT_091be070);
  }
  if (*(int *)(param_5 + 0x34) == 2) {
    if (*(int *)(DAT_09187728 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    fVar6 = (float)Lean_Touch_LeanTouch__get_ScreenFactor();
  }
  else {
    if (*(int *)(param_5 + 0x34) != 0) goto LAB_0734a718;
    if (*(int *)(DAT_09187728 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    fVar6 = (float)Lean_Touch_LeanTouch__get_ScalingFactor();
  }
  fVar8 = fVar8 * fVar6;
  fVar5 = fVar5 * fVar6;
  local_28 = CONCAT44(fVar8,fVar5);
LAB_0734a718:
  uVar2 = (ulong)(uint)fVar5;
  if (*(int *)(param_5 + 0x30) == 2) {
    fVar7 = ABS(fVar8);
    if (fVar5 < -fVar7) {
      if (DAT_09516db4 == '\0') {
        FUN_03f5c2a4(&DAT_0918cb68);
        DAT_09516db4 = '\x01';
      }
      uVar3 = *(undefined8 *)(*(long *)(DAT_0918cb68 + 0xb8) + 0x28);
      fVar8 = -(float)((ulong)uVar3 >> 0x20);
      uVar2 = CONCAT44(fVar8,-(float)uVar3);
      fVar7 = ABS(fVar8);
      local_28 = uVar2;
    }
    if (fVar7 < (float)uVar2) {
      if (DAT_09516db4 == '\0') {
        FUN_03f5c2a4(&DAT_0918cb68);
        DAT_09516db4 = '\x01';
      }
      puVar1 = (ulong *)(*(long *)(DAT_0918cb68 + 0xb8) + 0x28);
      uVar2 = (ulong)*(uint *)puVar1;
      fVar8 = *(float *)(*(long *)(DAT_0918cb68 + 0xb8) + 0x2c);
      local_28 = *puVar1;
    }
    fVar7 = ABS((float)uVar2);
    if (fVar8 < -fVar7) {
      if (DAT_09516afb == '\0') {
        FUN_03f5c2a4(&DAT_0918cb68);
        DAT_09516afb = '\x01';
      }
      uVar3 = *(undefined8 *)(*(long *)(DAT_0918cb68 + 0xb8) + 0x10);
      fVar7 = -(float)uVar3;
      fVar8 = -(float)((ulong)uVar3 >> 0x20);
      uVar2 = CONCAT44(fVar8,fVar7);
      fVar7 = ABS(fVar7);
      local_28 = uVar2;
    }
    fVar5 = (float)uVar2;
    if (fVar7 < fVar8) {
      if (DAT_09516afb == '\0') {
        FUN_03f5c2a4(&DAT_0918cb68);
        DAT_09516afb = '\x01';
      }
      fVar5 = *(float *)(*(long *)(DAT_0918cb68 + 0xb8) + 0x10);
      fVar8 = *(float *)(*(long *)(DAT_0918cb68 + 0xb8) + 0x14);
    }
  }
  else if (*(int *)(param_5 + 0x30) == 1) {
    fVar5 = (float)UnityEngine_Vector2__Normalize(&local_28,0);
    fVar8 = fVar7;
  }
  local_28 = CONCAT44(fVar8 * *(float *)(param_5 + 0x38),fVar5 * *(float *)(param_5 + 0x38));
  if (*(long *)(param_5 + 0x40) != 0) {
    FUN_06480470(*(long *)(param_5 + 0x40),DAT_091be158);
  }
  lVar4 = *(long *)(param_5 + 0x48);
  if (lVar4 != 0) {
    if (DAT_09516ea4 == '\0') {
      FUN_03f5c2a4(&DAT_09187e80);
      DAT_09516ea4 = '\x01';
    }
    uVar3 = local_28;
    if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    fVar7 = (float)uVar3;
    fVar8 = (float)((ulong)uVar3 >> 0x20);
    FUN_0647ff8c(SQRT(fVar7 * fVar7 + fVar8 * fVar8),lVar4,DAT_091be0e8);
  }
  uVar3 = UnityEngine_Component__get_gameObject(param_5,0);
  if (*(int *)(DAT_091876f0 + 0xe4) == 0) {
    FUN_03f5c424(DAT_091876f0);
  }
  fVar8 = (float)Lean_Touch_LeanScreenDepth__Convert(param_1,param_2,param_5 + 0x50,uVar3,0);
  fVar7 = fVar5;
  uVar3 = UnityEngine_Component__get_gameObject(param_5,0);
  fVar6 = (float)Lean_Touch_LeanScreenDepth__Convert(param_3,param_4,param_5 + 0x50,uVar3,0);
  if (*(long *)(param_5 + 0x70) != 0) {
    FUN_06480954(fVar8,param_2,fVar5,*(long *)(param_5 + 0x70),DAT_091be168);
  }
  if (*(long *)(param_5 + 0x78) != 0) {
    FUN_06480954(fVar6,param_4,fVar7,*(long *)(param_5 + 0x78),DAT_091be168);
  }
  if (*(long *)(param_5 + 0x80) != 0) {
    FUN_06480954(fVar6 - fVar8,param_4 - param_2,fVar7 - fVar5,*(long *)(param_5 + 0x80),
                 DAT_091be168);
  }
  if (*(long *)(param_5 + 0x88) != 0) {
    FUN_064829f0(fVar8,param_2,fVar5,fVar6,param_4,fVar7,*(long *)(param_5 + 0x88),DAT_091be1e8);
  }
  return;
}

