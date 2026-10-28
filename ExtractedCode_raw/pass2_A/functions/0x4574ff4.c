// rea decompile_all
// name: DG.Tweening.Core.TweenManager$$Update
// address: 0x4574ff4
// body: available
// range: 0x4574ff4-0x4575263 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4575260 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
DG_Tweening_Core_TweenManager__Update(float param_1,float param_2,long *param_3,uint param_4)

{
  uint uVar1;
  bool bVar2;
  undefined8 uVar3;
  ulong uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  if ((DAT_095188cb & 1) == 0) {
    FUN_03f5c2a4(&DAT_0918c158);
    DAT_095188cb = 1;
  }
  if (*(int *)(DAT_0918c158 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  if (0 < *(int *)(*(long *)(DAT_0918c158 + 0xb8) + 0x70)) {
    if (*(int *)(DAT_0918c158 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    DG_Tweening_Core_TweenManager__EvaluateTweenLink(param_3);
  }
  if (param_3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  if ((char)param_3[0x1d] == '\0') {
LAB_0457522c:
    if (*(int *)(DAT_0918c158 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    DG_Tweening_Core_TweenManager__MarkForKilling(param_3,param_4 & 1);
    uVar3 = 1;
  }
  else {
    if ((char)param_3[0x22] != '\0') {
      if (*(char *)((long)param_3 + 0x54) != '\0') {
        param_1 = param_2;
      }
      param_1 = *(float *)(param_3 + 5) * param_1;
      *(undefined1 *)(param_3 + 0x20) = 1;
      if ((1e-06 <= param_1) || (param_1 <= -1e-06)) {
        if ((char)param_3[0x23] == '\0') {
          param_1 = (float)(**(code **)(*param_3 + 0x198))
                                     (param_1 + *(float *)((long)param_3 + 0x114),param_3,
                                      *(undefined8 *)(*param_3 + 0x1a0));
          if (param_1 <= -1.0) goto LAB_0457522c;
          if (param_1 <= 0.0) goto LAB_045750c4;
          if ((*(char *)((long)param_3 + 0x102) != '\0') && (param_3[0xb] != 0)) {
            DG_Tweening_Tween__OnTweenCallback(param_3[0xb],param_3,0);
          }
        }
        if ((*(char *)((long)param_3 + 0x101) != '\0') ||
           (uVar4 = (**(code **)(*param_3 + 0x1a8))(param_3,*(undefined8 *)(*param_3 + 0x1b0)),
           (uVar4 & 1) != 0)) {
          fVar8 = *(float *)(param_3 + 0x14);
          uVar6 = *(uint *)((long)param_3 + 0x10c);
          if (fVar8 <= 0.0) {
            iVar5 = *(int *)((long)param_3 + 0xa4);
            fVar10 = 0.0;
            if (iVar5 == -1) {
              iVar5 = uVar6 + 1;
            }
          }
          else {
            fVar9 = *(float *)((long)param_3 + 0x104);
            if (*(char *)((long)param_3 + 0x2c) == '\0') {
              fVar10 = param_1 + fVar9;
              uVar7 = uVar6;
              if (fVar8 <= fVar10) {
                do {
                  if ((*(int *)((long)param_3 + 0xa4) != -1) &&
                     (uVar7 = uVar6, *(int *)((long)param_3 + 0xa4) <= (int)uVar6)) break;
                  fVar10 = fVar10 - fVar8;
                  uVar6 = uVar6 + 1;
                  uVar7 = uVar6;
                } while (fVar8 <= fVar10);
              }
            }
            else {
              param_1 = fVar9 - param_1;
              if ((param_1 < 0.0) && (-1 < (int)uVar6)) {
                do {
                  param_1 = fVar8 + param_1;
                  bVar2 = uVar6 != 0;
                  uVar6 = uVar6 - 1;
                  if (0.0 <= param_1) break;
                } while (bVar2);
              }
              uVar1 = 0;
              if (uVar6 == 0) {
                uVar1 = (uint)(fVar8 <= fVar9);
              }
              if ((int)uVar6 < 0) {
                uVar1 = 1;
              }
              fVar10 = 0.0;
              uVar7 = (uint)(fVar8 <= fVar9);
              if (uVar1 == 0) {
                fVar10 = param_1;
                uVar7 = uVar6;
              }
            }
            iVar5 = uVar7 - (fVar8 <= fVar9);
            if (*(int *)((long)param_3 + 0xa4) <= iVar5 && *(int *)((long)param_3 + 0xa4) != -1) {
              fVar10 = fVar8;
            }
          }
          uVar4 = DG_Tweening_Tween__DoGoto(fVar10,param_3,iVar5,0,0);
          if ((uVar4 & 1) == 0) {
            return 0;
          }
        }
        goto LAB_0457522c;
      }
    }
LAB_045750c4:
    uVar3 = 0;
  }
  return uVar3;
}

