// rea decompile_all
// name: CookOrder.Cooking.Implement.CookingGameplayPresentation$$InitializeShelves
// address: 0x44afe48
// body: available
// range: 0x44afe48-0x44b0553 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x44b04ec to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44b0550 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CookOrder_Cooking_Implement_CookingGameplayPresentation__InitializeShelves(long param_1)

{
  ulong uVar1;
  long *plVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  float fVar12;
  float fVar13;
  
  if ((DAT_09518225 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c6588);
    FUN_03f5c2a4(&DAT_091c9518);
    FUN_03f5c2a4(&DAT_091c95b8);
    FUN_03f5c2a4(&DAT_091c9ef8);
    FUN_03f5c2a4(&DAT_091c9f28);
    FUN_03f5c2a4(&DAT_091ca780);
    FUN_03f5c2a4(&DAT_091caf08);
    FUN_03f5c2a4(&DAT_09179158);
    FUN_03f5c2a4(&DAT_09179168);
    FUN_03f5c2a4(&DAT_09179280);
    FUN_03f5c2a4(&DAT_091a82b0);
    FUN_03f5c2a4(&DAT_091a82b8);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091e6ee8);
    FUN_03f5c2a4(&DAT_091e6ef0);
    FUN_03f5c2a4(&DAT_091e6ef8);
    FUN_03f5c2a4(&DAT_091e6f00);
    FUN_03f5c2a4(&DAT_091e6f08);
    FUN_03f5c2a4(&DAT_091e6f10);
    FUN_03f5c2a4(&DAT_091e6f18);
    FUN_03f5c2a4(&DAT_0918f030);
    DAT_09518225 = 1;
  }
  uVar5 = *(undefined8 *)(param_1 + 0x138);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = UnityEngine_Object__op_Implicit(uVar5,0);
  if ((((uVar1 & 1) != 0) && (lVar6 = *(long *)(param_1 + 0x1a8), lVar6 != 0)) &&
     (*(long *)(lVar6 + 0x18) != 0)) {
    if (*(int *)(DAT_0918f030 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    puVar3 = *(undefined8 **)(DAT_0918f030 + 0xb8);
    lVar8 = puVar3[0x12];
    if (lVar8 == 0) {
      if (*(int *)(DAT_0918f030 + 0xe4) == 0) {
        FUN_03f5c424();
        puVar3 = *(undefined8 **)(DAT_0918f030 + 0xb8);
      }
      uVar5 = *puVar3;
      lVar8 = thunk_FUN_03f9944c(DAT_09179158);
      FUN_05322d94(lVar8,uVar5,DAT_091e6ee8,0);
      plVar2 = (long *)(*(long *)(DAT_0918f030 + 0xb8) + 0x90);
      *plVar2 = lVar8;
      thunk_FUN_03f5d7b8(plVar2,lVar8);
    }
    uVar1 = FUN_04ab6f28(lVar6,lVar8,DAT_091c9518);
    if ((uVar1 & 1) == 0) {
      uVar7 = *(undefined8 *)(param_1 + 0x1a8);
      uVar5 = thunk_FUN_03f9944c(DAT_09179168);
      FUN_05324ff8(uVar5,param_1,DAT_091c6588,0);
      uVar5 = FUN_04af8a20(uVar7,uVar5,DAT_091ca780);
      uVar5 = FUN_04b04c8c(uVar5,DAT_091caf08);
      *(undefined8 *)(param_1 + 0x108) = uVar5;
      thunk_FUN_03f5d7b8(param_1 + 0x108,uVar5);
      uVar5 = *(undefined8 *)(param_1 + 0x1a8);
      if (*(int *)(DAT_0918f030 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      puVar3 = *(undefined8 **)(DAT_0918f030 + 0xb8);
      lVar6 = puVar3[0x13];
      if (lVar6 == 0) {
        if (*(int *)(DAT_0918f030 + 0xe4) == 0) {
          FUN_03f5c424();
          puVar3 = *(undefined8 **)(DAT_0918f030 + 0xb8);
        }
        uVar7 = *puVar3;
        lVar6 = thunk_FUN_03f9944c(DAT_09179168);
        FUN_05324ff8(lVar6,uVar7,DAT_091e6ef0,0);
        plVar2 = (long *)(*(long *)(DAT_0918f030 + 0xb8) + 0x98);
        *plVar2 = lVar6;
        thunk_FUN_03f5d7b8(plVar2,lVar6);
      }
      uVar5 = FUN_04af8a20(uVar5,lVar6,DAT_091ca780);
      uVar5 = FUN_04b04c8c(uVar5,DAT_091caf08);
      *(undefined8 *)(param_1 + 0x110) = uVar5;
      thunk_FUN_03f5d7b8(param_1 + 0x110,uVar5);
      uVar5 = *(undefined8 *)(param_1 + 0x108);
      if (*(int *)(DAT_0918f030 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      puVar3 = *(undefined8 **)(DAT_0918f030 + 0xb8);
      lVar6 = puVar3[0x14];
      if (lVar6 == 0) {
        if (*(int *)(DAT_0918f030 + 0xe4) == 0) {
          FUN_03f5c424();
          puVar3 = *(undefined8 **)(DAT_0918f030 + 0xb8);
        }
        uVar7 = *puVar3;
        lVar6 = thunk_FUN_03f9944c(DAT_09179280);
        FUN_05329dcc(lVar6,uVar7,DAT_091e6ef8,0);
        plVar2 = (long *)(*(long *)(DAT_0918f030 + 0xb8) + 0xa0);
        *plVar2 = lVar6;
        thunk_FUN_03f5d7b8(plVar2,lVar6);
      }
      uVar9 = FUN_04ab7c98(uVar5,lVar6,DAT_091c95b8);
      uVar5 = *(undefined8 *)(param_1 + 0x108);
      if (*(int *)(DAT_0918f030 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      puVar3 = *(undefined8 **)(DAT_0918f030 + 0xb8);
      lVar6 = puVar3[0x15];
      if (lVar6 == 0) {
        if (*(int *)(DAT_0918f030 + 0xe4) == 0) {
          FUN_03f5c424();
          puVar3 = *(undefined8 **)(DAT_0918f030 + 0xb8);
        }
        uVar7 = *puVar3;
        lVar6 = thunk_FUN_03f9944c(DAT_09179280);
        FUN_05329dcc(lVar6,uVar7,DAT_091e6f00,0);
        plVar2 = (long *)(*(long *)(DAT_0918f030 + 0xb8) + 0xa8);
        *plVar2 = lVar6;
        thunk_FUN_03f5d7b8(plVar2,lVar6);
      }
      uVar10 = FUN_04ab7c98(uVar5,lVar6,DAT_091c95b8);
      uVar5 = *(undefined8 *)(param_1 + 0x108);
      if (*(int *)(DAT_0918f030 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      puVar3 = *(undefined8 **)(DAT_0918f030 + 0xb8);
      lVar6 = puVar3[0x16];
      if (lVar6 == 0) {
        if (*(int *)(DAT_0918f030 + 0xe4) == 0) {
          FUN_03f5c424();
          puVar3 = *(undefined8 **)(DAT_0918f030 + 0xb8);
        }
        uVar7 = *puVar3;
        lVar6 = thunk_FUN_03f9944c(DAT_09179280);
        FUN_05329dcc(lVar6,uVar7,DAT_091e6f08,0);
        plVar2 = (long *)(*(long *)(DAT_0918f030 + 0xb8) + 0xb0);
        *plVar2 = lVar6;
        thunk_FUN_03f5d7b8(plVar2,lVar6);
      }
      uVar11 = FUN_04ab7c98(uVar5,lVar6,DAT_091c95b8);
      *(undefined4 *)(param_1 + 0x118) = uVar9;
      *(undefined4 *)(param_1 + 0x11c) = uVar10;
      *(undefined4 *)(param_1 + 0x120) = uVar11;
      if (*(long *)(param_1 + 0x1a8) != 0) {
        if (*(int *)(*(long *)(param_1 + 0x1a8) + 0x18) < 2) {
          fVar12 = *(float *)(param_1 + 0x124);
        }
        else {
          uVar5 = *(undefined8 *)(param_1 + 0x108);
          if (*(int *)(DAT_0918f030 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          puVar3 = *(undefined8 **)(DAT_0918f030 + 0xb8);
          lVar6 = puVar3[0x17];
          if (lVar6 == 0) {
            if (*(int *)(DAT_0918f030 + 0xe4) == 0) {
              FUN_03f5c424();
              puVar3 = *(undefined8 **)(DAT_0918f030 + 0xb8);
            }
            uVar7 = *puVar3;
            lVar6 = thunk_FUN_03f9944c(DAT_09179280);
            FUN_05329dcc(lVar6,uVar7,DAT_091e6f10,0);
            plVar2 = (long *)(*(long *)(DAT_0918f030 + 0xb8) + 0xb8);
            *plVar2 = lVar6;
            thunk_FUN_03f5d7b8(plVar2,lVar6);
          }
          fVar12 = (float)FUN_04ae9f74(uVar5,lVar6,DAT_091c9ef8);
          uVar5 = *(undefined8 *)(param_1 + 0x108);
          if (*(int *)(DAT_0918f030 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          puVar3 = *(undefined8 **)(DAT_0918f030 + 0xb8);
          lVar6 = puVar3[0x18];
          if (lVar6 == 0) {
            if (*(int *)(DAT_0918f030 + 0xe4) == 0) {
              FUN_03f5c424();
              puVar3 = *(undefined8 **)(DAT_0918f030 + 0xb8);
            }
            uVar7 = *puVar3;
            lVar6 = thunk_FUN_03f9944c(DAT_09179280);
            FUN_05329dcc(lVar6,uVar7,DAT_091e6f18,0);
            plVar2 = (long *)(*(long *)(DAT_0918f030 + 0xb8) + 0xc0);
            *plVar2 = lVar6;
            thunk_FUN_03f5d7b8(plVar2,lVar6);
          }
          fVar13 = (float)FUN_04aea174(uVar5,lVar6,DAT_091c9f28);
          if (*(long *)(param_1 + 0x1a8) == 0) goto LAB_044b04ec;
          fVar12 = (fVar12 - fVar13) / (float)(*(int *)(*(long *)(param_1 + 0x1a8) + 0x18) + -1);
          *(float *)(param_1 + 0x124) = fVar12;
        }
        if (fVar12 <= 0.001) {
          *(undefined4 *)(param_1 + 0x124) = 0x3f8ccccd;
        }
        if (*(long *)(param_1 + 0x100) != 0) {
          FUN_053d74ac(*(long *)(param_1 + 0x100),DAT_091a82b8);
          lVar6 = *(long *)(param_1 + 0x1a8);
          if (lVar6 != 0) {
            iVar4 = 0;
            do {
              if (*(int *)(lVar6 + 0x18) <= iVar4) {
                return;
              }
              if (*(long *)(param_1 + 0x100) == 0) break;
              FUN_053d8048(*(long *)(param_1 + 0x100),iVar4,DAT_091a82b0);
              lVar6 = *(long *)(param_1 + 0x1a8);
              iVar4 = iVar4 + 1;
            } while (lVar6 != 0);
          }
        }
      }
LAB_044b04ec:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
  }
  thunk_FUN_03fc39d4(&DAT_091870e0);
  uVar5 = thunk_FUN_03f9944c();
  uVar7 = thunk_FUN_03fc39d4(&DAT_091fb040);
  System_InvalidOperationException___ctor(uVar5,uVar7,0);
  uVar7 = thunk_FUN_03fc39d4(&DAT_091c65e8);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar5,uVar7);
}

