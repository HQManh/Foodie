// rea decompile_all
// name: DG.Tweening.DOTween$$Punch
// address: 0x4537fe0
// body: available
// range: 0x4537fe0-0x45383cf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x45383c4 to 0x4b265cc FUN_04b265cc (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x45383c8 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x45383cc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void DG_Tweening_DOTween__Punch
               (float param_1,float param_2,float param_3,float param_4,float param_5,
               undefined8 param_6,undefined8 param_7,int param_8)

{
  ulong uVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  float *pfVar9;
  ulong uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float local_a4;
  
  if ((DAT_095186a0 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183190);
    FUN_03f5c2a4(&DAT_091cc040);
    FUN_03f5c2a4(&DAT_091cc050);
    FUN_03f5c2a4(&DAT_09180528);
    FUN_03f5c2a4(&DAT_091807f8);
    DAT_095186a0 = 1;
  }
  local_a4 = 1.0;
  if ((param_5 <= 1.0) && (local_a4 = param_5, param_5 < 0.0)) {
    local_a4 = 0.0;
  }
  if (DAT_0951690d == '\0') {
    FUN_03f5c2a4(&DAT_09187e80);
    DAT_0951690d = '\x01';
  }
  if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar6 = (uint)((float)param_8 * param_4);
  if ((int)uVar6 < 3) {
    uVar6 = 2;
  }
  uVar3 = 2;
  if ((float)param_8 * param_4 != INFINITY) {
    uVar3 = uVar6;
  }
  uVar8 = (ulong)uVar3;
  lVar4 = FUN_03f5c394(DAT_09180528,uVar8);
  if (lVar4 != 0) {
    uVar6 = *(uint *)(lVar4 + 0x18);
    fVar12 = 0.0;
    fVar17 = param_3 * param_3 + param_1 * param_1 + param_2 * param_2;
    fVar19 = SQRT(fVar17);
    fVar20 = fVar19 / (float)(int)uVar3;
    uVar10 = 0;
    do {
      if (uVar6 == uVar10) goto LAB_045383c8;
      uVar1 = uVar10 + 1;
      fVar14 = ((float)(int)uVar1 / (float)(int)uVar3) * param_4;
      fVar12 = fVar12 + fVar14;
      *(float *)(lVar4 + uVar10 * 4 + 0x20) = fVar14;
      uVar10 = uVar1;
    } while (uVar8 != uVar1);
    lVar7 = 0;
    do {
      if ((ulong)uVar6 * 4 - lVar7 == 0) goto LAB_045383c8;
      lVar2 = lVar4 + lVar7;
      lVar7 = lVar7 + 4;
      *(float *)(lVar2 + 0x20) = (param_4 / fVar12) * *(float *)(lVar2 + 0x20);
    } while (uVar8 * 4 - lVar7 != 0);
    lVar7 = FUN_03f5c394(DAT_091807f8,uVar3);
    fVar14 = param_1 / fVar19;
    uVar10 = 0;
    pfVar9 = (float *)(lVar7 + 0x28);
    fVar12 = param_2 / fVar19;
    fVar16 = param_3 / fVar19;
    do {
      if (uVar10 < uVar3 - 1) {
        if (uVar10 == 0) {
          if (lVar7 == 0) break;
          if (*(int *)(lVar7 + 0x18) == 0) goto LAB_045383c8;
          *(float *)(lVar7 + 0x20) = param_1;
          *(float *)(lVar7 + 0x24) = param_2;
          *(float *)(lVar7 + 0x28) = param_3;
        }
        else {
          if ((uVar10 & 1) == 0) {
            if (DAT_0951877f == '\0') {
              FUN_03f5c2a4(&DAT_09187e80);
              DAT_0951877f = '\x01';
            }
            fVar15 = param_3;
            fVar13 = param_2;
            fVar11 = param_1;
            if (fVar19 * fVar19 < fVar17) {
              if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              fVar15 = fVar16 * fVar19;
              fVar11 = fVar14 * fVar19;
              fVar13 = fVar12 * fVar19;
            }
            if (lVar7 == 0) break;
            if (*(uint *)(lVar7 + 0x18) <= uVar10) goto LAB_045383c8;
          }
          else {
            if (DAT_0951877f == '\0') {
              FUN_03f5c2a4(&DAT_09187e80);
              DAT_0951877f = '\x01';
            }
            fVar18 = local_a4 * fVar19;
            fVar15 = param_3;
            fVar13 = param_2;
            fVar11 = param_1;
            if (fVar18 * fVar18 < fVar17) {
              if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              fVar15 = fVar16 * fVar18;
              fVar11 = fVar14 * fVar18;
              fVar13 = fVar12 * fVar18;
            }
            if (lVar7 == 0) break;
            if (*(uint *)(lVar7 + 0x18) <= uVar10) {
LAB_045383c8:
                    /* WARNING: Subroutine does not return */
              FUN_03f5c558();
            }
            fVar11 = -fVar11;
            fVar13 = -fVar13;
            fVar15 = -fVar15;
          }
          pfVar9[-2] = fVar11;
          pfVar9[-1] = fVar13;
          *pfVar9 = fVar15;
        }
        fVar19 = fVar19 - fVar20;
      }
      else {
        if (DAT_09515ce6 == '\0') {
          FUN_03f5c2a4(&DAT_0918cbd0);
          DAT_09515ce6 = '\x01';
        }
        if (lVar7 == 0) break;
        if (*(uint *)(lVar7 + 0x18) <= uVar10) goto LAB_045383c8;
        fVar15 = *(float *)(*(undefined8 **)(DAT_0918cbd0 + 0xb8) + 1);
        *(undefined8 *)(pfVar9 + -2) = **(undefined8 **)(DAT_0918cbd0 + 0xb8);
        *pfVar9 = fVar15;
      }
      uVar10 = uVar10 + 1;
      pfVar9 = pfVar9 + 3;
      if (uVar8 == uVar10) {
        if (*(int *)(DAT_09183190 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar5 = DG_Tweening_DOTween__ToArray(param_6,param_7,lVar7,lVar4);
        uVar5 = FUN_04b265a4(uVar5,DAT_091cc040);
        FUN_04b265cc(uVar5,3,DAT_091cc050);
        return;
      }
    } while( true );
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

