// rea decompile_all
// name: DG.Tweening.Plugins.Core.PathCore.CatmullRomDecoder$$SetWaypointsLengths
// address: 0x456d8a8
// body: available
// range: 0x456d8a8-0x456dc97 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x456dc8c to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x456dc90 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x456dc94 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void DG_Tweening_Plugins_Core_PathCore_CatmullRomDecoder__SetWaypointsLengths
               (long *param_1,long param_2,int param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined4 *puVar5;
  float *pfVar6;
  long lVar7;
  float *pfVar8;
  ulong uVar9;
  ulong uVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  undefined4 uVar14;
  float fVar15;
  float fVar16;
  undefined4 uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  
  if ((DAT_09518880 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182450);
    FUN_03f5c2a4(&DAT_09180528);
    DAT_09518880 = 1;
  }
  if ((param_2 != 0) && (*(long *)(param_2 + 0x18) != 0)) {
    uVar9 = *(ulong *)(*(long *)(param_2 + 0x18) + 0x18);
    lVar1 = FUN_03f5c394(DAT_09180528,uVar9 & 0xffffffff);
    if (lVar1 != 0) {
      if (*(int *)(lVar1 + 0x18) == 0) {
LAB_0456dc90:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      *(undefined4 *)(lVar1 + 0x20) = 0;
      if (1 < (int)uVar9) {
        uVar10 = 1;
        do {
          if (*(int *)(DAT_09182450 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          lVar3 = DAT_09182450;
          lVar2 = **(long **)(DAT_09182450 + 0xb8);
          if (lVar2 == 0) goto LAB_0456dc94;
          uVar4 = uVar10 - 1;
          if (uVar4 == 0) {
            if (*(int *)(lVar2 + 0x18) == 0) goto LAB_0456dc90;
            lVar7 = *(long *)(param_2 + 0x30);
            if (lVar7 == 0) goto LAB_0456dc94;
            if (*(int *)(lVar7 + 0x18) == 0) goto LAB_0456dc90;
          }
          else {
            if (*(int *)(lVar2 + 0x18) == 0) goto LAB_0456dc90;
            lVar7 = *(long *)(param_2 + 0x18);
            if (lVar7 == 0) goto LAB_0456dc94;
            if (*(uint *)(lVar7 + 0x18) <= (uint)(uVar10 - 2)) goto LAB_0456dc90;
            lVar7 = lVar7 + (uVar10 - 2) * 0xc;
          }
          uVar14 = *(undefined4 *)(lVar7 + 0x24);
          uVar17 = *(undefined4 *)(lVar7 + 0x28);
          *(undefined4 *)(lVar2 + 0x20) = *(undefined4 *)(lVar7 + 0x20);
          *(undefined4 *)(lVar2 + 0x24) = uVar14;
          *(undefined4 *)(lVar2 + 0x28) = uVar17;
          if (*(int *)(lVar3 + 0xe4) == 0) {
            FUN_03f5c424();
            lVar3 = DAT_09182450;
          }
          lVar2 = *(long *)(param_2 + 0x18);
          if (lVar2 == 0) goto LAB_0456dc94;
          if (*(uint *)(lVar2 + 0x18) <= uVar4) goto LAB_0456dc90;
          lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 8);
          if (lVar3 == 0) goto LAB_0456dc94;
          if (*(int *)(lVar3 + 0x18) == 0) goto LAB_0456dc90;
          lVar2 = lVar2 + uVar4 * 0xc;
          uVar14 = *(undefined4 *)(lVar2 + 0x28);
          *(undefined8 *)(lVar3 + 0x20) = *(undefined8 *)(lVar2 + 0x20);
          *(undefined4 *)(lVar3 + 0x28) = uVar14;
          lVar3 = *(long *)(param_2 + 0x18);
          if (lVar3 == 0) goto LAB_0456dc94;
          if (*(uint *)(lVar3 + 0x18) <= uVar10) goto LAB_0456dc90;
          lVar2 = *(long *)(*(long *)(DAT_09182450 + 0xb8) + 8);
          if (lVar2 == 0) goto LAB_0456dc94;
          if ((*(uint *)(lVar2 + 0x18) & 0xfffffffe) == 0) goto LAB_0456dc90;
          lVar3 = lVar3 + uVar10 * 0xc;
          uVar14 = *(undefined4 *)(lVar3 + 0x28);
          *(undefined8 *)(lVar2 + 0x2c) = *(undefined8 *)(lVar3 + 0x20);
          *(undefined4 *)(lVar2 + 0x34) = uVar14;
          lVar3 = **(long **)(DAT_09182450 + 0xb8);
          if (lVar3 == 0) goto LAB_0456dc94;
          uVar4 = *(ulong *)(lVar3 + 0x18) & 0xfffffffe;
          if (uVar10 == (int)uVar9 - 1) {
            if (uVar4 == 0) goto LAB_0456dc90;
            lVar2 = *(long *)(param_2 + 0x30);
            if (lVar2 == 0) goto LAB_0456dc94;
            if ((*(uint *)(lVar2 + 0x18) & 0xfffffffe) == 0) goto LAB_0456dc90;
            puVar5 = (undefined4 *)(lVar2 + 0x38);
            pfVar6 = (float *)(lVar2 + 0x3c);
            pfVar8 = (float *)(lVar2 + 0x40);
          }
          else {
            if (uVar4 == 0) goto LAB_0456dc90;
            lVar2 = *(long *)(param_2 + 0x18);
            if (lVar2 == 0) goto LAB_0456dc94;
            if ((ulong)*(uint *)(lVar2 + 0x18) <= uVar10 + 1) goto LAB_0456dc90;
            lVar2 = lVar2 + (uVar10 + 1) * 0xc;
            puVar5 = (undefined4 *)(lVar2 + 0x20);
            pfVar6 = (float *)(lVar2 + 0x24);
            pfVar8 = (float *)(lVar2 + 0x28);
          }
          fVar15 = *pfVar6;
          fVar18 = *pfVar8;
          *(undefined4 *)(lVar3 + 0x38) = *puVar5;
          *(float *)(lVar3 + 0x3c) = fVar15;
          *(float *)(lVar3 + 0x40) = fVar18;
          if (*(int *)(DAT_09182450 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          fVar22 = 0.0;
          fVar12 = (float)(**(code **)(*param_1 + 0x188))
                                    (0,param_1,(*(undefined8 **)(DAT_09182450 + 0xb8))[1],param_2,
                                     **(undefined8 **)(DAT_09182450 + 0xb8),
                                     *(undefined8 *)(*param_1 + 400));
          if (1 < param_3 + 1) {
            iVar11 = 0;
            fVar22 = 0.0;
            fVar20 = fVar15;
            fVar21 = fVar18;
            do {
              fVar16 = fVar15;
              fVar19 = fVar18;
              if (*(int *)(DAT_09182450 + 0xe4) == 0) {
                FUN_03f5c424();
                fVar16 = fVar15;
                fVar19 = fVar18;
              }
              fVar13 = (float)(**(code **)(*param_1 + 0x188))
                                        ((1.0 / (float)param_3) * (float)(iVar11 + 1),param_1,
                                         (*(undefined8 **)(DAT_09182450 + 0xb8))[1],param_2,
                                         **(undefined8 **)(DAT_09182450 + 0xb8),
                                         *(undefined8 *)(*param_1 + 400));
              if (DAT_09517ea7 == '\0') {
                FUN_03f5c2a4(&DAT_09187e80);
                DAT_09517ea7 = '\x01';
              }
              if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              iVar11 = iVar11 + 1;
              fVar18 = fVar19 - fVar21;
              fVar15 = fVar18 * fVar18;
              fVar22 = fVar22 + SQRT(fVar15 + (fVar13 - fVar12) * (fVar13 - fVar12) +
                                              (fVar16 - fVar20) * (fVar16 - fVar20));
              fVar12 = fVar13;
              fVar20 = fVar16;
              fVar21 = fVar19;
            } while (param_3 != iVar11);
          }
          if (*(uint *)(lVar1 + 0x18) <= uVar10) goto LAB_0456dc90;
          lVar3 = uVar10 * 4;
          uVar10 = uVar10 + 1;
          *(float *)(lVar1 + lVar3 + 0x20) = fVar22;
        } while (uVar10 != (uVar9 & 0xffffffff));
      }
      *(long *)(param_2 + 0x10) = lVar1;
      thunk_FUN_03f5d7b8((long *)(param_2 + 0x10),lVar1);
      return;
    }
  }
LAB_0456dc94:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

