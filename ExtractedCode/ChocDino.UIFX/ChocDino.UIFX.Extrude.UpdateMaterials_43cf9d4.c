// rea decompile_all
// name: ChocDino.UIFX.Extrude$$UpdateMaterials
// address: 0x43cf9d4
// body: available
// range: 0x43cf9d4-0x43cff3f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x43cff3c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void ChocDino_UIFX_Extrude__UpdateMaterials(long param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  if ((DAT_09517c30 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09189c30);
    FUN_03f5c2a4(&DAT_09190878);
    FUN_03f5c2a4(&DAT_092117b8);
    FUN_03f5c2a4(&DAT_09207518);
    DAT_09517c30 = 1;
  }
  if (*(long *)(param_1 + 0x90) == 0) goto LAB_043cff3c;
  fVar11 = *(float *)(param_1 + 0x18);
  fVar13 = *(float *)(*(long *)(param_1 + 0x90) + 0xb8);
  lVar5 = *(long *)(param_1 + 0x70);
  if (*(int *)(DAT_09190878 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = **(undefined4 **)(DAT_09190878 + 0xb8);
  if (DAT_095163ce == '\0') {
    FUN_03f5c2a4(&DAT_09187e80);
    DAT_095163ce = '\x01';
  }
  if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  if (lVar5 == 0) goto LAB_043cff3c;
  fVar11 = ABS(fVar11 * fVar13);
  iVar2 = -0x80000000;
  if ((float)(int)fVar11 != INFINITY) {
    iVar2 = (int)fVar11;
  }
  UnityEngine_Material__SetInt(lVar5,uVar1,iVar2,0);
  if (*(int *)(param_1 + 0x10) == 0) {
    if (*(long *)(param_1 + 0x90) == 0) goto LAB_043cff3c;
    fVar11 = *(float *)(param_1 + 0x1c);
    fVar6 = *(float *)(*(long *)(param_1 + 0x90) + 0xb8);
    fVar13 = *(float *)(param_1 + 0x14);
    if (DAT_09515ce9 == '\0') {
      FUN_03f5c2a4(&DAT_0918cb68);
      DAT_09515ce9 = '\x01';
    }
    fVar13 = fVar13 * -0.017453292;
    lVar5 = *(long *)(DAT_0918cb68 + 0xb8);
    fVar7 = *(float *)(lVar5 + 8);
    fVar8 = sinf(fVar13);
    fVar13 = cosf(fVar13 + 3.1415927);
    plVar4 = *(long **)(param_1 + 0x80);
    if (plVar4 == (long *)0x0) goto LAB_043cff3c;
    fVar9 = *(float *)(lVar5 + 0xc);
    iVar2 = (**(code **)(*plVar4 + 0x188))(plVar4,*(undefined8 *)(*plVar4 + 400));
    plVar4 = *(long **)(param_1 + 0x80);
    if (plVar4 == (long *)0x0) goto LAB_043cff3c;
    iVar3 = (**(code **)(*plVar4 + 0x1a8))(plVar4,*(undefined8 *)(*plVar4 + 0x1b0));
    if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09189c30);
    }
    lVar5 = *(long *)(param_1 + 0x90);
    if (lVar5 == 0) goto LAB_043cff3c;
    fVar12 = *(float *)(param_1 + 0xa4);
    if (*(int *)(lVar5 + 0x24) == 0) {
      fVar12 = fVar12 * *(float *)(lVar5 + 0xb8);
    }
    if (fVar12 == 0.0) {
      if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      fVar12 = *(float *)(param_1 + 0x68);
    }
    lVar5 = *(long *)(param_1 + 0x70);
    if (*(int *)(DAT_09190878 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (lVar5 == 0) goto LAB_043cff3c;
    fVar10 = (float)iVar3;
    fVar11 = fVar11 * fVar6;
    fVar13 = (fVar13 * -fVar9 * fVar11 + fVar10 * 0.5) / fVar10;
    UnityEngine_Material__SetColorImpl
              (CONCAT44(fVar13,(fVar7 * -fVar8 * fVar11 + (float)iVar2 * 0.5) / (float)iVar2),fVar13
               ,0,0,lVar5,*(undefined4 *)(*(long *)(DAT_09190878 + 0xb8) + 0x14),0);
    lVar5 = *(long *)(param_1 + 0x70);
    if (lVar5 == 0) goto LAB_043cff3c;
    fVar13 = 0.0;
    fVar10 = fVar10 / fVar12;
    fVar11 = 0.0;
    uVar1 = *(undefined4 *)(*(long *)(DAT_09190878 + 0xb8) + 0x18);
LAB_043cfd7c:
    UnityEngine_Material__SetColorImpl(fVar11,fVar13,fVar10,0,lVar5,uVar1,0);
  }
  else if (*(int *)(param_1 + 0x10) == 1) {
    fVar13 = -1.0;
    plVar4 = *(long **)(param_1 + 0x80);
    if (0.0 <= *(float *)(param_1 + 0x18)) {
      fVar13 = 1.0;
    }
    if (plVar4 == (long *)0x0) goto LAB_043cff3c;
    fVar11 = *(float *)(param_1 + 0x14);
    iVar2 = (**(code **)(*plVar4 + 0x188))(plVar4,*(undefined8 *)(*plVar4 + 400));
    plVar4 = *(long **)(param_1 + 0x80);
    if (plVar4 == (long *)0x0) goto LAB_043cff3c;
    iVar3 = (**(code **)(*plVar4 + 0x1a8))(plVar4,*(undefined8 *)(*plVar4 + 0x1b0));
    fVar11 = fVar11 * -0.017453292;
    fVar6 = sinf(fVar11);
    fVar7 = cosf(fVar11 + 3.1415927);
    lVar5 = *(long *)(param_1 + 0x70);
    if (*(int *)(DAT_09190878 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (lVar5 == 0) goto LAB_043cff3c;
    uVar1 = *(undefined4 *)(*(long *)(DAT_09190878 + 0xb8) + 4);
    fVar10 = 0.0;
    fVar11 = fVar13 * fVar6 * (1.0 / (float)iVar2);
    fVar13 = fVar13 * fVar7 * (1.0 / (float)iVar3);
    goto LAB_043cfd7c;
  }
  lVar5 = *(long *)(param_1 + 0x70);
  if (*(char *)(param_1 + 0x20) == '\0') {
    if (lVar5 == 0) goto LAB_043cff3c;
    UnityEngine_Material__DisableKeyword(lVar5,DAT_092117b8,0);
    lVar5 = *(long *)(param_1 + 0x70);
    if (*(int *)(DAT_09190878 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (lVar5 == 0) goto LAB_043cff3c;
    UnityEngine_Material__SetColorImpl
              (*(undefined4 *)(param_1 + 0x24),*(undefined4 *)(param_1 + 0x28),
               *(undefined4 *)(param_1 + 0x2c),*(undefined4 *)(param_1 + 0x30),lVar5,
               *(undefined4 *)(*(long *)(DAT_09190878 + 0xb8) + 8),0);
    if (*(long *)(param_1 + 0x70) == 0) goto LAB_043cff3c;
    UnityEngine_Material__SetColorImpl
              (*(undefined4 *)(param_1 + 0x34),*(undefined4 *)(param_1 + 0x38),
               *(undefined4 *)(param_1 + 0x3c),*(undefined4 *)(param_1 + 0x40),
               *(long *)(param_1 + 0x70),*(undefined4 *)(*(long *)(DAT_09190878 + 0xb8) + 0xc),0);
  }
  else {
    if (lVar5 == 0) goto LAB_043cff3c;
    UnityEngine_Material__EnableKeyword(lVar5,DAT_092117b8,0);
    lVar5 = *(long *)(param_1 + 0x70);
    if (*(int *)(DAT_09190878 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (lVar5 == 0) goto LAB_043cff3c;
    UnityEngine_Material__SetTextureImpl
              (lVar5,*(undefined4 *)(*(long *)(DAT_09190878 + 0xb8) + 0x10),
               *(undefined8 *)(param_1 + 0x48),0);
  }
  lVar5 = *(long *)(param_1 + 0x70);
  if (*(char *)(param_1 + 0x58) == '\0') {
    if (lVar5 == 0) goto LAB_043cff3c;
    UnityEngine_Material__DisableKeyword(lVar5,DAT_09207518,0);
  }
  else {
    if (lVar5 == 0) goto LAB_043cff3c;
    UnityEngine_Material__EnableKeyword(lVar5,DAT_09207518,0);
  }
  lVar5 = *(long *)(param_1 + 0x70);
  if (*(int *)(DAT_09190878 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  if (lVar5 != 0) {
    uVar1 = 0;
    if (*(char *)(param_1 + 0x50) != '\0') {
      uVar1 = 0x3f800000;
    }
    UnityEngine_Material__SetFloat
              (uVar1,lVar5,*(undefined4 *)(*(long *)(DAT_09190878 + 0xb8) + 0x1c),0);
    fVar11 = *(float *)(param_1 + 0x54);
    lVar5 = *(long *)(param_1 + 0x70);
    if (*(int *)(DAT_09190878 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (lVar5 != 0) {
      uVar1 = *(undefined4 *)(*(long *)(DAT_09190878 + 0xb8) + 0x20);
      fVar6 = fmodf(ABS(fVar11),100.0);
      fVar13 = -fVar6;
      if (0.0 <= fVar11) {
        fVar13 = fVar6;
      }
      UnityEngine_Material__SetFloat(fVar13,lVar5,uVar1,0);
      *(undefined1 *)(param_1 + 0x88) = 0;
      return;
    }
  }
LAB_043cff3c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

