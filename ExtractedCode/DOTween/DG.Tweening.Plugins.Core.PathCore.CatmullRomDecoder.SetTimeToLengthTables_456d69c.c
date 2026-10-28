// rea decompile_all
// name: DG.Tweening.Plugins.Core.PathCore.CatmullRomDecoder$$SetTimeToLengthTables
// address: 0x456d69c
// body: available
// range: 0x456d69c-0x456d8a7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x456d89c to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x456d8a0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x456d8a4 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void DG_Tweening_Plugins_Core_PathCore_CatmullRomDecoder__SetTimeToLengthTables
               (undefined1 param_1 [16],float param_2,float param_3,long *param_4,long param_5,
               int param_6)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  if ((DAT_0951887f & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180528);
    DAT_0951887f = 1;
  }
  lVar2 = FUN_03f5c394(DAT_09180528,param_6);
  lVar3 = FUN_03f5c394(DAT_09180528,param_6);
  if (param_5 != 0) {
    fVar11 = 0.0;
    fVar5 = (float)(**(code **)(*param_4 + 0x188))
                             (0,param_4,*(undefined8 *)(param_5 + 0x18),param_5,
                              *(undefined8 *)(param_5 + 0x30),*(undefined8 *)(*param_4 + 400));
    if (1 < (int)(param_6 + 1U)) {
      lVar4 = 8;
      fVar11 = 0.0;
      fVar9 = param_3;
      do {
        fVar8 = param_3;
        fVar10 = (1.0 / (float)param_6) * (float)((int)lVar4 + -7);
        fVar7 = 1.0 / (float)param_6;
        fVar6 = (float)(**(code **)(*param_4 + 0x188))
                                 (fVar10,param_4,*(undefined8 *)(param_5 + 0x18),param_5,
                                  *(undefined8 *)(param_5 + 0x30),*(undefined8 *)(*param_4 + 400));
        if (DAT_09517ea7 == '\0') {
          FUN_03f5c2a4(&DAT_09187e80);
          DAT_09517ea7 = '\x01';
        }
        if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        if (lVar2 == 0) goto LAB_0456d8a0;
        if ((ulong)*(uint *)(lVar2 + 0x18) <= lVar4 - 8U) {
LAB_0456d8a4:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        *(float *)(lVar2 + lVar4 * 4) = fVar10;
        if (lVar3 == 0) goto LAB_0456d8a0;
        if ((ulong)*(uint *)(lVar3 + 0x18) <= lVar4 - 8U) goto LAB_0456d8a4;
        uVar1 = lVar4 - 6;
        param_3 = (fVar8 - fVar9) * (fVar8 - fVar9);
        fVar11 = fVar11 + SQRT(param_3 + (fVar6 - fVar5) * (fVar6 - fVar5) +
                                         (fVar7 - param_2) * (fVar7 - param_2));
        *(float *)(lVar3 + lVar4 * 4) = fVar11;
        lVar4 = lVar4 + 1;
        fVar5 = fVar6;
        param_2 = fVar7;
        fVar9 = fVar8;
      } while (uVar1 != param_6 + 1U);
    }
    *(float *)(param_5 + 0x38) = fVar11;
    *(long *)(param_5 + 0x40) = lVar2;
    thunk_FUN_03f5d7b8((long *)(param_5 + 0x40),lVar2);
    *(long *)(param_5 + 0x48) = lVar3;
    thunk_FUN_03f5d7b8((long *)(param_5 + 0x48),lVar3);
    return;
  }
LAB_0456d8a0:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

