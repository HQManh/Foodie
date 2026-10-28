// rea decompile_all
// name: CakeOrder.InGame.VoronoiSpawner$$ShrinkPolygon
// address: 0x42b2f1c
// body: available
// range: 0x42b2f1c-0x42b33bb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42b33b8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long CakeOrder_InGame_VoronoiSpawner__ShrinkPolygon
               (float param_1,float param_2,undefined8 param_3,long param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined8 local_e0;
  undefined8 local_c8;
  undefined8 *puStack_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 *puStack_a8;
  undefined8 local_a0;
  undefined8 local_48;
  
  if ((DAT_095172b7 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a4d18);
    FUN_03f5c2a4(&DAT_091a4d20);
    FUN_03f5c2a4(&DAT_091a4d28);
    FUN_03f5c2a4(&DAT_091b19b8);
    FUN_03f5c2a4(&DAT_091b19d0);
    FUN_03f5c2a4(&DAT_091b19a0);
    FUN_03f5c2a4(&DAT_091b19e0);
    FUN_03f5c2a4(&DAT_091b19e8);
    FUN_03f5c2a4(&DAT_0917d050);
    DAT_095172b7 = 1;
  }
  local_b0 = 0;
  puStack_a8 = (undefined8 *)0x0;
  local_a0 = 0;
  local_48 = 0;
  if (param_4 != 0) {
    if (2 < *(int *)(param_4 + 0x18)) {
      if (DAT_09515ce8 == '\0') {
        FUN_03f5c2a4(&DAT_0918cb68);
        DAT_09515ce8 = '\x01';
      }
      local_e0 = **(undefined8 **)(DAT_0918cb68 + 0xb8);
      FUN_058ad220(&local_c8,param_4,DAT_091b19d0);
      puStack_a8 = puStack_c0;
      local_b0 = local_c8;
      local_a0 = local_b8;
      local_c8 = 0;
      puStack_c0 = &local_b0;
      while( true ) {
        uVar5 = FUN_071fdf0c(&local_b0,DAT_091a4d20);
        fVar16 = (float)((ulong)local_e0 >> 0x20);
        if ((uVar5 & 1) == 0) break;
        local_e0 = CONCAT44(fVar16 + (float)((ulong)local_a0 >> 0x20),
                            (float)local_e0 + (float)local_a0);
      }
      FUN_071fdf08(&local_b0,DAT_091a4d18);
      if (*(int *)(param_4 + 0x18) < 1) {
        fVar14 = 3.4028235e+38;
      }
      else {
        fVar10 = (float)*(int *)(param_4 + 0x18);
        fVar14 = 3.4028235e+38;
        iVar8 = 0;
        fVar17 = fVar16 / fVar10;
        do {
          fVar11 = (float)FUN_058ac314(param_4,iVar8,DAT_091b19e8);
          iVar9 = *(int *)(param_4 + 0x18);
          iVar8 = iVar8 + 1;
          iVar2 = 0;
          if (iVar9 != 0) {
            iVar2 = iVar8 / iVar9;
          }
          fVar15 = fVar16;
          fVar12 = (float)FUN_058ac314(param_4,iVar8 - iVar2 * iVar9,DAT_091b19e8);
          if (DAT_09515fab == '\0') {
            FUN_03f5c2a4(&DAT_09187e80);
            DAT_09515fab = '\x01';
          }
          if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          fVar13 = fVar16 - fVar15;
          fVar16 = ABS((fVar16 - fVar17) * (fVar12 - fVar11) -
                       (fVar11 - (float)local_e0 / fVar10) * (fVar15 - fVar16));
          fVar11 = fVar16 / SQRT((fVar11 - fVar12) * (fVar11 - fVar12) + fVar13 * fVar13);
          if (fVar11 <= fVar14) {
            fVar14 = fVar11;
          }
        } while (iVar8 < *(int *)(param_4 + 0x18));
      }
      param_2 = param_2 / 100.0;
      uVar5 = 0x3f800000;
      fVar16 = 1.0;
      if (param_2 <= 1.0) {
        fVar16 = param_2;
      }
      fVar10 = 1.0;
      if (0.0 <= param_2) {
        fVar10 = 1.0 - fVar16;
      }
      fVar14 = (1.0 - SQRT(fVar10)) * fVar14;
      if (fVar14 <= param_1) {
        param_1 = fVar14;
      }
      lVar6 = thunk_FUN_03f9944c(DAT_0917d050);
      FUN_058abd7c(lVar6,DAT_091b19a0);
      iVar8 = *(int *)(param_4 + 0x18);
      if (0 < iVar8) {
        iVar9 = -1;
        do {
          fVar16 = (float)uVar5;
          iVar2 = 0;
          if (iVar8 != 0) {
            iVar2 = (iVar8 + iVar9) / iVar8;
          }
          fVar10 = (float)FUN_058ac314(param_4,(iVar8 + iVar9) - iVar2 * iVar8,DAT_091b19e8);
          fVar14 = fVar16;
          fVar17 = (float)FUN_058ac314(param_4,iVar9 + 1,DAT_091b19e8);
          iVar8 = *(int *)(param_4 + 0x18);
          iVar2 = iVar9 + 2;
          iVar3 = 0;
          if (iVar8 != 0) {
            iVar3 = iVar2 / iVar8;
          }
          fVar11 = fVar14;
          fVar15 = (float)FUN_058ac314(param_4,iVar2 - iVar3 * iVar8,DAT_091b19e8);
          fVar16 = fVar14 - fVar16;
          local_48 = CONCAT44(fVar16,fVar17 - fVar10);
          fVar10 = (float)UnityEngine_Vector2__Normalize(&local_48,0);
          fVar11 = fVar11 - fVar14;
          local_48 = CONCAT44(fVar11,fVar15 - fVar17);
          fVar15 = (float)UnityEngine_Vector2__Normalize(&local_48,0);
          uVar5 = (ulong)(uint)(-fVar11 - fVar16);
          local_48 = CONCAT44(fVar10 + fVar15,-fVar11 - fVar16);
          fVar11 = (float)UnityEngine_Vector2__Normalize(&local_48,0);
          lVar4 = DAT_091b19b8;
          fVar16 = fVar10 * (float)uVar5 - fVar16 * fVar11;
          if (0.01 < fVar16) {
            if (lVar6 == 0) goto LAB_042b33b8;
            lVar7 = *(long *)(lVar6 + 0x10);
            *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
            if (lVar7 == 0) goto LAB_042b33b8;
            fVar16 = param_1 / fVar16;
            uVar1 = *(uint *)(lVar6 + 0x18);
            fVar14 = fVar14 + (float)uVar5 * fVar16;
            uVar5 = (ulong)(uint)fVar14;
            if (uVar1 < *(uint *)(lVar7 + 0x18)) {
              lVar7 = lVar7 + (long)(int)uVar1 * 8;
              *(uint *)(lVar6 + 0x18) = uVar1 + 1;
              *(float *)(lVar7 + 0x20) = fVar17 + fVar11 * fVar16;
              *(float *)(lVar7 + 0x24) = fVar14;
            }
            else {
              FUN_058ac614(lVar6,*(undefined8 *)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
            }
          }
          iVar8 = *(int *)(param_4 + 0x18);
          iVar9 = iVar9 + 1;
        } while (iVar2 < iVar8);
      }
      if (lVar6 == 0) goto LAB_042b33b8;
      param_4 = lVar6;
      if (*(int *)(lVar6 + 0x18) < 3) {
        param_4 = thunk_FUN_03f9944c(DAT_0917d050);
        FUN_058abd7c(param_4,DAT_091b19a0);
      }
    }
    return param_4;
  }
LAB_042b33b8:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

