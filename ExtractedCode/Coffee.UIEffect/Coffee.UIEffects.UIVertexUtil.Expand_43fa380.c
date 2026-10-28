// rea decompile_all
// name: Coffee.UIEffects.UIVertexUtil$$Expand
// address: 0x43fa380
// body: available
// range: 0x43fa380-0x43fa943 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x43fa940 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Coffee_UIEffects_UIVertexUtil__Expand
               (float param_1,float param_2,float param_3,float param_4,float param_5,float param_6,
               float param_7,float param_8,long param_9,int param_10,int param_11)

{
  undefined8 uVar1;
  undefined8 uVar2;
  float *pfVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float local_130;
  float fStack_12c;
  float local_128;
  float fStack_124;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_10c;
  undefined8 local_e0;
  
  if ((DAT_09517e2c & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b1750);
    FUN_03f5c2a4(&DAT_091b1760);
    FUN_03f5c2a4(&DAT_09189c30);
    DAT_09517e2c = 1;
  }
  local_120 = 0;
  local_118 = 0;
  local_130 = 0.0;
  fStack_12c = 0.0;
  local_128 = 0.0;
  fStack_124 = 0.0;
  if (DAT_09516627 == '\0') {
    FUN_03f5c2a4(&DAT_0918cc38);
    DAT_09516627 = '\x01';
  }
  pfVar3 = *(float **)(DAT_0918cc38 + 0xb8);
  if (9.9999994e-11 <=
      (param_4 - pfVar3[3]) * (param_4 - pfVar3[3]) +
      (param_3 - pfVar3[2]) * (param_3 - pfVar3[2]) +
      (param_1 - *pfVar3) * (param_1 - *pfVar3) + (param_2 - pfVar3[1]) * (param_2 - pfVar3[1]) &&
      0 < param_11) {
    if (param_9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    param_8 = param_8 + param_6;
    param_7 = param_7 + param_5;
    iVar6 = 0;
    iVar4 = param_10;
    do {
      iVar5 = iVar6 + param_10;
      FUN_05894708(&local_10c,param_9,iVar5,DAT_091b1750);
      fVar7 = (float)local_10c;
      fVar8 = local_10c._4_4_;
      if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if (DAT_09517e33 == '\0') {
        FUN_03f5c2a4(&DAT_09189c30);
        DAT_09517e33 = '\x01';
      }
      if (param_5 <= fVar7) {
        if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        if ((param_7 <= fVar7) || (fVar8 < param_6)) goto LAB_043fa56c;
        if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        if (param_8 <= fVar8) goto LAB_043fa56c;
        FUN_05894708(&local_10c,param_9,iVar5 + 1,DAT_091b1750);
        fVar7 = (float)local_10c;
        fVar8 = local_10c._4_4_;
        if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        if (DAT_09517e33 == '\0') {
          FUN_03f5c2a4(&DAT_09189c30);
          DAT_09517e33 = '\x01';
        }
        if (fVar7 < param_5) goto LAB_043fa56c;
        if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        if ((param_7 <= fVar7) || (fVar8 < param_6)) goto LAB_043fa56c;
        if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        if (param_8 <= fVar8) goto LAB_043fa56c;
        FUN_05894708(&local_10c,param_9,iVar5 + 2,DAT_091b1750);
        fVar7 = (float)local_10c;
        fVar8 = local_10c._4_4_;
        if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        if (DAT_09517e33 == '\0') {
          FUN_03f5c2a4(&DAT_09189c30);
          DAT_09517e33 = '\x01';
        }
        if (fVar7 < param_5) goto LAB_043fa56c;
        if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        if ((param_7 <= fVar7) || (fVar8 < param_6)) goto LAB_043fa56c;
        if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        if (param_8 <= fVar8) goto LAB_043fa56c;
      }
      else {
LAB_043fa56c:
        Coffee_UIEffects_UIVertexUtil__GetBounds(param_9,iVar5,3,&local_120,&local_130);
        if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        iVar5 = 0;
        fVar9 = fStack_12c + fStack_124 * 0.5;
        fVar10 = *(float *)((ulong)&local_120 | 4) + local_118._4_4_ * 0.5;
        fVar12 = param_3 / ABS((float)local_118) + 1.0;
        fVar11 = param_1 / ABS((float)local_118) + 1.0;
        fVar18 = param_4 / ABS(local_118._4_4_) + 1.0;
        fVar7 = local_130 + local_128 * 0.5;
        fVar8 = (float)local_120 + (float)local_118 * 0.5;
        fVar15 = param_2 / ABS(local_118._4_4_) + 1.0;
        do {
          FUN_05894708(&local_10c,param_9,iVar4 + iVar5,DAT_091b1750);
          uVar2 = local_e0;
          uVar1 = local_10c;
          fVar17 = (float)((ulong)local_10c >> 0x20);
          fVar16 = (float)((ulong)local_e0 >> 0x20);
          if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          fVar14 = (float)uVar1;
          fVar13 = (float)uVar2;
          if (param_5 <= fVar14) {
            if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            if (param_7 < fVar14) {
              fVar13 = (fVar7 - fVar7 * fVar12) + fVar13 * fVar12;
              fVar14 = (fVar8 - fVar8 * fVar12) + fVar14 * fVar12;
            }
          }
          else {
            fVar13 = (fVar7 - fVar7 * fVar11) + fVar13 * fVar11;
            fVar14 = (fVar8 - fVar8 * fVar11) + fVar14 * fVar11;
          }
          if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          if (param_6 <= fVar17) {
            if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            if (param_8 < fVar17) {
              fVar16 = (fVar9 - fVar9 * fVar18) + fVar16 * fVar18;
              fVar17 = (fVar10 - fVar10 * fVar18) + fVar17 * fVar18;
            }
          }
          else {
            fVar16 = (fVar9 - fVar9 * fVar15) + fVar16 * fVar15;
            fVar17 = (fVar10 - fVar10 * fVar15) + fVar17 * fVar15;
          }
          local_10c = CONCAT44(fVar17,fVar14);
          local_e0 = CONCAT44(fVar16,fVar13);
          FUN_0589476c(param_9,iVar4 + iVar5,&local_10c,DAT_091b1760);
          iVar5 = iVar5 + 1;
        } while (iVar5 != 3);
      }
      iVar6 = iVar6 + 3;
      iVar4 = iVar4 + 3;
    } while (iVar6 < param_11);
  }
  return;
}

