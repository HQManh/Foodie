// rea decompile_all
// name: System.Decimal.DecCalc$$VarDecMod
// address: 0x7616adc
// body: available
// range: 0x7616adc-0x7616e77 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7616e38 to 0x761927c System.Decimal.DecCalc$$VarDecModFull (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x7616e3c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7616e40 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7616e74 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Decimal_DecCalc__VarDecMod(uint *param_1,uint *param_2)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined4 local_70;
  undefined8 uStack_6c;
  undefined4 uStack_64;
  
  if ((DAT_095220c6 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0918ff90);
    DAT_095220c6 = 1;
  }
  local_70 = 0;
  uStack_6c._0_4_ = 0;
  uStack_6c._4_4_ = 0;
  uStack_64 = 0;
  if ((param_2[3] == 0 && param_2[2] == 0) && param_2[1] == 0) {
    thunk_FUN_03fc39d4(&DAT_09183c10);
    uVar5 = thunk_FUN_03f9944c();
    System_DivideByZeroException___ctor(uVar5,0);
    uVar6 = thunk_FUN_03fc39d4(&DAT_091e8ca0);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar5,uVar6);
  }
  if ((param_1[3] != 0 || param_1[2] != 0) || param_1[1] != 0) {
    *param_2 = *param_1 & 0x80000000 | *param_2 & 0x7fffffff;
    if (*(int *)(DAT_0918ff90 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar4 = System_Decimal_DecCalc__VarDecCmpSub(param_1,param_2);
    if (uVar4 == 0) {
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[1] = 0;
      if (*param_1 < *param_2) {
        *param_1 = *param_2;
      }
    }
    else if (-1 < (int)(*param_1 ^ uVar4)) {
      uVar4 = (int)((*param_1 - *param_2) * 0x100) >> 0x18;
      uVar12 = (ulong)uVar4;
      if (0 < (int)uVar4) {
        do {
          if (uVar12 < 9) {
            if (*(int *)(DAT_0918ff90 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            lVar7 = **(long **)(DAT_0918ff90 + 0xb8);
            if (lVar7 == 0) {
LAB_07616e40:
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            if (*(uint *)(lVar7 + 0x18) <= uVar12) {
LAB_07616e3c:
                    /* WARNING: Subroutine does not return */
              FUN_03f5c558();
            }
            uVar4 = *(uint *)(lVar7 + uVar12 * 4 + 0x20);
          }
          else {
            uVar4 = 1000000000;
          }
          if (*(int *)(DAT_0918ff90 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar11 = uVar12 - 9;
          uVar10 = (ulong)param_2[2] * (ulong)uVar4;
          lVar7 = CONCAT44(param_2[1],param_2[3]) * (ulong)uVar4 + (uVar10 >> 0x20);
          param_2[2] = (uint)uVar10;
          param_2[3] = (uint)lVar7;
          param_2[1] = (uint)((ulong)lVar7 >> 0x20);
          bVar1 = 8 < (long)uVar12;
          uVar12 = uVar11;
        } while (uVar11 != 0 && bVar1);
        uVar12 = 0;
      }
      do {
        if ((int)uVar12 < 0) {
          *param_1 = *param_2;
          if (*(int *)(DAT_0918ff90 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar11 = *(ulong *)(param_1 + 2);
          local_70 = (undefined4)uVar11;
          uStack_6c._0_4_ = (undefined4)(uVar11 >> 0x20);
          lVar7 = CONCAT44(param_1[1],(undefined4)uStack_6c);
          while( true ) {
            uStack_6c = lVar7;
            if (*(int *)(DAT_0918ff90 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar4 = System_Decimal_DecCalc__SearchScale(&local_70,(int)uVar12 + 0x1c);
            lVar8 = CONCAT44((int)((ulong)lVar7 >> 0x20),(undefined4)uStack_6c);
            if (uVar4 == 0) break;
            if ((int)uVar4 < 9) {
              if (*(int *)(DAT_0918ff90 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              lVar8 = **(long **)(DAT_0918ff90 + 0xb8);
              if (lVar8 == 0) goto LAB_07616e40;
              if (*(uint *)(lVar8 + 0x18) <= uVar4) goto LAB_07616e3c;
              uVar2 = *(uint *)(lVar8 + (long)(int)uVar4 * 4 + 0x20);
            }
            else {
              uVar2 = 1000000000;
            }
            uVar10 = (ulong)uVar2;
            if (*(int *)(DAT_0918ff90 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar4 = uVar4 + (int)uVar12;
            uVar12 = (ulong)uVar4;
            uVar11 = (uVar11 & 0xffffffff) * uVar10;
            lVar7 = lVar7 * uVar10 + (uVar11 >> 0x20);
            local_70 = (undefined4)uVar11;
            uStack_6c._4_4_ = (undefined4)((ulong)lVar7 >> 0x20);
            lVar8 = lVar7;
            if ((-1 < (int)uVar4) || (uVar10 != 1000000000)) break;
          }
          uStack_6c._0_4_ = (undefined4)lVar8;
          uVar5 = CONCAT44((undefined4)uStack_6c,local_70);
          if (*(int *)(DAT_0918ff90 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          *(undefined8 *)(param_1 + 2) = uVar5;
          param_1[1] = (uint)((ulong)lVar8 >> 0x20);
        }
        else {
          uVar12 = 0;
        }
        if (*(int *)(DAT_0918ff90 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        if (param_1[1] == 0) {
          if (*(int *)(DAT_0918ff90 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar11 = *(ulong *)(param_2 + 2);
          uVar12 = 0;
          if (uVar11 != 0) {
            uVar12 = *(ulong *)(param_1 + 2) / uVar11;
          }
          *(ulong *)(param_1 + 2) = *(ulong *)(param_1 + 2) - uVar12 * uVar11;
          return;
        }
        if (*(int *)(DAT_0918ff90 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        if (param_2[3] != 0 || param_2[1] != 0) {
          if (*(int *)(DAT_0918ff90 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          System_Decimal_DecCalc__VarDecModFull(param_1,param_2,uVar12);
          return;
        }
        if (*(int *)(DAT_0918ff90 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar4 = param_1[1];
        uVar2 = param_2[2];
        uVar11 = (ulong)uVar2;
        param_1[1] = 0;
        iVar3 = 0;
        if (uVar11 != 0) {
          iVar3 = (int)(CONCAT44(uVar4,param_1[3]) / uVar11);
        }
        uVar9 = CONCAT44(param_1[3] - iVar3 * uVar2,param_1[2]);
        uVar10 = 0;
        if (uVar11 != 0) {
          uVar10 = uVar9 / uVar11;
        }
        *(ulong *)(param_1 + 2) = uVar9 - uVar10 * uVar11;
      } while ((int)uVar12 < 0);
    }
  }
  return;
}

