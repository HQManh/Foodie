// rea decompile_all
// name: DG.Tweening.DOTweenModuleUI$$DOGradientColor
// address: 0x4553348
// body: available
// range: 0x4553348-0x4553517 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4553510 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4553514 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 DG_Tweening_DOTweenModuleUI__DOGradientColor(float param_1,long *param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  float *pfVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  if ((DAT_095187b1 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183190);
    FUN_03f5c2a4(&DAT_091dbe70);
    FUN_03f5c2a4(&DAT_091dbfd8);
    DAT_095187b1 = 1;
  }
  if (*(int *)(DAT_09183190 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = DG_Tweening_DOTween__Sequence(0);
  if ((param_3 != 0) && (lVar2 = UnityEngine_Gradient__get_colorKeys(param_3,0), lVar2 != 0)) {
    uVar5 = *(ulong *)(lVar2 + 0x18);
    iVar4 = (int)uVar5;
    if (0 < iVar4) {
      uVar6 = 0;
      pfVar7 = (float *)(lVar2 + 0x30);
      do {
        if (*(uint *)(lVar2 + 0x18) <= uVar6) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        fVar12 = pfVar7[-4];
        fVar11 = pfVar7[-3];
        fVar8 = *pfVar7;
        fVar10 = pfVar7[-2];
        fVar9 = pfVar7[-1];
        if ((uVar6 != 0) || (0.0 < fVar8)) {
          if (iVar4 - 1 == uVar6) {
            fVar8 = (float)DG_Tweening_TweenExtensions__Duration(uVar1,0,0);
            fVar8 = param_1 - fVar8;
          }
          else {
            if (uVar6 != 0) {
              fVar8 = fVar8 - pfVar7[-5];
            }
            fVar8 = fVar8 * param_1;
          }
          uVar3 = DG_Tweening_DOTweenModuleUI__DOColor(fVar12,fVar11,fVar10,fVar9,fVar8,param_2);
          uVar3 = FUN_04d95e8c(uVar3,1,DAT_091dbe70);
          DG_Tweening_TweenSettingsExtensions__Append(uVar1,uVar3,0);
        }
        else {
          if (param_2 == (long *)0x0) goto LAB_04553514;
          (**(code **)(*param_2 + 0x2a8))
                    (fVar12,fVar11,fVar10,fVar9,param_2,*(undefined8 *)(*param_2 + 0x2b0));
        }
        uVar6 = uVar6 + 1;
        pfVar7 = pfVar7 + 5;
      } while ((uVar5 & 0xffffffff) != uVar6);
    }
    FUN_04d9642c(uVar1,param_2,DAT_091dbfd8);
    return uVar1;
  }
LAB_04553514:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

