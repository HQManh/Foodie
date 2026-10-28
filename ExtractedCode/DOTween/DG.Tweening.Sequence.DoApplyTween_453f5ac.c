// rea decompile_all
// name: DG.Tweening.Sequence$$DoApplyTween
// address: 0x453f5ac
// body: available
// range: 0x453f5ac-0x453f8fb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x453f75c to 0x453fa84 DG.Tweening.Sequence$$ApplyInternalCycle (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x453f8f8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong DG_Tweening_Sequence__DoApplyTween
                (float param_1,long param_2,uint param_3,uint param_4,byte param_5,int param_6)

{
  uint uVar1;
  int iVar2;
  char cVar3;
  ulong uVar4;
  undefined8 uVar5;
  bool bVar6;
  uint uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  if ((DAT_09518704 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09187e80);
    DAT_09518704 = 1;
  }
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  cVar3 = *(char *)(param_2 + 0x2d);
  fVar8 = *(float *)(param_2 + 0x104);
  if (*(int *)(param_2 + 0xb4) != 1) {
    fVar9 = *(float *)(param_2 + 0xa0);
    param_1 = (float)DG_Tweening_Core_Easing_EaseManager__Evaluate
                               (param_1,fVar9,*(undefined4 *)(param_2 + 0xc0),
                                *(undefined4 *)(param_2 + 0xc4),*(int *)(param_2 + 0xb4),
                                *(undefined8 *)(param_2 + 0xb8),0);
    param_1 = fVar9 * param_1;
    fVar9 = *(float *)(param_2 + 0xa0);
    fVar8 = (float)DG_Tweening_Core_Easing_EaseManager__Evaluate
                             (fVar8,fVar9,*(undefined4 *)(param_2 + 0xc0),
                              *(undefined4 *)(param_2 + 0xc4),*(undefined4 *)(param_2 + 0xb4),
                              *(undefined8 *)(param_2 + 0xb8),0);
    fVar8 = fVar9 * fVar8;
  }
  iVar2 = *(int *)(param_2 + 0xa4);
  param_5 = cVar3 != '\0' ^ param_5;
  if (((iVar2 == -1) == iVar2 < 2) && (*(int *)(param_2 + 0xa8) == 1)) {
    param_3 = param_3 & 1;
    if (*(float *)(param_2 + 0xa0) <= param_1) {
      param_3 = param_3 ^ 1;
    }
  }
  else {
    param_3 = 0;
  }
  bVar6 = ((param_3 != 0) != (*(char *)(param_2 + 0x2c) != '\0')) !=
          (*(char *)(param_2 + 0x2d) != '\0');
  if (0 < (int)param_4) {
    if (param_6 == 0) {
      iVar2 = *(int *)(param_2 + 0x10c);
      fVar11 = *(float *)(param_2 + 0x104);
      uVar7 = 0;
      fVar10 = 0.0;
      fVar9 = param_1;
      do {
        uVar1 = uVar7;
        if ((int)uVar7 <= (int)param_4) {
          uVar1 = param_4;
        }
        do {
          if (uVar1 == uVar7) {
            if (iVar2 == *(int *)(param_2 + 0x10c)) {
              fVar9 = *(float *)(param_2 + 0x104);
              if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              if (ABS(fVar11 - fVar9) <= 1.4013e-45) {
                if (param_4 == 1) {
                  if (*(char *)(param_2 + 0x111) != '\0') {
                    return 0;
                  }
                }
                else if (*(char *)(param_2 + 0x111) != '\0') goto LAB_0453f710;
                param_1 = 0.0;
                if ((param_5 & 1) != 0) {
                  param_1 = *(float *)(param_2 + 0xa0);
                }
                if ((0.0 < fVar10) && (*(int *)(param_2 + 0xa8) == 0)) {
                  DG_Tweening_Sequence__ApplyInternalCycle
                            (*(undefined4 *)(param_2 + 0xa0),0,param_2,1,0,0,0);
                }
                if ((param_5 & 1) == 0) goto LAB_0453f720;
                fVar9 = *(float *)(param_2 + 0xa0);
                goto LAB_0453f71c;
              }
            }
            return (ulong)(*(char *)(param_2 + 0xe8) == '\0');
          }
          if ((int)uVar7 < 1) {
            if (bVar6) {
              if (*(char *)(param_2 + 0x2c) == '\0') {
                fVar9 = *(float *)(param_2 + 0xa0) - fVar9;
              }
              goto LAB_0453f7c0;
            }
LAB_0453f7c8:
            fVar10 = *(float *)(param_2 + 0xa0);
            uVar5 = 0;
          }
          else {
            fVar9 = fVar10;
            if (!bVar6) goto LAB_0453f7c8;
LAB_0453f7c0:
            fVar10 = 0.0;
            uVar5 = 1;
          }
          uVar4 = DG_Tweening_Sequence__ApplyInternalCycle
                            (fVar9,fVar10,param_2,0,param_5 & 1,uVar5,1);
          if ((uVar4 & 1) != 0) {
            return 1;
          }
          uVar7 = uVar7 + 1;
        } while ((*(int *)(param_2 + 0xa4) != -1) && (*(int *)(param_2 + 0xa4) < 2));
        bVar6 = (bool)(bVar6 ^ *(int *)(param_2 + 0xa8) == 1);
      } while( true );
    }
    if ((((iVar2 == -1) || (1 < iVar2)) && ((param_4 & 1) != 0)) && (*(int *)(param_2 + 0xa8) == 1))
    {
      bVar6 = !bVar6;
      param_1 = *(float *)(param_2 + 0xa0) - param_1;
    }
  }
LAB_0453f710:
  if ((param_5 & 1) != 0) {
    fVar9 = *(float *)(param_2 + 0xa0);
    param_1 = fVar9 - param_1;
LAB_0453f71c:
    fVar8 = fVar9 - fVar8;
  }
LAB_0453f720:
  uVar4 = DG_Tweening_Sequence__ApplyInternalCycle
                    (param_1,fVar8,param_2,param_6,param_5 & 1,bVar6,0);
  return uVar4;
}

