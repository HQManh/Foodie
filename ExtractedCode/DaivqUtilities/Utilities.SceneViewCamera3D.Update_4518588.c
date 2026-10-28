// rea decompile_all
// name: Utilities.SceneViewCamera3D$$Update
// address: 0x4518588
// body: available
// range: 0x4518588-0x4518c8b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4518c58 to 0x863eaa8 UnityEngine.Cursor$$set_visible (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x4518c88 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Utilities_SceneViewCamera3D__Update
               (undefined1 param_1 [16],float param_2,float param_3,long param_4)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  char cVar6;
  float *pfVar7;
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  
  if ((DAT_0951857a & 1) == 0) {
    FUN_03f5c2a4(&DAT_092081f0);
    FUN_03f5c2a4(&DAT_092081e8);
    FUN_03f5c2a4(&DAT_092081e0);
    DAT_0951857a = 1;
  }
  if (*(char *)(param_4 + 0x28) == '\0') {
    return;
  }
  if (*(char *)(param_4 + 0x29) != '\0') {
    cVar1 = *(char *)(param_4 + 0x5c);
    cVar6 = cVar1;
    if (DAT_09515ce6 == '\0') {
      FUN_03f5c2a4(&DAT_0918cbd0);
      cVar6 = *(char *)(param_4 + 0x5c);
      DAT_09515ce6 = '\x01';
    }
    pfVar7 = *(float **)(DAT_0918cbd0 + 0xb8);
    fVar14 = *pfVar7;
    fVar15 = pfVar7[1];
    fVar16 = pfVar7[2];
    if (cVar6 != '\0') {
      fVar12 = *(float *)(param_4 + 0x58);
      fVar13 = *(float *)(param_4 + 0x24);
      fVar8 = (float)UnityEngine_Time__get_deltaTime(0);
      *(float *)(param_4 + 0x58) = fVar12 + fVar13 * fVar8;
    }
    uVar10 = *(undefined4 *)(param_4 + 0x34);
    *(undefined1 *)(param_4 + 0x5c) = 0;
    lVar4 = UnityEngine_Component__get_transform(param_4,0);
    if (lVar4 == 0) goto LAB_04518c88;
    fVar13 = (float)UnityEngine_Transform__get_forward(lVar4,0);
    fVar8 = param_2;
    fVar12 = param_3;
    uVar5 = UnityEngine_Input__GetKey(uVar10,0);
    if ((uVar5 & 1) != 0) {
      fVar14 = fVar14 + fVar13;
      fVar15 = fVar15 + param_2;
      fVar16 = fVar16 + param_3;
      *(undefined1 *)(param_4 + 0x5c) = 1;
    }
    uVar10 = *(undefined4 *)(param_4 + 0x38);
    lVar4 = UnityEngine_Component__get_transform(param_4,0);
    if (lVar4 == 0) goto LAB_04518c88;
    fVar9 = (float)UnityEngine_Transform__get_forward(lVar4,0);
    fVar13 = fVar8;
    fVar17 = fVar12;
    uVar5 = UnityEngine_Input__GetKey(uVar10,0);
    if ((uVar5 & 1) != 0) {
      fVar14 = fVar14 - fVar9;
      fVar15 = fVar15 - fVar8;
      fVar16 = fVar16 - fVar12;
      *(undefined1 *)(param_4 + 0x5c) = 1;
    }
    uVar10 = *(undefined4 *)(param_4 + 0x3c);
    lVar4 = UnityEngine_Component__get_transform(param_4,0);
    if (lVar4 == 0) goto LAB_04518c88;
    fVar9 = (float)UnityEngine_Transform__get_right(lVar4,0);
    fVar8 = fVar13;
    fVar12 = fVar17;
    uVar5 = UnityEngine_Input__GetKey(uVar10,0);
    if ((uVar5 & 1) != 0) {
      fVar14 = fVar14 + fVar9;
      fVar15 = fVar15 + fVar13;
      fVar16 = fVar16 + fVar17;
      *(undefined1 *)(param_4 + 0x5c) = 1;
    }
    uVar10 = *(undefined4 *)(param_4 + 0x40);
    lVar4 = UnityEngine_Component__get_transform(param_4,0);
    if (lVar4 == 0) goto LAB_04518c88;
    fVar9 = (float)UnityEngine_Transform__get_right(lVar4,0);
    fVar13 = fVar8;
    fVar17 = fVar12;
    uVar5 = UnityEngine_Input__GetKey(uVar10,0);
    if ((uVar5 & 1) != 0) {
      fVar14 = fVar14 - fVar9;
      fVar15 = fVar15 - fVar8;
      fVar16 = fVar16 - fVar12;
      *(undefined1 *)(param_4 + 0x5c) = 1;
    }
    uVar10 = *(undefined4 *)(param_4 + 0x44);
    lVar4 = UnityEngine_Component__get_transform(param_4,0);
    if (lVar4 == 0) goto LAB_04518c88;
    fVar9 = (float)UnityEngine_Transform__get_up(lVar4,0);
    fVar8 = fVar13;
    fVar12 = fVar17;
    uVar5 = UnityEngine_Input__GetKey(uVar10,0);
    if ((uVar5 & 1) != 0) {
      fVar14 = fVar14 + fVar9;
      fVar15 = fVar15 + fVar13;
      fVar16 = fVar16 + fVar17;
      *(undefined1 *)(param_4 + 0x5c) = 1;
    }
    uVar10 = *(undefined4 *)(param_4 + 0x48);
    lVar4 = UnityEngine_Component__get_transform(param_4,0);
    if (lVar4 == 0) goto LAB_04518c88;
    fVar13 = (float)UnityEngine_Transform__get_up(lVar4,0);
    param_2 = fVar8;
    param_3 = fVar12;
    uVar5 = UnityEngine_Input__GetKey(uVar10,0);
    if ((uVar5 & 1) != 0) {
      fVar14 = fVar14 - fVar13;
      fVar15 = fVar15 - fVar8;
      fVar16 = fVar16 - fVar12;
      *(undefined1 *)(param_4 + 0x5c) = 1;
    }
    fVar8 = (float)UnityEngine_Internal_InputUnsafeUtility__GetAxis(DAT_092081e0,0);
    if (fVar8 <= 0.0) {
      fVar8 = (float)UnityEngine_Internal_InputUnsafeUtility__GetAxis(DAT_092081e0,0);
      if (fVar8 < 0.0) {
        uVar10 = *(undefined4 *)(param_4 + 0x38);
        lVar4 = UnityEngine_Component__get_transform(param_4,0);
        if (lVar4 == 0) goto LAB_04518c88;
        fVar8 = (float)UnityEngine_Transform__get_forward(lVar4,0);
        fVar12 = param_2 + param_2;
        fVar13 = param_3 + param_3;
        UnityEngine_Input__GetKey(uVar10,0);
        fVar14 = fVar14 - (fVar8 + fVar8);
        fVar15 = fVar15 - fVar12;
        fVar16 = fVar16 - fVar13;
        goto LAB_045188cc;
      }
      cVar6 = *(char *)(param_4 + 0x5c);
      if (cVar6 == '\0') {
        *(undefined4 *)(param_4 + 0x58) = 0;
        goto LAB_04518948;
      }
    }
    else {
      uVar10 = *(undefined4 *)(param_4 + 0x34);
      lVar4 = UnityEngine_Component__get_transform(param_4,0);
      if (lVar4 == 0) goto LAB_04518c88;
      fVar8 = (float)UnityEngine_Transform__get_forward(lVar4,0);
      fVar12 = param_2 + param_2;
      fVar13 = param_3 + param_3;
      UnityEngine_Input__GetKey(uVar10,0);
      fVar14 = fVar14 + fVar8 + fVar8;
      fVar15 = fVar15 + fVar12;
      fVar16 = fVar16 + fVar13;
LAB_045188cc:
      cVar6 = '\x01';
      *(undefined1 *)(param_4 + 0x5c) = 1;
    }
    if (cVar6 != cVar1) {
      *(undefined4 *)(param_4 + 0x58) = *(undefined4 *)(param_4 + 0x20);
    }
    lVar4 = UnityEngine_Component__get_transform(param_4,0);
    if (lVar4 == 0) goto LAB_04518c88;
    fVar8 = (float)UnityEngine_Transform__get_position(lVar4,0);
    fVar12 = *(float *)(param_4 + 0x58);
    fVar13 = (float)UnityEngine_Time__get_deltaTime(0);
    param_2 = param_2 + fVar15 * fVar12 * fVar13;
    param_3 = param_3 + fVar16 * fVar12 * fVar13;
    UnityEngine_Transform__set_position(fVar8 + fVar14 * fVar12 * fVar13,lVar4,0);
  }
LAB_04518948:
  fVar14 = param_2;
  fVar15 = param_3;
  if (*(char *)(param_4 + 0x2a) != '\0') {
    lVar4 = UnityEngine_Component__get_transform(param_4,0);
    if (lVar4 == 0) goto LAB_04518c88;
    fVar16 = (float)UnityEngine_Transform__get_eulerAngles(lVar4,0);
    fVar15 = param_3;
    fVar14 = (float)UnityEngine_Internal_InputUnsafeUtility__GetAxis(DAT_092081f0,0);
    fVar16 = fVar16 - fVar14 * 359.0 * *(float *)(param_4 + 0x4c);
    fVar8 = (float)UnityEngine_Internal_InputUnsafeUtility__GetAxis(DAT_092081e8,0);
    fVar14 = *(float *)(param_4 + 0x6c);
    fVar12 = *(float *)(param_4 + 0x4c);
    if ((fVar16 < fVar14) || (*(float *)(param_4 + 0x70) < fVar16)) {
      lVar4 = UnityEngine_Component__get_transform(param_4,0);
      if (lVar4 == 0) goto LAB_04518c88;
      fVar14 = param_2 + fVar8 * 359.0 * fVar12;
      UnityEngine_Transform__set_eulerAngles(fVar16,lVar4,0);
      fVar15 = param_3;
    }
  }
  fVar16 = fVar14;
  fVar8 = fVar15;
  if ((*(char *)(param_4 + 0x2b) != '\0') &&
     (uVar5 = UnityEngine_Input__GetMouseButton(1,0), fVar16 = fVar14, fVar8 = fVar15,
     (uVar5 & 1) != 0)) {
    lVar4 = UnityEngine_Component__get_transform(param_4,0);
    if (lVar4 == 0) goto LAB_04518c88;
    fVar12 = (float)UnityEngine_Transform__get_eulerAngles(lVar4,0);
    fVar8 = fVar15;
    fVar16 = (float)UnityEngine_Internal_InputUnsafeUtility__GetAxis(DAT_092081f0,0);
    fVar12 = fVar12 - fVar16 * 359.0 * *(float *)(param_4 + 0x4c);
    fVar13 = (float)UnityEngine_Internal_InputUnsafeUtility__GetAxis(DAT_092081e8,0);
    fVar16 = *(float *)(param_4 + 0x6c);
    fVar17 = *(float *)(param_4 + 0x4c);
    if ((fVar12 < fVar16) || (*(float *)(param_4 + 0x70) < fVar12)) {
      lVar4 = UnityEngine_Component__get_transform(param_4,0);
      if (lVar4 == 0) goto LAB_04518c88;
      fVar16 = fVar14 + fVar13 * 359.0 * fVar17;
      UnityEngine_Transform__set_eulerAngles(fVar12,lVar4,0);
      fVar8 = fVar15;
    }
  }
  if (*(char *)(param_4 + 0x2d) != '\0') {
    uVar5 = UnityEngine_Input__GetMouseButtonDown(2,0);
    if ((uVar5 & 1) != 0) {
      lVar4 = UnityEngine_Component__get_gameObject(param_4,0);
      if ((lVar4 == 0) || (lVar4 = UnityEngine_GameObject__get_transform(lVar4,0), lVar4 == 0))
      goto LAB_04518c88;
      uVar10 = UnityEngine_Transform__get_position(lVar4,0);
      *(undefined4 *)(param_4 + 0x60) = uVar10;
      *(float *)(param_4 + 100) = fVar16;
      *(float *)(param_4 + 0x68) = fVar8;
    }
    if ((*(char *)(param_4 + 0x2d) != '\0') &&
       (uVar5 = UnityEngine_Input__GetMouseButton(2,0), (uVar5 & 1) != 0)) {
      lVar4 = UnityEngine_Component__get_gameObject(param_4,0);
      if (lVar4 == 0) {
LAB_04518c88:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar4 = UnityEngine_GameObject__get_transform(lVar4,0);
      fVar8 = *(float *)(param_4 + 0x60);
      fVar14 = (float)UnityEngine_Internal_InputUnsafeUtility__GetAxis(DAT_092081e8,0);
      fVar13 = *(float *)(param_4 + 0x30);
      fVar12 = *(float *)(param_4 + 0x4c);
      fVar16 = *(float *)(param_4 + 100);
      fVar15 = (float)UnityEngine_Internal_InputUnsafeUtility__GetAxis(DAT_092081f0,0);
      if (lVar4 == 0) goto LAB_04518c88;
      fVar16 = fVar16 - fVar15 * *(float *)(param_4 + 0x30) * *(float *)(param_4 + 0x4c);
      uVar10 = *(undefined4 *)(param_4 + 0x68);
      UnityEngine_Transform__set_position(fVar8 + fVar14 * fVar13 * fVar12,lVar4,0);
      lVar4 = UnityEngine_Component__get_gameObject(param_4,0);
      if ((lVar4 == 0) || (lVar4 = UnityEngine_GameObject__get_transform(lVar4,0), lVar4 == 0))
      goto LAB_04518c88;
      uVar11 = UnityEngine_Transform__get_position(lVar4,0);
      *(undefined4 *)(param_4 + 0x60) = uVar11;
      *(float *)(param_4 + 100) = fVar16;
      *(undefined4 *)(param_4 + 0x68) = uVar10;
    }
  }
  if (*(char *)(param_4 + 0x50) == '\0') {
    *(undefined1 *)(param_4 + 0x5d) = 0;
    if (*(char *)(param_4 + 0x2c) == '\0') {
      uVar3 = 0;
LAB_04518c40:
      UnityEngine_Cursor__set_visible(uVar3,0);
      return;
    }
  }
  else {
    uVar5 = UnityEngine_Input__GetKey(*(undefined4 *)(param_4 + 0x54),0);
    if ((uVar5 & 1) == 0) {
      *(undefined1 *)(param_4 + 0x5d) = 0;
    }
    else if (*(char *)(param_4 + 0x5d) == '\0') {
      *(undefined1 *)(param_4 + 0x5d) = 1;
      iVar2 = UnityEngine_Cursor__get_lockState(0);
      UnityEngine_Cursor__set_lockState(iVar2 == 0,0);
      uVar3 = UnityEngine_Cursor__get_visible(0);
      uVar3 = (uVar3 ^ 0xffffffff) & 1;
      goto LAB_04518c40;
    }
  }
  return;
}

