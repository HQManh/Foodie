// rea decompile_all
// name: Utilities.ColorBlendModifierWithRegisteredSource$$UpdateModifier
// address: 0x4503bc8
// body: available
// range: 0x4503bc8-0x4503fcf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4503fcc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Utilities_ColorBlendModifierWithRegisteredSource__UpdateModifier(long param_1)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  undefined4 uVar4;
  float fVar5;
  ulong uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar16;
  undefined8 local_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 local_38;
  ulong uVar15;
  
  if ((DAT_095184c4 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919d550);
    FUN_03f5c2a4(&DAT_091a5f30);
    FUN_03f5c2a4(&DAT_091a5f38);
    FUN_03f5c2a4(&DAT_091a5f40);
    FUN_03f5c2a4(&DAT_091be920);
    DAT_095184c4 = 1;
  }
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_1 + 0x10);
  uStack_48 = 0;
  local_50 = 0;
  local_38 = 0;
  local_40 = 0;
  if ((*(long *)(param_1 + 0x38) == 0) ||
     (lVar2 = FUN_06ed82f0(*(long *)(param_1 + 0x38),DAT_0919d550), lVar2 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  FUN_0652a2e0(&local_70,lVar2,DAT_091be920);
  local_50 = local_70;
  local_70 = 0;
  uStack_48 = puStack_68;
  local_38 = uStack_58;
  local_40 = uStack_60;
  puStack_68 = &local_50;
LAB_04503c90:
  uVar3 = FUN_07251688(&local_50,DAT_091a5f38);
  if ((uVar3 & 1) == 0) {
    FUN_07251684(&local_50,DAT_091a5f30);
    lVar2 = *(long *)(param_1 + 0x50);
    if (lVar2 != 0) {
      (**(code **)(lVar2 + 0x18))(*(undefined8 *)(lVar2 + 0x40),*(undefined8 *)(lVar2 + 0x28));
    }
    return;
  }
  lVar2 = *(long *)(param_1 + 0x58);
  fVar13 = (float)((ulong)local_40 >> 0x20);
  if (lVar2 != 0) {
    uVar7 = *(undefined4 *)(param_1 + 0x44);
    uVar8 = *(undefined4 *)(param_1 + 0x48);
    fVar10 = *(float *)(param_1 + 0x4c);
    uVar4 = (**(code **)(lVar2 + 0x18))
                      (*(undefined4 *)(param_1 + 0x40),*(undefined8 *)(lVar2 + 0x40),
                       *(undefined8 *)(lVar2 + 0x28));
    *(undefined4 *)(param_1 + 0x40) = uVar4;
    *(undefined4 *)(param_1 + 0x44) = uVar7;
    *(undefined4 *)(param_1 + 0x48) = uVar8;
    goto LAB_04503cd4;
  }
  iVar1 = *(int *)(param_1 + 0x28);
  if (iVar1 < 3) {
    fVar5 = 1.0;
    if (iVar1 != 1) {
      if (iVar1 == 2) {
        fVar5 = *(float *)(param_1 + 0x4c);
      }
      else {
LAB_04503d34:
        fVar5 = 0.0;
      }
    }
  }
  else {
    fVar5 = local_38._4_4_;
    if (iVar1 != 3) {
      if (iVar1 == 4) {
        fVar5 = 1.0 - *(float *)(param_1 + 0x4c);
      }
      else {
        if (iVar1 != 5) goto LAB_04503d34;
        fVar5 = 1.0 - local_38._4_4_;
      }
    }
  }
  iVar1 = *(int *)(param_1 + 0x2c);
  if (iVar1 < 3) {
    fVar9 = 1.0;
    if (iVar1 != 1) {
      if (iVar1 == 2) {
        fVar9 = *(float *)(param_1 + 0x4c);
      }
      else {
LAB_04503d90:
        fVar9 = 0.0;
      }
    }
  }
  else {
    fVar9 = local_38._4_4_;
    if (iVar1 != 3) {
      if (iVar1 == 4) {
        fVar9 = 1.0 - *(float *)(param_1 + 0x4c);
      }
      else {
        if (iVar1 != 5) goto LAB_04503d90;
        fVar9 = 1.0 - local_38._4_4_;
      }
    }
  }
  iVar1 = *(int *)(param_1 + 0x30);
  if (iVar1 < 3) {
    fVar10 = 1.0;
    if (iVar1 != 1) {
      if (iVar1 == 2) {
        fVar10 = *(float *)(param_1 + 0x4c);
      }
      else {
LAB_04503dec:
        fVar10 = 0.0;
      }
    }
  }
  else {
    fVar10 = local_38._4_4_;
    if (iVar1 != 3) {
      if (iVar1 == 4) {
        fVar10 = 1.0 - *(float *)(param_1 + 0x4c);
      }
      else {
        if (iVar1 != 5) goto LAB_04503dec;
        fVar10 = 1.0 - local_38._4_4_;
      }
    }
  }
  iVar1 = *(int *)(param_1 + 0x34);
  if (iVar1 < 3) {
    fVar11 = 1.0;
    if (iVar1 != 1) {
      if (iVar1 == 2) {
        fVar11 = *(float *)(param_1 + 0x4c);
      }
      else {
LAB_04503e48:
        fVar11 = 0.0;
      }
    }
  }
  else {
    fVar11 = local_38._4_4_;
    if (iVar1 != 3) {
      if (iVar1 == 4) {
        fVar11 = 1.0 - *(float *)(param_1 + 0x4c);
      }
      else {
        if (iVar1 != 5) goto LAB_04503e48;
        fVar11 = 1.0 - local_38._4_4_;
      }
    }
  }
  iVar1 = *(int *)(param_1 + 0x20);
  fVar12 = (float)local_40;
  if (iVar1 < 2) {
    if (iVar1 == 0) {
      uVar6 = CONCAT44(fVar13 * fVar9 +
                       (float)((ulong)*(undefined8 *)(param_1 + 0x40) >> 0x20) * fVar5,
                       fVar12 * fVar9 + (float)*(undefined8 *)(param_1 + 0x40) * fVar5);
      fVar5 = (float)local_38 * fVar9 + fVar5 * *(float *)(param_1 + 0x48);
      goto LAB_04503f0c;
    }
    if (iVar1 == 1) {
      uVar6 = CONCAT44(fVar13 * (float)((ulong)*(undefined8 *)(param_1 + 0x40) >> 0x20) * fVar5 *
                       fVar9,fVar12 * (float)*(undefined8 *)(param_1 + 0x40) * fVar5 * fVar9);
      fVar5 = fVar9 * (float)local_38 * fVar5 * *(float *)(param_1 + 0x48);
      goto LAB_04503f0c;
    }
  }
  else {
    if (iVar1 == 2) {
      uVar6 = CONCAT44(fVar13 * fVar9,fVar12 * fVar9);
      fVar14 = (float)*(undefined8 *)(param_1 + 0x40) * fVar5;
      fVar16 = (float)((ulong)*(undefined8 *)(param_1 + 0x40) >> 0x20) * fVar5;
      uVar15 = CONCAT44(fVar16,fVar14);
      fVar5 = fVar5 * *(float *)(param_1 + 0x48);
      uVar3 = CONCAT44(-(uint)(fVar16 < fVar13 * fVar9),-(uint)(fVar14 < fVar12 * fVar9));
      if ((float)local_38 * fVar9 <= fVar5) {
        fVar5 = (float)local_38 * fVar9;
      }
    }
    else {
      if (iVar1 != 3) goto LAB_04503f14;
      uVar6 = CONCAT44(fVar13 * fVar9,fVar12 * fVar9);
      fVar14 = (float)*(undefined8 *)(param_1 + 0x40) * fVar5;
      fVar16 = (float)((ulong)*(undefined8 *)(param_1 + 0x40) >> 0x20) * fVar5;
      uVar15 = CONCAT44(fVar16,fVar14);
      fVar5 = fVar5 * *(float *)(param_1 + 0x48);
      uVar3 = CONCAT44(-(uint)(fVar13 * fVar9 < fVar16),-(uint)(fVar12 * fVar9 < fVar14));
      if (fVar5 <= (float)local_38 * fVar9) {
        fVar5 = (float)local_38 * fVar9;
      }
    }
    uVar6 = uVar6 ^ (uVar6 ^ uVar15) & uVar3;
LAB_04503f0c:
    *(ulong *)(param_1 + 0x40) = uVar6;
    *(float *)(param_1 + 0x48) = fVar5;
  }
LAB_04503f14:
  iVar1 = *(int *)(param_1 + 0x24);
  if (iVar1 < 2) {
    if (iVar1 != 0) {
      if (iVar1 == 1) {
        fVar10 = fVar11 * local_38._4_4_ * fVar10 * *(float *)(param_1 + 0x4c);
        goto LAB_04503cd4;
      }
      goto LAB_04503c90;
    }
    fVar10 = local_38._4_4_ * fVar11 + fVar10 * *(float *)(param_1 + 0x4c);
  }
  else {
    if (iVar1 == 2) {
      fVar10 = fVar10 * *(float *)(param_1 + 0x4c);
      if (local_38._4_4_ * fVar11 <= fVar10) {
        fVar10 = local_38._4_4_ * fVar11;
      }
      goto LAB_04503cd4;
    }
    if (iVar1 != 3) goto LAB_04503c90;
    fVar10 = fVar10 * *(float *)(param_1 + 0x4c);
    if (fVar10 <= local_38._4_4_ * fVar11) {
      fVar10 = local_38._4_4_ * fVar11;
    }
  }
LAB_04503cd4:
  *(float *)(param_1 + 0x4c) = fVar10;
  goto LAB_04503c90;
}

