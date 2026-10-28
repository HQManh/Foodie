// rea decompile_all
// name: DG.Tweening.Plugins.Core.PathCore.CubicBezierDecoder$$SetWaypointsLengths
// address: 0x456cd3c
// body: available
// range: 0x456cd3c-0x456d053 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x456d048 to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x456d04c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x456d050 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void DG_Tweening_Plugins_Core_PathCore_CubicBezierDecoder__SetWaypointsLengths
               (undefined1 param_1 [16],undefined1 param_2 [16],float param_3,long *param_4,
               long param_5,int param_6)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined4 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  
  if ((DAT_0951887a & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182fc8);
    FUN_03f5c2a4(&DAT_09180528);
    DAT_0951887a = 1;
  }
  if ((param_5 != 0) && (*(long *)(param_5 + 0x18) != 0)) {
    uVar5 = *(ulong *)(*(long *)(param_5 + 0x18) + 0x18);
    lVar1 = FUN_03f5c394(DAT_09180528,uVar5 & 0xffffffff);
    if (lVar1 != 0) {
      if (*(int *)(lVar1 + 0x18) == 0) {
LAB_0456d04c:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      *(undefined4 *)(lVar1 + 0x20) = 0;
      if (1 < (int)uVar5) {
        uVar6 = 1;
        do {
          if (*(int *)(DAT_09182fc8 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          lVar3 = *(long *)(param_5 + 0x30);
          if (lVar3 == 0) goto LAB_0456d050;
          uVar2 = uVar6 - 1;
          if (*(uint *)(lVar3 + 0x18) <= uVar2) goto LAB_0456d04c;
          lVar4 = **(long **)(DAT_09182fc8 + 0xb8);
          if (lVar4 == 0) goto LAB_0456d050;
          if (*(int *)(lVar4 + 0x18) == 0) goto LAB_0456d04c;
          lVar3 = lVar3 + uVar2 * 0x18;
          uVar11 = *(undefined8 *)(lVar3 + 0x28);
          uVar10 = *(undefined8 *)(lVar3 + 0x20);
          *(undefined8 *)(lVar4 + 0x30) = *(undefined8 *)(lVar3 + 0x30);
          *(undefined8 *)(lVar4 + 0x28) = uVar11;
          *(undefined8 *)(lVar4 + 0x20) = uVar10;
          lVar3 = *(long *)(param_5 + 0x18);
          if (lVar3 == 0) goto LAB_0456d050;
          if (*(uint *)(lVar3 + 0x18) <= uVar2) goto LAB_0456d04c;
          lVar4 = *(long *)(*(long *)(DAT_09182fc8 + 0xb8) + 8);
          if (lVar4 == 0) goto LAB_0456d050;
          if (*(int *)(lVar4 + 0x18) == 0) goto LAB_0456d04c;
          lVar3 = lVar3 + uVar2 * 0xc;
          uVar12 = *(undefined4 *)(lVar3 + 0x28);
          *(undefined8 *)(lVar4 + 0x20) = *(undefined8 *)(lVar3 + 0x20);
          *(undefined4 *)(lVar4 + 0x28) = uVar12;
          lVar3 = *(long *)(param_5 + 0x18);
          if (lVar3 == 0) goto LAB_0456d050;
          if (*(uint *)(lVar3 + 0x18) <= uVar6) goto LAB_0456d04c;
          lVar4 = *(long *)(*(long *)(DAT_09182fc8 + 0xb8) + 8);
          if (lVar4 == 0) goto LAB_0456d050;
          if ((*(uint *)(lVar4 + 0x18) & 0xfffffffe) == 0) goto LAB_0456d04c;
          lVar3 = lVar3 + uVar6 * 0xc;
          fVar18 = 0.0;
          fVar13 = *(float *)(lVar3 + 0x28);
          *(undefined8 *)(lVar4 + 0x2c) = *(undefined8 *)(lVar3 + 0x20);
          *(float *)(lVar4 + 0x34) = fVar13;
          fVar8 = (float)(**(code **)(*param_4 + 0x188))
                                   (0,param_4,(*(undefined8 **)(DAT_09182fc8 + 0xb8))[1],param_5,
                                    **(undefined8 **)(DAT_09182fc8 + 0xb8),
                                    *(undefined8 *)(*param_4 + 400));
          if (1 < param_6 + 1) {
            iVar7 = 0;
            fVar18 = 0.0;
            fVar16 = fVar13;
            fVar17 = param_3;
            do {
              fVar14 = fVar13;
              fVar15 = param_3;
              if (*(int *)(DAT_09182fc8 + 0xe4) == 0) {
                FUN_03f5c424();
                fVar14 = fVar13;
                fVar15 = param_3;
              }
              fVar9 = (float)(**(code **)(*param_4 + 0x188))
                                       ((1.0 / (float)param_6) * (float)(iVar7 + 1),param_4,
                                        (*(undefined8 **)(DAT_09182fc8 + 0xb8))[1],param_5,
                                        **(undefined8 **)(DAT_09182fc8 + 0xb8),
                                        *(undefined8 *)(*param_4 + 400));
              if (DAT_09517ea7 == '\0') {
                FUN_03f5c2a4(&DAT_09187e80);
                DAT_09517ea7 = '\x01';
              }
              if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              iVar7 = iVar7 + 1;
              param_3 = fVar15 - fVar17;
              fVar13 = param_3 * param_3;
              fVar18 = fVar18 + SQRT(fVar13 + (fVar9 - fVar8) * (fVar9 - fVar8) +
                                              (fVar14 - fVar16) * (fVar14 - fVar16));
              fVar8 = fVar9;
              fVar16 = fVar14;
              fVar17 = fVar15;
            } while (param_6 != iVar7);
          }
          if (*(uint *)(lVar1 + 0x18) <= uVar6) goto LAB_0456d04c;
          lVar3 = uVar6 * 4;
          uVar6 = uVar6 + 1;
          *(float *)(lVar1 + lVar3 + 0x20) = fVar18;
        } while (uVar6 != (uVar5 & 0xffffffff));
      }
      *(long *)(param_5 + 0x10) = lVar1;
      thunk_FUN_03f5d7b8((long *)(param_5 + 0x10),lVar1);
      return;
    }
  }
LAB_0456d050:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

