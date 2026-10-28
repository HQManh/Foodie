// rea decompile_all
// name: CookOrder.Cooking.Implement.CookingDishDeliveryMotion.<>c__DisplayClass0_0$$<Play>b__0
// address: 0x44d500c
// body: available
// range: 0x44d500c-0x44d51f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x44d51f0 to 0x866c8b0 UnityEngine.Transform$$set_position (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x44d51f4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CookOrder_Cooking_Implement_CookingDishDeliveryMotion_<>c__DisplayClass0_0__<Play>b__0
               (float param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  float fVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 uVar11;
  float fVar12;
  float fVar13;
  
  if ((DAT_095182e5 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_095182e5 = 1;
  }
  uVar3 = *(undefined8 *)(param_2 + 0x10);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = UnityEngine_Object__op_Implicit(uVar3,0);
  if ((uVar1 & 1) == 0) {
    return;
  }
  fVar5 = *(float *)(param_2 + 0x18);
  if ((fVar5 <= 0.0) || (fVar5 <= param_1)) {
    fVar7 = (param_1 - fVar5) / *(float *)(param_2 + 0x40);
    fVar5 = 1.0;
    if (fVar7 <= 1.0) {
      fVar5 = fVar7;
    }
    fVar12 = 0.0;
    if (0.0 <= fVar7) {
      fVar12 = fVar5;
    }
    fVar5 = fVar12;
    if (*(long *)(param_2 + 0x48) != 0) {
      fVar5 = (float)UnityEngine_AnimationCurve__Evaluate(fVar12,*(long *)(param_2 + 0x48),0);
    }
    lVar4 = *(long *)(param_2 + 0x10);
    fVar7 = *(float *)(param_2 + 0x30);
    fVar13 = *(float *)(param_2 + 0x58);
    uVar3 = *(undefined8 *)(param_2 + 0x28);
    uVar11 = *(undefined8 *)(param_2 + 0x50);
    if (DAT_09515faa == '\0') {
      FUN_03f5c2a4(&DAT_0918cbd0);
      DAT_09515faa = '\x01';
    }
    if (lVar4 != 0) {
      fVar9 = (float)uVar3;
      fVar10 = (float)((ulong)uVar3 >> 0x20);
      lVar2 = *(long *)(DAT_0918cbd0 + 0xb8);
      fVar8 = *(float *)(lVar2 + 0x20);
      uVar3 = CONCAT44(fVar10 + ((float)((ulong)uVar11 >> 0x20) - fVar10) * fVar5,
                       fVar9 + ((float)uVar11 - fVar9) * fVar5);
      fVar12 = sinf(fVar12 * 3.1415927);
      fVar12 = fVar12 * *(float *)(param_2 + 0x5c);
      fVar7 = fVar7 + fVar5 * (fVar13 - fVar7) + fVar8 * fVar12;
      uVar6 = *(undefined8 *)(lVar2 + 0x18);
      fVar5 = fVar12;
LAB_044d51c4:
      fVar5 = (float)((ulong)uVar3 >> 0x20) + fVar5 * (float)((ulong)uVar6 >> 0x20);
      UnityEngine_Transform__set_position
                (CONCAT44(fVar5,(float)uVar3 + fVar12 * (float)uVar6),fVar5,fVar7,lVar4,0);
      return;
    }
  }
  else if ((*(long *)(param_2 + 0x38) != 0) &&
          (lVar2 = *(long *)(*(long *)(param_2 + 0x38) + 0x18), lVar2 != 0)) {
    lVar4 = *(long *)(param_2 + 0x10);
    fVar7 = *(float *)(param_2 + 0x24);
    uVar3 = *(undefined8 *)(param_2 + 0x1c);
    uVar11 = *(undefined8 *)(param_2 + 0x28);
    fVar12 = *(float *)(param_2 + 0x30);
    fVar5 = (float)UnityEngine_AnimationCurve__Evaluate(param_1 / fVar5,lVar2,0);
    if (lVar4 != 0) {
      uVar6 = CONCAT44(fVar5,fVar5);
      fVar7 = fVar7 + (fVar12 - fVar7) * fVar5;
      fVar12 = (float)uVar11 - (float)uVar3;
      fVar5 = (float)((ulong)uVar11 >> 0x20) - (float)((ulong)uVar3 >> 0x20);
      goto LAB_044d51c4;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

