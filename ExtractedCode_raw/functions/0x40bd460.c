// rea decompile_all
// name: AnhPD.FoodOrder.ServePlate$$FitTapArea
// address: 0x40bd460
// body: available
// range: 0x40bd460-0x40bd693 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40bd690 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_ServePlate__FitTapArea(long param_1)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  ulong uVar7;
  float fVar8;
  float fVar10;
  ulong uVar9;
  float fVar11;
  float fVar12;
  float fVar14;
  float fVar15;
  ulong uVar13;
  undefined8 uVar16;
  undefined8 local_58;
  float local_50;
  float fStack_4c;
  float local_48;
  float fStack_44;
  
  if ((DAT_09515f61 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09515f61 = 1;
  }
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  local_58 = 0;
  local_50 = 0.0;
  fStack_4c = 0.0;
  local_48 = 0.0;
  fStack_44 = 0.0;
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = UnityEngine_Object__op_Implicit(uVar4,0);
  if ((uVar1 & 1) == 0) {
    return;
  }
  uVar16 = *(undefined8 *)(param_1 + 0xcc);
  uVar4 = *(undefined8 *)(param_1 + 0xa8);
  fVar11 = (float)*(undefined8 *)(param_1 + 0xd4) * 0.5;
  fVar14 = (float)((ulong)*(undefined8 *)(param_1 + 0xd4) >> 0x20) * 0.5;
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  fVar12 = (float)uVar16;
  fVar8 = fVar12 - fVar11;
  fVar15 = (float)((ulong)uVar16 >> 0x20);
  fVar10 = fVar15 - fVar14;
  uVar9 = CONCAT44(fVar10,fVar8);
  fVar12 = fVar12 + fVar11;
  fVar15 = fVar15 + fVar14;
  uVar13 = CONCAT44(fVar15,fVar12);
  uVar1 = UnityEngine_Object__op_Implicit(uVar4,0);
  if ((uVar1 & 1) != 0) {
    plVar2 = *(long **)(param_1 + 0xa8);
    if (plVar2 == (long *)0x0) goto LAB_040bd690;
    uVar1 = (**(code **)(*plVar2 + 0x1f8))(plVar2,&local_58,*(undefined8 *)(*plVar2 + 0x200));
    if ((uVar1 & 1) != 0) {
      if ((*(long *)(param_1 + 0x30) == 0) ||
         (lVar3 = UnityEngine_Component__get_transform(*(long *)(param_1 + 0x30),0), lVar3 == 0))
      goto LAB_040bd690;
      fVar5 = (float)((ulong)local_58 >> 0x20) - local_48;
      fVar11 = (float)UnityEngine_Transform__InverseTransformPoint
                                (CONCAT44(fVar5,(float)local_58 - fStack_4c),fVar5,
                                 local_50 - fStack_44,lVar3,0);
      fVar6 = (float)((ulong)local_58 >> 0x20) + local_48;
      fVar14 = (float)UnityEngine_Transform__InverseTransformPoint
                                (CONCAT44(fVar6,(float)local_58 + fStack_4c),fVar6,
                                 local_50 + fStack_44,lVar3,0);
      uVar1 = CONCAT44(fVar6,fVar14);
      uVar7 = uVar1 ^ (uVar1 ^ CONCAT44(fVar5,fVar11)) &
                      CONCAT44(-(uint)(fVar5 < fVar6),-(uint)(fVar11 < fVar14));
      uVar1 = uVar1 ^ (uVar1 ^ CONCAT44(fVar5,fVar11)) &
                      CONCAT44(-(uint)(fVar6 < fVar5),-(uint)(fVar14 < fVar11));
      uVar9 = uVar9 ^ (uVar9 ^ uVar7) &
                      ~CONCAT44(-(uint)(fVar10 < (float)(uVar7 >> 0x20)),
                                -(uint)(fVar8 < (float)uVar7));
      uVar13 = uVar13 ^ (uVar13 ^ uVar1) &
                        ~CONCAT44(-(uint)((float)(uVar1 >> 0x20) < fVar15),
                                  -(uint)((float)uVar1 < fVar12));
    }
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    fVar12 = (float)(uVar9 >> 0x20);
    fVar15 = (float)(uVar13 >> 0x20);
    fVar10 = 0.5;
    fVar11 = ((float)uVar13 + (float)uVar9) * 0.5;
    fVar8 = (fVar15 + fVar12) * 0.5;
    fVar14 = (float)UnityEngine_Collider2D__get_offset(*(long *)(param_1 + 0x30),0);
    fVar14 = fVar14 - fVar11;
    if (1e-08 < fVar14 * fVar14 + (fVar10 - fVar8) * (fVar10 - fVar8)) {
      if (*(long *)(param_1 + 0x30) == 0) goto LAB_040bd690;
      UnityEngine_Collider2D__set_offset(fVar11,*(long *)(param_1 + 0x30),0);
    }
    if (*(long *)(param_1 + 0x30) != 0) {
      fVar11 = (float)uVar13 - (float)uVar9;
      fVar14 = (float)UnityEngine_BoxCollider2D__get_size(*(long *)(param_1 + 0x30),0);
      fVar14 = fVar14 - fVar11;
      fVar8 = fVar8 - (fVar15 - fVar12);
      if (1e-08 < fVar14 * fVar14 + fVar8 * fVar8) {
        if (*(long *)(param_1 + 0x30) == 0) goto LAB_040bd690;
        UnityEngine_BoxCollider2D__set_size(fVar11,*(long *)(param_1 + 0x30),0);
      }
      return;
    }
  }
LAB_040bd690:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

